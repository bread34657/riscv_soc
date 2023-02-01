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
    IData/*31:0*/ __Vdly__pc_wire;
    IData/*31:0*/ __Vdly__ifid_pc;
    // Body
    __Vdly__ifid_pc = vlSelf->__PVT__ifid_pc;
    __Vdly__pc_wire = vlSelf->__PVT__pc_wire;
    vlSelf->__Vdly__ifid_inst = vlSelf->__PVT__ifid_inst;
    __Vdly__ifid_pc = (((IData)(vlSymsp->TOP.rst_i) 
                        | (IData)(vlSelf->__PVT__exepipe_je))
                        ? 0U : ((IData)(vlSelf->__PVT__idpipectrl_loadusehazard)
                                 ? vlSelf->__PVT__ifid_pc
                                 : vlSelf->__PVT__pc_wire));
    __Vdly__pc_wire = ((IData)(vlSymsp->TOP.rst_i) ? 0U
                        : ((IData)(vlSelf->__PVT__exepipe_je)
                            ? vlSelf->__PVT__exepipe_jumpaddr
                            : ((IData)(vlSelf->__PVT__idpipectrl_loadusehazard)
                                ? vlSelf->__PVT__pc_wire
                                : ((IData)(4U) + vlSelf->__PVT__pc_wire))));
    vlSelf->__PVT__idexe_pc = (((IData)(vlSymsp->TOP.rst_i) 
                                | (IData)(vlSelf->__PVT__pipectrl_flushid))
                                ? 0U : vlSelf->__PVT__ifid_pc);
    vlSelf->__PVT__idexe_jtypesel = (1U & ((~ ((IData)(vlSymsp->TOP.rst_i) 
                                               | (IData)(vlSelf->__PVT__pipectrl_flushid))) 
                                           & ((0x6fU 
                                               == (0x7fU 
                                                   & vlSelf->__PVT__ifid_inst))
                                               ? 1U
                                               : 0U)));
    vlSelf->__PVT__idexe_shiftsel = (1U & ((~ ((IData)(vlSymsp->TOP.rst_i) 
                                               | (IData)(vlSelf->__PVT__pipectrl_flushid))) 
                                           & ((0x20U 
                                               == (0x7fU 
                                                   & vlSelf->__PVT__ifid_inst))
                                               ? 1U
                                               : 0U)));
    vlSelf->__PVT__idexe_addsubsel = ((~ ((IData)(vlSymsp->TOP.rst_i) 
                                          | (IData)(vlSelf->__PVT__pipectrl_flushid))) 
                                      & (((0x33U == 
                                           (0x7fU & vlSelf->__PVT__ifid_inst)) 
                                          & (0x20U 
                                             == (vlSelf->__PVT__ifid_inst 
                                                 >> 0x19U))) 
                                         & (0U == (IData)(vlSelf->__PVT__decode0__DOT__opfunc3))));
    vlSelf->__PVT__idfwd_addr2 = (((IData)(vlSymsp->TOP.rst_i) 
                                   | (IData)(vlSelf->__PVT__pipectrl_flushid))
                                   ? 0U : (0x1fU & 
                                           (vlSelf->__PVT__ifid_inst 
                                            >> 0x14U)));
    vlSelf->__PVT__exemem_opfunc3 = ((IData)(vlSymsp->TOP.rst_i)
                                      ? 0U : (IData)(vlSelf->__PVT__idexe_opfunc3));
    vlSelf->__PVT__exemem_memwe = ((~ (IData)(vlSymsp->TOP.rst_i)) 
                                   & (IData)(vlSelf->__PVT__idexe_memwe));
    vlSelf->__PVT__exemem_memre = ((~ (IData)(vlSymsp->TOP.rst_i)) 
                                   & (IData)(vlSelf->__PVT__idexe_memre));
    vlSelf->__Vdly__ifid_inst = (((IData)(vlSymsp->TOP.rst_i) 
                                  | (IData)(vlSelf->__PVT__exepipe_je))
                                  ? 0U : ((IData)(vlSelf->__PVT__idpipectrl_loadusehazard)
                                           ? vlSelf->__PVT__ifid_inst
                                           : ((vlSymsp->TOP__coretop__dpram0.__PVT__mem
                                               [(0x1ffffcU 
                                                 & vlSelf->__PVT__pc_wire)] 
                                               << 0x18U) 
                                              | ((vlSymsp->TOP__coretop__dpram0.__PVT__mem
                                                  [
                                                  (0x1fffffU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      (0x1ffffcU 
                                                       & vlSelf->__PVT__pc_wire)))] 
                                                  << 0x10U) 
                                                 | ((vlSymsp->TOP__coretop__dpram0.__PVT__mem
                                                     [
                                                     (0x1fffffU 
                                                      & ((IData)(2U) 
                                                         + 
                                                         (0x1ffffcU 
                                                          & vlSelf->__PVT__pc_wire)))] 
                                                     << 8U) 
                                                    | vlSymsp->TOP__coretop__dpram0.__PVT__mem
                                                    [
                                                    (0x1fffffU 
                                                     & ((IData)(3U) 
                                                        + 
                                                        (0x1ffffcU 
                                                         & vlSelf->__PVT__pc_wire)))])))));
    if (((IData)(vlSymsp->TOP.rst_i) | (IData)(vlSelf->__PVT__pipectrl_flushid))) {
        vlSelf->__PVT__idexe_optype = 0U;
        vlSelf->__PVT__idfwd_addr1 = 0U;
    } else {
        vlSelf->__PVT__idexe_optype = vlSelf->__PVT__decode0__DOT__optype;
        vlSelf->__PVT__idfwd_addr1 = (0x1fU & (vlSelf->__PVT__ifid_inst 
                                               >> 0xfU));
    }
    if (vlSymsp->TOP.rst_i) {
        vlSelf->__PVT__exemem_rddata = 0U;
        vlSelf->__PVT__exemem_memaddr = 0U;
    } else {
        vlSelf->__PVT__exemem_rddata = vlSelf->__PVT__exe0__DOT__op_result;
        vlSelf->__PVT__exemem_memaddr = (vlSelf->__PVT__fwdexe_rs1 
                                         + vlSelf->__PVT__idexe_imm);
    }
    vlSelf->__PVT__wbreg_we = ((~ (IData)(vlSymsp->TOP.rst_i)) 
                               & (IData)(vlSelf->__PVT__memwb_we));
    if (((IData)(vlSymsp->TOP.rst_i) | (IData)(vlSelf->__PVT__pipectrl_flushid))) {
        vlSelf->__PVT__idfwd_rs2 = 0U;
        vlSelf->__PVT__idfwd_rs1 = 0U;
    } else {
        vlSelf->__PVT__idfwd_rs2 = (((IData)(vlSymsp->TOP__coretop__regfiles0.__PVT__we) 
                                     & ((0x1fU & (vlSelf->__PVT__ifid_inst 
                                                  >> 0x14U)) 
                                        == (IData)(vlSelf->__PVT__wbreg_rdaddr)))
                                     ? vlSelf->__PVT__wbreg_rddata
                                     : vlSymsp->TOP__coretop__regfiles0.__PVT__x
                                    [(0x1fU & (vlSelf->__PVT__ifid_inst 
                                               >> 0x14U))]);
        vlSelf->__PVT__idfwd_rs1 = (((IData)(vlSymsp->TOP__coretop__regfiles0.__PVT__we) 
                                     & ((0x1fU & (vlSelf->__PVT__ifid_inst 
                                                  >> 0xfU)) 
                                        == (IData)(vlSelf->__PVT__wbreg_rdaddr)))
                                     ? vlSelf->__PVT__wbreg_rddata
                                     : vlSymsp->TOP__coretop__regfiles0.__PVT__x
                                    [(0x1fU & (vlSelf->__PVT__ifid_inst 
                                               >> 0xfU))]);
    }
    vlSelf->__PVT__ifid_pc = __Vdly__ifid_pc;
    vlSelf->__PVT__pc_wire = __Vdly__pc_wire;
    vlSelf->__PVT__idexe_opfunc3 = (((IData)(vlSymsp->TOP.rst_i) 
                                     | (IData)(vlSelf->__PVT__pipectrl_flushid))
                                     ? 0U : (IData)(vlSelf->__PVT__decode0__DOT__opfunc3));
    vlSelf->__PVT__idexe_memwe = ((~ ((IData)(vlSymsp->TOP.rst_i) 
                                      | (IData)(vlSelf->__PVT__pipectrl_flushid))) 
                                  & (0x23U == (0x7fU 
                                               & vlSelf->__PVT__ifid_inst)));
    vlSelf->__PVT__idexe_memre = ((~ ((IData)(vlSymsp->TOP.rst_i) 
                                      | (IData)(vlSelf->__PVT__pipectrl_flushid))) 
                                  & (3U == (0x7fU & vlSelf->__PVT__ifid_inst)));
    vlSelf->__PVT__idexe_imm = (((IData)(vlSymsp->TOP.rst_i) 
                                 | (IData)(vlSelf->__PVT__pipectrl_flushid))
                                 ? 0U : vlSelf->__PVT__decode0__DOT__imm);
    vlSelf->__PVT__memwb_we = ((~ (IData)(vlSymsp->TOP.rst_i)) 
                               & (IData)(vlSelf->__PVT__exemem_we));
    vlSelf->__PVT__exemem_we = ((~ (IData)(vlSymsp->TOP.rst_i)) 
                                & (IData)(vlSelf->__PVT__idexe_we));
    vlSelf->__PVT__idexe_we = ((~ ((IData)(vlSymsp->TOP.rst_i) 
                                   | (IData)(vlSelf->__PVT__pipectrl_flushid))) 
                               & (((((((0x13U == (0x7fU 
                                                  & vlSelf->__PVT__ifid_inst)) 
                                       | (IData)(vlSelf->__PVT__decode0__DOT__Rtype)) 
                                      | (3U == (0x7fU 
                                                & vlSelf->__PVT__ifid_inst))) 
                                     | (0x37U == (0x7fU 
                                                  & vlSelf->__PVT__ifid_inst))) 
                                    | (0x17U == (0x7fU 
                                                 & vlSelf->__PVT__ifid_inst))) 
                                   | (0x6fU == (0x7fU 
                                                & vlSelf->__PVT__ifid_inst))) 
                                  | (0x67U == (0x7fU 
                                               & vlSelf->__PVT__ifid_inst))));
}

