#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

#include "config.h"
#include "util.h"

void fetch();
void decode();
void execute();
void memory();
void writeback();

int32_t pc;
int32_t _bus;

int8_t op, rs, rt, rd, shamt, funct;
int32_t imm;
int32_t jaddr;

//int pc_jmp, pc_src, jmp, jmp_beq, jmp_ble; // pc_src 0 1 2 3 : no reg jaddr imme : pc_jmp 0 1 2 3 no j jr beq bne
int pc_jmp, pc_src;
int reg_dst;
int reg_wb;

int32_t alu_a, alu_b;
enum {ADD, SUB, AND, OR, XOR, NOR, SLT, SLLV, SRLV} alu_op;
int32_t alu_out;
int alu_zero;

int mem_en;
int mem_wen;
int32_t mem_wdata;
int mem_to_reg;

uint8_t interactive;
uint8_t verbose;
uint8_t mem_view;
uint8_t reg_view;

char str_help[] =
"\nBasic simulator for simple non-pipelined MIPS-like computer.\n\
\nSIM [drive:][[path].text-bin-filename] [drive:][[path].data-bin-filename] [/I] [/M] [/R] [/V]\n\n\
  [drive:][path]      Specifies the driver and directory.\n\
  .text-bin-filename  Specifies the text bin file to read.\n\
  .data-bin-filename  Specifies the data bin file to read.\n\
  /I                  Interactive mode.\n\
  /M                  Enable memory view.\n\
  /R                  Enable register view.\n\
  /V                  Verbose mode.\n\n\
Examples:\n\
  SIM example1.bin\n\
  SIM example2.text.bin example2.data.bin /I /V\n\
";

int main(int argc, char **argv){
    int n;

    int i;
    char *argv_text = NULL;
    char *argv_data = NULL;

    //
    // check command line flags
    //

    if(argc == 1){
        fprintf(stderr, "SIM\n\nNo file specified.\n");
        return 1;
    }

    if (!strcmp (argv[1],"/?")){
        printf("%s", str_help);
        return 0;
    }

    if (argv[1][0] != '/')
        argv_text = argv[1];
    else
    {
        fprintf(stderr, "SIM\n\nNo file specified.\n");
        return 1;
    }

    if (argc >= 3){
        if (argv[2][0] != '/')
            argv_data = argv[2];
        for (i = argv[2][0] != '/' ? 3 : 2; i<argc ; i++)
        {
            if (argv[i][0] != '/')
                break;
            else if (!strcmp(argv[i], "/?"))
            {
                printf("%s", str_help);
                return 0;
            }
            else if (!strcmp(argv[i], "/I"))
            {
                printf ("interactive = true\n");
                interactive = 1;
            }
            else if (!strcmp(argv[i], "/M"))
            {
                printf ("mem_view = true\n");
                mem_view = 1;
            }
            else if (!strcmp(argv[i], "/R"))
            {
                printf ("reg_view = true\n");
                reg_view = 1;
            }
            else if (!strcmp(argv[i], "/V"))
            {
                printf ("verbose = true\n");
                verbose = 1;
            }
            else
                fprintf(stderr, "SIM: Unknown option '%s'.\n", argv[i]);
	}
    }
    // Read in memory files, if set
    if (argv_text != NULL){
        fprintf(stderr, "Loading RAM .text(0x0000) from '%s'... ", argv_text);
        n = loadmem(argv[1], 0x0);
        if (n >= 0)
            fprintf(stderr, "%d bytes.\n", n);
        else
            fprintf(stderr, "ERROR.\n");

        if (argv_data != NULL){
            fprintf(stderr, "Loading RAM .data(0x2000) from '%s'... ", argv_data);
            n = loadmem(argv[2], 0x2000);
            if (n >= 0)
                fprintf(stderr, "%d bytes.\n", n);
            else
                fprintf(stderr, "ERROR.\n");
        }
    }

    // CPU Loop
    while (1){
        fetch();
        decode();
        execute();
        memory();
        writeback();

/*
==================
PC_MUX & PC Address Adder

1. PC_new : pc+=4
2. rs : use rs
3. relative branch : PC_new + offset << 2
4. page addressing

pc_src£º
0   pc_new
1   imm
2   jaddr
3   reg(rs)

pc_jmp
0   j/jr (unconditional)
1   beq
2   bne
==================
*/

        if(pc_jmp == 1)
            pc_src = reg_r(rs) == reg_r(rt);
        if(pc_jmp == 2)
            pc_src = reg_r(rs) != reg_r(rt);

        if(pc_src){
            if(pc_src == 1)
                pc = (pc + 4) + (imm << 2);
            else if(pc_src == 2)
                pc = (pc + 4) & 0xf000000 | ((jaddr << 2) & 0x0ffffffc);
            else if(pc_src == 3)
                pc = reg_r(rs);
        }
        else
            pc = pc + 4;

        /*
         cycle() will kill your simulator after 4096 cycles to prevent reading
            outside of RAM.
         If you want to run for longer, change your CYCLE_LIMIT in config.h.
        */
        cycle(); // Don't modify this line: hook for automated testing
    }
}

