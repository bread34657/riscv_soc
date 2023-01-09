// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Valu4.h for the primary calling header

#include "Valu4.h"
#include "Valu4__Syms.h"

//==========

VL_CTOR_IMP(Valu4) {
    Valu4__Syms* __restrict vlSymsp = __VlSymsp = new Valu4__Syms(this, name());
    Valu4* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Valu4::__Vconfigure(Valu4__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Valu4::~Valu4() {
    delete __VlSymsp; __VlSymsp=NULL;
}

void Valu4::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Valu4::eval\n"); );
    Valu4__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Valu4* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        vlSymsp->__Vm_activity = true;
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("alu4.v", 2, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Valu4::_eval_initial_loop(Valu4__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("alu4.v", 2, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void Valu4::_combo__TOP__1(Valu4__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu4::_combo__TOP__1\n"); );
    Valu4* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->aluresult = ((0xeU & (IData)(vlTOPp->aluresult)) 
                         | (1U & ((2U & (IData)(vlTOPp->aluop_i))
                                   ? ((~ (IData)(vlTOPp->aluop_i)) 
                                      & (((IData)(vlTOPp->alua_i) 
                                          + (IData)(vlTOPp->alub_i)) 
                                         + (IData)(vlTOPp->aluc_in)))
                                   : ((1U & (IData)(vlTOPp->aluop_i))
                                       ? ((IData)(vlTOPp->alua_i) 
                                          | (IData)(vlTOPp->alub_i))
                                       : ((IData)(vlTOPp->alua_i) 
                                          & (IData)(vlTOPp->alub_i))))));
    vlTOPp->alu4__DOT__c_connet = ((6U & (IData)(vlTOPp->alu4__DOT__c_connet)) 
                                   | (1U & (((IData)(vlTOPp->alua_i) 
                                             & (IData)(vlTOPp->alub_i)) 
                                            | ((IData)(vlTOPp->aluc_in) 
                                               & ((IData)(vlTOPp->alua_i) 
                                                  ^ (IData)(vlTOPp->alub_i))))));
    vlTOPp->c_out4 = (1U & ((((IData)(vlTOPp->alua_i) 
                              & (IData)(vlTOPp->alub_i)) 
                             >> 3U) | (((IData)(vlTOPp->alu4__DOT__c_connet) 
                                        >> 2U) & (((IData)(vlTOPp->alua_i) 
                                                   ^ (IData)(vlTOPp->alub_i)) 
                                                  >> 3U))));
    vlTOPp->alu4__DOT____Vcellout__alu02__c_out = (1U 
                                                   & ((((IData)(vlTOPp->alua_i) 
                                                        & (IData)(vlTOPp->alub_i)) 
                                                       >> 1U) 
                                                      | ((IData)(vlTOPp->alu4__DOT__c_connet) 
                                                         & (((IData)(vlTOPp->alua_i) 
                                                             ^ (IData)(vlTOPp->alub_i)) 
                                                            >> 1U))));
    vlTOPp->alu4__DOT____Vcellout__alu03__c_out = (1U 
                                                   & ((((IData)(vlTOPp->alua_i) 
                                                        & (IData)(vlTOPp->alub_i)) 
                                                       >> 2U) 
                                                      | (((IData)(vlTOPp->alu4__DOT__c_connet) 
                                                          >> 1U) 
                                                         & (((IData)(vlTOPp->alua_i) 
                                                             ^ (IData)(vlTOPp->alub_i)) 
                                                            >> 2U))));
    vlTOPp->aluresult = ((0xdU & (IData)(vlTOPp->aluresult)) 
                         | (2U & (((2U & (IData)(vlTOPp->aluop_i))
                                    ? ((~ (IData)(vlTOPp->aluop_i)) 
                                       & ((((IData)(vlTOPp->alua_i) 
                                            >> 1U) 
                                           + ((IData)(vlTOPp->alub_i) 
                                              >> 1U)) 
                                          + (IData)(vlTOPp->alu4__DOT__c_connet)))
                                    : ((1U & (IData)(vlTOPp->aluop_i))
                                        ? (((IData)(vlTOPp->alua_i) 
                                            | (IData)(vlTOPp->alub_i)) 
                                           >> 1U) : 
                                       (((IData)(vlTOPp->alua_i) 
                                         & (IData)(vlTOPp->alub_i)) 
                                        >> 1U))) << 1U)));
    vlTOPp->aluresult = ((0xbU & (IData)(vlTOPp->aluresult)) 
                         | (4U & (((2U & (IData)(vlTOPp->aluop_i))
                                    ? ((~ (IData)(vlTOPp->aluop_i)) 
                                       & ((((IData)(vlTOPp->alua_i) 
                                            >> 2U) 
                                           + ((IData)(vlTOPp->alub_i) 
                                              >> 2U)) 
                                          + ((IData)(vlTOPp->alu4__DOT__c_connet) 
                                             >> 1U)))
                                    : ((1U & (IData)(vlTOPp->aluop_i))
                                        ? (((IData)(vlTOPp->alua_i) 
                                            | (IData)(vlTOPp->alub_i)) 
                                           >> 2U) : 
                                       (((IData)(vlTOPp->alua_i) 
                                         & (IData)(vlTOPp->alub_i)) 
                                        >> 2U))) << 2U)));
    vlTOPp->aluresult = ((7U & (IData)(vlTOPp->aluresult)) 
                         | (8U & (((2U & (IData)(vlTOPp->aluop_i))
                                    ? ((~ (IData)(vlTOPp->aluop_i)) 
                                       & ((((IData)(vlTOPp->alua_i) 
                                            >> 3U) 
                                           + ((IData)(vlTOPp->alub_i) 
                                              >> 3U)) 
                                          + ((IData)(vlTOPp->alu4__DOT__c_connet) 
                                             >> 2U)))
                                    : ((1U & (IData)(vlTOPp->aluop_i))
                                        ? (((IData)(vlTOPp->alua_i) 
                                            | (IData)(vlTOPp->alub_i)) 
                                           >> 3U) : 
                                       (((IData)(vlTOPp->alua_i) 
                                         & (IData)(vlTOPp->alub_i)) 
                                        >> 3U))) << 3U)));
    vlTOPp->alu4__DOT__c_connet = ((5U & (IData)(vlTOPp->alu4__DOT__c_connet)) 
                                   | ((IData)(vlTOPp->alu4__DOT____Vcellout__alu02__c_out) 
                                      << 1U));
    vlTOPp->alu4__DOT__c_connet = ((3U & (IData)(vlTOPp->alu4__DOT__c_connet)) 
                                   | ((IData)(vlTOPp->alu4__DOT____Vcellout__alu03__c_out) 
                                      << 2U));
}

void Valu4::_eval(Valu4__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu4::_eval\n"); );
    Valu4* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
    vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
}

void Valu4::_eval_initial(Valu4__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu4::_eval_initial\n"); );
    Valu4* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Valu4::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu4::final\n"); );
    // Variables
    Valu4__Syms* __restrict vlSymsp = this->__VlSymsp;
    Valu4* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Valu4::_eval_settle(Valu4__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu4::_eval_settle\n"); );
    Valu4* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
}

VL_INLINE_OPT QData Valu4::_change_request(Valu4__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu4::_change_request\n"); );
    Valu4* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlTOPp->alu4__DOT__c_connet ^ vlTOPp->__Vchglast__TOP__alu4__DOT__c_connet));
    VL_DEBUG_IF( if(__req && ((vlTOPp->alu4__DOT__c_connet ^ vlTOPp->__Vchglast__TOP__alu4__DOT__c_connet))) VL_DBG_MSGF("        CHANGE: alu4.v:10: alu4.c_connet\n"); );
    // Final
    vlTOPp->__Vchglast__TOP__alu4__DOT__c_connet = vlTOPp->alu4__DOT__c_connet;
    return __req;
}

#ifdef VL_DEBUG
void Valu4::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu4::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((alua_i & 0xf0U))) {
        Verilated::overWidthError("alua_i");}
    if (VL_UNLIKELY((alub_i & 0xf0U))) {
        Verilated::overWidthError("alub_i");}
    if (VL_UNLIKELY((aluc_in & 0xfeU))) {
        Verilated::overWidthError("aluc_in");}
    if (VL_UNLIKELY((aluop_i & 0xfcU))) {
        Verilated::overWidthError("aluop_i");}
}
#endif  // VL_DEBUG

void Valu4::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu4::_ctor_var_reset\n"); );
    // Body
    alua_i = VL_RAND_RESET_I(4);
    alub_i = VL_RAND_RESET_I(4);
    aluc_in = VL_RAND_RESET_I(1);
    aluop_i = VL_RAND_RESET_I(2);
    aluresult = VL_RAND_RESET_I(4);
    c_out4 = VL_RAND_RESET_I(1);
    alu4__DOT__c_connet = VL_RAND_RESET_I(3);
    alu4__DOT____Vcellout__alu02__c_out = VL_RAND_RESET_I(1);
    alu4__DOT____Vcellout__alu03__c_out = VL_RAND_RESET_I(1);
    __Vchglast__TOP__alu4__DOT__c_connet = VL_RAND_RESET_I(3);
    __Vm_traceActivity = 0;
}
