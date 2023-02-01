	.text			# Define beginning of text section
	.global	_start		# Define entry _start
_start:
#    ori x5, x4, 3
#    ori x6, x3, -2
#    ori x5, x4, 4
#    ori x5, x4, 5
#    ori x2, x4, 0x4
#    ori x7, x4, 0x2
#    ori x5, x5, 1    # x5=1
#    ori x1, x5, 2    # x1 = x5 | 2 = 0x3
#    ori x2, x5, 4    # x2 = x5 | 4 = 0x5
#    ori x3, x5, 8    # x3 = x5 | 8 = 0x9
#    ori x4, x5, 16   # x4 = x5 | 16 = 0x11   
#    add x2, x5, x3   # x2=1
#    addi x3,x5, 5    # x3=6 
#    sub x4, x3, x5   #x4 = 5
#    li x4, 0x123
#    li x5, 0x12345678
#    la x6, 0x123
#    la x7, 0x23
#    lui x6, 0x123
#    lui x7, 0x23
#    la x8, 0x123
#    la x9, 0x23
#	li x3, 0xffff0f0b	
#	li x4, 0x0000f0ab	
#	la x5, _array		
#	lh x4, 0(x5)
#	sb x3, 0(x4)		
#	li x2, 10
#	li x26, 10
#	li x27, 10
    li x3, 1				
    li x2, 1				
    bne x2, x3, _fail		
    li x10, 1
    li x11, 3
    bne x10, x11, _end
_fail:	
	li x8, 1
    li x9, 2
_end:   
    	.end			# End of file