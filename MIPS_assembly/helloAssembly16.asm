.data
    newLine: .asciiz "\n"
.text
    main:
        addi $s0, $zero, 10
        
        jal increaseMyRegister
        
        # Print a new line.
        li $v0, 4
        la $a0, newLine
        syscall
        
        jal printTheValue
         
        # This line is going to signal end of porgram.
        li $v0, 10
        syscall
        
        
    increaseMyRegister:
        addi $sp, $sp, -8
        sw   $s0, 0($sp)
        sw   $ra, 4($sp)
        
        addi $s0, $s0, 30
        
        # Nested procedure
        jal printTheValue
        
        lw   $s0, 0($sp)
        lw   $ra, 4($sp)
        addi $sp, $sp, 8
        
        jr $ra
        
    printTheValue:
        # Print new value in function
        li $v0, 1
        move $a0, $s0
        syscall
        
        jr $ra