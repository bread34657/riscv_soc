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
            tracep->chgIData(oldp+0,(vlSymsp->TOP__coretop.__PVT__exepipe_jumpaddr),32);
            tracep->chgBit(oldp+1,(vlSymsp->TOP__coretop.__PVT__exepipe_je));
            tracep->chgBit(oldp+2,(vlSymsp->TOP__coretop.__PVT__idpipectrl_loadusehazard));
            tracep->chgBit(oldp+3,(vlSymsp->TOP__coretop.__PVT__pipectrl_flushid));
            tracep->chgIData(oldp+4,(vlSymsp->TOP__coretop.__PVT__pc_wire),32);
            tracep->chgIData(oldp+5,(vlSymsp->TOP__coretop__dpram0.__PVT__ram_data_o),32);
            tracep->chgIData(oldp+6,(vlSymsp->TOP__coretop.__PVT__ifid_inst),32);
            tracep->chgIData(oldp+7,(vlSymsp->TOP__coretop.__PVT__ifid_pc),32);
            tracep->chgIData(oldp+8,((((IData)(vlSymsp->TOP__coretop__regfiles0.__PVT__we) 
                                       & ((0x1fU & 
                                           (vlSymsp->TOP__coretop.__PVT__ifid_inst 
                                            >> 0xfU)) 
                                          == (IData)(vlSymsp->TOP__coretop.__PVT__wbreg_rdaddr)))
                                       ? vlSymsp->TOP__coretop.__PVT__wbreg_rddata
                                       : vlSymsp->TOP__coretop__regfiles0.__PVT__x
                                      [(0x1fU & (vlSymsp->TOP__coretop.__PVT__ifid_inst 
                                                 >> 0xfU))])),32);
            tracep->chgIData(oldp+9,((((IData)(vlSymsp->TOP__coretop__regfiles0.__PVT__we) 
                                       & ((0x1fU & 
                                           (vlSymsp->TOP__coretop.__PVT__ifid_inst 
                                            >> 0x14U)) 
                                          == (IData)(vlSymsp->TOP__coretop.__PVT__wbreg_rdaddr)))
                                       ? vlSymsp->TOP__coretop.__PVT__wbreg_rddata
                                       : vlSymsp->TOP__coretop__regfiles0.__PVT__x
                                      [(0x1fU & (vlSymsp->TOP__coretop.__PVT__ifid_inst 
                                                 >> 0x14U))])),32);
            tracep->chgCData(oldp+10,((0x1fU & (vlSymsp->TOP__coretop.__PVT__ifid_inst 
                                                >> 0xfU))),5);
            tracep->chgCData(oldp+11,((0x1fU & (vlSymsp->TOP__coretop.__PVT__ifid_inst 
                                                >> 0x14U))),5);
            tracep->chgIData(oldp+12,(vlSymsp->TOP__coretop.__PVT__idexe_pc),32);
            tracep->chgIData(oldp+13,(vlSymsp->TOP__coretop.__PVT__idexe_imm),32);
            tracep->chgCData(oldp+14,(vlSymsp->TOP__coretop.__PVT__idexe_rdaddr),5);
            tracep->chgBit(oldp+15,(vlSymsp->TOP__coretop.__PVT__idexe_we));
            tracep->chgCData(oldp+16,(vlSymsp->TOP__coretop.__PVT__idexe_optype),3);
            tracep->chgCData(oldp+17,(vlSymsp->TOP__coretop.__PVT__idexe_opfunc3),3);
            tracep->chgBit(oldp+18,(vlSymsp->TOP__coretop.__PVT__idexe_shiftsel));
            tracep->chgBit(oldp+19,(vlSymsp->TOP__coretop.__PVT__idexe_addsubsel));
            tracep->chgBit(oldp+20,(vlSymsp->TOP__coretop.__PVT__idexe_jtypesel));
            tracep->chgBit(oldp+21,(vlSymsp->TOP__coretop.__PVT__idexe_memwe));
            tracep->chgBit(oldp+22,(vlSymsp->TOP__coretop.__PVT__idexe_memre));
            tracep->chgIData(oldp+23,(vlSymsp->TOP__coretop.__PVT__idfwd_rs1),32);
            tracep->chgIData(oldp+24,(vlSymsp->TOP__coretop.__PVT__idfwd_rs2),32);
            tracep->chgCData(oldp+25,(vlSymsp->TOP__coretop.__PVT__idfwd_addr1),5);
            tracep->chgCData(oldp+26,(vlSymsp->TOP__coretop.__PVT__idfwd_addr2),5);
            tracep->chgIData(oldp+27,(vlSymsp->TOP__coretop.__PVT__fwdexe_rs1),32);
            tracep->chgIData(oldp+28,(((((IData)(vlSymsp->TOP__coretop.__PVT__exemem_we) 
                                         & (0U != (IData)(vlSymsp->TOP__coretop.__PVT__exemem_rdaddr))) 
                                        & ((IData)(vlSymsp->TOP__coretop.__PVT__idfwd_addr2) 
                                           == (IData)(vlSymsp->TOP__coretop.__PVT__exemem_rdaddr)))
                                        ? vlSymsp->TOP__coretop.__PVT__exemem_rddata
                                        : ((((IData)(vlSymsp->TOP__coretop.__PVT__memwb_we) 
                                             & (0U 
                                                != (IData)(vlSymsp->TOP__coretop.__PVT__memwb_rdaddr))) 
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
            tracep->chgCData(oldp+29,(vlSymsp->TOP__coretop.__PVT__exemem_rdaddr),5);
            tracep->chgIData(oldp+30,(vlSymsp->TOP__coretop.__PVT__exemem_rddata),32);
            tracep->chgBit(oldp+31,(vlSymsp->TOP__coretop.__PVT__exemem_we));
            tracep->chgIData(oldp+32,(vlSymsp->TOP__coretop.__PVT__exemem_memaddr),32);
            tracep->chgBit(oldp+33,(vlSymsp->TOP__coretop.__PVT__exemem_memre));
            tracep->chgBit(oldp+34,(vlSymsp->TOP__coretop.__PVT__exemem_memwe));
            tracep->chgCData(oldp+35,(vlSymsp->TOP__coretop.__PVT__exemem_opfunc3),3);
            tracep->chgCData(oldp+36,(vlSymsp->TOP__coretop.__PVT__memwb_rdaddr),5);
            tracep->chgIData(oldp+37,(vlSymsp->TOP__coretop.__PVT__memwb_rddata),32);
            tracep->chgBit(oldp+38,(vlSymsp->TOP__coretop.__PVT__memwb_we));
            tracep->chgIData(oldp+39,(vlSymsp->TOP__coretop.__PVT__memrom_ramaddr),32);
            tracep->chgIData(oldp+40,(vlSymsp->TOP__coretop.__PVT__memrom_ramdata),32);
            tracep->chgBit(oldp+41,(vlSymsp->TOP__coretop.__PVT__memrom_memwe));
            tracep->chgCData(oldp+42,(vlSymsp->TOP__coretop.__PVT__wbreg_rdaddr),5);
            tracep->chgIData(oldp+43,(vlSymsp->TOP__coretop.__PVT__wbreg_rddata),32);
            tracep->chgBit(oldp+44,(vlSymsp->TOP__coretop.__PVT__wbreg_we));
            tracep->chgCData(oldp+45,((0x7fU & vlSymsp->TOP__coretop.__PVT__ifid_inst)),7);
            tracep->chgCData(oldp+46,(vlSymsp->TOP__coretop.__PVT__decode0__DOT__opfunc3),3);
            tracep->chgCData(oldp+47,((vlSymsp->TOP__coretop.__PVT__ifid_inst 
                                       >> 0x19U)),7);
            tracep->chgCData(oldp+48,((0x1fU & (vlSymsp->TOP__coretop.__PVT__ifid_inst 
                                                >> 7U))),5);
            tracep->chgCData(oldp+49,(vlSymsp->TOP__coretop.__PVT__decode0__DOT__optype),3);
            tracep->chgBit(oldp+50,((3U == (0x7fU & vlSymsp->TOP__coretop.__PVT__ifid_inst))));
            tracep->chgBit(oldp+51,((0x23U == (0x7fU 
                                               & vlSymsp->TOP__coretop.__PVT__ifid_inst))));
            tracep->chgBit(oldp+52,((((((((0x13U == 
                                           (0x7fU & vlSymsp->TOP__coretop.__PVT__ifid_inst)) 
                                          | (IData)(vlSymsp->TOP__coretop.__PVT__decode0__DOT__Rtype)) 
                                         | (3U == (0x7fU 
                                                   & vlSymsp->TOP__coretop.__PVT__ifid_inst))) 
                                        | (0x37U == 
                                           (0x7fU & vlSymsp->TOP__coretop.__PVT__ifid_inst))) 
                                       | (0x17U == 
                                          (0x7fU & vlSymsp->TOP__coretop.__PVT__ifid_inst))) 
                                      | (0x6fU == (0x7fU 
                                                   & vlSymsp->TOP__coretop.__PVT__ifid_inst))) 
                                     | (0x67U == (0x7fU 
                                                  & vlSymsp->TOP__coretop.__PVT__ifid_inst)))));
            tracep->chgIData(oldp+53,(vlSymsp->TOP__coretop.__PVT__decode0__DOT__immI),32);
            tracep->chgIData(oldp+54,((((- (IData)(
                                                   (vlSymsp->TOP__coretop.__PVT__ifid_inst 
                                                    >> 0x1fU))) 
                                        << 0xcU) | 
                                       (vlSymsp->TOP__coretop.__PVT__ifid_inst 
                                        >> 0x14U))),32);
            tracep->chgIData(oldp+55,((((- (IData)(
                                                   (vlSymsp->TOP__coretop.__PVT__ifid_inst 
                                                    >> 0x1fU))) 
                                        << 0xcU) | 
                                       ((0xfe0U & (vlSymsp->TOP__coretop.__PVT__ifid_inst 
                                                   >> 0x14U)) 
                                        | (0x1fU & 
                                           (vlSymsp->TOP__coretop.__PVT__ifid_inst 
                                            >> 7U))))),32);
            tracep->chgIData(oldp+56,((0xfffff000U 
                                       & vlSymsp->TOP__coretop.__PVT__ifid_inst)),32);
            tracep->chgIData(oldp+57,((((- (IData)(
                                                   (vlSymsp->TOP__coretop.__PVT__ifid_inst 
                                                    >> 0x1fU))) 
                                        << 0x14U) | 
                                       ((0xff000U & vlSymsp->TOP__coretop.__PVT__ifid_inst) 
                                        | ((0x800U 
                                            & (vlSymsp->TOP__coretop.__PVT__ifid_inst 
                                               >> 9U)) 
                                           | (0x7feU 
                                              & (vlSymsp->TOP__coretop.__PVT__ifid_inst 
                                                 >> 0x14U)))))),32);
            tracep->chgIData(oldp+58,((((- (IData)(
                                                   (vlSymsp->TOP__coretop.__PVT__ifid_inst 
                                                    >> 0x1fU))) 
                                        << 0xcU) | 
                                       ((0x800U & (vlSymsp->TOP__coretop.__PVT__ifid_inst 
                                                   << 4U)) 
                                        | ((0x7e0U 
                                            & (vlSymsp->TOP__coretop.__PVT__ifid_inst 
                                               >> 0x14U)) 
                                           | (0x1eU 
                                              & (vlSymsp->TOP__coretop.__PVT__ifid_inst 
                                                 >> 7U)))))),32);
            tracep->chgBit(oldp+59,((0x13U == (0x7fU 
                                               & vlSymsp->TOP__coretop.__PVT__ifid_inst))));
            tracep->chgBit(oldp+60,(vlSymsp->TOP__coretop.__PVT__decode0__DOT__Rtype));
            tracep->chgBit(oldp+61,((0x37U == (0x7fU 
                                               & vlSymsp->TOP__coretop.__PVT__ifid_inst))));
            tracep->chgBit(oldp+62,((0x17U == (0x7fU 
                                               & vlSymsp->TOP__coretop.__PVT__ifid_inst))));
            tracep->chgBit(oldp+63,((0x6fU == (0x7fU 
                                               & vlSymsp->TOP__coretop.__PVT__ifid_inst))));
            tracep->chgBit(oldp+64,((0x67U == (0x7fU 
                                               & vlSymsp->TOP__coretop.__PVT__ifid_inst))));
            tracep->chgBit(oldp+65,((0x63U == (0x7fU 
                                               & vlSymsp->TOP__coretop.__PVT__ifid_inst))));
            tracep->chgBit(oldp+66,(((0x20U == (0x7fU 
                                                & vlSymsp->TOP__coretop.__PVT__ifid_inst))
                                      ? 1U : 0U)));
            tracep->chgBit(oldp+67,((((0x33U == (0x7fU 
                                                 & vlSymsp->TOP__coretop.__PVT__ifid_inst)) 
                                      & (0x20U == (vlSymsp->TOP__coretop.__PVT__ifid_inst 
                                                   >> 0x19U))) 
                                     & (0U == (IData)(vlSymsp->TOP__coretop.__PVT__decode0__DOT__opfunc3)))));
            tracep->chgBit(oldp+68,(((0x6fU == (0x7fU 
                                                & vlSymsp->TOP__coretop.__PVT__ifid_inst))
                                      ? 1U : 0U)));
            tracep->chgBit(oldp+69,((((0x1fU & (vlSymsp->TOP__coretop.__PVT__ifid_inst 
                                                >> 0xfU)) 
                                      == (IData)(vlSymsp->TOP__coretop.__PVT__idexe_rdaddr)) 
                                     & ((((IData)(vlSymsp->TOP__coretop.__PVT__decode0__DOT__Rtype) 
                                          | (0x23U 
                                             == (0x7fU 
                                                 & vlSymsp->TOP__coretop.__PVT__ifid_inst))) 
                                         | (0x63U == 
                                            (0x7fU 
                                             & vlSymsp->TOP__coretop.__PVT__ifid_inst))) 
                                        | (0x13U == 
                                           (0x7fU & vlSymsp->TOP__coretop.__PVT__ifid_inst))))));
            tracep->chgBit(oldp+70,((((0x1fU & (vlSymsp->TOP__coretop.__PVT__ifid_inst 
                                                >> 0x14U)) 
                                      == (IData)(vlSymsp->TOP__coretop.__PVT__idexe_rdaddr)) 
                                     & (((IData)(vlSymsp->TOP__coretop.__PVT__decode0__DOT__Rtype) 
                                         | (0x23U == 
                                            (0x7fU 
                                             & vlSymsp->TOP__coretop.__PVT__ifid_inst))) 
                                        | (0x63U == 
                                           (0x7fU & vlSymsp->TOP__coretop.__PVT__ifid_inst))))));
            tracep->chgIData(oldp+71,(vlSymsp->TOP__coretop.__PVT__decode0__DOT__imm),32);
            tracep->chgIData(oldp+72,(vlSymsp->TOP__coretop.__PVT__exe0__DOT__op1),32);
            tracep->chgIData(oldp+73,(vlSymsp->TOP__coretop.__PVT__exe0__DOT__op2),32);
            tracep->chgIData(oldp+74,(vlSymsp->TOP__coretop.__PVT__exe0__DOT__op_result),32);
            tracep->chgIData(oldp+75,((vlSymsp->TOP__coretop.__PVT__fwdexe_rs1 
                                       + vlSymsp->TOP__coretop.__PVT__idexe_imm)),32);
            tracep->chgCData(oldp+76,((3U & vlSymsp->TOP__coretop.__PVT__exemem_memaddr)),2);
            tracep->chgIData(oldp+77,(vlSymsp->TOP__coretop.__PVT__mem0__DOT__rd_data),32);
            tracep->chgBit(oldp+78,(((IData)(vlSymsp->TOP__coretop.__PVT__idfwd_addr1) 
                                     == (IData)(vlSymsp->TOP__coretop.__PVT__exemem_rdaddr))));
            tracep->chgBit(oldp+79,(((IData)(vlSymsp->TOP__coretop.__PVT__idfwd_addr2) 
                                     == (IData)(vlSymsp->TOP__coretop.__PVT__exemem_rdaddr))));
            tracep->chgBit(oldp+80,((0U != (IData)(vlSymsp->TOP__coretop.__PVT__exemem_rdaddr))));
            tracep->chgBit(oldp+81,(((IData)(vlSymsp->TOP__coretop.__PVT__idfwd_addr1) 
                                     == (IData)(vlSymsp->TOP__coretop.__PVT__memwb_rdaddr))));
            tracep->chgBit(oldp+82,(((IData)(vlSymsp->TOP__coretop.__PVT__idfwd_addr2) 
                                     == (IData)(vlSymsp->TOP__coretop.__PVT__memwb_rdaddr))));
            tracep->chgBit(oldp+83,((0U != (IData)(vlSymsp->TOP__coretop.__PVT__memwb_rdaddr))));
            tracep->chgBit(oldp+84,(((IData)(vlSymsp->TOP__coretop.__PVT__idfwd_addr1) 
                                     == (IData)(vlSymsp->TOP__coretop.__PVT__wbreg_rdaddr))));
            tracep->chgBit(oldp+85,(((IData)(vlSymsp->TOP__coretop.__PVT__idfwd_addr2) 
                                     == (IData)(vlSymsp->TOP__coretop.__PVT__wbreg_rdaddr))));
            tracep->chgBit(oldp+86,((0U != (IData)(vlSymsp->TOP__coretop.__PVT__wbreg_rdaddr))));
            tracep->chgBit(oldp+87,((((IData)(vlSymsp->TOP__coretop.__PVT__exemem_we) 
                                      & (0U != (IData)(vlSymsp->TOP__coretop.__PVT__exemem_rdaddr))) 
                                     & ((IData)(vlSymsp->TOP__coretop.__PVT__idfwd_addr1) 
                                        == (IData)(vlSymsp->TOP__coretop.__PVT__exemem_rdaddr)))));
            tracep->chgBit(oldp+88,((((IData)(vlSymsp->TOP__coretop.__PVT__exemem_we) 
                                      & (0U != (IData)(vlSymsp->TOP__coretop.__PVT__exemem_rdaddr))) 
                                     & ((IData)(vlSymsp->TOP__coretop.__PVT__idfwd_addr2) 
                                        == (IData)(vlSymsp->TOP__coretop.__PVT__exemem_rdaddr)))));
            tracep->chgBit(oldp+89,((((IData)(vlSymsp->TOP__coretop.__PVT__memwb_we) 
                                      & (0U != (IData)(vlSymsp->TOP__coretop.__PVT__memwb_rdaddr))) 
                                     & ((IData)(vlSymsp->TOP__coretop.__PVT__idfwd_addr1) 
                                        == (IData)(vlSymsp->TOP__coretop.__PVT__memwb_rdaddr)))));
            tracep->chgBit(oldp+90,((((IData)(vlSymsp->TOP__coretop.__PVT__memwb_we) 
                                      & (0U != (IData)(vlSymsp->TOP__coretop.__PVT__memwb_rdaddr))) 
                                     & ((IData)(vlSymsp->TOP__coretop.__PVT__idfwd_addr2) 
                                        == (IData)(vlSymsp->TOP__coretop.__PVT__memwb_rdaddr)))));
            tracep->chgBit(oldp+91,((((IData)(vlSymsp->TOP__coretop.__PVT__wbreg_we) 
                                      & (0U != (IData)(vlSymsp->TOP__coretop.__PVT__wbreg_rdaddr))) 
                                     & ((IData)(vlSymsp->TOP__coretop.__PVT__idfwd_addr1) 
                                        == (IData)(vlSymsp->TOP__coretop.__PVT__wbreg_rdaddr)))));
            tracep->chgBit(oldp+92,((((IData)(vlSymsp->TOP__coretop.__PVT__wbreg_we) 
                                      & (0U != (IData)(vlSymsp->TOP__coretop.__PVT__wbreg_rdaddr))) 
                                     & ((IData)(vlSymsp->TOP__coretop.__PVT__idfwd_addr2) 
                                        == (IData)(vlSymsp->TOP__coretop.__PVT__wbreg_rdaddr)))));
            tracep->chgIData(oldp+93,((0x1ffffcU & vlSymsp->TOP__coretop.__PVT__pc_wire)),21);
            tracep->chgIData(oldp+94,((0x1ffffcU & vlSymsp->TOP__coretop.__PVT__memrom_ramaddr)),21);
            tracep->chgIData(oldp+95,(vlSymsp->TOP__coretop__regfiles0.__PVT__x[0]),32);
            tracep->chgIData(oldp+96,(vlSymsp->TOP__coretop__regfiles0.__PVT__x[1]),32);
            tracep->chgIData(oldp+97,(vlSymsp->TOP__coretop__regfiles0.__PVT__x[2]),32);
            tracep->chgIData(oldp+98,(vlSymsp->TOP__coretop__regfiles0.__PVT__x[3]),32);
            tracep->chgIData(oldp+99,(vlSymsp->TOP__coretop__regfiles0.__PVT__x[4]),32);
            tracep->chgIData(oldp+100,(vlSymsp->TOP__coretop__regfiles0.__PVT__x[5]),32);
            tracep->chgIData(oldp+101,(vlSymsp->TOP__coretop__regfiles0.__PVT__x[6]),32);
            tracep->chgIData(oldp+102,(vlSymsp->TOP__coretop__regfiles0.__PVT__x[7]),32);
            tracep->chgIData(oldp+103,(vlSymsp->TOP__coretop__regfiles0.__PVT__x[8]),32);
            tracep->chgIData(oldp+104,(vlSymsp->TOP__coretop__regfiles0.__PVT__x[9]),32);
            tracep->chgIData(oldp+105,(vlSymsp->TOP__coretop__regfiles0.__PVT__x[10]),32);
            tracep->chgIData(oldp+106,(vlSymsp->TOP__coretop__regfiles0.__PVT__x[11]),32);
            tracep->chgIData(oldp+107,(vlSymsp->TOP__coretop__regfiles0.__PVT__x[12]),32);
            tracep->chgIData(oldp+108,(vlSymsp->TOP__coretop__regfiles0.__PVT__x[13]),32);
            tracep->chgIData(oldp+109,(vlSymsp->TOP__coretop__regfiles0.__PVT__x[14]),32);
            tracep->chgIData(oldp+110,(vlSymsp->TOP__coretop__regfiles0.__PVT__x[15]),32);
            tracep->chgIData(oldp+111,(vlSymsp->TOP__coretop__regfiles0.__PVT__x[16]),32);
            tracep->chgIData(oldp+112,(vlSymsp->TOP__coretop__regfiles0.__PVT__x[17]),32);
            tracep->chgIData(oldp+113,(vlSymsp->TOP__coretop__regfiles0.__PVT__x[18]),32);
            tracep->chgIData(oldp+114,(vlSymsp->TOP__coretop__regfiles0.__PVT__x[19]),32);
            tracep->chgIData(oldp+115,(vlSymsp->TOP__coretop__regfiles0.__PVT__x[20]),32);
            tracep->chgIData(oldp+116,(vlSymsp->TOP__coretop__regfiles0.__PVT__x[21]),32);
            tracep->chgIData(oldp+117,(vlSymsp->TOP__coretop__regfiles0.__PVT__x[22]),32);
            tracep->chgIData(oldp+118,(vlSymsp->TOP__coretop__regfiles0.__PVT__x[23]),32);
            tracep->chgIData(oldp+119,(vlSymsp->TOP__coretop__regfiles0.__PVT__x[24]),32);
            tracep->chgIData(oldp+120,(vlSymsp->TOP__coretop__regfiles0.__PVT__x[25]),32);
            tracep->chgIData(oldp+121,(vlSymsp->TOP__coretop__regfiles0.__PVT__x[26]),32);
            tracep->chgIData(oldp+122,(vlSymsp->TOP__coretop__regfiles0.__PVT__x[27]),32);
            tracep->chgIData(oldp+123,(vlSymsp->TOP__coretop__regfiles0.__PVT__x[28]),32);
            tracep->chgIData(oldp+124,(vlSymsp->TOP__coretop__regfiles0.__PVT__x[29]),32);
            tracep->chgIData(oldp+125,(vlSymsp->TOP__coretop__regfiles0.__PVT__x[30]),32);
            tracep->chgIData(oldp+126,(vlSymsp->TOP__coretop__regfiles0.__PVT__x[31]),32);
            tracep->chgIData(oldp+127,(vlSymsp->TOP__coretop__regfiles0.__PVT__x
                                       [1U]),32);
            tracep->chgIData(oldp+128,(vlSymsp->TOP__coretop__regfiles0.__PVT__x
                                       [2U]),32);
            tracep->chgIData(oldp+129,(vlSymsp->TOP__coretop__regfiles0.__PVT__x
                                       [3U]),32);
            tracep->chgIData(oldp+130,(vlSymsp->TOP__coretop__regfiles0.__PVT__x
                                       [4U]),32);
            tracep->chgIData(oldp+131,(vlSymsp->TOP__coretop__regfiles0.__PVT__x
                                       [5U]),32);
            tracep->chgIData(oldp+132,(vlSymsp->TOP__coretop__regfiles0.__PVT__x
                                       [6U]),32);
            tracep->chgIData(oldp+133,(vlSymsp->TOP__coretop__regfiles0.__PVT__x
                                       [7U]),32);
            tracep->chgIData(oldp+134,(vlSymsp->TOP__coretop__regfiles0.__PVT__x
                                       [8U]),32);
            tracep->chgIData(oldp+135,(vlSymsp->TOP__coretop__regfiles0.__PVT__x
                                       [9U]),32);
            tracep->chgIData(oldp+136,(vlSymsp->TOP__coretop__regfiles0.__PVT__x
                                       [0xaU]),32);
            tracep->chgIData(oldp+137,(vlSymsp->TOP__coretop__regfiles0.__PVT__x
                                       [0xbU]),32);
            tracep->chgIData(oldp+138,(vlSymsp->TOP__coretop__regfiles0.__PVT__x
                                       [0xcU]),32);
            tracep->chgIData(oldp+139,(vlSymsp->TOP__coretop__regfiles0.__PVT__x
                                       [0xdU]),32);
            tracep->chgIData(oldp+140,(vlSymsp->TOP__coretop__regfiles0.__PVT__x
                                       [0xeU]),32);
            tracep->chgIData(oldp+141,(vlSymsp->TOP__coretop__regfiles0.__PVT__x
                                       [0xfU]),32);
            tracep->chgIData(oldp+142,(vlSymsp->TOP__coretop__regfiles0.__PVT__x
                                       [0x10U]),32);
            tracep->chgIData(oldp+143,(vlSymsp->TOP__coretop__regfiles0.__PVT__x
                                       [0x11U]),32);
            tracep->chgIData(oldp+144,(vlSymsp->TOP__coretop__regfiles0.__PVT__x
                                       [0x12U]),32);
            tracep->chgIData(oldp+145,(vlSymsp->TOP__coretop__regfiles0.__PVT__x
                                       [0x13U]),32);
            tracep->chgIData(oldp+146,(vlSymsp->TOP__coretop__regfiles0.__PVT__x
                                       [0x14U]),32);
            tracep->chgIData(oldp+147,(vlSymsp->TOP__coretop__regfiles0.__PVT__x
                                       [0x15U]),32);
            tracep->chgIData(oldp+148,(vlSymsp->TOP__coretop__regfiles0.__PVT__x
                                       [0x16U]),32);
            tracep->chgIData(oldp+149,(vlSymsp->TOP__coretop__regfiles0.__PVT__x
                                       [0x17U]),32);
            tracep->chgIData(oldp+150,(vlSymsp->TOP__coretop__regfiles0.__PVT__x
                                       [0x18U]),32);
            tracep->chgIData(oldp+151,(vlSymsp->TOP__coretop__regfiles0.__PVT__x
                                       [0x19U]),32);
            tracep->chgIData(oldp+152,(vlSymsp->TOP__coretop__regfiles0.__PVT__x
                                       [0x1aU]),32);
            tracep->chgIData(oldp+153,(vlSymsp->TOP__coretop__regfiles0.__PVT__x
                                       [0x1bU]),32);
            tracep->chgIData(oldp+154,(vlSymsp->TOP__coretop__regfiles0.__PVT__x
                                       [0x1cU]),32);
            tracep->chgIData(oldp+155,(vlSymsp->TOP__coretop__regfiles0.__PVT__x
                                       [0x1dU]),32);
            tracep->chgIData(oldp+156,(vlSymsp->TOP__coretop__regfiles0.__PVT__x
                                       [0x1eU]),32);
            tracep->chgIData(oldp+157,(vlSymsp->TOP__coretop__regfiles0.__PVT__x
                                       [0x1fU]),32);
            tracep->chgBit(oldp+158,(vlSymsp->TOP__coretop__regfiles0.__PVT__we));
            tracep->chgIData(oldp+159,(vlSymsp->TOP__coretop__regfiles0.__PVT__i),32);
        }
        tracep->chgBit(oldp+160,(vlSelf->rst_i));
        tracep->chgBit(oldp+161,(vlSelf->clk_i));
        tracep->chgIData(oldp+162,(((vlSymsp->TOP__coretop__dpram0.__PVT__mem
                                     [(0x1ffffcU & vlSymsp->TOP__coretop.__PVT__pc_wire)] 
                                     << 0x18U) | ((
                                                   vlSymsp->TOP__coretop__dpram0.__PVT__mem
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
