// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vcoretop__Syms.h"
#include "Vcoretop.h"
#include "Vcoretop___024root.h"
#include "Vcoretop_coretop.h"
#include "Vcoretop_dpram.h"
#include "Vcoretop_regfiles.h"

// FUNCTIONS
Vcoretop__Syms::~Vcoretop__Syms()
{
}

Vcoretop__Syms::Vcoretop__Syms(VerilatedContext* contextp, const char* namep,Vcoretop* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp(modelp)
    // Setup module instances
    , TOP(namep)
    , TOP__coretop(Verilated::catName(namep, "coretop"))
    , TOP__coretop__dpram0(Verilated::catName(namep, "coretop.dpram0"))
    , TOP__coretop__regfiles0(Verilated::catName(namep, "coretop.regfiles0"))
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.coretop = &TOP__coretop;
    TOP__coretop.dpram0 = &TOP__coretop__dpram0;
    TOP__coretop.regfiles0 = &TOP__coretop__regfiles0;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(this, true);
    TOP__coretop.__Vconfigure(this, true);
    TOP__coretop__dpram0.__Vconfigure(this, true);
    TOP__coretop__regfiles0.__Vconfigure(this, true);
    // Setup export functions
    for (int __Vfinal=0; __Vfinal<2; __Vfinal++) {
    }
}
