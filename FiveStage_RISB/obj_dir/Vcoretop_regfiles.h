// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcoretop.h for the primary calling header

#ifndef VERILATED_VCORETOP_REGFILES_H_
#define VERILATED_VCORETOP_REGFILES_H_  // guard

#include "verilated_heavy.h"

//==========

class Vcoretop__Syms;
class Vcoretop_VerilatedVcd;


//----------

VL_MODULE(Vcoretop_regfiles) {
  public:

    // PORTS
    VL_IN8(__PVT__clk_i,0,0);
    VL_IN8(__PVT__rst_i,0,0);
    VL_IN8(__PVT__rs1_addr_i,4,0);
    VL_IN8(__PVT__rs2_addr_i,4,0);
    VL_IN8(__PVT__rd_addr_i,4,0);
    VL_IN8(__PVT__rd_we_i,0,0);
    VL_IN(__PVT__rd_data_i,31,0);
    VL_OUT(__PVT__rs1_data_o,31,0);
    VL_OUT(__PVT__rs2_data_o,31,0);

    // LOCAL SIGNALS
    CData/*0:0*/ __PVT__we;
    IData/*31:0*/ __PVT__i;
    VlUnpacked<IData/*31:0*/, 32> __PVT__x;

    // INTERNAL VARIABLES
    Vcoretop__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vcoretop_regfiles);  ///< Copying not allowed
  public:
    Vcoretop_regfiles(const char* name);
    ~Vcoretop_regfiles();

    // INTERNAL METHODS
    void __Vconfigure(Vcoretop__Syms* symsp, bool first);
    void readRegister(uint32_t raddr, uint32_t& val);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
