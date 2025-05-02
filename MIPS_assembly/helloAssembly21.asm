.data
    message:  .asciiz "The numbers are different."
    message2: .asciiz "Nothing happened."
.text
    main:
        addi $t0, $zero, 5
        addi $t1, $zero, 20
        
        #b numbersDifferent
        bne $t0, $t1, numbersDifferent
        
        # Syscall to end program
        li $v0, 10
        syscall
        
    numbersDifferent:
        li $v0, 4
        la $a0, message
        syscall