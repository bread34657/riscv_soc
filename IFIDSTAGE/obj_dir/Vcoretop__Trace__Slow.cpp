// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcoretop__Syms.h"


void Vcoretop___024root__traceInitSub0(Vcoretop___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vcoretop___024root__traceInitTop(Vcoretop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcoretop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vcoretop___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vcoretop___024root__traceInitSub0(Vcoretop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcoretop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+88,"rst_i", false,-1);
        tracep->declBit(c+89,"clk_i", false,-1);
        tracep->declBit(c+88,"coretop rst_i", false,-1);
        tracep->declBit(c+89,"coretop clk_i", false,-1);
        tracep->declBus(c+67,"coretop pc_wire", false,-1, 31,0);
        tracep->declBus(c+90,"coretop romif_inst", false,-1, 31,0);
        tracep->declBus(c+67,"coretop romif_pc", false,-1, 31,0);
        tracep->declBus(c+68,"coretop ifid_inst", false,-1, 31,0);
        tracep->declBus(c+69,"coretop ifid_pc", false,-1, 31,0);
        tracep->declBus(c+91,"coretop idreg_addr1", false,-1, 4,0);
        tracep->declBus(c+92,"coretop idreg_addr2", false,-1, 4,0);
        tracep->declBus(c+1,"coretop regid_data1", false,-1, 31,0);
        tracep->declBus(c+2,"coretop regid_data2", false,-1, 31,0);
        tracep->declBus(c+70,"coretop idexe_pc", false,-1, 31,0);
        tracep->declBus(c+71,"coretop idexe_op1", false,-1, 31,0);
        tracep->declBus(c+72,"coretop idexe_op2", false,-1, 31,0);
        tracep->declBus(c+73,"coretop idexe_imm", false,-1, 31,0);
        tracep->declBus(c+74,"coretop idexe_rdaddr", false,-1, 4,0);
        tracep->declBit(c+75,"coretop idexe_we", false,-1);
        tracep->declBit(c+89,"coretop program_counter0 clk_i", false,-1);
        tracep->declBit(c+88,"coretop program_counter0 rst_i", false,-1);
        tracep->declBus(c+67,"coretop program_counter0 pc_o", false,-1, 31,0);
        tracep->declBit(c+89,"coretop inst_fetch0 clk_i", false,-1);
        tracep->declBit(c+88,"coretop inst_fetch0 rst_i", false,-1);
        tracep->declBus(c+67,"coretop inst_fetch0 pc_i", false,-1, 31,0);
        tracep->declBus(c+90,"coretop inst_fetch0 inst_i", false,-1, 31,0);
        tracep->declBus(c+69,"coretop inst_fetch0 pc_o", false,-1, 31,0);
        tracep->declBus(c+68,"coretop inst_fetch0 inst_o", false,-1, 31,0);
        tracep->declBit(c+89,"coretop decode0 clk_i", false,-1);
        tracep->declBit(c+88,"coretop decode0 rst_i", false,-1);
        tracep->declBus(c+69,"coretop decode0 pc_i", false,-1, 31,0);
        tracep->declBus(c+68,"coretop decode0 inst_i", false,-1, 31,0);
        tracep->declBus(c+93,"coretop decode0 reg_data1_i", false,-1, 31,0);
        tracep->declBus(c+94,"coretop decode0 reg_data2_i", false,-1, 31,0);
        tracep->declBus(c+76,"coretop decode0 reg_addr1_o", false,-1, 4,0);
        tracep->declBus(c+77,"coretop decode0 reg_addr2_o", false,-1, 4,0);
        tracep->declBus(c+70,"coretop decode0 pc_o", false,-1, 31,0);
        tracep->declBus(c+71,"coretop decode0 op1_o", false,-1, 31,0);
        tracep->declBus(c+72,"coretop decode0 op2_o", false,-1, 31,0);
        tracep->declBus(c+73,"coretop decode0 imm_o", false,-1, 31,0);
        tracep->declBus(c+74,"coretop decode0 rd_addr_o", false,-1, 4,0);
        tracep->declBit(c+75,"coretop decode0 rd_we_o", false,-1);
        tracep->declBus(c+68,"coretop decode0 rv32inst", false,-1, 31,0);
        tracep->declBus(c+78,"coretop decode0 opcode", false,-1, 6,0);
        tracep->declBus(c+79,"coretop decode0 funct3", false,-1, 2,0);
        tracep->declBus(c+80,"coretop decode0 funct7", false,-1, 6,0);
        tracep->declBus(c+81,"coretop decode0 rs1_addr", false,-1, 4,0);
        tracep->declBus(c+82,"coretop decode0 rs2_addr", false,-1, 4,0);
        tracep->declBus(c+83,"coretop decode0 rd_addr", false,-1, 4,0);
        tracep->declBit(c+84,"coretop decode0 Itype_imm", false,-1);
        tracep->declBit(c+84,"coretop decode0 reg_we", false,-1);
        tracep->declBit(c+85,"coretop decode0 immI", false,-1);
        tracep->declBit(c+86,"coretop decode0 imm", false,-1);
        tracep->declBit(c+88,"coretop regfiles0 rst_i", false,-1);
        tracep->declBit(c+89,"coretop regfiles0 clk_i", false,-1);
        tracep->declBus(c+91,"coretop regfiles0 rs1_addr_i", false,-1, 4,0);
        tracep->declBus(c+92,"coretop regfiles0 rs2_addr_i", false,-1, 4,0);
        tracep->declBus(c+1,"coretop regfiles0 rs1_data_o", false,-1, 31,0);
        tracep->declBus(c+2,"coretop regfiles0 rs2_data_o", false,-1, 31,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declBus(c+3+i*1,"coretop regfiles0 x", true,(i+0), 31,0);}}
        tracep->declBus(c+35,"coretop regfiles0 ra", false,-1, 31,0);
        tracep->declBus(c+36,"coretop regfiles0 sp", false,-1, 31,0);
        tracep->declBus(c+37,"coretop regfiles0 gp", false,-1, 31,0);
        tracep->declBus(c+38,"coretop regfiles0 tp", false,-1, 31,0);
        tracep->declBus(c+39,"coretop regfiles0 t0", false,-1, 31,0);
        tracep->declBus(c+40,"coretop regfiles0 t1", false,-1, 31,0);
        tracep->declBus(c+41,"coretop regfiles0 t2", false,-1, 31,0);
        tracep->declBus(c+42,"coretop regfiles0 s0", false,-1, 31,0);
        tracep->declBus(c+43,"coretop regfiles0 s1", false,-1, 31,0);
        tracep->declBus(c+44,"coretop regfiles0 a0", false,-1, 31,0);
        tracep->declBus(c+45,"coretop regfiles0 a1", false,-1, 31,0);
        tracep->declBus(c+46,"coretop regfiles0 a2", false,-1, 31,0);
        tracep->declBus(c+47,"coretop regfiles0 a3", false,-1, 31,0);
        tracep->declBus(c+48,"coretop regfiles0 a4", false,-1, 31,0);
        tracep->declBus(c+49,"coretop regfiles0 a5", false,-1, 31,0);
        tracep->declBus(c+50,"coretop regfiles0 a6", false,-1, 31,0);
        tracep->declBus(c+51,"coretop regfiles0 a7", false,-1, 31,0);
        tracep->declBus(c+52,"coretop regfiles0 s2", false,-1, 31,0);
        tracep->declBus(c+53,"coretop regfiles0 s3", false,-1, 31,0);
        tracep->declBus(c+54,"coretop regfiles0 s4", false,-1, 31,0);
        tracep->declBus(c+55,"coretop regfiles0 s5", false,-1, 31,0);
        tracep->declBus(c+56,"coretop regfiles0 s6", false,-1, 31,0);
        tracep->declBus(c+57,"coretop regfiles0 s7", false,-1, 31,0);
        tracep->declBus(c+58,"coretop regfiles0 s8", false,-1, 31,0);
        tracep->declBus(c+59,"coretop regfiles0 s9", false,-1, 31,0);
        tracep->declBus(c+60,"coretop regfiles0 s10", false,-1, 31,0);
        tracep->declBus(c+61,"coretop regfiles0 s11", false,-1, 31,0);
        tracep->declBus(c+62,"coretop regfiles0 t3", false,-1, 31,0);
        tracep->declBus(c+63,"coretop regfiles0 t4", false,-1, 31,0);
        tracep->declBus(c+64,"coretop regfiles0 t5", false,-1, 31,0);
        tracep->declBus(c+65,"coretop regfiles0 t6", false,-1, 31,0);
        tracep->declBus(c+66,"coretop regfiles0 i", false,-1, 31,0);
        tracep->declBit(c+89,"coretop rom0 clk_i", false,-1);
        tracep->declBus(c+67,"coretop rom0 addr_i", false,-1, 31,0);
        tracep->declBus(c+67,"coretop rom0 pc_o", false,-1, 31,0);
        tracep->declBus(c+90,"coretop rom0 inst_o", false,-1, 31,0);
        tracep->declBus(c+87,"coretop rom0 addr4", false,-1, 20,0);
    }
}

