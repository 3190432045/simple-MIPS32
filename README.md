#  simple-MIPS32
`Simple MIPS32 Simulator`  
A very basic MIPS32 simulator with limited set of instructions and should read MIPS machine code.

# Usage
List of implemented instructions:  
`ADDI, ADD, SUB, AND, OR, XOR, NOR, LW, SW, J, JR, BEQ, BNE, SLT, SLLV, SRLV`  

Some debugging-related features have been integrated into the simulator.  
Type the following command in the CMD:  
`SIM /?`

Type the following command to enable verbose mode, memory view, register view and redirect the standard output stream to a log file LOG.TXT:  
`SIM example1.bin /M /R /V > LOG.TXT`  

# Limitations
Currently no assembler.

# License
None.  
