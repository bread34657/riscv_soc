verilator -Wall --cc --exe --build testbench.cpp sim_mem.cpp inst_fetch.v --trace
make -C obj_dir -f Vfetch.mk
./obj_dir/Vinst_fetch testsource/test.bin