void Vcoretop___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vcoretop___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vcoretop___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vcoretop___024root__traceRegister(Vcoretop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcoretop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vcoretop___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vcoretop___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vcoretop___024root__traceCleanup, vlSelf);
    }
}

void Vcoretop___024root__traceFullSub0(Vcoretop___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vcoretop___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vcoretop___024root* const __restrict vlSelf = static_cast<Vcoretop___024root*>(voidSelf);
    Vcoretop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vcoretop___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vcoretop___024root__traceFullSub0(Vcoretop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcoretop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullIData(oldp+1,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x
                                  [vlSymsp->TOP__coretop.__PVT__idreg_addr1]),32);
        tracep->fullIData(oldp+2,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x
                                  [vlSymsp->TOP__coretop.__PVT__idreg_addr2]),32);
        tracep->fullIData(oldp+3,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x[0]),32);
        tracep->fullIData(oldp+4,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x[1]),32);
        tracep->fullIData(oldp+5,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x[2]),32);
        tracep->fullIData(oldp+6,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x[3]),32);
        tracep->fullIData(oldp+7,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x[4]),32);
        tracep->fullIData(oldp+8,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x[5]),32);
        tracep->fullIData(oldp+9,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x[6]),32);
        tracep->fullIData(oldp+10,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x[7]),32);
        tracep->fullIData(oldp+11,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x[8]),32);
        tracep->fullIData(oldp+12,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x[9]),32);
        tracep->fullIData(oldp+13,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x[10]),32);
        tracep->fullIData(oldp+14,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x[11]),32);
        tracep->fullIData(oldp+15,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x[12]),32);
        tracep->fullIData(oldp+16,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x[13]),32);
        tracep->fullIData(oldp+17,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x[14]),32);
        tracep->fullIData(oldp+18,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x[15]),32);
        tracep->fullIData(oldp+19,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x[16]),32);
        tracep->fullIData(oldp+20,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x[17]),32);
        tracep->fullIData(oldp+21,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x[18]),32);
        tracep->fullIData(oldp+22,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x[19]),32);
        tracep->fullIData(oldp+23,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x[20]),32);
        tracep->fullIData(oldp+24,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x[21]),32);
        tracep->fullIData(oldp+25,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x[22]),32);
        tracep->fullIData(oldp+26,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x[23]),32);
        tracep->fullIData(oldp+27,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x[24]),32);
        tracep->fullIData(oldp+28,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x[25]),32);
        tracep->fullIData(oldp+29,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x[26]),32);
        tracep->fullIData(oldp+30,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x[27]),32);
        tracep->fullIData(oldp+31,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x[28]),32);
        tracep->fullIData(oldp+32,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x[29]),32);
        tracep->fullIData(oldp+33,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x[30]),32);
        tracep->fullIData(oldp+34,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x[31]),32);
        tracep->fullIData(oldp+35,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x
                                   [1U]),32);
        tracep->fullIData(oldp+36,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x
                                   [2U]),32);
        tracep->fullIData(oldp+37,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x
                                   [3U]),32);
        tracep->fullIData(oldp+38,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x
                                   [4U]),32);
        tracep->fullIData(oldp+39,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x
                                   [5U]),32);
        tracep->fullIData(oldp+40,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x
                                   [6U]),32);
        tracep->fullIData(oldp+41,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x
                                   [7U]),32);
        tracep->fullIData(oldp+42,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x
                                   [8U]),32);
        tracep->fullIData(oldp+43,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x
                                   [9U]),32);
        tracep->fullIData(oldp+44,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x
                                   [0xaU]),32);
        tracep->fullIData(oldp+45,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x
                                   [0xbU]),32);
        tracep->fullIData(oldp+46,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x
                                   [0xcU]),32);
        tracep->fullIData(oldp+47,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x
                                   [0xdU]),32);
        tracep->fullIData(oldp+48,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x
                                   [0xeU]),32);
        tracep->fullIData(oldp+49,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x
                                   [0xfU]),32);
        tracep->fullIData(oldp+50,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x
                                   [0x10U]),32);
        tracep->fullIData(oldp+51,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x
                                   [0x11U]),32);
        tracep->fullIData(oldp+52,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x
                                   [0x12U]),32);
        tracep->fullIData(oldp+53,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x
                                   [0x13U]),32);
        tracep->fullIData(oldp+54,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x
                                   [0x14U]),32);
        tracep->fullIData(oldp+55,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x
                                   [0x15U]),32);
        tracep->fullIData(oldp+56,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x
                                   [0x16U]),32);
        tracep->fullIData(oldp+57,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x
                                   [0x17U]),32);
        tracep->fullIData(oldp+58,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x
                                   [0x18U]),32);
        tracep->fullIData(oldp+59,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x
                                   [0x19U]),32);
        tracep->fullIData(oldp+60,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x
                                   [0x1aU]),32);
        tracep->fullIData(oldp+61,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x
                                   [0x1bU]),32);
        tracep->fullIData(oldp+62,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x
                                   [0x1cU]),32);
        tracep->fullIData(oldp+63,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x
                                   [0x1dU]),32);
        tracep->fullIData(oldp+64,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x
                                   [0x1eU]),32);
        tracep->fullIData(oldp+65,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x
                                   [0x1fU]),32);
        tracep->fullIData(oldp+66,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__i),32);
        tracep->fullIData(oldp+67,(vlSymsp->TOP__coretop.__PVT__pc_wire),32);
        tracep->fullIData(oldp+68,(vlSymsp->TOP__coretop.__PVT__ifid_inst),32);
        tracep->fullIData(oldp+69,(vlSymsp->TOP__coretop.__PVT__ifid_pc),32);
        tracep->fullIData(oldp+70,(vlSymsp->TOP__coretop.__PVT__idexe_pc),32);
        tracep->fullIData(oldp+71,(vlSymsp->TOP__coretop.__PVT__idexe_op1),32);
        tracep->fullIData(oldp+72,(vlSymsp->TOP__coretop.__PVT__idexe_op2),32);
        tracep->fullIData(oldp+73,(vlSymsp->TOP__coretop.__PVT__idexe_imm),32);
        tracep->fullCData(oldp+74,(vlSymsp->TOP__coretop.__PVT__idexe_rdaddr),5);
        tracep->fullBit(oldp+75,(vlSymsp->TOP__coretop.__PVT__idexe_we));
        tracep->fullCData(oldp+76,(vlSymsp->TOP__coretop.__PVT__decode0__DOT__reg_addr1_o),5);
        tracep->fullCData(oldp+77,(vlSymsp->TOP__coretop.__PVT__decode0__DOT__reg_addr2_o),5);
        tracep->fullCData(oldp+78,((0x7fU & vlSymsp->TOP__coretop.__PVT__ifid_inst)),7);
        tracep->fullCData(oldp+79,((7U & (vlSymsp->TOP__coretop.__PVT__ifid_inst 
                                          >> 0xcU))),3);
        tracep->fullCData(oldp+80,((vlSymsp->TOP__coretop.__PVT__ifid_inst 
                                    >> 0x19U)),7);
        tracep->fullCData(oldp+81,((0x1fU & (vlSymsp->TOP__coretop.__PVT__ifid_inst 
                                             >> 0xfU))),5);
        tracep->fullCData(oldp+82,((0x1fU & (vlSymsp->TOP__coretop.__PVT__ifid_inst 
                                             >> 0x14U))),5);
        tracep->fullCData(oldp+83,((0x1fU & (vlSymsp->TOP__coretop.__PVT__ifid_inst 
                                             >> 7U))),5);
        tracep->fullBit(oldp+84,((0x13U == (0x7fU & vlSymsp->TOP__coretop.__PVT__ifid_inst))));
        tracep->fullBit(oldp+85,((1U & (vlSymsp->TOP__coretop.__PVT__ifid_inst 
                                        >> 0x14U))));
        tracep->fullBit(oldp+86,((IData)((0x100013U 
                                          == (0x10007fU 
                                              & vlSymsp->TOP__coretop.__PVT__ifid_inst)))));
        tracep->fullIData(oldp+87,((0x1ffffcU & vlSymsp->TOP__coretop.__PVT__pc_wire)),21);
        tracep->fullBit(oldp+88,(vlSelf->rst_i));
        tracep->fullBit(oldp+89,(vlSelf->clk_i));
        tracep->fullIData(oldp+90,(((vlSymsp->TOP__coretop__rom0.__PVT__mem
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
        tracep->fullCData(oldp+91,(vlSymsp->TOP__coretop.__PVT__idreg_addr1),5);
        tracep->fullCData(oldp+92,(vlSymsp->TOP__coretop.__PVT__idreg_addr2),5);
        tracep->fullIData(oldp+93,(vlSymsp->TOP__coretop.__PVT__decode0__DOT__reg_data1_i),32);
        tracep->fullIData(oldp+94,(vlSymsp->TOP__coretop.__PVT__decode0__DOT__reg_data2_i),32);
    }
}
