// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcoretop.h for the primary calling header

#include "Vcoretop_dpram.h"
#include "Vcoretop__Syms.h"

#include "verilated_dpi.h"

//==========


void Vcoretop_dpram___ctor_var_reset(Vcoretop_dpram* vlSelf);

Vcoretop_dpram::Vcoretop_dpram(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vcoretop_dpram___ctor_var_reset(this);
}

void Vcoretop_dpram::__Vconfigure(Vcoretop__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vcoretop_dpram::~Vcoretop_dpram() {
}

void Vcoretop_dpram___ctor_var_reset(Vcoretop_dpram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcoretop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcoretop_dpram___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__addr_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__ram_addr_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__ram_data_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__mem_we_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ram_data_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__pc_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__inst_o = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<2097152; ++__Vi0) {
        vlSelf->__PVT__mem[__Vi0] = VL_RAND_RESET_I(8);
    }
}
