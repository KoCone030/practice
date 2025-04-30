.data
    age:    .word 26         # This is a word or integer
.text

    # Prints an integer to the screen
    li $v0, 1
    lw $a0, age
    syscall