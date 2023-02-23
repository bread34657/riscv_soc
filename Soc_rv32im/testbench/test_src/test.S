	.text			# Define beginning of text section
	.global	_start		# Define entry _start
_start:

    li x3, 1
	csrrw x3, mscratch, x3
	csrrw x6, mscratch, x6
    .end			# End of file