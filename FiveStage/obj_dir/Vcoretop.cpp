// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vcoretop.h"
#include "Vcoretop__Syms.h"
#include "verilated_vcd_c.h"
#include "verilated_dpi.h"

//============================================================
// Constructors

Vcoretop::Vcoretop(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vcoretop__Syms(_vcontextp__, _vcname__, this)}
    , rst_i{vlSymsp->TOP.rst_i}
    , clk_i{vlSymsp->TOP.clk_i}
    , coretop{vlSymsp->TOP.coretop}
    , rootp{&(vlSymsp->TOP)}
{
}

Vcoretop::Vcoretop(const char* _vcname__)
    : Vcoretop(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vcoretop::~Vcoretop() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vcoretop___024root___eval_initial(Vcoretop___024root* vlSelf);
void Vcoretop___024root___eval_settle(Vcoretop___024root* vlSelf);
void Vcoretop___024root___eval(Vcoretop___024root* vlSelf);
QData Vcoretop___024root___change_request(Vcoretop___024root* vlSelf);
#ifdef VL_DEBUG
void Vcoretop___024root___eval_debug_assertions(Vcoretop___024root* vlSelf);
#endif  // VL_DEBUG
void Vcoretop___024root___final(Vcoretop___024root* vlSelf);

static void _eval_initial_loop(Vcoretop__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vcoretop___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vcoretop___024root___eval_settle(&(vlSymsp->TOP));
        Vcoretop___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vcoretop___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("coretop.v", 3, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vcoretop___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vcoretop::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vcoretop::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vcoretop___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vcoretop___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vcoretop___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("coretop.v", 3, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vcoretop___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void Vcoretop::final() {
    Vcoretop___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Vcoretop::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vcoretop::name() const {
    return vlSymsp->name();
}

//============================================================
// Trace configuration

void Vcoretop___024root__traceInitTop(Vcoretop___024root* vlSelf, VerilatedVcd* tracep);

static void traceInit(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vcoretop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcoretop___024root*>(voidSelf);
    Vcoretop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vcoretop___024root__traceInitTop(vlSelf, tracep);
    tracep->scopeEscape('.');
}

void Vcoretop___024root__traceRegister(Vcoretop___024root* vlSelf, VerilatedVcd* tracep);

void Vcoretop::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, &(vlSymsp->TOP));
    Vcoretop___024root__traceRegister(&(vlSymsp->TOP), tfp->spTrace());
}
