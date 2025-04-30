.data
    message: .asciiz "Hi, everybody. \nMy name is Dixon. \n"
.text
    main:
        jal displayMessage
        
        addi $s0, $zero, 5
        
        li $v0, 1
        add $a0, $zero, $s0
        syscall
    
        # Tell the system that the program is done
        li $v0, 10
        syscall
    
    displayMessage:
        li $v0, 4
        la $a0, message
        syscall
        
        jr $ra