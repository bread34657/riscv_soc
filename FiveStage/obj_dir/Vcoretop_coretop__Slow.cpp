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

void Vcoretop_coretop___settle__TOP__coretop__2(Vcoretop_coretop* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcoretop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vcoretop_coretop___settle__TOP__coretop__2\n"); );
    // Body
    vlSelf->__PVT__regfiles0__DOT__we = ((IData)(vlSelf->__PVT__wbreg_we) 
                                         & (0U != (IData)(vlSelf->__PVT__wbreg_rdaddr)));
    if (vlSelf->__PVT__idexe_optype) {
        vlSelf->__PVT__exe0__DOT__op_result = ((6U 
                                                == (IData)(vlSelf->__PVT__idexe_opfunc3))
                                                ? (vlSelf->__PVT__idexe_op1 
                                                   | ((IData)(vlSelf->__PVT__idexe_optype)
                                                       ? vlSelf->__PVT__idexe_imm
                                                       : vlSelf->__PVT__idexe_op2))
                                                : 0U);
    }
}

void Vcoretop_coretop___ctor_var_reset(Vcoretop_coretop* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcoretop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vcoretop_coretop___ctor_var_reset\n"); );
    // Body
    vlSelf->rst_i = VL_RAND_RESET_I(1);
    vlSelf->clk_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pc_wire = VL_RAND_RESET_I(32);
    vlSelf->__PVT__ifid_inst = VL_RAND_RESET_I(32);
    vlSelf->__PVT__ifid_pc = VL_RAND_RESET_I(32);
    vlSelf->__PVT__idreg_addr1 = VL_RAND_RESET_I(5);
    vlSelf->__PVT__idreg_addr2 = VL_RAND_RESET_I(5);
    vlSelf->__PVT__idexe_pc = VL_RAND_RESET_I(32);
    vlSelf->__PVT__idexe_op1 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__idexe_op2 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__idexe_imm = VL_RAND_RESET_I(32);
    vlSelf->__PVT__idexe_rdaddr = VL_RAND_RESET_I(5);
    vlSelf->__PVT__idexe_we = VL_RAND_RESET_I(1);
    vlSelf->__PVT__idexe_optype = VL_RAND_RESET_I(1);
    vlSelf->__PVT__idexe_opfunc3 = VL_RAND_RESET_I(3);
    vlSelf->__PVT__exemem_rdaddr = VL_RAND_RESET_I(5);
    vlSelf->__PVT__exemem_rddata = VL_RAND_RESET_I(32);
    vlSelf->__PVT__exemem_we = VL_RAND_RESET_I(1);
    vlSelf->__PVT__memwb_rdaddr = VL_RAND_RESET_I(5);
    vlSelf->__PVT__memwb_rddata = VL_RAND_RESET_I(32);
    vlSelf->__PVT__memwb_we = VL_RAND_RESET_I(1);
    vlSelf->__PVT__wbreg_rdaddr = VL_RAND_RESET_I(5);
    vlSelf->__PVT__wbreg_rddata = VL_RAND_RESET_I(32);
    vlSelf->__PVT__wbreg_we = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->__PVT__regfiles0__DOT__x[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__PVT__regfiles0__DOT__we = VL_RAND_RESET_I(1);
    vlSelf->__PVT__regfiles0__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__exe0__DOT__op_result = VL_RAND_RESET_I(32);
}
