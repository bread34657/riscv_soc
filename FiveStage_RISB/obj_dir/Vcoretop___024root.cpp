// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcoretop.h for the primary calling header

#include "Vcoretop___024root.h"
#include "Vcoretop__Syms.h"

#include "verilated_dpi.h"

//==========

void Vcoretop_coretop___sequent__TOP__coretop__1(Vcoretop_coretop* vlSelf);
void Vcoretop_dpram___sequent__TOP__coretop__dpram0__1(Vcoretop_dpram* vlSelf);
void Vcoretop_regfiles___sequent__TOP__coretop__regfiles0__1(Vcoretop_regfiles* vlSelf);
void Vcoretop_coretop___sequent__TOP__coretop__2(Vcoretop_coretop* vlSelf);
void Vcoretop_dpram___sequent__TOP__coretop__dpram0__2(Vcoretop_dpram* vlSelf);
void Vcoretop_regfiles___sequent__TOP__coretop__regfiles0__2(Vcoretop_regfiles* vlSelf);
void Vcoretop_coretop___sequent__TOP__coretop__3(Vcoretop_coretop* vlSelf);

void Vcoretop___024root___eval(Vcoretop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcoretop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcoretop___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk_i) & (~ (IData)(vlSelf->__Vclklast__TOP__clk_i)))) {
        Vcoretop_coretop___sequent__TOP__coretop__1((&vlSymsp->TOP__coretop));
        vlSelf->__Vm_traceActivity[1U] = 1U;
        Vcoretop_dpram___sequent__TOP__coretop__dpram0__1((&vlSymsp->TOP__coretop__dpram0));
        Vcoretop_regfiles___sequent__TOP__coretop__regfiles0__1((&vlSymsp->TOP__coretop__regfiles0));
        Vcoretop_coretop___sequent__TOP__coretop__2((&vlSymsp->TOP__coretop));
        Vcoretop_dpram___sequent__TOP__coretop__dpram0__2((&vlSymsp->TOP__coretop__dpram0));
        Vcoretop_regfiles___sequent__TOP__coretop__regfiles0__2((&vlSymsp->TOP__coretop__regfiles0));
        Vcoretop_coretop___sequent__TOP__coretop__3((&vlSymsp->TOP__coretop));
    }
    // Final
    vlSelf->__Vclklast__TOP__clk_i = vlSelf->clk_i;
}

QData Vcoretop___024root___change_request_1(Vcoretop___024root* vlSelf);

VL_INLINE_OPT QData Vcoretop___024root___change_request(Vcoretop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcoretop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcoretop___024root___change_request\n"); );
    // Body
    return (Vcoretop___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vcoretop___024root___change_request_1(Vcoretop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcoretop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcoretop___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vcoretop___024root___eval_debug_assertions(Vcoretop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcoretop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcoretop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->rst_i & 0xfeU))) {
        Verilated::overWidthError("rst_i");}
    if (VL_UNLIKELY((vlSelf->clk_i & 0xfeU))) {
        Verilated::overWidthError("clk_i");}
}
#endif  // VL_DEBUG
