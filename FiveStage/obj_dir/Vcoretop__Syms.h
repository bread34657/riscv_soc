// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VCORETOP__SYMS_H_
#define VERILATED_VCORETOP__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODEL CLASS

#include "Vcoretop.h"

// INCLUDE MODULE CLASSES
#include "Vcoretop___024root.h"
#include "Vcoretop_coretop.h"
#include "Vcoretop_rom.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class Vcoretop__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vcoretop* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vcoretop___024root             TOP;
    Vcoretop_coretop               TOP__coretop;
    Vcoretop_rom                   TOP__coretop__rom0;

    // CONSTRUCTORS
    Vcoretop__Syms(VerilatedContext* contextp, const char* namep, Vcoretop* modelp);
    ~Vcoretop__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
