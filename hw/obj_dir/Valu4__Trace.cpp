// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Valu4__Syms.h"


//======================

void Valu4::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    Valu4* t = (Valu4*)userthis;
    Valu4__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
        t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void Valu4::traceChgThis(Valu4__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Valu4* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 1U))))) {
            vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
        }
        vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void Valu4::traceChgThis__2(Valu4__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Valu4* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+1,(vlTOPp->alu4__DOT__c_connet),3);
        vcdp->chgBit(c+9,((1U & (IData)(vlTOPp->alu4__DOT__c_connet))));
        vcdp->chgBit(c+17,((1U & ((IData)(vlTOPp->alu4__DOT__c_connet) 
                                  >> 1U))));
        vcdp->chgBit(c+25,((1U & ((IData)(vlTOPp->alu4__DOT__c_connet) 
                                  >> 2U))));
    }
}

void Valu4::traceChgThis__3(Valu4__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Valu4* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+33,(vlTOPp->alua_i),4);
        vcdp->chgBus(c+41,(vlTOPp->alub_i),4);
        vcdp->chgBit(c+49,(vlTOPp->aluc_in));
        vcdp->chgBus(c+57,(vlTOPp->aluop_i),2);
        vcdp->chgBus(c+65,(vlTOPp->aluresult),4);
        vcdp->chgBit(c+73,(vlTOPp->c_out4));
        vcdp->chgBit(c+81,((1U & (IData)(vlTOPp->alua_i))));
        vcdp->chgBit(c+89,((1U & (IData)(vlTOPp->alub_i))));
        vcdp->chgBit(c+97,((1U & ((2U & (IData)(vlTOPp->aluop_i))
                                   ? ((~ (IData)(vlTOPp->aluop_i)) 
                                      & (((IData)(vlTOPp->alua_i) 
                                          + (IData)(vlTOPp->alub_i)) 
                                         + (IData)(vlTOPp->aluc_in)))
                                   : ((1U & (IData)(vlTOPp->aluop_i))
                                       ? ((IData)(vlTOPp->alua_i) 
                                          | (IData)(vlTOPp->alub_i))
                                       : ((IData)(vlTOPp->alua_i) 
                                          & (IData)(vlTOPp->alub_i)))))));
        vcdp->chgBit(c+105,((1U & (((IData)(vlTOPp->alua_i) 
                                    & (IData)(vlTOPp->alub_i)) 
                                   | ((IData)(vlTOPp->aluc_in) 
                                      & ((IData)(vlTOPp->alua_i) 
                                         ^ (IData)(vlTOPp->alub_i)))))));
        vcdp->chgBit(c+113,((1U & ((IData)(vlTOPp->alua_i) 
                                   >> 1U))));
        vcdp->chgBit(c+121,((1U & ((IData)(vlTOPp->alub_i) 
                                   >> 1U))));
        vcdp->chgBit(c+129,((1U & ((2U & (IData)(vlTOPp->aluop_i))
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
                                        >> 1U))))));
        vcdp->chgBit(c+137,((1U & ((((IData)(vlTOPp->alua_i) 
                                     & (IData)(vlTOPp->alub_i)) 
                                    >> 1U) | ((IData)(vlTOPp->alu4__DOT__c_connet) 
                                              & (((IData)(vlTOPp->alua_i) 
                                                  ^ (IData)(vlTOPp->alub_i)) 
                                                 >> 1U))))));
        vcdp->chgBit(c+145,((1U & ((IData)(vlTOPp->alua_i) 
                                   >> 2U))));
        vcdp->chgBit(c+153,((1U & ((IData)(vlTOPp->alub_i) 
                                   >> 2U))));
        vcdp->chgBit(c+161,((1U & ((2U & (IData)(vlTOPp->aluop_i))
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
                                        >> 2U))))));
        vcdp->chgBit(c+169,((1U & ((((IData)(vlTOPp->alua_i) 
                                     & (IData)(vlTOPp->alub_i)) 
                                    >> 2U) | (((IData)(vlTOPp->alu4__DOT__c_connet) 
                                               >> 1U) 
                                              & (((IData)(vlTOPp->alua_i) 
                                                  ^ (IData)(vlTOPp->alub_i)) 
                                                 >> 2U))))));
        vcdp->chgBit(c+177,((1U & ((IData)(vlTOPp->alua_i) 
                                   >> 3U))));
        vcdp->chgBit(c+185,((1U & ((IData)(vlTOPp->alub_i) 
                                   >> 3U))));
        vcdp->chgBit(c+193,((1U & ((2U & (IData)(vlTOPp->aluop_i))
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
                                        >> 3U))))));
    }
}