extern const VlUnpacked<CData/*2:0*/, 256> Vcoretop__ConstPool__TABLE_dce31aa4_0;

VL_INLINE_OPT void Vcoretop_coretop___sequent__TOP__coretop__2(Vcoretop_coretop* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcoretop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vcoretop_coretop___sequent__TOP__coretop__2\n"); );
    // Variables
    CData/*7:0*/ __Vtableidx1;
    // Body
    if (vlSelf->__PVT__exemem_memwe) {
        vlSelf->__PVT__memrom_memwe = vlSelf->__PVT__exemem_memwe;
    }
    if (vlSelf->__PVT__exemem_memwe) {
        vlSelf->__PVT__memrom_ramaddr = vlSelf->__PVT__exemem_memaddr;
    }
    if (vlSelf->__PVT__exemem_memre) {
        vlSelf->__PVT__memrom_ramaddr = vlSelf->__PVT__exemem_memaddr;
        if ((4U & (IData)(vlSelf->__PVT__exemem_opfunc3))) {
            if ((2U & (IData)(vlSelf->__PVT__exemem_opfunc3))) {
                vlSelf->__PVT__memrom_ramaddr = 0U;
            }
        } else if ((2U & (IData)(vlSelf->__PVT__exemem_opfunc3))) {
            if ((1U & (IData)(vlSelf->__PVT__exemem_opfunc3))) {
                vlSelf->__PVT__memrom_ramaddr = 0U;
            }
        }
    }
    if (vlSymsp->TOP.rst_i) {
        vlSelf->__PVT__wbreg_rddata = 0U;
        vlSelf->__PVT__wbreg_rdaddr = 0U;
        vlSelf->__PVT__memwb_rddata = 0U;
        vlSelf->__PVT__memwb_rdaddr = 0U;
        vlSelf->__PVT__exemem_rdaddr = 0U;
    } else {
        vlSelf->__PVT__wbreg_rddata = vlSelf->__PVT__memwb_rddata;
        vlSelf->__PVT__wbreg_rdaddr = vlSelf->__PVT__memwb_rdaddr;
        vlSelf->__PVT__memwb_rddata = vlSelf->__PVT__mem0__DOT__rd_data;
        vlSelf->__PVT__memwb_rdaddr = vlSelf->__PVT__exemem_rdaddr;
        vlSelf->__PVT__exemem_rdaddr = vlSelf->__PVT__idexe_rdaddr;
    }
    vlSelf->__PVT__idexe_rdaddr = (((IData)(vlSymsp->TOP.rst_i) 
                                    | (IData)(vlSelf->__PVT__pipectrl_flushid))
                                    ? 0U : (0x1fU & 
                                            (vlSelf->__PVT__ifid_inst 
                                             >> 7U)));
    vlSelf->__PVT__exe0__DOT__op2 = (((1U == (IData)(vlSelf->__PVT__idexe_optype)) 
                                      | (4U == (IData)(vlSelf->__PVT__idexe_optype)))
                                      ? vlSelf->__PVT__idexe_imm
                                      : ((((IData)(vlSelf->__PVT__exemem_we) 
                                           & (0U != (IData)(vlSelf->__PVT__exemem_rdaddr))) 
                                          & ((IData)(vlSelf->__PVT__idfwd_addr2) 
                                             == (IData)(vlSelf->__PVT__exemem_rdaddr)))
                                          ? vlSelf->__PVT__exemem_rddata
                                          : ((((IData)(vlSelf->__PVT__memwb_we) 
                                               & (0U 
                                                  != (IData)(vlSelf->__PVT__memwb_rdaddr))) 
                                              & ((IData)(vlSelf->__PVT__idfwd_addr2) 
                                                 == (IData)(vlSelf->__PVT__memwb_rdaddr)))
                                              ? vlSelf->__PVT__memwb_rddata
                                              : ((((IData)(vlSelf->__PVT__wbreg_we) 
                                                   & (0U 
                                                      != (IData)(vlSelf->__PVT__wbreg_rdaddr))) 
                                                  & ((IData)(vlSelf->__PVT__idfwd_addr2) 
                                                     == (IData)(vlSelf->__PVT__wbreg_rdaddr)))
                                                  ? vlSelf->__PVT__wbreg_rddata
                                                  : vlSelf->__PVT__idfwd_rs2))));
    vlSelf->__PVT__fwdexe_rs1 = ((((IData)(vlSelf->__PVT__exemem_we) 
                                   & (0U != (IData)(vlSelf->__PVT__exemem_rdaddr))) 
                                  & ((IData)(vlSelf->__PVT__idfwd_addr1) 
                                     == (IData)(vlSelf->__PVT__exemem_rdaddr)))
                                  ? vlSelf->__PVT__exemem_rddata
                                  : ((((IData)(vlSelf->__PVT__memwb_we) 
                                       & (0U != (IData)(vlSelf->__PVT__memwb_rdaddr))) 
                                      & ((IData)(vlSelf->__PVT__idfwd_addr1) 
                                         == (IData)(vlSelf->__PVT__memwb_rdaddr)))
                                      ? vlSelf->__PVT__memwb_rddata
                                      : ((((IData)(vlSelf->__PVT__wbreg_we) 
                                           & (0U != (IData)(vlSelf->__PVT__wbreg_rdaddr))) 
                                          & ((IData)(vlSelf->__PVT__idfwd_addr1) 
                                             == (IData)(vlSelf->__PVT__wbreg_rdaddr)))
                                          ? vlSelf->__PVT__wbreg_rddata
                                          : vlSelf->__PVT__idfwd_rs1)));
    vlSelf->__PVT__ifid_inst = vlSelf->__Vdly__ifid_inst;
    vlSelf->__PVT__exe0__DOT__op1 = ((4U == (IData)(vlSelf->__PVT__idexe_optype))
                                      ? 0U : vlSelf->__PVT__fwdexe_rs1);
    vlSelf->__PVT__decode0__DOT__opfunc3 = ((0x37U 
                                             == (0x7fU 
                                                 & vlSelf->__PVT__ifid_inst))
                                             ? 0U : 
                                            (7U & (vlSelf->__PVT__ifid_inst 
                                                   >> 0xcU)));
    vlSelf->__PVT__decode0__DOT__immI = (((- (IData)(
                                                     (vlSelf->__PVT__ifid_inst 
                                                      >> 0x1fU))) 
                                          << 0xcU) 
                                         | (vlSelf->__PVT__ifid_inst 
                                            >> 0x14U));
    vlSelf->__PVT__decode0__DOT__Rtype = ((0x33U == 
                                           (0x7fU & vlSelf->__PVT__ifid_inst)) 
                                          & (1U != 
                                             (vlSelf->__PVT__ifid_inst 
                                              >> 0x19U)));
    vlSelf->__PVT__exepipe_jumpaddr = 0U;
    if ((1U & (~ (((0U == (IData)(vlSelf->__PVT__idexe_optype)) 
                   | (1U == (IData)(vlSelf->__PVT__idexe_optype))) 
                  | (4U == (IData)(vlSelf->__PVT__idexe_optype)))))) {
        if ((2U == (IData)(vlSelf->__PVT__idexe_optype))) {
            vlSelf->__PVT__exepipe_jumpaddr = (vlSelf->__PVT__idexe_pc 
                                               + vlSelf->__PVT__idexe_imm);
        } else if ((3U != (IData)(vlSelf->__PVT__idexe_optype))) {
            if ((5U != (IData)(vlSelf->__PVT__idexe_optype))) {
                vlSelf->__PVT__exepipe_jumpaddr = (
                                                   (6U 
                                                    == (IData)(vlSelf->__PVT__idexe_optype))
                                                    ? 
                                                   ((IData)(vlSelf->__PVT__idexe_jtypesel)
                                                     ? 
                                                    (vlSelf->__PVT__idexe_pc 
                                                     + vlSelf->__PVT__idexe_imm)
                                                     : 
                                                    (vlSelf->__PVT__exe0__DOT__op1 
                                                     + vlSelf->__PVT__idexe_imm))
                                                    : 0U);
            }
        }
    }
    vlSelf->__PVT__exe0__DOT__op_result = 0U;
    if ((((0U == (IData)(vlSelf->__PVT__idexe_optype)) 
          | (1U == (IData)(vlSelf->__PVT__idexe_optype))) 
         | (4U == (IData)(vlSelf->__PVT__idexe_optype)))) {
        vlSelf->__PVT__exe0__DOT__op_result = ((4U 
                                                & (IData)(vlSelf->__PVT__idexe_opfunc3))
                                                ? (
                                                   (2U 
                                                    & (IData)(vlSelf->__PVT__idexe_opfunc3))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->__PVT__idexe_opfunc3))
                                                     ? 
                                                    (vlSelf->__PVT__exe0__DOT__op1 
                                                     & vlSelf->__PVT__exe0__DOT__op2)
                                                     : 
                                                    (vlSelf->__PVT__exe0__DOT__op1 
                                                     | vlSelf->__PVT__exe0__DOT__op2))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->__PVT__idexe_opfunc3))
                                                     ? 
                                                    ((IData)(vlSelf->__PVT__idexe_shiftsel)
                                                      ? 
                                                     VL_SHIFTRS_III(32,32,5, vlSelf->__PVT__exe0__DOT__op1, 
                                                                    (0x1fU 
                                                                     & vlSelf->__PVT__exe0__DOT__op2))
                                                      : 
                                                     (vlSelf->__PVT__exe0__DOT__op1 
                                                      >> 
                                                      (0x1fU 
                                                       & vlSelf->__PVT__exe0__DOT__op2)))
                                                     : 
                                                    (vlSelf->__PVT__exe0__DOT__op1 
                                                     ^ vlSelf->__PVT__exe0__DOT__op2)))
                                                : (
                                                   (2U 
                                                    & (IData)(vlSelf->__PVT__idexe_opfunc3))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->__PVT__idexe_opfunc3))
                                                     ? 
                                                    ((vlSelf->__PVT__exe0__DOT__op1 
                                                      < vlSelf->__PVT__exe0__DOT__op2)
                                                      ? 1U
                                                      : 0U)
                                                     : 
                                                    (VL_LTS_III(1,32,32, vlSelf->__PVT__exe0__DOT__op1, vlSelf->__PVT__exe0__DOT__op2)
                                                      ? 1U
                                                      : 0U))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->__PVT__idexe_opfunc3))
                                                     ? 
                                                    (vlSelf->__PVT__exe0__DOT__op1 
                                                     << 
                                                     (0x1fU 
                                                      & vlSelf->__PVT__exe0__DOT__op2))
                                                     : 
                                                    ((IData)(vlSelf->__PVT__idexe_addsubsel)
                                                      ? 
                                                     ((IData)(1U) 
                                                      + 
                                                      (vlSelf->__PVT__exe0__DOT__op1 
                                                       + 
                                                       (~ vlSelf->__PVT__exe0__DOT__op2)))
                                                      : 
                                                     (vlSelf->__PVT__exe0__DOT__op1 
                                                      + vlSelf->__PVT__exe0__DOT__op2)))));
    } else if ((2U != (IData)(vlSelf->__PVT__idexe_optype))) {
        vlSelf->__PVT__exe0__DOT__op_result = ((3U 
                                                == (IData)(vlSelf->__PVT__idexe_optype))
                                                ? vlSelf->__PVT__exe0__DOT__op2
                                                : (
                                                   (5U 
                                                    == (IData)(vlSelf->__PVT__idexe_optype))
                                                    ? 
                                                   (vlSelf->__PVT__idexe_pc 
                                                    + vlSelf->__PVT__idexe_imm)
                                                    : 
                                                   ((6U 
                                                     == (IData)(vlSelf->__PVT__idexe_optype))
                                                     ? 
                                                    ((IData)(4U) 
                                                     + vlSelf->__PVT__idexe_pc)
                                                     : 0U)));
    }
    vlSelf->__PVT__exepipe_je = 0U;
    if ((1U & (~ (((0U == (IData)(vlSelf->__PVT__idexe_optype)) 
                   | (1U == (IData)(vlSelf->__PVT__idexe_optype))) 
                  | (4U == (IData)(vlSelf->__PVT__idexe_optype)))))) {
        if ((2U == (IData)(vlSelf->__PVT__idexe_optype))) {
            vlSelf->__PVT__exepipe_je = (1U & ((4U 
                                                & (IData)(vlSelf->__PVT__idexe_opfunc3))
                                                ? (
                                                   (2U 
                                                    & (IData)(vlSelf->__PVT__idexe_opfunc3))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->__PVT__idexe_opfunc3))
                                                     ? 
                                                    ((vlSelf->__PVT__exe0__DOT__op1 
                                                      >= vlSelf->__PVT__exe0__DOT__op2)
                                                      ? 1U
                                                      : 0U)
                                                     : 
                                                    ((vlSelf->__PVT__exe0__DOT__op1 
                                                      < vlSelf->__PVT__exe0__DOT__op2)
                                                      ? 1U
                                                      : 0U))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->__PVT__idexe_opfunc3))
                                                     ? 
                                                    (VL_GTES_III(1,32,32, vlSelf->__PVT__exe0__DOT__op1, vlSelf->__PVT__exe0__DOT__op2)
                                                      ? 1U
                                                      : 0U)
                                                     : 
                                                    (VL_LTS_III(1,32,32, vlSelf->__PVT__exe0__DOT__op1, vlSelf->__PVT__exe0__DOT__op2)
                                                      ? 1U
                                                      : 0U)))
                                                : (
                                                   (~ 
                                                    ((IData)(vlSelf->__PVT__idexe_opfunc3) 
                                                     >> 1U)) 
                                                   & ((1U 
                                                       & (IData)(vlSelf->__PVT__idexe_opfunc3))
                                                       ? 
                                                      ((vlSelf->__PVT__exe0__DOT__op1 
                                                        != vlSelf->__PVT__exe0__DOT__op2)
                                                        ? 1U
                                                        : 0U)
                                                       : 
                                                      ((vlSelf->__PVT__exe0__DOT__op1 
                                                        == vlSelf->__PVT__exe0__DOT__op2)
                                                        ? 1U
                                                        : 0U)))));
        } else if ((3U != (IData)(vlSelf->__PVT__idexe_optype))) {
            if ((5U != (IData)(vlSelf->__PVT__idexe_optype))) {
                vlSelf->__PVT__exepipe_je = (6U == (IData)(vlSelf->__PVT__idexe_optype));
            }
        }
    }
    vlSelf->__PVT__decode0__DOT__imm = (((((((((- (IData)(
                                                          (0x13U 
                                                           == 
                                                           (0x7fU 
                                                            & vlSelf->__PVT__ifid_inst)))) 
                                               & vlSelf->__PVT__decode0__DOT__immI) 
                                              | ((- (IData)(
                                                            (3U 
                                                             == 
                                                             (0x7fU 
                                                              & vlSelf->__PVT__ifid_inst)))) 
                                                 & (((- (IData)(
                                                                (vlSelf->__PVT__ifid_inst 
                                                                 >> 0x1fU))) 
                                                     << 0xcU) 
                                                    | (vlSelf->__PVT__ifid_inst 
                                                       >> 0x14U)))) 
                                             | ((- (IData)(
                                                           (0x23U 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->__PVT__ifid_inst)))) 
                                                & (((- (IData)(
                                                               (vlSelf->__PVT__ifid_inst 
                                                                >> 0x1fU))) 
                                                    << 0xcU) 
                                                   | ((0xfe0U 
                                                       & (vlSelf->__PVT__ifid_inst 
                                                          >> 0x14U)) 
                                                      | (0x1fU 
                                                         & (vlSelf->__PVT__ifid_inst 
                                                            >> 7U)))))) 
                                            | (0xfffff000U 
                                               & ((- (IData)(
                                                             (0x37U 
                                                              == 
                                                              (0x7fU 
                                                               & vlSelf->__PVT__ifid_inst)))) 
                                                  & vlSelf->__PVT__ifid_inst))) 
                                           | (0xfffff000U 
                                              & ((- (IData)(
                                                            (0x17U 
                                                             == 
                                                             (0x7fU 
                                                              & vlSelf->__PVT__ifid_inst)))) 
                                                 & vlSelf->__PVT__ifid_inst))) 
                                          | ((- (IData)(
                                                        (0x6fU 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->__PVT__ifid_inst)))) 
                                             & (((- (IData)(
                                                            (vlSelf->__PVT__ifid_inst 
                                                             >> 0x1fU))) 
                                                 << 0x14U) 
                                                | ((0xff000U 
                                                    & vlSelf->__PVT__ifid_inst) 
                                                   | ((0x800U 
                                                       & (vlSelf->__PVT__ifid_inst 
                                                          >> 9U)) 
                                                      | (0x7feU 
                                                         & (vlSelf->__PVT__ifid_inst 
                                                            >> 0x14U))))))) 
                                         | ((- (IData)(
                                                       (0x67U 
                                                        == 
                                                        (0x7fU 
                                                         & vlSelf->__PVT__ifid_inst)))) 
                                            & vlSelf->__PVT__decode0__DOT__immI)) 
                                        | ((- (IData)(
                                                      (0x63U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->__PVT__ifid_inst)))) 
                                           & (((- (IData)(
                                                          (vlSelf->__PVT__ifid_inst 
                                                           >> 0x1fU))) 
                                               << 0xcU) 
                                              | ((0x800U 
                                                  & (vlSelf->__PVT__ifid_inst 
                                                     << 4U)) 
                                                 | ((0x7e0U 
                                                     & (vlSelf->__PVT__ifid_inst 
                                                        >> 0x14U)) 
                                                    | (0x1eU 
                                                       & (vlSelf->__PVT__ifid_inst 
                                                          >> 7U)))))));
    __Vtableidx1 = (((0x67U == (0x7fU & vlSelf->__PVT__ifid_inst)) 
                     << 7U) | (((0x6fU == (0x7fU & vlSelf->__PVT__ifid_inst)) 
                                << 6U) | (((0x17U == 
                                            (0x7fU 
                                             & vlSelf->__PVT__ifid_inst)) 
                                           << 5U) | 
                                          (((0x37U 
                                             == (0x7fU 
                                                 & vlSelf->__PVT__ifid_inst)) 
                                            << 4U) 
                                           | (((0x23U 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->__PVT__ifid_inst)) 
                                               << 3U) 
                                              | (((0x63U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->__PVT__ifid_inst)) 
                                                  << 2U) 
                                                 | (((0x13U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->__PVT__ifid_inst)) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->__PVT__decode0__DOT__Rtype))))))));
    vlSelf->__PVT__decode0__DOT__optype = Vcoretop__ConstPool__TABLE_dce31aa4_0
        [__Vtableidx1];
    vlSelf->__PVT__idpipectrl_loadusehazard = (((((0x1fU 
                                                   & (vlSelf->__PVT__ifid_inst 
                                                      >> 0xfU)) 
                                                  == (IData)(vlSelf->__PVT__idexe_rdaddr)) 
                                                 & ((((IData)(vlSelf->__PVT__decode0__DOT__Rtype) 
                                                      | (0x23U 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->__PVT__ifid_inst))) 
                                                     | (0x63U 
                                                        == 
                                                        (0x7fU 
                                                         & vlSelf->__PVT__ifid_inst))) 
                                                    | (0x13U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->__PVT__ifid_inst)))) 
                                                | (((0x1fU 
                                                     & (vlSelf->__PVT__ifid_inst 
                                                        >> 0x14U)) 
                                                    == (IData)(vlSelf->__PVT__idexe_rdaddr)) 
                                                   & (((IData)(vlSelf->__PVT__decode0__DOT__Rtype) 
                                                       | (0x23U 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->__PVT__ifid_inst))) 
                                                      | (0x63U 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->__PVT__ifid_inst))))) 
                                               & (IData)(vlSelf->__PVT__idexe_memre));
    vlSelf->__PVT__pipectrl_flushid = ((IData)(vlSelf->__PVT__idpipectrl_loadusehazard) 
                                       | (IData)(vlSelf->__PVT__exepipe_je));
}

