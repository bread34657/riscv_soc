.org 0x0
.global _start
_start:
#    ori x5, x4, 3
#    ori x6, x3, -2
#    ori x5, x4, 4
#    ori x5, x4, 5
#    ori x2, x4, 0x4
#    ori x7, x4, 0x2
    ori x5, x5, 1    # x5=1
    ori x1, x5, 2    # x1 = x5 | 2 = 0x3
    ori x2, x5, 4    # x2 = x5 | 4 = 0x5
    ori x3, x5, 8    # x3 = x5 | 8 = 0x9
    ori x4, x5, 16   # x4 = x5 | 16 = 0x11   