
riscv test all(test for RV32IM):
    make
    python3 test_all_isa.py
if only want test single :
    ./obj_dir/Vsoc_top testsource/test.bin 1

tb make(verilator):
    verilator -Wall --cc --exe --build testbench.cpp sim_mem.cpp soc_top.v --trace
    make -C obj_dir -f Vsoc_top.mk

testsource (gtkwave,test.bin):
    make
    ./obj_dir/Vsoc_top testsource/test.bin 2
    gtkwave wave.vcd

ctest (test c program):
    make 
    ./obj_dir/Vsoc_top testsource/test.bin