void fetch(){
    if(verbose)
    printf ("---- fetch ----\n" );
    bus(0, pc, &_bus);

    if(verbose)
    printf("\n\
pc:\t%08X\n\
_bus:\t%08X\n\
", pc, _bus);
    if(interactive)
        if(getchar()=='q')
            exit(0);

}

void decode(){
    if(verbose)
    printf ("---- decode ----\n" );
    op = (_bus >> 26) & 0x3f; // top 6 bits of instruction
    rs = (_bus >> 21) & 0x1f; // ??? = Rs (set but unused in J insts)
    rt = (_bus >> 16) & 0x1f; // ??? = Rt (set but unused in J insts)
    rd = (_bus >> 11) & 0x1f; // ??? = Rd (set but unused in I/J insts)
//    imm = (int16_t)(_bus & 0x0000ffff); // ??? = bottom 16 bits of instruction, remember to sign extend!
    imm = ((int32_t)(_bus & 0x0000ffff) << 16) >> 16;
    shamt = 0x0; // Not needed for coursework
    funct = _bus  & 0x3f; // ??? = Funct (set but unused in I/J insts)

    jaddr = ((int32_t)(_bus & 0x03ffffff) << 6) >> 6; // ??? = bottom 26 bits of inst, remember to sign extend!

    if(verbose)
    printf("\n\
op:\t%02X\n\
rs:\t%02X\n\
rt:\t%02X\n\
rd:\t%02X\n\
imm:\t%08X\n\
shamt:\t%02X\n\
funct:\t%02X\n\
jaddr:\t%08X\n\
", op, rs, rt, rd, imm, shamt, funct, jaddr);

    // Default output signals
    pc_jmp = 0;
    pc_src = 0;
    reg_dst = 0;
    reg_wb = 0;
    mem_en = 0;
    mem_wen = 0;
    mem_to_reg = 0;

    alu_op = ADD;
    alu_a = reg_r(rs);
    alu_b = reg_r(rt);

    switch (op){
        case 0x00: // R-type
            reg_dst = 1; // writeback will go to rd
            reg_wb = 1;
            break;
        case 0x08: // ADDI
            alu_op = ADD;
            alu_b = imm;
            reg_wb = 1;
            break;
        case 0x23: // LW
            alu_op = ADD;
            alu_b = imm;
            reg_wb = 1;
            mem_en = 1;
            mem_to_reg = 1;
            break;
        case 0x2b: // SW
            alu_op = ADD;
            alu_b = imm;
            mem_en = 1;
            mem_wen = 1;
            break;
        case 0x02: // J
            pc_src = 2; //jaddr
            break;
        case 0x04: // BEQ
            pc_jmp = 1;
            break;
        case 0x05: // BNE
            pc_jmp = 2;
            break;

    }

    if (op == 0x00){
        switch (funct){
            case 0x20: // ADD
                alu_op = ADD;
                break;
            case 0x22: // SUB
                alu_op = SUB;
                break;
            case 0x24: // AND
                alu_op = AND;
                break;
            case 0x25: // OR
                alu_op = OR;
                break;
            case 0x26: // XOR
                alu_op = XOR;
                break;
            case 0x27: // NOR
                alu_op = NOR;
                break;
            case 0x2a: // SLT
                alu_op = SLT;
                break;
            case 0x04: // SLLV
                alu_op = SLLV;
                break;
            case 0x06: // SRLV
                alu_op = SRLV;
                break;
            case 0x08: // JR
                pc_src = 3; //rs
                break;
        }
    }

    if(verbose)
    printf("\n\
pc_jmp:\t%d\n\
pc_src:\t%d\n\
reg_dst:\t%d\n\
reg_wb:\t%d\n\
mem_en:\t%d\n\
mem_wen:\t%d\n\
mem_to_reg:\t%d\n\n\
alu_op:\t%d\n\
alu_a:\t%d\n\
alu_b:\t%d\n\
", pc_jmp, pc_src, reg_dst, reg_wb, mem_en, mem_wen, mem_to_reg, alu_op, alu_a, alu_b);

}

void execute(){
    if(verbose)
    printf ("---- execute ----\n" );
    switch (alu_op){
        case ADD:
            alu_out = alu_a + alu_b;
            break;
        case SUB:
            alu_out = alu_a - alu_b;
            break;
        case AND:
            alu_out = alu_a & alu_b;
            break;
        case OR:
            alu_out = alu_a | alu_b;
            break;
        case XOR:
            alu_out = alu_a ^ alu_b;
            break;
        case NOR:
            alu_out = ~(alu_a ^ alu_b);
            break;
        case SLT:
            alu_out = alu_a < alu_b;
            break;
        case SLLV:
            alu_out = alu_b << alu_a;
            break;
        case SRLV:
            alu_out = alu_b >> alu_a;
            break;
    }

    alu_zero = alu_out == 0 ? 1 : 0;

    if(verbose)
    printf("\n\
alu_out:\t%d\n\
alu_zero:\t%d\n\
", alu_out, alu_zero);

}

void memory(){
    if(verbose)
    printf ("---- memory ----\n" );
    if (!mem_en)
        return;

    _bus = reg_r(rt);
    bus(mem_wen, alu_out, &_bus);
}

void writeback(){
    if(verbose)
    printf ("---- writeback ----\n" );
    if (reg_wb)
        reg_w(reg_dst ? rd : rt, mem_to_reg ? _bus : alu_out);
}
