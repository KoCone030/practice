.data
    myArray: .word 100:3      #  Initialize to 100 100 100
    newLine: .asciiz "\n"
.text
    main:
           
        #clear $t0 to 0
        addi $t0, $zero, 0
    
    while:
        beq $t0, 12, exit
        
        lw $t6, myArray($t0)
        
        # Print current number
        li $v0, 1
        addi $a0, $t6, 0
        syscall
        
        # Print a new line.
        li $v0, 4
        la $a0, newLine
        syscall
        
        addi $t0, $t0, 4
        j while
    
    
    exit:
        li $v0, 10
        syscall