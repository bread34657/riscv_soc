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
        tracep->declBit(c+161,"rst_i", false,-1);
        tracep->declBit(c+162,"clk_i", false,-1);
        tracep->declBit(c+161,"coretop rst_i", false,-1);
        tracep->declBit(c+162,"coretop clk_i", false,-1);
        tracep->declBus(c+1,"coretop pipectrlpc_jumpaddr", false,-1, 31,0);
        tracep->declBit(c+2,"coretop pipectrlpc_je", false,-1);
        tracep->declBit(c+3,"coretop pipectrl_stallpc", false,-1);
        tracep->declBit(c+3,"coretop pipectrl_stallif", false,-1);
        tracep->declBit(c+2,"coretop pipectrl_flushif", false,-1);
        tracep->declBit(c+4,"coretop pipectrl_flushid", false,-1);
        tracep->declBus(c+5,"coretop pc_wire", false,-1, 31,0);
        tracep->declBus(c+163,"coretop romif_inst", false,-1, 31,0);
        tracep->declBus(c+5,"coretop romif_pc", false,-1, 31,0);
        tracep->declBus(c+6,"coretop rommem_ramdata", false,-1, 31,0);
        tracep->declBus(c+7,"coretop ifid_inst", false,-1, 31,0);
        tracep->declBus(c+8,"coretop ifid_pc", false,-1, 31,0);
        tracep->declBus(c+9,"coretop regid_data1", false,-1, 31,0);
        tracep->declBus(c+10,"coretop regid_data2", false,-1, 31,0);
        tracep->declBus(c+11,"coretop idreg_addr1", false,-1, 4,0);
        tracep->declBus(c+12,"coretop idreg_addr2", false,-1, 4,0);
        tracep->declBus(c+13,"coretop idexe_pc", false,-1, 31,0);
        tracep->declBus(c+14,"coretop idexe_imm", false,-1, 31,0);
        tracep->declBus(c+15,"coretop idexe_rdaddr", false,-1, 4,0);
        tracep->declBit(c+16,"coretop idexe_we", false,-1);
        tracep->declBus(c+17,"coretop idexe_optype", false,-1, 2,0);
        tracep->declBus(c+18,"coretop idexe_opfunc3", false,-1, 2,0);
        tracep->declBit(c+19,"coretop idexe_shiftsel", false,-1);
        tracep->declBit(c+20,"coretop idexe_addsubsel", false,-1);
        tracep->declBit(c+21,"coretop idexe_jtypesel", false,-1);
        tracep->declBit(c+22,"coretop idexe_memwe", false,-1);
        tracep->declBit(c+23,"coretop idexe_memre", false,-1);
        tracep->declBus(c+24,"coretop idfwd_rs1", false,-1, 31,0);
        tracep->declBus(c+25,"coretop idfwd_rs2", false,-1, 31,0);
        tracep->declBus(c+26,"coretop idfwd_addr1", false,-1, 4,0);
        tracep->declBus(c+27,"coretop idfwd_addr2", false,-1, 4,0);
        tracep->declBit(c+3,"coretop idpipectrl_loadusehazard", false,-1);
        tracep->declBus(c+28,"coretop fwdexe_rs1", false,-1, 31,0);
        tracep->declBus(c+29,"coretop fwdexe_rs2", false,-1, 31,0);
        tracep->declBus(c+30,"coretop exemem_rdaddr", false,-1, 4,0);
        tracep->declBus(c+31,"coretop exemem_rddata", false,-1, 31,0);
        tracep->declBit(c+32,"coretop exemem_we", false,-1);
        tracep->declBus(c+33,"coretop exemem_memaddr", false,-1, 31,0);
        tracep->declBit(c+34,"coretop exemem_memre", false,-1);
        tracep->declBit(c+35,"coretop exemem_memwe", false,-1);
        tracep->declBus(c+36,"coretop exemem_opfunc3", false,-1, 2,0);
        tracep->declBus(c+1,"coretop exepipe_jumpaddr", false,-1, 31,0);
        tracep->declBit(c+2,"coretop exepipe_je", false,-1);
        tracep->declBus(c+37,"coretop memwb_rdaddr", false,-1, 4,0);
        tracep->declBus(c+38,"coretop memwb_rddata", false,-1, 31,0);
        tracep->declBit(c+39,"coretop memwb_we", false,-1);
        tracep->declBus(c+40,"coretop memrom_ramaddr", false,-1, 31,0);
        tracep->declBus(c+41,"coretop memrom_ramdata", false,-1, 31,0);
        tracep->declBit(c+42,"coretop memrom_memwe", false,-1);
        tracep->declBus(c+43,"coretop wbreg_rdaddr", false,-1, 4,0);
        tracep->declBus(c+44,"coretop wbreg_rddata", false,-1, 31,0);
        tracep->declBit(c+45,"coretop wbreg_we", false,-1);
        tracep->declBit(c+3,"coretop pipectrl0 loaduse_hazard_i", false,-1);
        tracep->declBus(c+1,"coretop pipectrl0 jump_addr_i", false,-1, 31,0);
        tracep->declBit(c+2,"coretop pipectrl0 je_i", false,-1);
        tracep->declBit(c+3,"coretop pipectrl0 stallpc_o", false,-1);
        tracep->declBit(c+2,"coretop pipectrl0 je_o", false,-1);
        tracep->declBus(c+1,"coretop pipectrl0 jump_addr_o", false,-1, 31,0);
        tracep->declBit(c+3,"coretop pipectrl0 stallif_o", false,-1);
        tracep->declBit(c+2,"coretop pipectrl0 flushif_o", false,-1);
        tracep->declBit(c+4,"coretop pipectrl0 flushid_o", false,-1);
        tracep->declBit(c+162,"coretop program_counter0 clk_i", false,-1);
        tracep->declBit(c+161,"coretop program_counter0 rst_i", false,-1);
        tracep->declBit(c+3,"coretop program_counter0 stall_i", false,-1);
        tracep->declBus(c+1,"coretop program_counter0 jump_addr_i", false,-1, 31,0);
        tracep->declBit(c+2,"coretop program_counter0 je_i", false,-1);
        tracep->declBus(c+5,"coretop program_counter0 pc_o", false,-1, 31,0);
        tracep->declBit(c+162,"coretop inst_fetch0 clk_i", false,-1);
        tracep->declBit(c+161,"coretop inst_fetch0 rst_i", false,-1);
        tracep->declBit(c+3,"coretop inst_fetch0 stall_i", false,-1);
        tracep->declBit(c+2,"coretop inst_fetch0 flush_i", false,-1);
        tracep->declBus(c+5,"coretop inst_fetch0 pc_i", false,-1, 31,0);
        tracep->declBus(c+163,"coretop inst_fetch0 inst_i", false,-1, 31,0);
        tracep->declBus(c+8,"coretop inst_fetch0 pc_o", false,-1, 31,0);
        tracep->declBus(c+7,"coretop inst_fetch0 inst_o", false,-1, 31,0);
        tracep->declBit(c+162,"coretop decode0 clk_i", false,-1);
        tracep->declBit(c+161,"coretop decode0 rst_i", false,-1);
        tracep->declBus(c+8,"coretop decode0 pc_i", false,-1, 31,0);
        tracep->declBus(c+7,"coretop decode0 inst_i", false,-1, 31,0);
        tracep->declBus(c+9,"coretop decode0 reg_data1_i", false,-1, 31,0);
        tracep->declBus(c+10,"coretop decode0 reg_data2_i", false,-1, 31,0);
        tracep->declBit(c+4,"coretop decode0 flush_i", false,-1);
        tracep->declBus(c+11,"coretop decode0 rs1_addr_o", false,-1, 4,0);
        tracep->declBus(c+12,"coretop decode0 rs2_addr_o", false,-1, 4,0);
        tracep->declBus(c+13,"coretop decode0 pc_o", false,-1, 31,0);
        tracep->declBus(c+14,"coretop decode0 imm_o", false,-1, 31,0);
        tracep->declBus(c+15,"coretop decode0 rd_addr_o", false,-1, 4,0);
        tracep->declBit(c+16,"coretop decode0 rd_we_o", false,-1);
        tracep->declBus(c+18,"coretop decode0 opfunc3_o", false,-1, 2,0);
        tracep->declBus(c+17,"coretop decode0 optype_o", false,-1, 2,0);
        tracep->declBit(c+19,"coretop decode0 shiftsel_o", false,-1);
        tracep->declBit(c+20,"coretop decode0 addsubsel_o", false,-1);
        tracep->declBit(c+21,"coretop decode0 jtypesel_o", false,-1);
        tracep->declBit(c+23,"coretop decode0 mem_re_o", false,-1);
        tracep->declBit(c+22,"coretop decode0 mem_we_o", false,-1);
        tracep->declBus(c+24,"coretop decode0 rs1_o", false,-1, 31,0);
        tracep->declBus(c+25,"coretop decode0 rs2_o", false,-1, 31,0);
        tracep->declBus(c+26,"coretop decode0 fwd_raddr1_o", false,-1, 4,0);
        tracep->declBus(c+27,"coretop decode0 fwd_raddr2_o", false,-1, 4,0);
        tracep->declBit(c+3,"coretop decode0 loaduse_hazard_o", false,-1);
        tracep->declBus(c+7,"coretop decode0 rv32inst", false,-1, 31,0);
        tracep->declBus(c+46,"coretop decode0 opcode", false,-1, 6,0);
        tracep->declBus(c+47,"coretop decode0 opfunc3", false,-1, 2,0);
        tracep->declBus(c+48,"coretop decode0 opfunc7", false,-1, 6,0);
        tracep->declBus(c+49,"coretop decode0 rd_addr", false,-1, 4,0);
        tracep->declBus(c+50,"coretop decode0 optype", false,-1, 2,0);
        tracep->declBit(c+51,"coretop decode0 mem_re", false,-1);
        tracep->declBit(c+52,"coretop decode0 mem_we", false,-1);
        tracep->declBit(c+53,"coretop decode0 reg_we", false,-1);
        tracep->declBus(c+54,"coretop decode0 immI", false,-1, 31,0);
        tracep->declBus(c+55,"coretop decode0 immL", false,-1, 31,0);
        tracep->declBus(c+56,"coretop decode0 immS", false,-1, 31,0);
        tracep->declBus(c+57,"coretop decode0 immU", false,-1, 31,0);
        tracep->declBus(c+58,"coretop decode0 immJ", false,-1, 31,0);
        tracep->declBus(c+59,"coretop decode0 immB", false,-1, 31,0);
        tracep->declBit(c+60,"coretop decode0 Itype", false,-1);
        tracep->declBit(c+61,"coretop decode0 Rtype", false,-1);
        tracep->declBit(c+51,"coretop decode0 Ltype", false,-1);
        tracep->declBit(c+52,"coretop decode0 Stype", false,-1);
        tracep->declBit(c+62,"coretop decode0 LUItype", false,-1);
        tracep->declBit(c+63,"coretop decode0 AUPICtype", false,-1);
        tracep->declBit(c+64,"coretop decode0 JALtype", false,-1);
        tracep->declBit(c+65,"coretop decode0 JALRtype", false,-1);
        tracep->declBit(c+66,"coretop decode0 Btype", false,-1);
        tracep->declBit(c+67,"coretop decode0 shiftsel", false,-1);
        tracep->declBit(c+68,"coretop decode0 addsubsel", false,-1);
        tracep->declBit(c+69,"coretop decode0 jtypesel", false,-1);
        tracep->declBit(c+70,"coretop decode0 raddr1_thesame", false,-1);
        tracep->declBit(c+71,"coretop decode0 raddr2_thesame", false,-1);
        tracep->declBus(c+72,"coretop decode0 imm", false,-1, 31,0);
        tracep->declBit(c+161,"coretop exe0 rst_i", false,-1);
        tracep->declBit(c+162,"coretop exe0 clk_i", false,-1);
        tracep->declBus(c+13,"coretop exe0 pc_i", false,-1, 31,0);
        tracep->declBus(c+14,"coretop exe0 imm_i", false,-1, 31,0);
        tracep->declBus(c+15,"coretop exe0 rd_addr_i", false,-1, 4,0);
        tracep->declBit(c+16,"coretop exe0 rd_we_i", false,-1);
        tracep->declBus(c+18,"coretop exe0 opfunc3_i", false,-1, 2,0);
        tracep->declBus(c+17,"coretop exe0 optype_i", false,-1, 2,0);
        tracep->declBit(c+19,"coretop exe0 shiftsel_i", false,-1);
        tracep->declBit(c+20,"coretop exe0 addsubsel_i", false,-1);
        tracep->declBit(c+21,"coretop exe0 jtypesel_i", false,-1);
        tracep->declBit(c+23,"coretop exe0 mem_re_i", false,-1);
        tracep->declBit(c+22,"coretop exe0 mem_we_i", false,-1);
        tracep->declBus(c+28,"coretop exe0 rs1_i", false,-1, 31,0);
        tracep->declBus(c+29,"coretop exe0 rs2_i", false,-1, 31,0);
        tracep->declBus(c+30,"coretop exe0 rd_addr_o", false,-1, 4,0);
        tracep->declBus(c+31,"coretop exe0 rd_data_o", false,-1, 31,0);
        tracep->declBit(c+32,"coretop exe0 rd_we_o", false,-1);
        tracep->declBus(c+33,"coretop exe0 mem_addr_o", false,-1, 31,0);
        tracep->declBit(c+34,"coretop exe0 mem_re_o", false,-1);
        tracep->declBit(c+35,"coretop exe0 mem_we_o", false,-1);
        tracep->declBus(c+36,"coretop exe0 opfunc3_o", false,-1, 2,0);
        tracep->declBus(c+1,"coretop exe0 jump_addr_o", false,-1, 31,0);
        tracep->declBit(c+2,"coretop exe0 je_o", false,-1);
        tracep->declBus(c+73,"coretop exe0 op1", false,-1, 31,0);
        tracep->declBus(c+74,"coretop exe0 op2", false,-1, 31,0);
        tracep->declBus(c+75,"coretop exe0 op_result", false,-1, 31,0);
        tracep->declBus(c+76,"coretop exe0 mem_addr", false,-1, 31,0);
        tracep->declBit(c+161,"coretop mem0 rst_i", false,-1);
        tracep->declBit(c+162,"coretop mem0 clk_i", false,-1);
        tracep->declBus(c+30,"coretop mem0 rd_addr_i", false,-1, 4,0);
        tracep->declBus(c+31,"coretop mem0 rd_data_i", false,-1, 31,0);
        tracep->declBit(c+32,"coretop mem0 rd_we_i", false,-1);
        tracep->declBus(c+33,"coretop mem0 mem_addr_i", false,-1, 31,0);
        tracep->declBit(c+34,"coretop mem0 mem_re_i", false,-1);
        tracep->declBit(c+35,"coretop mem0 mem_we_i", false,-1);
        tracep->declBus(c+36,"coretop mem0 opfunc3_i", false,-1, 2,0);
        tracep->declBus(c+6,"coretop mem0 ram_data_i", false,-1, 31,0);
        tracep->declBus(c+40,"coretop mem0 ram_addr_o", false,-1, 31,0);
        tracep->declBus(c+41,"coretop mem0 ram_data_o", false,-1, 31,0);
        tracep->declBit(c+42,"coretop mem0 ram_we_o", false,-1);
        tracep->declBus(c+37,"coretop mem0 rd_addr_o", false,-1, 4,0);
        tracep->declBus(c+38,"coretop mem0 rd_data_o", false,-1, 31,0);
        tracep->declBit(c+39,"coretop mem0 rd_we_o", false,-1);
        tracep->declBus(c+77,"coretop mem0 ram_addr_offset", false,-1, 1,0);
        tracep->declBus(c+78,"coretop mem0 rd_data", false,-1, 31,0);
        tracep->declBit(c+161,"coretop writeback0 rst_i", false,-1);
        tracep->declBit(c+162,"coretop writeback0 clk_i", false,-1);
        tracep->declBus(c+37,"coretop writeback0 rd_addr_i", false,-1, 4,0);
        tracep->declBus(c+38,"coretop writeback0 rd_data_i", false,-1, 31,0);
        tracep->declBit(c+39,"coretop writeback0 rd_we_i", false,-1);
        tracep->declBus(c+43,"coretop writeback0 rd_addr_o", false,-1, 4,0);
        tracep->declBus(c+44,"coretop writeback0 rd_data_o", false,-1, 31,0);
        tracep->declBit(c+45,"coretop writeback0 rd_we_o", false,-1);
        tracep->declBus(c+26,"coretop forwarding0 rs1_addr_i", false,-1, 4,0);
        tracep->declBus(c+27,"coretop forwarding0 rs2_addr_i", false,-1, 4,0);
        tracep->declBus(c+24,"coretop forwarding0 rs1_data_i", false,-1, 31,0);
        tracep->declBus(c+25,"coretop forwarding0 rs2_data_i", false,-1, 31,0);
        tracep->declBus(c+30,"coretop forwarding0 exe_rdaddr_i", false,-1, 4,0);
        tracep->declBus(c+31,"coretop forwarding0 exe_rddata_i", false,-1, 31,0);
        tracep->declBit(c+32,"coretop forwarding0 exe_rdwe", false,-1);
        tracep->declBus(c+37,"coretop forwarding0 mem_rdaddr_i", false,-1, 4,0);
        tracep->declBus(c+38,"coretop forwarding0 mem_rddata_i", false,-1, 31,0);
        tracep->declBit(c+39,"coretop forwarding0 mem_rdwe", false,-1);
        tracep->declBus(c+43,"coretop forwarding0 wb_rdaddr_i", false,-1, 4,0);
        tracep->declBus(c+44,"coretop forwarding0 wb_rddata_i", false,-1, 31,0);
        tracep->declBit(c+45,"coretop forwarding0 wb_rdwe", false,-1);
        tracep->declBus(c+28,"coretop forwarding0 rs1_data_o", false,-1, 31,0);
        tracep->declBus(c+29,"coretop forwarding0 rs2_data_o", false,-1, 31,0);
        tracep->declBit(c+79,"coretop forwarding0 exeid_addr1_same", false,-1);
        tracep->declBit(c+80,"coretop forwarding0 exeid_addr2_same", false,-1);
        tracep->declBit(c+81,"coretop forwarding0 exe_addr_not0", false,-1);
        tracep->declBit(c+82,"coretop forwarding0 memid_addr1_same", false,-1);
        tracep->declBit(c+83,"coretop forwarding0 memid_addr2_same", false,-1);
        tracep->declBit(c+84,"coretop forwarding0 mem_addr_not0", false,-1);
        tracep->declBit(c+85,"coretop forwarding0 wbid_addr1_same", false,-1);
        tracep->declBit(c+86,"coretop forwarding0 wbid_addr2_same", false,-1);
        tracep->declBit(c+87,"coretop forwarding0 wb_addr_not0", false,-1);
        tracep->declBit(c+88,"coretop forwarding0 exedata1_forward", false,-1);
        tracep->declBit(c+89,"coretop forwarding0 exedata2_forward", false,-1);
        tracep->declBit(c+90,"coretop forwarding0 memdata1_forward", false,-1);
        tracep->declBit(c+91,"coretop forwarding0 memdata2_forward", false,-1);
        tracep->declBit(c+92,"coretop forwarding0 wbdata1_forward", false,-1);
        tracep->declBit(c+93,"coretop forwarding0 wbdata2_forward", false,-1);
        tracep->declBit(c+162,"coretop dpram0 clk_i", false,-1);
        tracep->declBus(c+5,"coretop dpram0 addr_i", false,-1, 31,0);
        tracep->declBus(c+40,"coretop dpram0 ram_addr_i", false,-1, 31,0);
        tracep->declBus(c+41,"coretop dpram0 ram_data_i", false,-1, 31,0);
        tracep->declBit(c+42,"coretop dpram0 mem_we_i", false,-1);
        tracep->declBus(c+6,"coretop dpram0 ram_data_o", false,-1, 31,0);
        tracep->declBus(c+5,"coretop dpram0 pc_o", false,-1, 31,0);
        tracep->declBus(c+163,"coretop dpram0 inst_o", false,-1, 31,0);
        tracep->declBus(c+94,"coretop dpram0 addr4", false,-1, 20,0);
        tracep->declBus(c+95,"coretop dpram0 ramaddr4", false,-1, 20,0);
        tracep->declBit(c+161,"coretop regfiles0 rst_i", false,-1);
        tracep->declBit(c+162,"coretop regfiles0 clk_i", false,-1);
        tracep->declBus(c+11,"coretop regfiles0 rs1_addr_i", false,-1, 4,0);
        tracep->declBus(c+12,"coretop regfiles0 rs2_addr_i", false,-1, 4,0);
        tracep->declBus(c+43,"coretop regfiles0 rd_addr_i", false,-1, 4,0);
        tracep->declBus(c+44,"coretop regfiles0 rd_data_i", false,-1, 31,0);
        tracep->declBit(c+45,"coretop regfiles0 rd_we_i", false,-1);
        tracep->declBus(c+9,"coretop regfiles0 rs1_data_o", false,-1, 31,0);
        tracep->declBus(c+10,"coretop regfiles0 rs2_data_o", false,-1, 31,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declBus(c+96+i*1,"coretop regfiles0 x", true,(i+0), 31,0);}}
        tracep->declBus(c+128,"coretop regfiles0 ra", false,-1, 31,0);
        tracep->declBus(c+129,"coretop regfiles0 sp", false,-1, 31,0);
        tracep->declBus(c+130,"coretop regfiles0 gp", false,-1, 31,0);
        tracep->declBus(c+131,"coretop regfiles0 tp", false,-1, 31,0);
        tracep->declBus(c+132,"coretop regfiles0 t0", false,-1, 31,0);
        tracep->declBus(c+133,"coretop regfiles0 t1", false,-1, 31,0);
        tracep->declBus(c+134,"coretop regfiles0 t2", false,-1, 31,0);
        tracep->declBus(c+135,"coretop regfiles0 s0", false,-1, 31,0);
        tracep->declBus(c+136,"coretop regfiles0 s1", false,-1, 31,0);
        tracep->declBus(c+137,"coretop regfiles0 a0", false,-1, 31,0);
        tracep->declBus(c+138,"coretop regfiles0 a1", false,-1, 31,0);
        tracep->declBus(c+139,"coretop regfiles0 a2", false,-1, 31,0);
        tracep->declBus(c+140,"coretop regfiles0 a3", false,-1, 31,0);
        tracep->declBus(c+141,"coretop regfiles0 a4", false,-1, 31,0);
        tracep->declBus(c+142,"coretop regfiles0 a5", false,-1, 31,0);
        tracep->declBus(c+143,"coretop regfiles0 a6", false,-1, 31,0);
        tracep->declBus(c+144,"coretop regfiles0 a7", false,-1, 31,0);
        tracep->declBus(c+145,"coretop regfiles0 s2", false,-1, 31,0);
        tracep->declBus(c+146,"coretop regfiles0 s3", false,-1, 31,0);
        tracep->declBus(c+147,"coretop regfiles0 s4", false,-1, 31,0);
        tracep->declBus(c+148,"coretop regfiles0 s5", false,-1, 31,0);
        tracep->declBus(c+149,"coretop regfiles0 s6", false,-1, 31,0);
        tracep->declBus(c+150,"coretop regfiles0 s7", false,-1, 31,0);
        tracep->declBus(c+151,"coretop regfiles0 s8", false,-1, 31,0);
        tracep->declBus(c+152,"coretop regfiles0 s9", false,-1, 31,0);
        tracep->declBus(c+153,"coretop regfiles0 s10", false,-1, 31,0);
        tracep->declBus(c+154,"coretop regfiles0 s11", false,-1, 31,0);
        tracep->declBus(c+155,"coretop regfiles0 t3", false,-1, 31,0);
        tracep->declBus(c+156,"coretop regfiles0 t4", false,-1, 31,0);
        tracep->declBus(c+157,"coretop regfiles0 t5", false,-1, 31,0);
        tracep->declBus(c+158,"coretop regfiles0 t6", false,-1, 31,0);
        tracep->declBit(c+159,"coretop regfiles0 we", false,-1);
        tracep->declBus(c+160,"coretop regfiles0 i", false,-1, 31,0);
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
        tracep->fullIData(oldp+1,(vlSymsp->TOP__coretop.__PVT__exepipe_jumpaddr),32);
        tracep->fullBit(oldp+2,(vlSymsp->TOP__coretop.__PVT__exepipe_je));
        tracep->fullBit(oldp+3,(vlSymsp->TOP__coretop.__PVT__idpipectrl_loadusehazard));
        tracep->fullBit(oldp+4,(vlSymsp->TOP__coretop.__PVT__pipectrl_flushid));
        tracep->fullIData(oldp+5,(vlSymsp->TOP__coretop.__PVT__pc_wire),32);
        tracep->fullIData(oldp+6,(vlSymsp->TOP__coretop__dpram0.__PVT__ram_data_o),32);
        tracep->fullIData(oldp+7,(vlSymsp->TOP__coretop.__PVT__ifid_inst),32);
        tracep->fullIData(oldp+8,(vlSymsp->TOP__coretop.__PVT__ifid_pc),32);
        tracep->fullIData(oldp+9,((((IData)(vlSymsp->TOP__coretop__regfiles0.__PVT__we) 
                                    & ((0x1fU & (vlSymsp->TOP__coretop.__PVT__ifid_inst 
                                                 >> 0xfU)) 
                                       == (IData)(vlSymsp->TOP__coretop.__PVT__wbreg_rdaddr)))
                                    ? vlSymsp->TOP__coretop.__PVT__wbreg_rddata
                                    : vlSymsp->TOP__coretop__regfiles0.__PVT__x
                                   [(0x1fU & (vlSymsp->TOP__coretop.__PVT__ifid_inst 
                                              >> 0xfU))])),32);
        tracep->fullIData(oldp+10,((((IData)(vlSymsp->TOP__coretop__regfiles0.__PVT__we) 
                                     & ((0x1fU & (vlSymsp->TOP__coretop.__PVT__ifid_inst 
                                                  >> 0x14U)) 
                                        == (IData)(vlSymsp->TOP__coretop.__PVT__wbreg_rdaddr)))
                                     ? vlSymsp->TOP__coretop.__PVT__wbreg_rddata
                                     : vlSymsp->TOP__coretop__regfiles0.__PVT__x
                                    [(0x1fU & (vlSymsp->TOP__coretop.__PVT__ifid_inst 
                                               >> 0x14U))])),32);
        tracep->fullCData(oldp+11,((0x1fU & (vlSymsp->TOP__coretop.__PVT__ifid_inst 
                                             >> 0xfU))),5);
        tracep->fullCData(oldp+12,((0x1fU & (vlSymsp->TOP__coretop.__PVT__ifid_inst 
                                             >> 0x14U))),5);
        tracep->fullIData(oldp+13,(vlSymsp->TOP__coretop.__PVT__idexe_pc),32);
        tracep->fullIData(oldp+14,(vlSymsp->TOP__coretop.__PVT__idexe_imm),32);
        tracep->fullCData(oldp+15,(vlSymsp->TOP__coretop.__PVT__idexe_rdaddr),5);
        tracep->fullBit(oldp+16,(vlSymsp->TOP__coretop.__PVT__idexe_we));
        tracep->fullCData(oldp+17,(vlSymsp->TOP__coretop.__PVT__idexe_optype),3);
        tracep->fullCData(oldp+18,(vlSymsp->TOP__coretop.__PVT__idexe_opfunc3),3);
        tracep->fullBit(oldp+19,(vlSymsp->TOP__coretop.__PVT__idexe_shiftsel));
        tracep->fullBit(oldp+20,(vlSymsp->TOP__coretop.__PVT__idexe_addsubsel));
        tracep->fullBit(oldp+21,(vlSymsp->TOP__coretop.__PVT__idexe_jtypesel));
        tracep->fullBit(oldp+22,(vlSymsp->TOP__coretop.__PVT__idexe_memwe));
        tracep->fullBit(oldp+23,(vlSymsp->TOP__coretop.__PVT__idexe_memre));
        tracep->fullIData(oldp+24,(vlSymsp->TOP__coretop.__PVT__idfwd_rs1),32);
        tracep->fullIData(oldp+25,(vlSymsp->TOP__coretop.__PVT__idfwd_rs2),32);
        tracep->fullCData(oldp+26,(vlSymsp->TOP__coretop.__PVT__idfwd_addr1),5);
        tracep->fullCData(oldp+27,(vlSymsp->TOP__coretop.__PVT__idfwd_addr2),5);
        tracep->fullIData(oldp+28,(vlSymsp->TOP__coretop.__PVT__fwdexe_rs1),32);
        tracep->fullIData(oldp+29,(((((IData)(vlSymsp->TOP__coretop.__PVT__exemem_we) 
                                      & (0U != (IData)(vlSymsp->TOP__coretop.__PVT__exemem_rdaddr))) 
                                     & ((IData)(vlSymsp->TOP__coretop.__PVT__idfwd_addr2) 
                                        == (IData)(vlSymsp->TOP__coretop.__PVT__exemem_rdaddr)))
                                     ? vlSymsp->TOP__coretop.__PVT__exemem_rddata
                                     : ((((IData)(vlSymsp->TOP__coretop.__PVT__memwb_we) 
                                          & (0U != (IData)(vlSymsp->TOP__coretop.__PVT__memwb_rdaddr))) 
                                         & ((IData)(vlSymsp->TOP__coretop.__PVT__idfwd_addr2) 
                                            == (IData)(vlSymsp->TOP__coretop.__PVT__memwb_rdaddr)))
                                         ? vlSymsp->TOP__coretop.__PVT__memwb_rddata
                                         : ((((IData)(vlSymsp->TOP__coretop.__PVT__wbreg_we) 
                                              & (0U 
                                                 != (IData)(vlSymsp->TOP__coretop.__PVT__wbreg_rdaddr))) 
                                             & ((IData)(vlSymsp->TOP__coretop.__PVT__idfwd_addr2) 
                                                == (IData)(vlSymsp->TOP__coretop.__PVT__wbreg_rdaddr)))
                                             ? vlSymsp->TOP__coretop.__PVT__wbreg_rddata
                                             : vlSymsp->TOP__coretop.__PVT__idfwd_rs2)))),32);
        tracep->fullCData(oldp+30,(vlSymsp->TOP__coretop.__PVT__exemem_rdaddr),5);
        tracep->fullIData(oldp+31,(vlSymsp->TOP__coretop.__PVT__exemem_rddata),32);
        tracep->fullBit(oldp+32,(vlSymsp->TOP__coretop.__PVT__exemem_we));
        tracep->fullIData(oldp+33,(vlSymsp->TOP__coretop.__PVT__exemem_memaddr),32);
        tracep->fullBit(oldp+34,(vlSymsp->TOP__coretop.__PVT__exemem_memre));
        tracep->fullBit(oldp+35,(vlSymsp->TOP__coretop.__PVT__exemem_memwe));
        tracep->fullCData(oldp+36,(vlSymsp->TOP__coretop.__PVT__exemem_opfunc3),3);
        tracep->fullCData(oldp+37,(vlSymsp->TOP__coretop.__PVT__memwb_rdaddr),5);
        tracep->fullIData(oldp+38,(vlSymsp->TOP__coretop.__PVT__memwb_rddata),32);
        tracep->fullBit(oldp+39,(vlSymsp->TOP__coretop.__PVT__memwb_we));
        tracep->fullIData(oldp+40,(vlSymsp->TOP__coretop.__PVT__memrom_ramaddr),32);
        tracep->fullIData(oldp+41,(vlSymsp->TOP__coretop.__PVT__memrom_ramdata),32);
        tracep->fullBit(oldp+42,(vlSymsp->TOP__coretop.__PVT__memrom_memwe));
        tracep->fullCData(oldp+43,(vlSymsp->TOP__coretop.__PVT__wbreg_rdaddr),5);
        tracep->fullIData(oldp+44,(vlSymsp->TOP__coretop.__PVT__wbreg_rddata),32);
        tracep->fullBit(oldp+45,(vlSymsp->TOP__coretop.__PVT__wbreg_we));
        tracep->fullCData(oldp+46,((0x7fU & vlSymsp->TOP__coretop.__PVT__ifid_inst)),7);
        tracep->fullCData(oldp+47,(vlSymsp->TOP__coretop.__PVT__decode0__DOT__opfunc3),3);
        tracep->fullCData(oldp+48,((vlSymsp->TOP__coretop.__PVT__ifid_inst 
                                    >> 0x19U)),7);
        tracep->fullCData(oldp+49,((0x1fU & (vlSymsp->TOP__coretop.__PVT__ifid_inst 
                                             >> 7U))),5);
        tracep->fullCData(oldp+50,(vlSymsp->TOP__coretop.__PVT__decode0__DOT__optype),3);
        tracep->fullBit(oldp+51,((3U == (0x7fU & vlSymsp->TOP__coretop.__PVT__ifid_inst))));
        tracep->fullBit(oldp+52,((0x23U == (0x7fU & vlSymsp->TOP__coretop.__PVT__ifid_inst))));
        tracep->fullBit(oldp+53,((((((((0x13U == (0x7fU 
                                                  & vlSymsp->TOP__coretop.__PVT__ifid_inst)) 
                                       | (IData)(vlSymsp->TOP__coretop.__PVT__decode0__DOT__Rtype)) 
                                      | (3U == (0x7fU 
                                                & vlSymsp->TOP__coretop.__PVT__ifid_inst))) 
                                     | (0x37U == (0x7fU 
                                                  & vlSymsp->TOP__coretop.__PVT__ifid_inst))) 
                                    | (0x17U == (0x7fU 
                                                 & vlSymsp->TOP__coretop.__PVT__ifid_inst))) 
                                   | (0x6fU == (0x7fU 
                                                & vlSymsp->TOP__coretop.__PVT__ifid_inst))) 
                                  | (0x67U == (0x7fU 
                                               & vlSymsp->TOP__coretop.__PVT__ifid_inst)))));
        tracep->fullIData(oldp+54,(vlSymsp->TOP__coretop.__PVT__decode0__DOT__immI),32);
        tracep->fullIData(oldp+55,((((- (IData)((vlSymsp->TOP__coretop.__PVT__ifid_inst 
                                                 >> 0x1fU))) 
                                     << 0xcU) | (vlSymsp->TOP__coretop.__PVT__ifid_inst 
                                                 >> 0x14U))),32);
        tracep->fullIData(oldp+56,((((- (IData)((vlSymsp->TOP__coretop.__PVT__ifid_inst 
                                                 >> 0x1fU))) 
                                     << 0xcU) | ((0xfe0U 
                                                  & (vlSymsp->TOP__coretop.__PVT__ifid_inst 
                                                     >> 0x14U)) 
                                                 | (0x1fU 
                                                    & (vlSymsp->TOP__coretop.__PVT__ifid_inst 
                                                       >> 7U))))),32);
        tracep->fullIData(oldp+57,((0xfffff000U & vlSymsp->TOP__coretop.__PVT__ifid_inst)),32);
        tracep->fullIData(oldp+58,((((- (IData)((vlSymsp->TOP__coretop.__PVT__ifid_inst 
                                                 >> 0x1fU))) 
                                     << 0x14U) | ((0xff000U 
                                                   & vlSymsp->TOP__coretop.__PVT__ifid_inst) 
                                                  | ((0x800U 
                                                      & (vlSymsp->TOP__coretop.__PVT__ifid_inst 
                                                         >> 9U)) 
                                                     | (0x7feU 
                                                        & (vlSymsp->TOP__coretop.__PVT__ifid_inst 
                                                           >> 0x14U)))))),32);
        tracep->fullIData(oldp+59,((((- (IData)((vlSymsp->TOP__coretop.__PVT__ifid_inst 
                                                 >> 0x1fU))) 
                                     << 0xcU) | ((0x800U 
                                                  & (vlSymsp->TOP__coretop.__PVT__ifid_inst 
                                                     << 4U)) 
                                                 | ((0x7e0U 
                                                     & (vlSymsp->TOP__coretop.__PVT__ifid_inst 
                                                        >> 0x14U)) 
                                                    | (0x1eU 
                                                       & (vlSymsp->TOP__coretop.__PVT__ifid_inst 
                                                          >> 7U)))))),32);
        tracep->fullBit(oldp+60,((0x13U == (0x7fU & vlSymsp->TOP__coretop.__PVT__ifid_inst))));
        tracep->fullBit(oldp+61,(vlSymsp->TOP__coretop.__PVT__decode0__DOT__Rtype));
        tracep->fullBit(oldp+62,((0x37U == (0x7fU & vlSymsp->TOP__coretop.__PVT__ifid_inst))));
        tracep->fullBit(oldp+63,((0x17U == (0x7fU & vlSymsp->TOP__coretop.__PVT__ifid_inst))));
        tracep->fullBit(oldp+64,((0x6fU == (0x7fU & vlSymsp->TOP__coretop.__PVT__ifid_inst))));
        tracep->fullBit(oldp+65,((0x67U == (0x7fU & vlSymsp->TOP__coretop.__PVT__ifid_inst))));
        tracep->fullBit(oldp+66,((0x63U == (0x7fU & vlSymsp->TOP__coretop.__PVT__ifid_inst))));
        tracep->fullBit(oldp+67,(((0x20U == (0x7fU 
                                             & vlSymsp->TOP__coretop.__PVT__ifid_inst))
                                   ? 1U : 0U)));
        tracep->fullBit(oldp+68,((((0x33U == (0x7fU 
                                              & vlSymsp->TOP__coretop.__PVT__ifid_inst)) 
                                   & (0x20U == (vlSymsp->TOP__coretop.__PVT__ifid_inst 
                                                >> 0x19U))) 
                                  & (0U == (IData)(vlSymsp->TOP__coretop.__PVT__decode0__DOT__opfunc3)))));
        tracep->fullBit(oldp+69,(((0x6fU == (0x7fU 
                                             & vlSymsp->TOP__coretop.__PVT__ifid_inst))
                                   ? 1U : 0U)));
        tracep->fullBit(oldp+70,((((0x1fU & (vlSymsp->TOP__coretop.__PVT__ifid_inst 
                                             >> 0xfU)) 
                                   == (IData)(vlSymsp->TOP__coretop.__PVT__idexe_rdaddr)) 
                                  & ((((IData)(vlSymsp->TOP__coretop.__PVT__decode0__DOT__Rtype) 
                                       | (0x23U == 
                                          (0x7fU & vlSymsp->TOP__coretop.__PVT__ifid_inst))) 
                                      | (0x63U == (0x7fU 
                                                   & vlSymsp->TOP__coretop.__PVT__ifid_inst))) 
                                     | (0x13U == (0x7fU 
                                                  & vlSymsp->TOP__coretop.__PVT__ifid_inst))))));
        tracep->fullBit(oldp+71,((((0x1fU & (vlSymsp->TOP__coretop.__PVT__ifid_inst 
                                             >> 0x14U)) 
                                   == (IData)(vlSymsp->TOP__coretop.__PVT__idexe_rdaddr)) 
                                  & (((IData)(vlSymsp->TOP__coretop.__PVT__decode0__DOT__Rtype) 
                                      | (0x23U == (0x7fU 
                                                   & vlSymsp->TOP__coretop.__PVT__ifid_inst))) 
                                     | (0x63U == (0x7fU 
                                                  & vlSymsp->TOP__coretop.__PVT__ifid_inst))))));
        tracep->fullIData(oldp+72,(vlSymsp->TOP__coretop.__PVT__decode0__DOT__imm),32);
        tracep->fullIData(oldp+73,(vlSymsp->TOP__coretop.__PVT__exe0__DOT__op1),32);
        tracep->fullIData(oldp+74,(vlSymsp->TOP__coretop.__PVT__exe0__DOT__op2),32);
        tracep->fullIData(oldp+75,(vlSymsp->TOP__coretop.__PVT__exe0__DOT__op_result),32);
        tracep->fullIData(oldp+76,((vlSymsp->TOP__coretop.__PVT__fwdexe_rs1 
                                    + vlSymsp->TOP__coretop.__PVT__idexe_imm)),32);
        tracep->fullCData(oldp+77,((3U & vlSymsp->TOP__coretop.__PVT__exemem_memaddr)),2);
        tracep->fullIData(oldp+78,(vlSymsp->TOP__coretop.__PVT__mem0__DOT__rd_data),32);
        tracep->fullBit(oldp+79,(((IData)(vlSymsp->TOP__coretop.__PVT__idfwd_addr1) 
                                  == (IData)(vlSymsp->TOP__coretop.__PVT__exemem_rdaddr))));
        tracep->fullBit(oldp+80,(((IData)(vlSymsp->TOP__coretop.__PVT__idfwd_addr2) 
                                  == (IData)(vlSymsp->TOP__coretop.__PVT__exemem_rdaddr))));
        tracep->fullBit(oldp+81,((0U != (IData)(vlSymsp->TOP__coretop.__PVT__exemem_rdaddr))));
        tracep->fullBit(oldp+82,(((IData)(vlSymsp->TOP__coretop.__PVT__idfwd_addr1) 
                                  == (IData)(vlSymsp->TOP__coretop.__PVT__memwb_rdaddr))));
        tracep->fullBit(oldp+83,(((IData)(vlSymsp->TOP__coretop.__PVT__idfwd_addr2) 
                                  == (IData)(vlSymsp->TOP__coretop.__PVT__memwb_rdaddr))));
        tracep->fullBit(oldp+84,((0U != (IData)(vlSymsp->TOP__coretop.__PVT__memwb_rdaddr))));
        tracep->fullBit(oldp+85,(((IData)(vlSymsp->TOP__coretop.__PVT__idfwd_addr1) 
                                  == (IData)(vlSymsp->TOP__coretop.__PVT__wbreg_rdaddr))));
        tracep->fullBit(oldp+86,(((IData)(vlSymsp->TOP__coretop.__PVT__idfwd_addr2) 
                                  == (IData)(vlSymsp->TOP__coretop.__PVT__wbreg_rdaddr))));
        tracep->fullBit(oldp+87,((0U != (IData)(vlSymsp->TOP__coretop.__PVT__wbreg_rdaddr))));
        tracep->fullBit(oldp+88,((((IData)(vlSymsp->TOP__coretop.__PVT__exemem_we) 
                                   & (0U != (IData)(vlSymsp->TOP__coretop.__PVT__exemem_rdaddr))) 
                                  & ((IData)(vlSymsp->TOP__coretop.__PVT__idfwd_addr1) 
                                     == (IData)(vlSymsp->TOP__coretop.__PVT__exemem_rdaddr)))));
        tracep->fullBit(oldp+89,((((IData)(vlSymsp->TOP__coretop.__PVT__exemem_we) 
                                   & (0U != (IData)(vlSymsp->TOP__coretop.__PVT__exemem_rdaddr))) 
                                  & ((IData)(vlSymsp->TOP__coretop.__PVT__idfwd_addr2) 
                                     == (IData)(vlSymsp->TOP__coretop.__PVT__exemem_rdaddr)))));
        tracep->fullBit(oldp+90,((((IData)(vlSymsp->TOP__coretop.__PVT__memwb_we) 
                                   & (0U != (IData)(vlSymsp->TOP__coretop.__PVT__memwb_rdaddr))) 
                                  & ((IData)(vlSymsp->TOP__coretop.__PVT__idfwd_addr1) 
                                     == (IData)(vlSymsp->TOP__coretop.__PVT__memwb_rdaddr)))));
        tracep->fullBit(oldp+91,((((IData)(vlSymsp->TOP__coretop.__PVT__memwb_we) 
                                   & (0U != (IData)(vlSymsp->TOP__coretop.__PVT__memwb_rdaddr))) 
                                  & ((IData)(vlSymsp->TOP__coretop.__PVT__idfwd_addr2) 
                                     == (IData)(vlSymsp->TOP__coretop.__PVT__memwb_rdaddr)))));
        tracep->fullBit(oldp+92,((((IData)(vlSymsp->TOP__coretop.__PVT__wbreg_we) 
                                   & (0U != (IData)(vlSymsp->TOP__coretop.__PVT__wbreg_rdaddr))) 
                                  & ((IData)(vlSymsp->TOP__coretop.__PVT__idfwd_addr1) 
                                     == (IData)(vlSymsp->TOP__coretop.__PVT__wbreg_rdaddr)))));
        tracep->fullBit(oldp+93,((((IData)(vlSymsp->TOP__coretop.__PVT__wbreg_we) 
                                   & (0U != (IData)(vlSymsp->TOP__coretop.__PVT__wbreg_rdaddr))) 
                                  & ((IData)(vlSymsp->TOP__coretop.__PVT__idfwd_addr2) 
                                     == (IData)(vlSymsp->TOP__coretop.__PVT__wbreg_rdaddr)))));
        tracep->fullIData(oldp+94,((0x1ffffcU & vlSymsp->TOP__coretop.__PVT__pc_wire)),21);
        tracep->fullIData(oldp+95,((0x1ffffcU & vlSymsp->TOP__coretop.__PVT__memrom_ramaddr)),21);
        tracep->fullIData(oldp+96,(vlSymsp->TOP__coretop__regfiles0.__PVT__x[0]),32);
        tracep->fullIData(oldp+97,(vlSymsp->TOP__coretop__regfiles0.__PVT__x[1]),32);
        tracep->fullIData(oldp+98,(vlSymsp->TOP__coretop__regfiles0.__PVT__x[2]),32);
        tracep->fullIData(oldp+99,(vlSymsp->TOP__coretop__regfiles0.__PVT__x[3]),32);
        tracep->fullIData(oldp+100,(vlSymsp->TOP__coretop__regfiles0.__PVT__x[4]),32);
        tracep->fullIData(oldp+101,(vlSymsp->TOP__coretop__regfiles0.__PVT__x[5]),32);
        tracep->fullIData(oldp+102,(vlSymsp->TOP__coretop__regfiles0.__PVT__x[6]),32);
        tracep->fullIData(oldp+103,(vlSymsp->TOP__coretop__regfiles0.__PVT__x[7]),32);
        tracep->fullIData(oldp+104,(vlSymsp->TOP__coretop__regfiles0.__PVT__x[8]),32);
        tracep->fullIData(oldp+105,(vlSymsp->TOP__coretop__regfiles0.__PVT__x[9]),32);
        tracep->fullIData(oldp+106,(vlSymsp->TOP__coretop__regfiles0.__PVT__x[10]),32);
        tracep->fullIData(oldp+107,(vlSymsp->TOP__coretop__regfiles0.__PVT__x[11]),32);
        tracep->fullIData(oldp+108,(vlSymsp->TOP__coretop__regfiles0.__PVT__x[12]),32);
        tracep->fullIData(oldp+109,(vlSymsp->TOP__coretop__regfiles0.__PVT__x[13]),32);
        tracep->fullIData(oldp+110,(vlSymsp->TOP__coretop__regfiles0.__PVT__x[14]),32);
        tracep->fullIData(oldp+111,(vlSymsp->TOP__coretop__regfiles0.__PVT__x[15]),32);
        tracep->fullIData(oldp+112,(vlSymsp->TOP__coretop__regfiles0.__PVT__x[16]),32);
        tracep->fullIData(oldp+113,(vlSymsp->TOP__coretop__regfiles0.__PVT__x[17]),32);
        tracep->fullIData(oldp+114,(vlSymsp->TOP__coretop__regfiles0.__PVT__x[18]),32);
        tracep->fullIData(oldp+115,(vlSymsp->TOP__coretop__regfiles0.__PVT__x[19]),32);
        tracep->fullIData(oldp+116,(vlSymsp->TOP__coretop__regfiles0.__PVT__x[20]),32);
        tracep->fullIData(oldp+117,(vlSymsp->TOP__coretop__regfiles0.__PVT__x[21]),32);
        tracep->fullIData(oldp+118,(vlSymsp->TOP__coretop__regfiles0.__PVT__x[22]),32);
        tracep->fullIData(oldp+119,(vlSymsp->TOP__coretop__regfiles0.__PVT__x[23]),32);
        tracep->fullIData(oldp+120,(vlSymsp->TOP__coretop__regfiles0.__PVT__x[24]),32);
        tracep->fullIData(oldp+121,(vlSymsp->TOP__coretop__regfiles0.__PVT__x[25]),32);
        tracep->fullIData(oldp+122,(vlSymsp->TOP__coretop__regfiles0.__PVT__x[26]),32);
        tracep->fullIData(oldp+123,(vlSymsp->TOP__coretop__regfiles0.__PVT__x[27]),32);
        tracep->fullIData(oldp+124,(vlSymsp->TOP__coretop__regfiles0.__PVT__x[28]),32);
        tracep->fullIData(oldp+125,(vlSymsp->TOP__coretop__regfiles0.__PVT__x[29]),32);
        tracep->fullIData(oldp+126,(vlSymsp->TOP__coretop__regfiles0.__PVT__x[30]),32);
        tracep->fullIData(oldp+127,(vlSymsp->TOP__coretop__regfiles0.__PVT__x[31]),32);
        tracep->fullIData(oldp+128,(vlSymsp->TOP__coretop__regfiles0.__PVT__x
                                    [1U]),32);
        tracep->fullIData(oldp+129,(vlSymsp->TOP__coretop__regfiles0.__PVT__x
                                    [2U]),32);
        tracep->fullIData(oldp+130,(vlSymsp->TOP__coretop__regfiles0.__PVT__x
                                    [3U]),32);
        tracep->fullIData(oldp+131,(vlSymsp->TOP__coretop__regfiles0.__PVT__x
                                    [4U]),32);
        tracep->fullIData(oldp+132,(vlSymsp->TOP__coretop__regfiles0.__PVT__x
                                    [5U]),32);
        tracep->fullIData(oldp+133,(vlSymsp->TOP__coretop__regfiles0.__PVT__x
                                    [6U]),32);
        tracep->fullIData(oldp+134,(vlSymsp->TOP__coretop__regfiles0.__PVT__x
                                    [7U]),32);
        tracep->fullIData(oldp+135,(vlSymsp->TOP__coretop__regfiles0.__PVT__x
                                    [8U]),32);
        tracep->fullIData(oldp+136,(vlSymsp->TOP__coretop__regfiles0.__PVT__x
                                    [9U]),32);
        tracep->fullIData(oldp+137,(vlSymsp->TOP__coretop__regfiles0.__PVT__x
                                    [0xaU]),32);
        tracep->fullIData(oldp+138,(vlSymsp->TOP__coretop__regfiles0.__PVT__x
                                    [0xbU]),32);
        tracep->fullIData(oldp+139,(vlSymsp->TOP__coretop__regfiles0.__PVT__x
                                    [0xcU]),32);
        tracep->fullIData(oldp+140,(vlSymsp->TOP__coretop__regfiles0.__PVT__x
                                    [0xdU]),32);
        tracep->fullIData(oldp+141,(vlSymsp->TOP__coretop__regfiles0.__PVT__x
                                    [0xeU]),32);
        tracep->fullIData(oldp+142,(vlSymsp->TOP__coretop__regfiles0.__PVT__x
                                    [0xfU]),32);
        tracep->fullIData(oldp+143,(vlSymsp->TOP__coretop__regfiles0.__PVT__x
                                    [0x10U]),32);
        tracep->fullIData(oldp+144,(vlSymsp->TOP__coretop__regfiles0.__PVT__x
                                    [0x11U]),32);
        tracep->fullIData(oldp+145,(vlSymsp->TOP__coretop__regfiles0.__PVT__x
                                    [0x12U]),32);
        tracep->fullIData(oldp+146,(vlSymsp->TOP__coretop__regfiles0.__PVT__x
                                    [0x13U]),32);
        tracep->fullIData(oldp+147,(vlSymsp->TOP__coretop__regfiles0.__PVT__x
                                    [0x14U]),32);
        tracep->fullIData(oldp+148,(vlSymsp->TOP__coretop__regfiles0.__PVT__x
                                    [0x15U]),32);
        tracep->fullIData(oldp+149,(vlSymsp->TOP__coretop__regfiles0.__PVT__x
                                    [0x16U]),32);
        tracep->fullIData(oldp+150,(vlSymsp->TOP__coretop__regfiles0.__PVT__x
                                    [0x17U]),32);
        tracep->fullIData(oldp+151,(vlSymsp->TOP__coretop__regfiles0.__PVT__x
                                    [0x18U]),32);
        tracep->fullIData(oldp+152,(vlSymsp->TOP__coretop__regfiles0.__PVT__x
                                    [0x19U]),32);
        tracep->fullIData(oldp+153,(vlSymsp->TOP__coretop__regfiles0.__PVT__x
                                    [0x1aU]),32);
        tracep->fullIData(oldp+154,(vlSymsp->TOP__coretop__regfiles0.__PVT__x
                                    [0x1bU]),32);
        tracep->fullIData(oldp+155,(vlSymsp->TOP__coretop__regfiles0.__PVT__x
                                    [0x1cU]),32);
        tracep->fullIData(oldp+156,(vlSymsp->TOP__coretop__regfiles0.__PVT__x
                                    [0x1dU]),32);
        tracep->fullIData(oldp+157,(vlSymsp->TOP__coretop__regfiles0.__PVT__x
                                    [0x1eU]),32);
        tracep->fullIData(oldp+158,(vlSymsp->TOP__coretop__regfiles0.__PVT__x
                                    [0x1fU]),32);
        tracep->fullBit(oldp+159,(vlSymsp->TOP__coretop__regfiles0.__PVT__we));
        tracep->fullIData(oldp+160,(vlSymsp->TOP__coretop__regfiles0.__PVT__i),32);
        tracep->fullBit(oldp+161,(vlSelf->rst_i));
        tracep->fullBit(oldp+162,(vlSelf->clk_i));
        tracep->fullIData(oldp+163,(((vlSymsp->TOP__coretop__dpram0.__PVT__mem
                                      [(0x1ffffcU & vlSymsp->TOP__coretop.__PVT__pc_wire)] 
                                      << 0x18U) | (
                                                   (vlSymsp->TOP__coretop__dpram0.__PVT__mem
                                                    [
                                                    (0x1fffffU 
                                                     & ((IData)(1U) 
                                                        + 
                                                        (0x1ffffcU 
                                                         & vlSymsp->TOP__coretop.__PVT__pc_wire)))] 
                                                    << 0x10U) 
                                                   | ((vlSymsp->TOP__coretop__dpram0.__PVT__mem
                                                       [
                                                       (0x1fffffU 
                                                        & ((IData)(2U) 
                                                           + 
                                                           (0x1ffffcU 
                                                            & vlSymsp->TOP__coretop.__PVT__pc_wire)))] 
                                                       << 8U) 
                                                      | vlSymsp->TOP__coretop__dpram0.__PVT__mem
                                                      [
                                                      (0x1fffffU 
                                                       & ((IData)(3U) 
                                                          + 
                                                          (0x1ffffcU 
                                                           & vlSymsp->TOP__coretop.__PVT__pc_wire)))])))),32);
    }
}
