// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcoretop.h for the primary calling header

#ifndef VERILATED_VCORETOP_ROM_H_
#define VERILATED_VCORETOP_ROM_H_  // guard

#include "verilated_heavy.h"

//==========

class Vcoretop__Syms;
class Vcoretop_VerilatedVcd;


//----------

VL_MODULE(Vcoretop_rom) {
  public:

    // PORTS
    VL_IN8(__PVT__clk_i,0,0);
    VL_IN(__PVT__addr_i,31,0);
    VL_OUT(__PVT__pc_o,31,0);
    VL_OUT(__PVT__inst_o,31,0);

    // LOCAL SIGNALS
    VlUnpacked<CData/*7:0*/, 2097152> __PVT__mem;

    // INTERNAL VARIABLES
    Vcoretop__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vcoretop_rom);  ///< Copying not allowed
  public:
    Vcoretop_rom(const char* name);
    ~Vcoretop_rom();

    // INTERNAL METHODS
    void __Vconfigure(Vcoretop__Syms* symsp, bool first);
    void writeByte(uint32_t byte_addr, uint32_t val);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
