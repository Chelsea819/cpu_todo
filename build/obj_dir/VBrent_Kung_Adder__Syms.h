// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VBRENT_KUNG_ADDER__SYMS_H_
#define VERILATED_VBRENT_KUNG_ADDER__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VBrent_Kung_Adder.h"

// INCLUDE MODULE CLASSES
#include "VBrent_Kung_Adder___024root.h"

// SYMS CLASS (contains all model state)
class VBrent_Kung_Adder__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VBrent_Kung_Adder* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VBrent_Kung_Adder___024root    TOP;

    // CONSTRUCTORS
    VBrent_Kung_Adder__Syms(VerilatedContext* contextp, const char* namep, VBrent_Kung_Adder* modelp);
    ~VBrent_Kung_Adder__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
