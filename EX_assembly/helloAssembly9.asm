.data

.text
    addi $t0, $zero, 2000
    addi $t1, $zero,   10
    
    mult $t0, $t1    # lower then 32 bits,
                     # so save in lo.
    
    mflo $s0
    
    #Display the product to the screen
    li $v0, 1
    add $a0, $zero, $s0
    syscall