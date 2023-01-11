// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcoretop.h for the primary calling header

#include "Vcoretop___024root.h"
#include "Vcoretop__Syms.h"

#include "verilated_dpi.h"

//==========


void Vcoretop___024root___ctor_var_reset(Vcoretop___024root* vlSelf);

Vcoretop___024root::Vcoretop___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vcoretop___024root___ctor_var_reset(this);
}

void Vcoretop___024root::__Vconfigure(Vcoretop__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vcoretop___024root::~Vcoretop___024root() {
}

void Vcoretop_coretop___initial__TOP__coretop__1(Vcoretop_coretop* vlSelf) VL_ATTR_COLD;

void Vcoretop___024root___eval_initial(Vcoretop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcoretop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcoretop___024root___eval_initial\n"); );
    // Body
    Vcoretop_coretop___initial__TOP__coretop__1((&vlSymsp->TOP__coretop));
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vclklast__TOP__clk_i = vlSelf->clk_i;
}

void Vcoretop___024root___eval_settle(Vcoretop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcoretop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcoretop___024root___eval_settle\n"); );
}

void Vcoretop___024root___final(Vcoretop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcoretop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcoretop___024root___final\n"); );
}

void Vcoretop___024root___ctor_var_reset(Vcoretop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcoretop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcoretop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->rst_i = VL_RAND_RESET_I(1);
    vlSelf->clk_i = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
