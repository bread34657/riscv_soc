// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcoretop__Syms.h"


void Vcoretop___024root__traceChgSub0(Vcoretop___024root* vlSelf, VerilatedVcd* tracep);

void Vcoretop___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vcoretop___024root* const __restrict vlSelf = static_cast<Vcoretop___024root*>(voidSelf);
    Vcoretop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vcoretop___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void Vcoretop___024root__traceChgSub0(Vcoretop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcoretop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgIData(oldp+0,(vlSymsp->TOP__coretop.__PVT__pc_wire),32);
            tracep->chgIData(oldp+1,(vlSymsp->TOP__coretop.__PVT__ifid_inst),32);
            tracep->chgIData(oldp+2,(vlSymsp->TOP__coretop.__PVT__ifid_pc),32);
            tracep->chgCData(oldp+3,(vlSymsp->TOP__coretop.__PVT__idreg_addr1),5);
            tracep->chgCData(oldp+4,(vlSymsp->TOP__coretop.__PVT__idreg_addr2),5);
            tracep->chgIData(oldp+5,((((IData)(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__we) 
                                       & ((IData)(vlSymsp->TOP__coretop.__PVT__idreg_addr1) 
                                          == (IData)(vlSymsp->TOP__coretop.__PVT__wbreg_rdaddr)))
                                       ? vlSymsp->TOP__coretop.__PVT__wbreg_rddata
                                       : vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x
                                      [vlSymsp->TOP__coretop.__PVT__idreg_addr1])),32);
            tracep->chgIData(oldp+6,((((IData)(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__we) 
                                       & ((IData)(vlSymsp->TOP__coretop.__PVT__idreg_addr2) 
                                          == (IData)(vlSymsp->TOP__coretop.__PVT__wbreg_rdaddr)))
                                       ? vlSymsp->TOP__coretop.__PVT__wbreg_rddata
                                       : vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x
                                      [vlSymsp->TOP__coretop.__PVT__idreg_addr2])),32);
            tracep->chgIData(oldp+7,(vlSymsp->TOP__coretop.__PVT__idexe_pc),32);
            tracep->chgIData(oldp+8,(vlSymsp->TOP__coretop.__PVT__idexe_op1),32);
            tracep->chgIData(oldp+9,(vlSymsp->TOP__coretop.__PVT__idexe_op2),32);
            tracep->chgIData(oldp+10,(vlSymsp->TOP__coretop.__PVT__idexe_imm),32);
            tracep->chgCData(oldp+11,(vlSymsp->TOP__coretop.__PVT__idexe_rdaddr),5);
            tracep->chgBit(oldp+12,(vlSymsp->TOP__coretop.__PVT__idexe_we));
            tracep->chgBit(oldp+13,(vlSymsp->TOP__coretop.__PVT__idexe_optype));
            tracep->chgCData(oldp+14,(vlSymsp->TOP__coretop.__PVT__idexe_opfunc3),3);
            tracep->chgCData(oldp+15,(vlSymsp->TOP__coretop.__PVT__exemem_rdaddr),5);
            tracep->chgIData(oldp+16,(vlSymsp->TOP__coretop.__PVT__exemem_rddata),32);
            tracep->chgBit(oldp+17,(vlSymsp->TOP__coretop.__PVT__exemem_we));
            tracep->chgCData(oldp+18,(vlSymsp->TOP__coretop.__PVT__memwb_rdaddr),5);
            tracep->chgIData(oldp+19,(vlSymsp->TOP__coretop.__PVT__memwb_rddata),32);
            tracep->chgBit(oldp+20,(vlSymsp->TOP__coretop.__PVT__memwb_we));
            tracep->chgCData(oldp+21,(vlSymsp->TOP__coretop.__PVT__wbreg_rdaddr),5);
            tracep->chgIData(oldp+22,(vlSymsp->TOP__coretop.__PVT__wbreg_rddata),32);
            tracep->chgBit(oldp+23,(vlSymsp->TOP__coretop.__PVT__wbreg_we));
            tracep->chgIData(oldp+24,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x[0]),32);
            tracep->chgIData(oldp+25,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x[1]),32);
            tracep->chgIData(oldp+26,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x[2]),32);
            tracep->chgIData(oldp+27,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x[3]),32);
            tracep->chgIData(oldp+28,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x[4]),32);
            tracep->chgIData(oldp+29,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x[5]),32);
            tracep->chgIData(oldp+30,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x[6]),32);
            tracep->chgIData(oldp+31,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x[7]),32);
            tracep->chgIData(oldp+32,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x[8]),32);
            tracep->chgIData(oldp+33,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x[9]),32);
            tracep->chgIData(oldp+34,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x[10]),32);
            tracep->chgIData(oldp+35,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x[11]),32);
            tracep->chgIData(oldp+36,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x[12]),32);
            tracep->chgIData(oldp+37,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x[13]),32);
            tracep->chgIData(oldp+38,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x[14]),32);
            tracep->chgIData(oldp+39,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x[15]),32);
            tracep->chgIData(oldp+40,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x[16]),32);
            tracep->chgIData(oldp+41,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x[17]),32);
            tracep->chgIData(oldp+42,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x[18]),32);
            tracep->chgIData(oldp+43,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x[19]),32);
            tracep->chgIData(oldp+44,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x[20]),32);
            tracep->chgIData(oldp+45,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x[21]),32);
            tracep->chgIData(oldp+46,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x[22]),32);
            tracep->chgIData(oldp+47,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x[23]),32);
            tracep->chgIData(oldp+48,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x[24]),32);
            tracep->chgIData(oldp+49,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x[25]),32);
            tracep->chgIData(oldp+50,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x[26]),32);
            tracep->chgIData(oldp+51,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x[27]),32);
            tracep->chgIData(oldp+52,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x[28]),32);
            tracep->chgIData(oldp+53,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x[29]),32);
            tracep->chgIData(oldp+54,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x[30]),32);
            tracep->chgIData(oldp+55,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x[31]),32);
            tracep->chgIData(oldp+56,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x
                                      [1U]),32);
            tracep->chgIData(oldp+57,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x
                                      [2U]),32);
            tracep->chgIData(oldp+58,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x
                                      [3U]),32);
            tracep->chgIData(oldp+59,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x
                                      [4U]),32);
            tracep->chgIData(oldp+60,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x
                                      [5U]),32);
            tracep->chgIData(oldp+61,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x
                                      [6U]),32);
            tracep->chgIData(oldp+62,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x
                                      [7U]),32);
            tracep->chgIData(oldp+63,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x
                                      [8U]),32);
            tracep->chgIData(oldp+64,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x
                                      [9U]),32);
            tracep->chgIData(oldp+65,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x
                                      [0xaU]),32);
            tracep->chgIData(oldp+66,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x
                                      [0xbU]),32);
            tracep->chgIData(oldp+67,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x
                                      [0xcU]),32);
            tracep->chgIData(oldp+68,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x
                                      [0xdU]),32);
            tracep->chgIData(oldp+69,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x
                                      [0xeU]),32);
            tracep->chgIData(oldp+70,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x
                                      [0xfU]),32);
            tracep->chgIData(oldp+71,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x
                                      [0x10U]),32);
            tracep->chgIData(oldp+72,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x
                                      [0x11U]),32);
            tracep->chgIData(oldp+73,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x
                                      [0x12U]),32);
            tracep->chgIData(oldp+74,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x
                                      [0x13U]),32);
            tracep->chgIData(oldp+75,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x
                                      [0x14U]),32);
            tracep->chgIData(oldp+76,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x
                                      [0x15U]),32);
            tracep->chgIData(oldp+77,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x
                                      [0x16U]),32);
            tracep->chgIData(oldp+78,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x
                                      [0x17U]),32);
            tracep->chgIData(oldp+79,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x
                                      [0x18U]),32);
            tracep->chgIData(oldp+80,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x
                                      [0x19U]),32);
            tracep->chgIData(oldp+81,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x
                                      [0x1aU]),32);
            tracep->chgIData(oldp+82,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x
                                      [0x1bU]),32);
            tracep->chgIData(oldp+83,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x
                                      [0x1cU]),32);
            tracep->chgIData(oldp+84,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x
                                      [0x1dU]),32);
            tracep->chgIData(oldp+85,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x
                                      [0x1eU]),32);
            tracep->chgIData(oldp+86,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x
                                      [0x1fU]),32);
            tracep->chgBit(oldp+87,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__we));
            tracep->chgIData(oldp+88,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__i),32);
            tracep->chgCData(oldp+89,((0x7fU & vlSymsp->TOP__coretop.__PVT__ifid_inst)),7);
            tracep->chgCData(oldp+90,((7U & (vlSymsp->TOP__coretop.__PVT__ifid_inst 
                                             >> 0xcU))),3);
            tracep->chgCData(oldp+91,((vlSymsp->TOP__coretop.__PVT__ifid_inst 
                                       >> 0x19U)),7);
            tracep->chgCData(oldp+92,((0x1fU & (vlSymsp->TOP__coretop.__PVT__ifid_inst 
                                                >> 0xfU))),5);
            tracep->chgCData(oldp+93,((0x1fU & (vlSymsp->TOP__coretop.__PVT__ifid_inst 
                                                >> 0x14U))),5);
            tracep->chgCData(oldp+94,((0x1fU & (vlSymsp->TOP__coretop.__PVT__ifid_inst 
                                                >> 7U))),5);
            tracep->chgBit(oldp+95,(((0x13U == (0x7fU 
                                                & vlSymsp->TOP__coretop.__PVT__ifid_inst)) 
                                     | (0x33U == (0x7fU 
                                                  & vlSymsp->TOP__coretop.__PVT__ifid_inst)))));
            tracep->chgBit(oldp+96,((0x13U == (0x7fU 
                                               & vlSymsp->TOP__coretop.__PVT__ifid_inst))));
            tracep->chgIData(oldp+97,((((- (IData)(
                                                   (vlSymsp->TOP__coretop.__PVT__ifid_inst 
                                                    >> 0x1fU))) 
                                        << 0xcU) | 
                                       (vlSymsp->TOP__coretop.__PVT__ifid_inst 
                                        >> 0x14U))),32);
            tracep->chgBit(oldp+98,((0x33U == (0x7fU 
                                               & vlSymsp->TOP__coretop.__PVT__ifid_inst))));
            tracep->chgIData(oldp+99,(((- (IData)((0x13U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSymsp->TOP__coretop.__PVT__ifid_inst)))) 
                                       & (((- (IData)(
                                                      (vlSymsp->TOP__coretop.__PVT__ifid_inst 
                                                       >> 0x1fU))) 
                                           << 0xcU) 
                                          | (vlSymsp->TOP__coretop.__PVT__ifid_inst 
                                             >> 0x14U)))),32);
            tracep->chgIData(oldp+100,(((IData)(vlSymsp->TOP__coretop.__PVT__idexe_optype)
                                         ? vlSymsp->TOP__coretop.__PVT__idexe_imm
                                         : vlSymsp->TOP__coretop.__PVT__idexe_op2)),32);
            tracep->chgIData(oldp+101,(vlSymsp->TOP__coretop.__PVT__exe0__DOT__op_result),32);
            tracep->chgIData(oldp+102,((0x1ffffcU & vlSymsp->TOP__coretop.__PVT__pc_wire)),21);
        }
        tracep->chgBit(oldp+103,(vlSelf->rst_i));
        tracep->chgBit(oldp+104,(vlSelf->clk_i));
        tracep->chgIData(oldp+105,(((vlSymsp->TOP__coretop__rom0.__PVT__mem
                                     [(0x1ffffcU & vlSymsp->TOP__coretop.__PVT__pc_wire)] 
                                     << 0x18U) | ((
                                                   vlSymsp->TOP__coretop__rom0.__PVT__mem
                                                   [
                                                   (0x1fffffU 
                                                    & ((IData)(1U) 
                                                       + 
                                                       (0x1ffffcU 
                                                        & vlSymsp->TOP__coretop.__PVT__pc_wire)))] 
                                                   << 0x10U) 
                                                  | ((vlSymsp->TOP__coretop__rom0.__PVT__mem
                                                      [
                                                      (0x1fffffU 
                                                       & ((IData)(2U) 
                                                          + 
                                                          (0x1ffffcU 
                                                           & vlSymsp->TOP__coretop.__PVT__pc_wire)))] 
                                                      << 8U) 
                                                     | vlSymsp->TOP__coretop__rom0.__PVT__mem
                                                     [
                                                     (0x1fffffU 
                                                      & ((IData)(3U) 
                                                         + 
                                                         (0x1ffffcU 
                                                          & vlSymsp->TOP__coretop.__PVT__pc_wire)))])))),32);
    }
}

void Vcoretop___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    Vcoretop___024root* const __restrict vlSelf = static_cast<Vcoretop___024root*>(voidSelf);
    Vcoretop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    }
}
