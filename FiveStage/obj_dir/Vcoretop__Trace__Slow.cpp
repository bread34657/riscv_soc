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
        tracep->declBit(c+104,"rst_i", false,-1);
        tracep->declBit(c+105,"clk_i", false,-1);
        tracep->declBit(c+104,"coretop rst_i", false,-1);
        tracep->declBit(c+105,"coretop clk_i", false,-1);
        tracep->declBus(c+1,"coretop pc_wire", false,-1, 31,0);
        tracep->declBus(c+106,"coretop romif_inst", false,-1, 31,0);
        tracep->declBus(c+1,"coretop romif_pc", false,-1, 31,0);
        tracep->declBus(c+2,"coretop ifid_inst", false,-1, 31,0);
        tracep->declBus(c+3,"coretop ifid_pc", false,-1, 31,0);
        tracep->declBus(c+4,"coretop idreg_addr1", false,-1, 4,0);
        tracep->declBus(c+5,"coretop idreg_addr2", false,-1, 4,0);
        tracep->declBus(c+6,"coretop regid_data1", false,-1, 31,0);
        tracep->declBus(c+7,"coretop regid_data2", false,-1, 31,0);
        tracep->declBus(c+8,"coretop idexe_pc", false,-1, 31,0);
        tracep->declBus(c+9,"coretop idexe_op1", false,-1, 31,0);
        tracep->declBus(c+10,"coretop idexe_op2", false,-1, 31,0);
        tracep->declBus(c+11,"coretop idexe_imm", false,-1, 31,0);
        tracep->declBus(c+12,"coretop idexe_rdaddr", false,-1, 4,0);
        tracep->declBit(c+13,"coretop idexe_we", false,-1);
        tracep->declBit(c+14,"coretop idexe_optype", false,-1);
        tracep->declBus(c+15,"coretop idexe_opfunc3", false,-1, 2,0);
        tracep->declBus(c+16,"coretop exemem_rdaddr", false,-1, 4,0);
        tracep->declBus(c+17,"coretop exemem_rddata", false,-1, 31,0);
        tracep->declBit(c+18,"coretop exemem_we", false,-1);
        tracep->declBus(c+19,"coretop memwb_rdaddr", false,-1, 4,0);
        tracep->declBus(c+20,"coretop memwb_rddata", false,-1, 31,0);
        tracep->declBit(c+21,"coretop memwb_we", false,-1);
        tracep->declBus(c+22,"coretop wbreg_rdaddr", false,-1, 4,0);
        tracep->declBus(c+23,"coretop wbreg_rddata", false,-1, 31,0);
        tracep->declBit(c+24,"coretop wbreg_we", false,-1);
        tracep->declBit(c+105,"coretop program_counter0 clk_i", false,-1);
        tracep->declBit(c+104,"coretop program_counter0 rst_i", false,-1);
        tracep->declBus(c+1,"coretop program_counter0 pc_o", false,-1, 31,0);
        tracep->declBit(c+105,"coretop inst_fetch0 clk_i", false,-1);
        tracep->declBit(c+104,"coretop inst_fetch0 rst_i", false,-1);
        tracep->declBus(c+1,"coretop inst_fetch0 pc_i", false,-1, 31,0);
        tracep->declBus(c+106,"coretop inst_fetch0 inst_i", false,-1, 31,0);
        tracep->declBus(c+3,"coretop inst_fetch0 pc_o", false,-1, 31,0);
        tracep->declBus(c+2,"coretop inst_fetch0 inst_o", false,-1, 31,0);
        tracep->declBit(c+104,"coretop regfiles0 rst_i", false,-1);
        tracep->declBit(c+105,"coretop regfiles0 clk_i", false,-1);
        tracep->declBus(c+4,"coretop regfiles0 rs1_addr_i", false,-1, 4,0);
        tracep->declBus(c+5,"coretop regfiles0 rs2_addr_i", false,-1, 4,0);
        tracep->declBus(c+22,"coretop regfiles0 rd_addr_i", false,-1, 4,0);
        tracep->declBus(c+23,"coretop regfiles0 rd_data_i", false,-1, 31,0);
        tracep->declBit(c+24,"coretop regfiles0 rd_we_i", false,-1);
        tracep->declBus(c+6,"coretop regfiles0 rs1_data_o", false,-1, 31,0);
        tracep->declBus(c+7,"coretop regfiles0 rs2_data_o", false,-1, 31,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declBus(c+25+i*1,"coretop regfiles0 x", true,(i+0), 31,0);}}
        tracep->declBus(c+57,"coretop regfiles0 ra", false,-1, 31,0);
        tracep->declBus(c+58,"coretop regfiles0 sp", false,-1, 31,0);
        tracep->declBus(c+59,"coretop regfiles0 gp", false,-1, 31,0);
        tracep->declBus(c+60,"coretop regfiles0 tp", false,-1, 31,0);
        tracep->declBus(c+61,"coretop regfiles0 t0", false,-1, 31,0);
        tracep->declBus(c+62,"coretop regfiles0 t1", false,-1, 31,0);
        tracep->declBus(c+63,"coretop regfiles0 t2", false,-1, 31,0);
        tracep->declBus(c+64,"coretop regfiles0 s0", false,-1, 31,0);
        tracep->declBus(c+65,"coretop regfiles0 s1", false,-1, 31,0);
        tracep->declBus(c+66,"coretop regfiles0 a0", false,-1, 31,0);
        tracep->declBus(c+67,"coretop regfiles0 a1", false,-1, 31,0);
        tracep->declBus(c+68,"coretop regfiles0 a2", false,-1, 31,0);
        tracep->declBus(c+69,"coretop regfiles0 a3", false,-1, 31,0);
        tracep->declBus(c+70,"coretop regfiles0 a4", false,-1, 31,0);
        tracep->declBus(c+71,"coretop regfiles0 a5", false,-1, 31,0);
        tracep->declBus(c+72,"coretop regfiles0 a6", false,-1, 31,0);
        tracep->declBus(c+73,"coretop regfiles0 a7", false,-1, 31,0);
        tracep->declBus(c+74,"coretop regfiles0 s2", false,-1, 31,0);
        tracep->declBus(c+75,"coretop regfiles0 s3", false,-1, 31,0);
        tracep->declBus(c+76,"coretop regfiles0 s4", false,-1, 31,0);
        tracep->declBus(c+77,"coretop regfiles0 s5", false,-1, 31,0);
        tracep->declBus(c+78,"coretop regfiles0 s6", false,-1, 31,0);
        tracep->declBus(c+79,"coretop regfiles0 s7", false,-1, 31,0);
        tracep->declBus(c+80,"coretop regfiles0 s8", false,-1, 31,0);
        tracep->declBus(c+81,"coretop regfiles0 s9", false,-1, 31,0);
        tracep->declBus(c+82,"coretop regfiles0 s10", false,-1, 31,0);
        tracep->declBus(c+83,"coretop regfiles0 s11", false,-1, 31,0);
        tracep->declBus(c+84,"coretop regfiles0 t3", false,-1, 31,0);
        tracep->declBus(c+85,"coretop regfiles0 t4", false,-1, 31,0);
        tracep->declBus(c+86,"coretop regfiles0 t5", false,-1, 31,0);
        tracep->declBus(c+87,"coretop regfiles0 t6", false,-1, 31,0);
        tracep->declBit(c+88,"coretop regfiles0 we", false,-1);
        tracep->declBus(c+89,"coretop regfiles0 i", false,-1, 31,0);
        tracep->declBit(c+105,"coretop decode0 clk_i", false,-1);
        tracep->declBit(c+104,"coretop decode0 rst_i", false,-1);
        tracep->declBus(c+3,"coretop decode0 pc_i", false,-1, 31,0);
        tracep->declBus(c+2,"coretop decode0 inst_i", false,-1, 31,0);
        tracep->declBus(c+6,"coretop decode0 reg_data1_i", false,-1, 31,0);
        tracep->declBus(c+7,"coretop decode0 reg_data2_i", false,-1, 31,0);
        tracep->declBus(c+4,"coretop decode0 reg_addr1_o", false,-1, 4,0);
        tracep->declBus(c+5,"coretop decode0 reg_addr2_o", false,-1, 4,0);
        tracep->declBus(c+8,"coretop decode0 pc_o", false,-1, 31,0);
        tracep->declBus(c+9,"coretop decode0 op1_o", false,-1, 31,0);
        tracep->declBus(c+10,"coretop decode0 op2_o", false,-1, 31,0);
        tracep->declBus(c+11,"coretop decode0 imm_o", false,-1, 31,0);
        tracep->declBus(c+12,"coretop decode0 rd_addr_o", false,-1, 4,0);
        tracep->declBit(c+13,"coretop decode0 rd_we_o", false,-1);
        tracep->declBus(c+15,"coretop decode0 opfunc3_o", false,-1, 2,0);
        tracep->declBit(c+14,"coretop decode0 optype_o", false,-1);
        tracep->declBus(c+2,"coretop decode0 rv32inst", false,-1, 31,0);
        tracep->declBus(c+90,"coretop decode0 opcode", false,-1, 6,0);
        tracep->declBus(c+91,"coretop decode0 opfunc3", false,-1, 2,0);
        tracep->declBus(c+92,"coretop decode0 funct7", false,-1, 6,0);
        tracep->declBus(c+93,"coretop decode0 rs1_addr", false,-1, 4,0);
        tracep->declBus(c+94,"coretop decode0 rs2_addr", false,-1, 4,0);
        tracep->declBus(c+95,"coretop decode0 rd_addr", false,-1, 4,0);
        tracep->declBit(c+96,"coretop decode0 optype", false,-1);
        tracep->declBit(c+97,"coretop decode0 reg_we", false,-1);
        tracep->declBus(c+98,"coretop decode0 immI", false,-1, 31,0);
        tracep->declBit(c+97,"coretop decode0 Itype_imm", false,-1);
        tracep->declBit(c+99,"coretop decode0 Rtype", false,-1);
        tracep->declBus(c+100,"coretop decode0 imm", false,-1, 31,0);
        tracep->declBit(c+104,"coretop exe0 rst_i", false,-1);
        tracep->declBit(c+105,"coretop exe0 clk_i", false,-1);
        tracep->declBus(c+8,"coretop exe0 pc_i", false,-1, 31,0);
        tracep->declBus(c+9,"coretop exe0 op1_i", false,-1, 31,0);
        tracep->declBus(c+10,"coretop exe0 op2_i", false,-1, 31,0);
        tracep->declBus(c+11,"coretop exe0 imm_i", false,-1, 31,0);
        tracep->declBus(c+12,"coretop exe0 rd_addr_i", false,-1, 4,0);
        tracep->declBit(c+13,"coretop exe0 rd_we_i", false,-1);
        tracep->declBus(c+15,"coretop exe0 opfunc3_i", false,-1, 2,0);
        tracep->declBit(c+14,"coretop exe0 optype_i", false,-1);
        tracep->declBus(c+16,"coretop exe0 rd_addr_o", false,-1, 4,0);
        tracep->declBus(c+17,"coretop exe0 rd_data_o", false,-1, 31,0);
        tracep->declBit(c+18,"coretop exe0 rd_we_o", false,-1);
        tracep->declBus(c+9,"coretop exe0 rs1", false,-1, 31,0);
        tracep->declBus(c+101,"coretop exe0 rs2", false,-1, 31,0);
        tracep->declBus(c+102,"coretop exe0 op_result", false,-1, 31,0);
        tracep->declBit(c+104,"coretop mem0 rst_i", false,-1);
        tracep->declBit(c+105,"coretop mem0 clk_i", false,-1);
        tracep->declBus(c+16,"coretop mem0 rd_addr_i", false,-1, 4,0);
        tracep->declBus(c+17,"coretop mem0 rd_data_i", false,-1, 31,0);
        tracep->declBit(c+18,"coretop mem0 rd_we_i", false,-1);
        tracep->declBus(c+19,"coretop mem0 rd_addr_o", false,-1, 4,0);
        tracep->declBus(c+20,"coretop mem0 rd_data_o", false,-1, 31,0);
        tracep->declBit(c+21,"coretop mem0 rd_we_o", false,-1);
        tracep->declBit(c+104,"coretop writeback0 rst_i", false,-1);
        tracep->declBit(c+105,"coretop writeback0 clk_i", false,-1);
        tracep->declBus(c+19,"coretop writeback0 rd_addr_i", false,-1, 4,0);
        tracep->declBus(c+20,"coretop writeback0 rd_data_i", false,-1, 31,0);
        tracep->declBit(c+21,"coretop writeback0 rd_we_i", false,-1);
        tracep->declBus(c+22,"coretop writeback0 rd_addr_o", false,-1, 4,0);
        tracep->declBus(c+23,"coretop writeback0 rd_data_o", false,-1, 31,0);
        tracep->declBit(c+24,"coretop writeback0 rd_we_o", false,-1);
        tracep->declBit(c+105,"coretop rom0 clk_i", false,-1);
        tracep->declBus(c+1,"coretop rom0 addr_i", false,-1, 31,0);
        tracep->declBus(c+1,"coretop rom0 pc_o", false,-1, 31,0);
        tracep->declBus(c+106,"coretop rom0 inst_o", false,-1, 31,0);
        tracep->declBus(c+103,"coretop rom0 addr4", false,-1, 20,0);
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
        tracep->fullIData(oldp+1,(vlSymsp->TOP__coretop.__PVT__pc_wire),32);
        tracep->fullIData(oldp+2,(vlSymsp->TOP__coretop.__PVT__ifid_inst),32);
        tracep->fullIData(oldp+3,(vlSymsp->TOP__coretop.__PVT__ifid_pc),32);
        tracep->fullCData(oldp+4,(vlSymsp->TOP__coretop.__PVT__idreg_addr1),5);
        tracep->fullCData(oldp+5,(vlSymsp->TOP__coretop.__PVT__idreg_addr2),5);
        tracep->fullIData(oldp+6,((((IData)(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__we) 
                                    & ((IData)(vlSymsp->TOP__coretop.__PVT__idreg_addr1) 
                                       == (IData)(vlSymsp->TOP__coretop.__PVT__wbreg_rdaddr)))
                                    ? vlSymsp->TOP__coretop.__PVT__wbreg_rddata
                                    : vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x
                                   [vlSymsp->TOP__coretop.__PVT__idreg_addr1])),32);
        tracep->fullIData(oldp+7,((((IData)(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__we) 
                                    & ((IData)(vlSymsp->TOP__coretop.__PVT__idreg_addr2) 
                                       == (IData)(vlSymsp->TOP__coretop.__PVT__wbreg_rdaddr)))
                                    ? vlSymsp->TOP__coretop.__PVT__wbreg_rddata
                                    : vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x
                                   [vlSymsp->TOP__coretop.__PVT__idreg_addr2])),32);
        tracep->fullIData(oldp+8,(vlSymsp->TOP__coretop.__PVT__idexe_pc),32);
        tracep->fullIData(oldp+9,(vlSymsp->TOP__coretop.__PVT__idexe_op1),32);
        tracep->fullIData(oldp+10,(vlSymsp->TOP__coretop.__PVT__idexe_op2),32);
        tracep->fullIData(oldp+11,(vlSymsp->TOP__coretop.__PVT__idexe_imm),32);
        tracep->fullCData(oldp+12,(vlSymsp->TOP__coretop.__PVT__idexe_rdaddr),5);
        tracep->fullBit(oldp+13,(vlSymsp->TOP__coretop.__PVT__idexe_we));
        tracep->fullBit(oldp+14,(vlSymsp->TOP__coretop.__PVT__idexe_optype));
        tracep->fullCData(oldp+15,(vlSymsp->TOP__coretop.__PVT__idexe_opfunc3),3);
        tracep->fullCData(oldp+16,(vlSymsp->TOP__coretop.__PVT__exemem_rdaddr),5);
        tracep->fullIData(oldp+17,(vlSymsp->TOP__coretop.__PVT__exemem_rddata),32);
        tracep->fullBit(oldp+18,(vlSymsp->TOP__coretop.__PVT__exemem_we));
        tracep->fullCData(oldp+19,(vlSymsp->TOP__coretop.__PVT__memwb_rdaddr),5);
        tracep->fullIData(oldp+20,(vlSymsp->TOP__coretop.__PVT__memwb_rddata),32);
        tracep->fullBit(oldp+21,(vlSymsp->TOP__coretop.__PVT__memwb_we));
        tracep->fullCData(oldp+22,(vlSymsp->TOP__coretop.__PVT__wbreg_rdaddr),5);
        tracep->fullIData(oldp+23,(vlSymsp->TOP__coretop.__PVT__wbreg_rddata),32);
        tracep->fullBit(oldp+24,(vlSymsp->TOP__coretop.__PVT__wbreg_we));
        tracep->fullIData(oldp+25,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x[0]),32);
        tracep->fullIData(oldp+26,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x[1]),32);
        tracep->fullIData(oldp+27,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x[2]),32);
        tracep->fullIData(oldp+28,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x[3]),32);
        tracep->fullIData(oldp+29,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x[4]),32);
        tracep->fullIData(oldp+30,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x[5]),32);
        tracep->fullIData(oldp+31,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x[6]),32);
        tracep->fullIData(oldp+32,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x[7]),32);
        tracep->fullIData(oldp+33,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x[8]),32);
        tracep->fullIData(oldp+34,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x[9]),32);
        tracep->fullIData(oldp+35,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x[10]),32);
        tracep->fullIData(oldp+36,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x[11]),32);
        tracep->fullIData(oldp+37,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x[12]),32);
        tracep->fullIData(oldp+38,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x[13]),32);
        tracep->fullIData(oldp+39,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x[14]),32);
        tracep->fullIData(oldp+40,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x[15]),32);
        tracep->fullIData(oldp+41,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x[16]),32);
        tracep->fullIData(oldp+42,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x[17]),32);
        tracep->fullIData(oldp+43,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x[18]),32);
        tracep->fullIData(oldp+44,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x[19]),32);
        tracep->fullIData(oldp+45,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x[20]),32);
        tracep->fullIData(oldp+46,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x[21]),32);
        tracep->fullIData(oldp+47,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x[22]),32);
        tracep->fullIData(oldp+48,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x[23]),32);
        tracep->fullIData(oldp+49,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x[24]),32);
        tracep->fullIData(oldp+50,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x[25]),32);
        tracep->fullIData(oldp+51,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x[26]),32);
        tracep->fullIData(oldp+52,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x[27]),32);
        tracep->fullIData(oldp+53,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x[28]),32);
        tracep->fullIData(oldp+54,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x[29]),32);
        tracep->fullIData(oldp+55,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x[30]),32);
        tracep->fullIData(oldp+56,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x[31]),32);
        tracep->fullIData(oldp+57,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x
                                   [1U]),32);
        tracep->fullIData(oldp+58,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x
                                   [2U]),32);
        tracep->fullIData(oldp+59,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x
                                   [3U]),32);
        tracep->fullIData(oldp+60,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x
                                   [4U]),32);
        tracep->fullIData(oldp+61,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x
                                   [5U]),32);
        tracep->fullIData(oldp+62,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x
                                   [6U]),32);
        tracep->fullIData(oldp+63,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x
                                   [7U]),32);
        tracep->fullIData(oldp+64,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x
                                   [8U]),32);
        tracep->fullIData(oldp+65,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x
                                   [9U]),32);
        tracep->fullIData(oldp+66,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x
                                   [0xaU]),32);
        tracep->fullIData(oldp+67,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x
                                   [0xbU]),32);
        tracep->fullIData(oldp+68,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x
                                   [0xcU]),32);
        tracep->fullIData(oldp+69,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x
                                   [0xdU]),32);
        tracep->fullIData(oldp+70,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x
                                   [0xeU]),32);
        tracep->fullIData(oldp+71,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x
                                   [0xfU]),32);
        tracep->fullIData(oldp+72,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x
                                   [0x10U]),32);
        tracep->fullIData(oldp+73,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x
                                   [0x11U]),32);
        tracep->fullIData(oldp+74,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x
                                   [0x12U]),32);
        tracep->fullIData(oldp+75,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x
                                   [0x13U]),32);
        tracep->fullIData(oldp+76,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x
                                   [0x14U]),32);
        tracep->fullIData(oldp+77,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x
                                   [0x15U]),32);
        tracep->fullIData(oldp+78,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x
                                   [0x16U]),32);
        tracep->fullIData(oldp+79,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x
                                   [0x17U]),32);
        tracep->fullIData(oldp+80,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x
                                   [0x18U]),32);
        tracep->fullIData(oldp+81,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x
                                   [0x19U]),32);
        tracep->fullIData(oldp+82,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x
                                   [0x1aU]),32);
        tracep->fullIData(oldp+83,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x
                                   [0x1bU]),32);
        tracep->fullIData(oldp+84,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x
                                   [0x1cU]),32);
        tracep->fullIData(oldp+85,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x
                                   [0x1dU]),32);
        tracep->fullIData(oldp+86,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x
                                   [0x1eU]),32);
        tracep->fullIData(oldp+87,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__x
                                   [0x1fU]),32);
        tracep->fullBit(oldp+88,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__we));
        tracep->fullIData(oldp+89,(vlSymsp->TOP__coretop.__PVT__regfiles0__DOT__i),32);
        tracep->fullCData(oldp+90,((0x7fU & vlSymsp->TOP__coretop.__PVT__ifid_inst)),7);
        tracep->fullCData(oldp+91,((7U & (vlSymsp->TOP__coretop.__PVT__ifid_inst 
                                          >> 0xcU))),3);
        tracep->fullCData(oldp+92,((vlSymsp->TOP__coretop.__PVT__ifid_inst 
                                    >> 0x19U)),7);
        tracep->fullCData(oldp+93,((0x1fU & (vlSymsp->TOP__coretop.__PVT__ifid_inst 
                                             >> 0xfU))),5);
        tracep->fullCData(oldp+94,((0x1fU & (vlSymsp->TOP__coretop.__PVT__ifid_inst 
                                             >> 0x14U))),5);
        tracep->fullCData(oldp+95,((0x1fU & (vlSymsp->TOP__coretop.__PVT__ifid_inst 
                                             >> 7U))),5);
        tracep->fullBit(oldp+96,(((0x13U == (0x7fU 
                                             & vlSymsp->TOP__coretop.__PVT__ifid_inst)) 
                                  | (0x33U == (0x7fU 
                                               & vlSymsp->TOP__coretop.__PVT__ifid_inst)))));
        tracep->fullBit(oldp+97,((0x13U == (0x7fU & vlSymsp->TOP__coretop.__PVT__ifid_inst))));
        tracep->fullIData(oldp+98,((((- (IData)((vlSymsp->TOP__coretop.__PVT__ifid_inst 
                                                 >> 0x1fU))) 
                                     << 0xcU) | (vlSymsp->TOP__coretop.__PVT__ifid_inst 
                                                 >> 0x14U))),32);
        tracep->fullBit(oldp+99,((0x33U == (0x7fU & vlSymsp->TOP__coretop.__PVT__ifid_inst))));
        tracep->fullIData(oldp+100,(((- (IData)((0x13U 
                                                 == 
                                                 (0x7fU 
                                                  & vlSymsp->TOP__coretop.__PVT__ifid_inst)))) 
                                     & (((- (IData)(
                                                    (vlSymsp->TOP__coretop.__PVT__ifid_inst 
                                                     >> 0x1fU))) 
                                         << 0xcU) | 
                                        (vlSymsp->TOP__coretop.__PVT__ifid_inst 
                                         >> 0x14U)))),32);
        tracep->fullIData(oldp+101,(((IData)(vlSymsp->TOP__coretop.__PVT__idexe_optype)
                                      ? vlSymsp->TOP__coretop.__PVT__idexe_imm
                                      : vlSymsp->TOP__coretop.__PVT__idexe_op2)),32);
        tracep->fullIData(oldp+102,(vlSymsp->TOP__coretop.__PVT__exe0__DOT__op_result),32);
        tracep->fullIData(oldp+103,((0x1ffffcU & vlSymsp->TOP__coretop.__PVT__pc_wire)),21);
        tracep->fullBit(oldp+104,(vlSelf->rst_i));
        tracep->fullBit(oldp+105,(vlSelf->clk_i));
        tracep->fullIData(oldp+106,(((vlSymsp->TOP__coretop__rom0.__PVT__mem
                                      [(0x1ffffcU & vlSymsp->TOP__coretop.__PVT__pc_wire)] 
                                      << 0x18U) | (
                                                   (vlSymsp->TOP__coretop__rom0.__PVT__mem
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
