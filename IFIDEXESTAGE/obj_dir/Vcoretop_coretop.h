// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcoretop.h for the primary calling header

#ifndef VERILATED_VCORETOP_CORETOP_H_
#define VERILATED_VCORETOP_CORETOP_H_  // guard

#include "verilated_heavy.h"

//==========

class Vcoretop__Syms;
class Vcoretop_VerilatedVcd;
class Vcoretop_rom;


//----------

VL_MODULE(Vcoretop_coretop) {
  public:
    // CELLS
    Vcoretop_rom* rom0;

    // PORTS
    VL_IN8(clk_i,0,0);
    VL_IN8(rst_i,0,0);

    // LOCAL SIGNALS
    CData/*4:0*/ __PVT__idreg_addr1;
    CData/*4:0*/ __PVT__idreg_addr2;
    CData/*4:0*/ __PVT__idexe_rdaddr;
    CData/*0:0*/ __PVT__idexe_we;
    CData/*0:0*/ __PVT__idexe_optype;
    CData/*2:0*/ __PVT__idexe_opfunc3;
    CData/*4:0*/ __PVT__exemem_rdaddr;
    CData/*0:0*/ __PVT__exemem_we;
    IData/*31:0*/ __PVT__pc_wire;
    IData/*31:0*/ __PVT__ifid_inst;
    IData/*31:0*/ __PVT__ifid_pc;
    IData/*31:0*/ __PVT__idexe_pc;
    IData/*31:0*/ __PVT__idexe_op1;
    IData/*31:0*/ __PVT__idexe_op2;
    IData/*31:0*/ __PVT__idexe_imm;
    IData/*31:0*/ __PVT__exemem_rddata;
    IData/*31:0*/ __PVT__regfiles0__DOT__i;
    IData/*31:0*/ __PVT__exe0__DOT__op_result;
    VlUnpacked<IData/*31:0*/, 32> __PVT__regfiles0__DOT__x;

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
