TOP = soc_top
GTKWAVE = gtkwave

V_SRC = ../core/soc_top.v
V_SRC += $(wildcard ../core/*.v)

TESTBENCH_SRC = $(wildcard ./tb/*.cpp)
VTOP = ../core/${TOP}.v
INC = -I../core
PROG = test
PROG_S = $(wildcard ./test_src/*.S)

.DEFAULT_GOAL :=all

all:vhdl

obj_dir/V${TOP}.mk: ${V_SRC} ${TESTBENCH_SRC}
	verilator --cc --trace -Wall --exe --build ${TESTBENCH_SRC} ${INC} ${V_SRC} --trace

obj_dir/V${TOP} : obj_dir/V${TOP}.mk
	$(MAKE) -C obj_dir -f V$(TOP).mk

test_src/${PROG}.bin: ${PROG_S}
	$(MAKE) -C test_src

.PHONY : vhdl
vhdl: obj_dir/V${TOP}.mk

.PHONY : run
run: test_src/${PROG}.bin obj_dir/V${TOP}
	obj_dir/V${TOP} test_src/${PROG}.bin

.PHONY : testc
testc: ctest/${PROG}.bin obj_dir/V${TOP}
	obj_dir/V${TOP} ctest/${PROG}.bin

.PHONY : wave
wave : run
	${GTKWAVE} wave.vcd

.PHONY : clean
clean: 
	rm -rf obj_dir wave.vcd
	rm -rf test_src/*.elf test_src/*.bin
