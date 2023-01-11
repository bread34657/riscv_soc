// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcoretop.h for the primary calling header

#include "Vcoretop_rom.h"
#include "Vcoretop__Syms.h"

#include "verilated_dpi.h"

//==========

void Vcoretop_rom::writeByte(uint32_t byte_addr, uint32_t val) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcoretop_rom::writeByte\n"); );
    IData/*31:0*/ unnamedblk1__DOT__t_addr;
    // Body
    unnamedblk1__DOT__t_addr = byte_addr;
    if ((0x200000U > byte_addr)) {
        this->__PVT__mem[(0x1fffffU & unnamedblk1__DOT__t_addr)] 
            = val;
    }
}
