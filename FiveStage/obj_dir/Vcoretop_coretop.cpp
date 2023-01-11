// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcoretop.h for the primary calling header

#include "Vcoretop_coretop.h"
#include "Vcoretop__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void Vcoretop_coretop___sequent__TOP__coretop__1(Vcoretop_coretop* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcoretop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vcoretop_coretop___sequent__TOP__coretop__1\n"); );
    // Variables
    CData/*0:0*/ __Vdlyvset__regfiles0__DOT__x__v0;
    CData/*4:0*/ __Vdlyvdim0__regfiles0__DOT__x__v32;
    CData/*0:0*/ __Vdlyvset__regfiles0__DOT__x__v32;
    IData/*31:0*/ __Vdly__pc_wire;
    IData/*31:0*/ __Vdlyvval__regfiles0__DOT__x__v32;
    // Body
    __Vdly__pc_wire = vlSelf->__PVT__pc_wire;
    __Vdlyvset__regfiles0__DOT__x__v0 = 0U;
    __Vdlyvset__regfiles0__DOT__x__v32 = 0U;
    if (vlSymsp->TOP.rst_i) {
        vlSelf->__PVT__regfiles0__DOT__i = 0x20U;
    }
    if (vlSymsp->TOP.rst_i) {
        __Vdly__pc_wire = 0U;
        vlSelf->__PVT__idexe_pc = 0U;
    } else {
        __Vdly__pc_wire = ((IData)(4U) + vlSelf->__PVT__pc_wire);
        vlSelf->__PVT__idexe_pc = vlSelf->__PVT__ifid_pc;
    }
    vlSelf->__PVT__idexe_optype = ((~ (IData)(vlSymsp->TOP.rst_i)) 
                                   & ((0x13U == (0x7fU 
                                                 & vlSelf->__PVT__ifid_inst)) 
                                      | (0x33U == (0x7fU 
                                                   & vlSelf->__PVT__ifid_inst))));
    if (vlSymsp->TOP.rst_i) {
        vlSelf->__PVT__idexe_opfunc3 = 0U;
        vlSelf->__PVT__idexe_imm = 0U;
        vlSelf->__PVT__idexe_op2 = 0U;
        vlSelf->__PVT__idexe_op1 = 0U;
    } else {
        vlSelf->__PVT__idexe_opfunc3 = (7U & (vlSelf->__PVT__ifid_inst 
                                              >> 0xcU));
        vlSelf->__PVT__idexe_imm = ((- (IData)((0x13U 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->__PVT__ifid_inst)))) 
                                    & (((- (IData)(
                                                   (vlSelf->__PVT__ifid_inst 
                                                    >> 0x1fU))) 
                                        << 0xcU) | 
                                       (vlSelf->__PVT__ifid_inst 
                                        >> 0x14U)));
        vlSelf->__PVT__idexe_op2 = (((IData)(vlSelf->__PVT__regfiles0__DOT__we) 
                                     & ((IData)(vlSelf->__PVT__idreg_addr2) 
                                        == (IData)(vlSelf->__PVT__wbreg_rdaddr)))
                                     ? vlSelf->__PVT__wbreg_rddata
                                     : vlSelf->__PVT__regfiles0__DOT__x
                                    [vlSelf->__PVT__idreg_addr2]);
        vlSelf->__PVT__idexe_op1 = (((IData)(vlSelf->__PVT__regfiles0__DOT__we) 
                                     & ((IData)(vlSelf->__PVT__idreg_addr1) 
                                        == (IData)(vlSelf->__PVT__wbreg_rdaddr)))
                                     ? vlSelf->__PVT__wbreg_rddata
                                     : vlSelf->__PVT__regfiles0__DOT__x
                                    [vlSelf->__PVT__idreg_addr1]);
    }
    if (vlSymsp->TOP.rst_i) {
        __Vdlyvset__regfiles0__DOT__x__v0 = 1U;
    } else if (vlSelf->__PVT__wbreg_we) {
        __Vdlyvval__regfiles0__DOT__x__v32 = vlSelf->__PVT__wbreg_rddata;
        __Vdlyvset__regfiles0__DOT__x__v32 = 1U;
        __Vdlyvdim0__regfiles0__DOT__x__v32 = vlSelf->__PVT__wbreg_rdaddr;
    }
    if (__Vdlyvset__regfiles0__DOT__x__v0) {
        vlSelf->__PVT__regfiles0__DOT__x[0U] = 0U;
        vlSelf->__PVT__regfiles0__DOT__x[1U] = 0U;
        vlSelf->__PVT__regfiles0__DOT__x[2U] = 0U;
        vlSelf->__PVT__regfiles0__DOT__x[3U] = 0U;
        vlSelf->__PVT__regfiles0__DOT__x[4U] = 0U;
        vlSelf->__PVT__regfiles0__DOT__x[5U] = 0U;
        vlSelf->__PVT__regfiles0__DOT__x[6U] = 0U;
        vlSelf->__PVT__regfiles0__DOT__x[7U] = 0U;
        vlSelf->__PVT__regfiles0__DOT__x[8U] = 0U;
        vlSelf->__PVT__regfiles0__DOT__x[9U] = 0U;
        vlSelf->__PVT__regfiles0__DOT__x[0xaU] = 0U;
        vlSelf->__PVT__regfiles0__DOT__x[0xbU] = 0U;
        vlSelf->__PVT__regfiles0__DOT__x[0xcU] = 0U;
        vlSelf->__PVT__regfiles0__DOT__x[0xdU] = 0U;
        vlSelf->__PVT__regfiles0__DOT__x[0xeU] = 0U;
        vlSelf->__PVT__regfiles0__DOT__x[0xfU] = 0U;
        vlSelf->__PVT__regfiles0__DOT__x[0x10U] = 0U;
        vlSelf->__PVT__regfiles0__DOT__x[0x11U] = 0U;
        vlSelf->__PVT__regfiles0__DOT__x[0x12U] = 0U;
        vlSelf->__PVT__regfiles0__DOT__x[0x13U] = 0U;
        vlSelf->__PVT__regfiles0__DOT__x[0x14U] = 0U;
        vlSelf->__PVT__regfiles0__DOT__x[0x15U] = 0U;
        vlSelf->__PVT__regfiles0__DOT__x[0x16U] = 0U;
        vlSelf->__PVT__regfiles0__DOT__x[0x17U] = 0U;
        vlSelf->__PVT__regfiles0__DOT__x[0x18U] = 0U;
        vlSelf->__PVT__regfiles0__DOT__x[0x19U] = 0U;
        vlSelf->__PVT__regfiles0__DOT__x[0x1aU] = 0U;
        vlSelf->__PVT__regfiles0__DOT__x[0x1bU] = 0U;
        vlSelf->__PVT__regfiles0__DOT__x[0x1cU] = 0U;
        vlSelf->__PVT__regfiles0__DOT__x[0x1dU] = 0U;
        vlSelf->__PVT__regfiles0__DOT__x[0x1eU] = 0U;
        vlSelf->__PVT__regfiles0__DOT__x[0x1fU] = 0U;
    }
    if (__Vdlyvset__regfiles0__DOT__x__v32) {
        vlSelf->__PVT__regfiles0__DOT__x[__Vdlyvdim0__regfiles0__DOT__x__v32] 
            = __Vdlyvval__regfiles0__DOT__x__v32;
    }
    if (vlSymsp->TOP.rst_i) {
        vlSelf->__PVT__ifid_pc = 0U;
        vlSelf->__PVT__idreg_addr2 = 0U;
        vlSelf->__PVT__idreg_addr1 = 0U;
        vlSelf->__PVT__wbreg_rddata = 0U;
    } else {
        vlSelf->__PVT__ifid_pc = vlSelf->__PVT__pc_wire;
        vlSelf->__PVT__idreg_addr2 = (0x1fU & (vlSelf->__PVT__ifid_inst 
                                               >> 0x14U));
        vlSelf->__PVT__idreg_addr1 = (0x1fU & (vlSelf->__PVT__ifid_inst 
                                               >> 0xfU));
        vlSelf->__PVT__wbreg_rddata = vlSelf->__PVT__memwb_rddata;
    }
    vlSelf->__PVT__wbreg_we = ((~ (IData)(vlSymsp->TOP.rst_i)) 
                               & (IData)(vlSelf->__PVT__memwb_we));
    if (vlSymsp->TOP.rst_i) {
        vlSelf->__PVT__wbreg_rdaddr = 0U;
        vlSelf->__PVT__memwb_rddata = 0U;
    } else {
        vlSelf->__PVT__wbreg_rdaddr = vlSelf->__PVT__memwb_rdaddr;
        vlSelf->__PVT__memwb_rddata = vlSelf->__PVT__exemem_rddata;
    }
    vlSelf->__PVT__memwb_we = ((~ (IData)(vlSymsp->TOP.rst_i)) 
                               & (IData)(vlSelf->__PVT__exemem_we));
    vlSelf->__PVT__regfiles0__DOT__we = ((IData)(vlSelf->__PVT__wbreg_we) 
                                         & (0U != (IData)(vlSelf->__PVT__wbreg_rdaddr)));
    if (vlSymsp->TOP.rst_i) {
        vlSelf->__PVT__memwb_rdaddr = 0U;
        vlSelf->__PVT__exemem_rddata = 0U;
    } else {
        vlSelf->__PVT__memwb_rdaddr = vlSelf->__PVT__exemem_rdaddr;
        vlSelf->__PVT__exemem_rddata = vlSelf->__PVT__exe0__DOT__op_result;
    }
    vlSelf->__PVT__exemem_we = ((~ (IData)(vlSymsp->TOP.rst_i)) 
                                & (IData)(vlSelf->__PVT__idexe_we));
    vlSelf->__PVT__exemem_rdaddr = ((IData)(vlSymsp->TOP.rst_i)
                                     ? 0U : (IData)(vlSelf->__PVT__idexe_rdaddr));
    if (vlSelf->__PVT__idexe_optype) {
        vlSelf->__PVT__exe0__DOT__op_result = ((6U 
                                                == (IData)(vlSelf->__PVT__idexe_opfunc3))
                                                ? (vlSelf->__PVT__idexe_op1 
                                                   | ((IData)(vlSelf->__PVT__idexe_optype)
                                                       ? vlSelf->__PVT__idexe_imm
                                                       : vlSelf->__PVT__idexe_op2))
                                                : 0U);
    }
    vlSelf->__PVT__idexe_we = ((~ (IData)(vlSymsp->TOP.rst_i)) 
                               & (0x13U == (0x7fU & vlSelf->__PVT__ifid_inst)));
    if (vlSymsp->TOP.rst_i) {
        vlSelf->__PVT__idexe_rdaddr = 0U;
        vlSelf->__PVT__ifid_inst = 0U;
    } else {
        vlSelf->__PVT__idexe_rdaddr = (0x1fU & (vlSelf->__PVT__ifid_inst 
                                                >> 7U));
        vlSelf->__PVT__ifid_inst = ((vlSymsp->TOP__coretop__rom0.__PVT__mem
                                     [(0x1ffffcU & vlSelf->__PVT__pc_wire)] 
                                     << 0x18U) | ((
                                                   vlSymsp->TOP__coretop__rom0.__PVT__mem
                                                   [
                                                   (0x1fffffU 
                                                    & ((IData)(1U) 
                                                       + 
                                                       (0x1ffffcU 
                                                        & vlSelf->__PVT__pc_wire)))] 
                                                   << 0x10U) 
                                                  | ((vlSymsp->TOP__coretop__rom0.__PVT__mem
                                                      [
                                                      (0x1fffffU 
                                                       & ((IData)(2U) 
                                                          + 
                                                          (0x1ffffcU 
                                                           & vlSelf->__PVT__pc_wire)))] 
                                                      << 8U) 
                                                     | vlSymsp->TOP__coretop__rom0.__PVT__mem
                                                     [
                                                     (0x1fffffU 
                                                      & ((IData)(3U) 
                                                         + 
                                                         (0x1ffffcU 
                                                          & vlSelf->__PVT__pc_wire)))])));
    }
    vlSelf->__PVT__pc_wire = __Vdly__pc_wire;
}