VL_INLINE_OPT void Vcoretop_coretop___sequent__TOP__coretop__3(Vcoretop_coretop* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcoretop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vcoretop_coretop___sequent__TOP__coretop__3\n"); );
    // Body
    if (vlSelf->__PVT__exemem_memwe) {
        vlSelf->__PVT__memrom_ramdata = ((0U == (IData)(vlSelf->__PVT__exemem_opfunc3))
                                          ? ((2U & vlSelf->__PVT__exemem_memaddr)
                                              ? ((1U 
                                                  & vlSelf->__PVT__exemem_memaddr)
                                                  ? 
                                                 ((vlSelf->__PVT__exemem_rddata 
                                                   << 0x18U) 
                                                  | (0xffffffU 
                                                     & vlSymsp->TOP__coretop__dpram0.__PVT__ram_data_o))
                                                  : 
                                                 ((0xff000000U 
                                                   & vlSymsp->TOP__coretop__dpram0.__PVT__ram_data_o) 
                                                  | ((0xff0000U 
                                                      & (vlSelf->__PVT__exemem_rddata 
                                                         << 0x10U)) 
                                                     | (0xffffU 
                                                        & vlSymsp->TOP__coretop__dpram0.__PVT__ram_data_o))))
                                              : ((1U 
                                                  & vlSelf->__PVT__exemem_memaddr)
                                                  ? 
                                                 ((0xffff0000U 
                                                   & vlSymsp->TOP__coretop__dpram0.__PVT__ram_data_o) 
                                                  | ((0xff00U 
                                                      & (vlSelf->__PVT__exemem_rddata 
                                                         << 8U)) 
                                                     | (0xffU 
                                                        & vlSymsp->TOP__coretop__dpram0.__PVT__ram_data_o)))
                                                  : 
                                                 ((0xffffff00U 
                                                   & vlSymsp->TOP__coretop__dpram0.__PVT__ram_data_o) 
                                                  | (0xffU 
                                                     & vlSelf->__PVT__exemem_rddata))))
                                          : ((1U == (IData)(vlSelf->__PVT__exemem_opfunc3))
                                              ? ((0U 
                                                  == 
                                                  (3U 
                                                   & vlSelf->__PVT__exemem_memaddr))
                                                  ? 
                                                 ((0xffff0000U 
                                                   & vlSymsp->TOP__coretop__dpram0.__PVT__ram_data_o) 
                                                  | (0xffffU 
                                                     & vlSelf->__PVT__exemem_rddata))
                                                  : 
                                                 ((2U 
                                                   == 
                                                   (3U 
                                                    & vlSelf->__PVT__exemem_memaddr))
                                                   ? 
                                                  ((vlSelf->__PVT__exemem_rddata 
                                                    << 0x10U) 
                                                   | (0xffffU 
                                                      & vlSymsp->TOP__coretop__dpram0.__PVT__ram_data_o))
                                                   : 0U))
                                              : ((2U 
                                                  == (IData)(vlSelf->__PVT__exemem_opfunc3))
                                                  ? vlSelf->__PVT__exemem_rddata
                                                  : 0U)));
    }
    vlSelf->__PVT__mem0__DOT__rd_data = ((IData)(vlSelf->__PVT__exemem_memre)
                                          ? ((4U & (IData)(vlSelf->__PVT__exemem_opfunc3))
                                              ? ((2U 
                                                  & (IData)(vlSelf->__PVT__exemem_opfunc3))
                                                  ? 0U
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->__PVT__exemem_opfunc3))
                                                   ? 
                                                  ((0U 
                                                    == 
                                                    (3U 
                                                     & vlSelf->__PVT__exemem_memaddr))
                                                    ? 
                                                   (0xffffU 
                                                    & vlSymsp->TOP__coretop__dpram0.__PVT__ram_data_o)
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (3U 
                                                      & vlSelf->__PVT__exemem_memaddr))
                                                     ? 
                                                    (vlSymsp->TOP__coretop__dpram0.__PVT__ram_data_o 
                                                     >> 0x10U)
                                                     : 0U))
                                                   : 
                                                  ((2U 
                                                    & vlSelf->__PVT__exemem_memaddr)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->__PVT__exemem_memaddr)
                                                     ? 
                                                    (vlSymsp->TOP__coretop__dpram0.__PVT__ram_data_o 
                                                     >> 0x18U)
                                                     : 
                                                    (0xffU 
                                                     & (vlSymsp->TOP__coretop__dpram0.__PVT__ram_data_o 
                                                        >> 0x10U)))
                                                    : 
                                                   ((1U 
                                                     & vlSelf->__PVT__exemem_memaddr)
                                                     ? 
                                                    (0xffU 
                                                     & (vlSymsp->TOP__coretop__dpram0.__PVT__ram_data_o 
                                                        >> 8U))
                                                     : 
                                                    (0xffU 
                                                     & vlSymsp->TOP__coretop__dpram0.__PVT__ram_data_o)))))
                                              : ((2U 
                                                  & (IData)(vlSelf->__PVT__exemem_opfunc3))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->__PVT__exemem_opfunc3))
                                                   ? 0U
                                                   : vlSymsp->TOP__coretop__dpram0.__PVT__ram_data_o)
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->__PVT__exemem_opfunc3))
                                                   ? 
                                                  ((0U 
                                                    == 
                                                    (3U 
                                                     & vlSelf->__PVT__exemem_memaddr))
                                                    ? 
                                                   (((- (IData)(
                                                                (1U 
                                                                 & (vlSymsp->TOP__coretop__dpram0.__PVT__ram_data_o 
                                                                    >> 0xfU)))) 
                                                     << 0x10U) 
                                                    | (0xffffU 
                                                       & vlSymsp->TOP__coretop__dpram0.__PVT__ram_data_o))
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (3U 
                                                      & vlSelf->__PVT__exemem_memaddr))
                                                     ? 
                                                    (((- (IData)(
                                                                 (vlSymsp->TOP__coretop__dpram0.__PVT__ram_data_o 
                                                                  >> 0x1fU))) 
                                                      << 0x10U) 
                                                     | (vlSymsp->TOP__coretop__dpram0.__PVT__ram_data_o 
                                                        >> 0x10U))
                                                     : 0U))
                                                   : 
                                                  ((2U 
                                                    & vlSelf->__PVT__exemem_memaddr)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->__PVT__exemem_memaddr)
                                                     ? 
                                                    (((- (IData)(
                                                                 (vlSymsp->TOP__coretop__dpram0.__PVT__ram_data_o 
                                                                  >> 0x1fU))) 
                                                      << 8U) 
                                                     | (vlSymsp->TOP__coretop__dpram0.__PVT__ram_data_o 
                                                        >> 0x18U))
                                                     : 
                                                    (((- (IData)(
                                                                 (1U 
                                                                  & (vlSymsp->TOP__coretop__dpram0.__PVT__ram_data_o 
                                                                     >> 0x17U)))) 
                                                      << 8U) 
                                                     | (0xffU 
                                                        & (vlSymsp->TOP__coretop__dpram0.__PVT__ram_data_o 
                                                           >> 0x10U))))
                                                    : 
                                                   ((1U 
                                                     & vlSelf->__PVT__exemem_memaddr)
                                                     ? 
                                                    (((- (IData)(
                                                                 (1U 
                                                                  & (vlSymsp->TOP__coretop__dpram0.__PVT__ram_data_o 
                                                                     >> 0xfU)))) 
                                                      << 8U) 
                                                     | (0xffU 
                                                        & (vlSymsp->TOP__coretop__dpram0.__PVT__ram_data_o 
                                                           >> 8U)))
                                                     : 
                                                    (((- (IData)(
                                                                 (1U 
                                                                  & (vlSymsp->TOP__coretop__dpram0.__PVT__ram_data_o 
                                                                     >> 7U)))) 
                                                      << 8U) 
                                                     | (0xffU 
                                                        & vlSymsp->TOP__coretop__dpram0.__PVT__ram_data_o)))))))
                                          : vlSelf->__PVT__exemem_rddata);
}
