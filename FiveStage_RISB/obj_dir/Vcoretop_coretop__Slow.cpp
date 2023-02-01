// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcoretop.h for the primary calling header

#include "Vcoretop_coretop.h"
#include "Vcoretop__Syms.h"

#include "verilated_dpi.h"

//==========


void Vcoretop_coretop___ctor_var_reset(Vcoretop_coretop* vlSelf);

Vcoretop_coretop::Vcoretop_coretop(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vcoretop_coretop___ctor_var_reset(this);
}

void Vcoretop_coretop::__Vconfigure(Vcoretop__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vcoretop_coretop::~Vcoretop_coretop() {
}

extern const VlUnpacked<CData/*2:0*/, 256> Vcoretop__ConstPool__TABLE_dce31aa4_0;

void Vcoretop_coretop___settle__TOP__coretop__4(Vcoretop_coretop* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcoretop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vcoretop_coretop___settle__TOP__coretop__4\n"); );
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
    vlSelf->__PVT__exe0__DOT__op1 = ((4U == (IData)(vlSelf->__PVT__idexe_optype))
                                      ? 0U : vlSelf->__PVT__fwdexe_rs1);
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
    vlSelf->__PVT__pipectrl_flushid = ((IData)(vlSelf->__PVT__idpipectrl_loadusehazard) 
                                       | (IData)(vlSelf->__PVT__exepipe_je));
}

void Vcoretop_coretop___ctor_var_reset(Vcoretop_coretop* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcoretop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vcoretop_coretop___ctor_var_reset\n"); );
    // Body
    vlSelf->rst_i = VL_RAND_RESET_I(1);
    vlSelf->clk_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pipectrl_flushid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pc_wire = VL_RAND_RESET_I(32);
    vlSelf->__PVT__ifid_inst = VL_RAND_RESET_I(32);
    vlSelf->__PVT__ifid_pc = VL_RAND_RESET_I(32);
    vlSelf->__PVT__idexe_pc = VL_RAND_RESET_I(32);
    vlSelf->__PVT__idexe_imm = VL_RAND_RESET_I(32);
    vlSelf->__PVT__idexe_rdaddr = VL_RAND_RESET_I(5);
    vlSelf->__PVT__idexe_we = VL_RAND_RESET_I(1);
    vlSelf->__PVT__idexe_optype = VL_RAND_RESET_I(3);
    vlSelf->__PVT__idexe_opfunc3 = VL_RAND_RESET_I(3);
    vlSelf->__PVT__idexe_shiftsel = VL_RAND_RESET_I(1);
    vlSelf->__PVT__idexe_addsubsel = VL_RAND_RESET_I(1);
    vlSelf->__PVT__idexe_jtypesel = VL_RAND_RESET_I(1);
    vlSelf->__PVT__idexe_memwe = VL_RAND_RESET_I(1);
    vlSelf->__PVT__idexe_memre = VL_RAND_RESET_I(1);
    vlSelf->__PVT__idfwd_rs1 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__idfwd_rs2 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__idfwd_addr1 = VL_RAND_RESET_I(5);
    vlSelf->__PVT__idfwd_addr2 = VL_RAND_RESET_I(5);
    vlSelf->__PVT__idpipectrl_loadusehazard = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fwdexe_rs1 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__exemem_rdaddr = VL_RAND_RESET_I(5);
    vlSelf->__PVT__exemem_rddata = VL_RAND_RESET_I(32);
    vlSelf->__PVT__exemem_we = VL_RAND_RESET_I(1);
    vlSelf->__PVT__exemem_memaddr = VL_RAND_RESET_I(32);
    vlSelf->__PVT__exemem_memre = VL_RAND_RESET_I(1);
    vlSelf->__PVT__exemem_memwe = VL_RAND_RESET_I(1);
    vlSelf->__PVT__exemem_opfunc3 = VL_RAND_RESET_I(3);
    vlSelf->__PVT__exepipe_jumpaddr = VL_RAND_RESET_I(32);
    vlSelf->__PVT__exepipe_je = VL_RAND_RESET_I(1);
    vlSelf->__PVT__memwb_rdaddr = VL_RAND_RESET_I(5);
    vlSelf->__PVT__memwb_rddata = VL_RAND_RESET_I(32);
    vlSelf->__PVT__memwb_we = VL_RAND_RESET_I(1);
    vlSelf->__PVT__memrom_ramaddr = VL_RAND_RESET_I(32);
    vlSelf->__PVT__memrom_ramdata = VL_RAND_RESET_I(32);
    vlSelf->__PVT__memrom_memwe = VL_RAND_RESET_I(1);
    vlSelf->__PVT__wbreg_rdaddr = VL_RAND_RESET_I(5);
    vlSelf->__PVT__wbreg_rddata = VL_RAND_RESET_I(32);
    vlSelf->__PVT__wbreg_we = VL_RAND_RESET_I(1);
    vlSelf->__PVT__decode0__DOT__opfunc3 = VL_RAND_RESET_I(3);
    vlSelf->__PVT__decode0__DOT__optype = VL_RAND_RESET_I(3);
    vlSelf->__PVT__decode0__DOT__immI = VL_RAND_RESET_I(32);
    vlSelf->__PVT__decode0__DOT__Rtype = VL_RAND_RESET_I(1);
    vlSelf->__PVT__decode0__DOT__imm = VL_RAND_RESET_I(32);
    vlSelf->__PVT__exe0__DOT__op1 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__exe0__DOT__op2 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__exe0__DOT__op_result = VL_RAND_RESET_I(32);
    vlSelf->__PVT__mem0__DOT__rd_data = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__ifid_inst = VL_RAND_RESET_I(32);
}
