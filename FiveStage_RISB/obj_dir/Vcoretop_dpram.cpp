// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcoretop.h for the primary calling header

#include "Vcoretop_dpram.h"
#include "Vcoretop__Syms.h"

#include "verilated_dpi.h"

//==========

void Vcoretop_dpram::writeByte(uint32_t byte_addr, uint32_t val) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcoretop_dpram::writeByte\n"); );
    // Body
    this->__PVT__mem[(0x1fffffU & byte_addr)] = val;
}

VL_INLINE_OPT void Vcoretop_dpram___sequent__TOP__coretop__dpram0__1(Vcoretop_dpram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcoretop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcoretop_dpram___sequent__TOP__coretop__dpram0__1\n"); );
    // Variables
    CData/*7:0*/ __Vdlyvval__mem__v0;
    CData/*0:0*/ __Vdlyvset__mem__v0;
    CData/*7:0*/ __Vdlyvval__mem__v1;
    CData/*7:0*/ __Vdlyvval__mem__v2;
    CData/*7:0*/ __Vdlyvval__mem__v3;
    IData/*20:0*/ __Vdlyvdim0__mem__v0;
    IData/*20:0*/ __Vdlyvdim0__mem__v1;
    IData/*20:0*/ __Vdlyvdim0__mem__v2;
    IData/*20:0*/ __Vdlyvdim0__mem__v3;
    // Body
    __Vdlyvset__mem__v0 = 0U;
    if (vlSymsp->TOP__coretop.__PVT__memrom_memwe) {
        __Vdlyvval__mem__v0 = (vlSymsp->TOP__coretop.__PVT__memrom_ramdata 
                               >> 0x18U);
        __Vdlyvset__mem__v0 = 1U;
        __Vdlyvdim0__mem__v0 = (0x1ffffcU & vlSymsp->TOP__coretop.__PVT__memrom_ramaddr);
        __Vdlyvval__mem__v1 = (0xffU & (vlSymsp->TOP__coretop.__PVT__memrom_ramdata 
                                        >> 0x10U));
        __Vdlyvdim0__mem__v1 = (0x1fffffU & ((IData)(1U) 
                                             + (0x1ffffcU 
                                                & vlSymsp->TOP__coretop.__PVT__memrom_ramaddr)));
        __Vdlyvval__mem__v2 = (0xffU & (vlSymsp->TOP__coretop.__PVT__memrom_ramdata 
                                        >> 8U));
        __Vdlyvdim0__mem__v2 = (0x1fffffU & ((IData)(2U) 
                                             + (0x1ffffcU 
                                                & vlSymsp->TOP__coretop.__PVT__memrom_ramaddr)));
        __Vdlyvval__mem__v3 = (0xffU & vlSymsp->TOP__coretop.__PVT__memrom_ramdata);
        __Vdlyvdim0__mem__v3 = (0x1fffffU & ((IData)(3U) 
                                             + (0x1ffffcU 
                                                & vlSymsp->TOP__coretop.__PVT__memrom_ramaddr)));
    }
    if (__Vdlyvset__mem__v0) {
        vlSelf->__PVT__mem[__Vdlyvdim0__mem__v0] = __Vdlyvval__mem__v0;
        vlSelf->__PVT__mem[__Vdlyvdim0__mem__v1] = __Vdlyvval__mem__v1;
        vlSelf->__PVT__mem[__Vdlyvdim0__mem__v2] = __Vdlyvval__mem__v2;
        vlSelf->__PVT__mem[__Vdlyvdim0__mem__v3] = __Vdlyvval__mem__v3;
    }
}

VL_INLINE_OPT void Vcoretop_dpram___sequent__TOP__coretop__dpram0__2(Vcoretop_dpram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcoretop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcoretop_dpram___sequent__TOP__coretop__dpram0__2\n"); );
    // Body
    vlSelf->__PVT__ram_data_o = ((vlSelf->__PVT__mem
                                  [(0x1ffffcU & vlSymsp->TOP__coretop.__PVT__memrom_ramaddr)] 
                                  << 0x18U) | ((vlSelf->__PVT__mem
                                                [(0x1fffffU 
                                                  & ((IData)(1U) 
                                                     + 
                                                     (0x1ffffcU 
                                                      & vlSymsp->TOP__coretop.__PVT__memrom_ramaddr)))] 
                                                << 0x10U) 
                                               | ((vlSelf->__PVT__mem
                                                   [
                                                   (0x1fffffU 
                                                    & ((IData)(2U) 
                                                       + 
                                                       (0x1ffffcU 
                                                        & vlSymsp->TOP__coretop.__PVT__memrom_ramaddr)))] 
                                                   << 8U) 
                                                  | vlSelf->__PVT__mem
                                                  [
                                                  (0x1fffffU 
                                                   & ((IData)(3U) 
                                                      + 
                                                      (0x1ffffcU 
                                                       & vlSymsp->TOP__coretop.__PVT__memrom_ramaddr)))])));
}
