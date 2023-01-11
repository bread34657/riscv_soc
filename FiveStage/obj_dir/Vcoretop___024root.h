// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcoretop.h for the primary calling header

#ifndef VERILATED_VCORETOP___024ROOT_H_
#define VERILATED_VCORETOP___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vcoretop__Syms;
class Vcoretop_VerilatedVcd;
class Vcoretop_coretop;


//----------

VL_MODULE(Vcoretop___024root) {
  public:
    // CELLS
    Vcoretop_coretop* coretop;

    // PORTS
    VL_IN8(clk_i,0,0);
    VL_IN8(rst_i,0,0);

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clk_i;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vcoretop__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vcoretop___024root);  ///< Copying not allowed
  public:
    Vcoretop___024root(const char* name);
    ~Vcoretop___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vcoretop__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
