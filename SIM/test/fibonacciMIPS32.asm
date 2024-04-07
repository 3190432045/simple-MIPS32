#fibonacciMIPS32.asm

.text

# int first = 0, second = 1, next = 0, ; char newline = '\n';

addi $1, $0, 0x0000

addi $2, $0, 0x0001

addi $3, $0, 0x0000

addi $4, $0, 0x000A

addi $5, $0, 0x6FF1

LLOOP_BODY:
beq $3, $5, LLOOP_END
add $3, $1, $2
addi $1, $2, 0x0000
addi $2, $3, 0x0000
sw $3, 0x7F08($0)
j LLOOP_BODY

LLOOP_END:
j LLOOP_END
