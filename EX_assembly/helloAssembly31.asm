.data
    promptMessage: .asciiz "Enter a number to find its factorial: "
    resultMessage: .asciiz "\nThe factorial of the number is "
    theNumber:     .word 0
    theAnswer:     .word 0
.text
    .globl main
    main:
        # Read the number from the user.
        li $v0, 4
        la $a0, promptMessage
        syscall
        
        li $v0, 5
        syscall
        
        sw $v0, theNumber
        
        # Call the factorial function
        lw $a0, thNumber
        jal findFactorial
        sw $v0, theAnswer
        
        # Display the result
        
        li $v0, 4
        la $a0, resultMessage
        syscall
        
        li $v0, 1
        lw $a0, theAnswer
        syscall
        
        # Tell the OS that this is the end of the program
        li $v0, 10
        syscall
