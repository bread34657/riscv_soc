
isa test(test for RV32IM):
    make
    python3 test_all_isa.py
    
verilator make:
    verilator -Wall --cc --exe --build testbench.cpp sim_mem.cpp coretop.v --trace
    make -C obj_dir -f Vcoretop.mk
    ./obj_dir/Vcoretop testsource/test.bin

testsource (gtkwave,test.bin):
    make
    gtkwave wave.vcd