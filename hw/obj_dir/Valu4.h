// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VALU4_H_
#define _VALU4_H_  // guard

#include "verilated.h"

//==========

class Valu4__Syms;
class Valu4_VerilatedVcd;


//----------

VL_MODULE(Valu4) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(alua_i,3,0);
    VL_IN8(alub_i,3,0);
    VL_IN8(aluc_in,0,0);
    VL_IN8(aluop_i,1,0);
    VL_OUT8(aluresult,3,0);
    VL_OUT8(c_out4,0,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    CData/*2:0*/ alu4__DOT__c_connet;
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ alu4__DOT____Vcellout__alu02__c_out;
    CData/*0:0*/ alu4__DOT____Vcellout__alu03__c_out;
    CData/*2:0*/ __Vchglast__TOP__alu4__DOT__c_connet;
    IData/*31:0*/ __Vm_traceActivity;
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Valu4__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Valu4);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    Valu4(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Valu4();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(Valu4__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Valu4__Syms* symsp, bool first);
  private:
    static QData _change_request(Valu4__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__1(Valu4__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(Valu4__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(Valu4__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(Valu4__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void traceChgThis(Valu4__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(Valu4__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__3(Valu4__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(Valu4__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceFullThis__1(Valu4__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis(Valu4__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis__1(Valu4__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
