// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Valu4__Syms.h"


//======================

void Valu4::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback(&Valu4::traceInit, &Valu4::traceFull, &Valu4::traceChg, this);
}
void Valu4::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    Valu4* t = (Valu4*)userthis;
    Valu4__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vcdp->scopeEscape(' ');
    t->traceInitThis(vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void Valu4::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    Valu4* t = (Valu4*)userthis;
    Valu4__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis(vlSymsp, vcdp, code);
}

//======================


void Valu4::traceInitThis(Valu4__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Valu4* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
        vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void Valu4::traceFullThis(Valu4__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Valu4* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void Valu4::traceInitThis__1(Valu4__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Valu4* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBus(c+33,"alua_i", false,-1, 3,0);
        vcdp->declBus(c+41,"alub_i", false,-1, 3,0);
        vcdp->declBit(c+49,"aluc_in", false,-1);
        vcdp->declBus(c+57,"aluop_i", false,-1, 1,0);
        vcdp->declBus(c+65,"aluresult", false,-1, 3,0);
        vcdp->declBit(c+73,"c_out4", false,-1);
        vcdp->declBus(c+33,"alu4 alua_i", false,-1, 3,0);
        vcdp->declBus(c+41,"alu4 alub_i", false,-1, 3,0);
        vcdp->declBit(c+49,"alu4 aluc_in", false,-1);
        vcdp->declBus(c+57,"alu4 aluop_i", false,-1, 1,0);
        vcdp->declBus(c+65,"alu4 aluresult", false,-1, 3,0);
        vcdp->declBit(c+73,"alu4 c_out4", false,-1);
        vcdp->declBus(c+1,"alu4 c_connet", false,-1, 2,0);
        vcdp->declBit(c+81,"alu4 alu01 a_i", false,-1);
        vcdp->declBit(c+89,"alu4 alu01 b_i", false,-1);
        vcdp->declBit(c+49,"alu4 alu01 c_in", false,-1);
        vcdp->declBus(c+57,"alu4 alu01 op_i", false,-1, 1,0);
        vcdp->declBit(c+97,"alu4 alu01 result", false,-1);
        vcdp->declBit(c+105,"alu4 alu01 c_out", false,-1);
        vcdp->declBit(c+97,"alu4 alu01 result_reg", false,-1);
        vcdp->declBit(c+113,"alu4 alu02 a_i", false,-1);
        vcdp->declBit(c+121,"alu4 alu02 b_i", false,-1);
        vcdp->declBit(c+9,"alu4 alu02 c_in", false,-1);
        vcdp->declBus(c+57,"alu4 alu02 op_i", false,-1, 1,0);
        vcdp->declBit(c+129,"alu4 alu02 result", false,-1);
        vcdp->declBit(c+137,"alu4 alu02 c_out", false,-1);
        vcdp->declBit(c+129,"alu4 alu02 result_reg", false,-1);
        vcdp->declBit(c+145,"alu4 alu03 a_i", false,-1);
        vcdp->declBit(c+153,"alu4 alu03 b_i", false,-1);
        vcdp->declBit(c+17,"alu4 alu03 c_in", false,-1);
        vcdp->declBus(c+57,"alu4 alu03 op_i", false,-1, 1,0);
        vcdp->declBit(c+161,"alu4 alu03 result", false,-1);
        vcdp->declBit(c+169,"alu4 alu03 c_out", false,-1);
        vcdp->declBit(c+161,"alu4 alu03 result_reg", false,-1);
        vcdp->declBit(c+177,"alu4 alu04 a_i", false,-1);
        vcdp->declBit(c+185,"alu4 alu04 b_i", false,-1);
        vcdp->declBit(c+25,"alu4 alu04 c_in", false,-1);
        vcdp->declBus(c+57,"alu4 alu04 op_i", false,-1, 1,0);
        vcdp->declBit(c+193,"alu4 alu04 result", false,-1);
        vcdp->declBit(c+73,"alu4 alu04 c_out", false,-1);
        vcdp->declBit(c+193,"alu4 alu04 result_reg", false,-1);
    }
}

void Valu4::traceFullThis__1(Valu4__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Valu4* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->fullBus(c+1,(vlTOPp->alu4__DOT__c_connet),3);
        vcdp->fullBit(c+9,((1U & (IData)(vlTOPp->alu4__DOT__c_connet))));
        vcdp->fullBit(c+17,((1U & ((IData)(vlTOPp->alu4__DOT__c_connet) 
                                   >> 1U))));
        vcdp->fullBit(c+25,((1U & ((IData)(vlTOPp->alu4__DOT__c_connet) 
                                   >> 2U))));
        vcdp->fullBus(c+33,(vlTOPp->alua_i),4);
        vcdp->fullBus(c+41,(vlTOPp->alub_i),4);
        vcdp->fullBit(c+49,(vlTOPp->aluc_in));
        vcdp->fullBus(c+57,(vlTOPp->aluop_i),2);
        vcdp->fullBus(c+65,(vlTOPp->aluresult),4);
        vcdp->fullBit(c+73,(vlTOPp->c_out4));
        vcdp->fullBit(c+81,((1U & (IData)(vlTOPp->alua_i))));
        vcdp->fullBit(c+89,((1U & (IData)(vlTOPp->alub_i))));
        vcdp->fullBit(c+97,((1U & ((2U & (IData)(vlTOPp->aluop_i))
                                    ? ((~ (IData)(vlTOPp->aluop_i)) 
                                       & (((IData)(vlTOPp->alua_i) 
                                           + (IData)(vlTOPp->alub_i)) 
                                          + (IData)(vlTOPp->aluc_in)))
                                    : ((1U & (IData)(vlTOPp->aluop_i))
                                        ? ((IData)(vlTOPp->alua_i) 
                                           | (IData)(vlTOPp->alub_i))
                                        : ((IData)(vlTOPp->alua_i) 
                                           & (IData)(vlTOPp->alub_i)))))));
        vcdp->fullBit(c+105,((1U & (((IData)(vlTOPp->alua_i) 
                                     & (IData)(vlTOPp->alub_i)) 
                                    | ((IData)(vlTOPp->aluc_in) 
                                       & ((IData)(vlTOPp->alua_i) 
                                          ^ (IData)(vlTOPp->alub_i)))))));
        vcdp->fullBit(c+113,((1U & ((IData)(vlTOPp->alua_i) 
                                    >> 1U))));
        vcdp->fullBit(c+121,((1U & ((IData)(vlTOPp->alub_i) 
                                    >> 1U))));
        vcdp->fullBit(c+129,((1U & ((2U & (IData)(vlTOPp->aluop_i))
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
        vcdp->fullBit(c+137,((1U & ((((IData)(vlTOPp->alua_i) 
                                      & (IData)(vlTOPp->alub_i)) 
                                     >> 1U) | ((IData)(vlTOPp->alu4__DOT__c_connet) 
                                               & (((IData)(vlTOPp->alua_i) 
                                                   ^ (IData)(vlTOPp->alub_i)) 
                                                  >> 1U))))));
        vcdp->fullBit(c+145,((1U & ((IData)(vlTOPp->alua_i) 
                                    >> 2U))));
        vcdp->fullBit(c+153,((1U & ((IData)(vlTOPp->alub_i) 
                                    >> 2U))));
        vcdp->fullBit(c+161,((1U & ((2U & (IData)(vlTOPp->aluop_i))
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
        vcdp->fullBit(c+169,((1U & ((((IData)(vlTOPp->alua_i) 
                                      & (IData)(vlTOPp->alub_i)) 
                                     >> 2U) | (((IData)(vlTOPp->alu4__DOT__c_connet) 
                                                >> 1U) 
                                               & (((IData)(vlTOPp->alua_i) 
                                                   ^ (IData)(vlTOPp->alub_i)) 
                                                  >> 2U))))));
        vcdp->fullBit(c+177,((1U & ((IData)(vlTOPp->alua_i) 
                                    >> 3U))));
        vcdp->fullBit(c+185,((1U & ((IData)(vlTOPp->alub_i) 
                                    >> 3U))));
        vcdp->fullBit(c+193,((1U & ((2U & (IData)(vlTOPp->aluop_i))
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
