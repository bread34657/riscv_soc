// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcoretop.h for the primary calling header

#ifndef VERILATED_VCORETOP_CORETOP_H_
#define VERILATED_VCORETOP_CORETOP_H_  // guard

#include "verilated_heavy.h"

//==========

class Vcoretop__Syms;
class Vcoretop_VerilatedVcd;
class Vcoretop_dpram;
class Vcoretop_regfiles;


//----------

VL_MODULE(Vcoretop_coretop) {
  public:
    // CELLS
    Vcoretop_dpram* dpram0;
    Vcoretop_regfiles* regfiles0;

    // PORTS
    VL_IN8(clk_i,0,0);
    VL_IN8(rst_i,0,0);

    // LOCAL SIGNALS
    CData/*0:0*/ __PVT__pipectrl_flushid;
    CData/*4:0*/ __PVT__idexe_rdaddr;
    CData/*0:0*/ __PVT__idexe_we;
    CData/*2:0*/ __PVT__idexe_optype;
    CData/*2:0*/ __PVT__idexe_opfunc3;
    CData/*0:0*/ __PVT__idexe_shiftsel;
    CData/*0:0*/ __PVT__idexe_addsubsel;
    CData/*0:0*/ __PVT__idexe_jtypesel;
    CData/*0:0*/ __PVT__idexe_memwe;
    CData/*0:0*/ __PVT__idexe_memre;
    CData/*4:0*/ __PVT__idfwd_addr1;
    CData/*4:0*/ __PVT__idfwd_addr2;
    CData/*0:0*/ __PVT__idpipectrl_loadusehazard;
    CData/*4:0*/ __PVT__exemem_rdaddr;
    CData/*0:0*/ __PVT__exemem_we;
    CData/*0:0*/ __PVT__exemem_memre;
    CData/*0:0*/ __PVT__exemem_memwe;
    CData/*2:0*/ __PVT__exemem_opfunc3;
    CData/*0:0*/ __PVT__exepipe_je;
    CData/*4:0*/ __PVT__memwb_rdaddr;
    CData/*0:0*/ __PVT__memwb_we;
    CData/*0:0*/ __PVT__memrom_memwe;
    CData/*4:0*/ __PVT__wbreg_rdaddr;
    CData/*0:0*/ __PVT__wbreg_we;
    CData/*2:0*/ __PVT__decode0__DOT__opfunc3;
    CData/*2:0*/ __PVT__decode0__DOT__optype;
    CData/*0:0*/ __PVT__decode0__DOT__Rtype;
    IData/*31:0*/ __PVT__pc_wire;
    IData/*31:0*/ __PVT__ifid_inst;
    IData/*31:0*/ __PVT__ifid_pc;
    IData/*31:0*/ __PVT__idexe_pc;
    IData/*31:0*/ __PVT__idexe_imm;
    IData/*31:0*/ __PVT__idfwd_rs1;
    IData/*31:0*/ __PVT__idfwd_rs2;
    IData/*31:0*/ __PVT__fwdexe_rs1;
    IData/*31:0*/ __PVT__exemem_rddata;
    IData/*31:0*/ __PVT__exemem_memaddr;
    IData/*31:0*/ __PVT__exepipe_jumpaddr;
    IData/*31:0*/ __PVT__memwb_rddata;
    IData/*31:0*/ __PVT__memrom_ramaddr;
    IData/*31:0*/ __PVT__memrom_ramdata;
    IData/*31:0*/ __PVT__wbreg_rddata;
    IData/*31:0*/ __PVT__decode0__DOT__immI;
    IData/*31:0*/ __PVT__decode0__DOT__imm;
    IData/*31:0*/ __PVT__exe0__DOT__op1;
    IData/*31:0*/ __PVT__exe0__DOT__op2;
    IData/*31:0*/ __PVT__exe0__DOT__op_result;
    IData/*31:0*/ __PVT__mem0__DOT__rd_data;

    // LOCAL VARIABLES
    IData/*31:0*/ __Vdly__ifid_inst;

    // INTERNAL VARIABLES
    Vcoretop__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vcoretop_coretop);  ///< Copying not allowed
  public:
    Vcoretop_coretop(const char* name);
    ~Vcoretop_coretop();

    // INTERNAL METHODS
    void __Vconfigure(Vcoretop__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
