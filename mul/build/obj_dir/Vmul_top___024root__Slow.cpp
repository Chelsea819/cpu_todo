// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmul_top.h for the primary calling header

#include "verilated.h"

#include "Vmul_top__Syms.h"
#include "Vmul_top___024root.h"

void Vmul_top___024root___ctor_var_reset(Vmul_top___024root* vlSelf);

Vmul_top___024root::Vmul_top___024root(Vmul_top__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vmul_top___024root___ctor_var_reset(this);
}

void Vmul_top___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vmul_top___024root::~Vmul_top___024root() {
}
