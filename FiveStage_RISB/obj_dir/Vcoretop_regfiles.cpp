// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcoretop.h for the primary calling header

#include "Vcoretop_regfiles.h"
#include "Vcoretop__Syms.h"

#include "verilated_dpi.h"

//==========

void Vcoretop_regfiles::readRegister(uint32_t raddr, uint32_t& val) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcoretop_regfiles::readRegister\n"); );
    // Body
    val = this->__PVT__x[(0x1fU & raddr)];
}

VL_INLINE_OPT void Vcoretop_regfiles___sequent__TOP__coretop__regfiles0__1(Vcoretop_regfiles* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcoretop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcoretop_regfiles___sequent__TOP__coretop__regfiles0__1\n"); );
    // Variables
    CData/*0:0*/ __Vdlyvset__x__v0;
    CData/*4:0*/ __Vdlyvdim0__x__v32;
    CData/*0:0*/ __Vdlyvset__x__v32;
    IData/*31:0*/ __Vdlyvval__x__v32;
    // Body
    if (vlSymsp->TOP.rst_i) {
        vlSelf->__PVT__i = 0x20U;
    }
    __Vdlyvset__x__v0 = 0U;
    __Vdlyvset__x__v32 = 0U;
    if (vlSymsp->TOP.rst_i) {
        __Vdlyvset__x__v0 = 1U;
    } else if (vlSelf->__PVT__we) {
        __Vdlyvval__x__v32 = vlSymsp->TOP__coretop.__PVT__wbreg_rddata;
        __Vdlyvset__x__v32 = 1U;
        __Vdlyvdim0__x__v32 = vlSymsp->TOP__coretop.__PVT__wbreg_rdaddr;
    }
    if (__Vdlyvset__x__v0) {
        vlSelf->__PVT__x[0U] = 0U;
        vlSelf->__PVT__x[1U] = 0U;
        vlSelf->__PVT__x[2U] = 0U;
        vlSelf->__PVT__x[3U] = 0U;
        vlSelf->__PVT__x[4U] = 0U;
        vlSelf->__PVT__x[5U] = 0U;
        vlSelf->__PVT__x[6U] = 0U;
        vlSelf->__PVT__x[7U] = 0U;
        vlSelf->__PVT__x[8U] = 0U;
        vlSelf->__PVT__x[9U] = 0U;
        vlSelf->__PVT__x[0xaU] = 0U;
        vlSelf->__PVT__x[0xbU] = 0U;
        vlSelf->__PVT__x[0xcU] = 0U;
        vlSelf->__PVT__x[0xdU] = 0U;
        vlSelf->__PVT__x[0xeU] = 0U;
        vlSelf->__PVT__x[0xfU] = 0U;
        vlSelf->__PVT__x[0x10U] = 0U;
        vlSelf->__PVT__x[0x11U] = 0U;
        vlSelf->__PVT__x[0x12U] = 0U;
        vlSelf->__PVT__x[0x13U] = 0U;
        vlSelf->__PVT__x[0x14U] = 0U;
        vlSelf->__PVT__x[0x15U] = 0U;
        vlSelf->__PVT__x[0x16U] = 0U;
        vlSelf->__PVT__x[0x17U] = 0U;
        vlSelf->__PVT__x[0x18U] = 0U;
        vlSelf->__PVT__x[0x19U] = 0U;
        vlSelf->__PVT__x[0x1aU] = 0U;
        vlSelf->__PVT__x[0x1bU] = 0U;
        vlSelf->__PVT__x[0x1cU] = 0U;
        vlSelf->__PVT__x[0x1dU] = 0U;
        vlSelf->__PVT__x[0x1eU] = 0U;
        vlSelf->__PVT__x[0x1fU] = 0U;
    }
    if (__Vdlyvset__x__v32) {
        vlSelf->__PVT__x[__Vdlyvdim0__x__v32] = __Vdlyvval__x__v32;
    }
}

VL_INLINE_OPT void Vcoretop_regfiles___sequent__TOP__coretop__regfiles0__2(Vcoretop_regfiles* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcoretop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcoretop_regfiles___sequent__TOP__coretop__regfiles0__2\n"); );
    // Body
    vlSelf->__PVT__we = ((IData)(vlSymsp->TOP__coretop.__PVT__wbreg_we) 
                         & (0U != (IData)(vlSymsp->TOP__coretop.__PVT__wbreg_rdaddr)));
}
