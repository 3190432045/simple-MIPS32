addi $1,$0,2 # Constant 2 -> $1
addi $2,$0,0x7ffc # Constant mask for iterator to memory word -> $2
addi $3,$0,3 # Constant shift mask (0x3) -> $3
addi $4,$0,0xff # Constant one-byte mask
addi $5,$0,0 # Iterator -> $4

print_loop:
and $6,$5,$2 # Iterator to word offset -> $6
lw $8,msg($6) # Message word -> $8
and $7,$5,$3 # AND iterator to shift mask ($3) (to get shift amount in bytes) -> $7
sllv $7,$7,$3 # Shift shift amount in bytes ($7) left three times (*8) to get shift amount in bits -> $7
srlv $8,$8,$7 # Shift message ($8) >> $7 -> $8
and $8,$8,$4 # Mask $8 with $4 (0xff) to convert one byte char -> $8
sw $8,0x7f00($0)

addi $5,$5,1 # Increment iterator
bne $8,$0,print_loop # Loop until null terminator

addi $5,$0,0 # Reset iterator
j print_loop

.data
msg: .asciiz "Hello World!\n"