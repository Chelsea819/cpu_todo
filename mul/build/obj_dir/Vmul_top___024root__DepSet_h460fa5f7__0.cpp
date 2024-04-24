// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmul_top.h for the primary calling header

#include "verilated.h"

#include "Vmul_top__Syms.h"
#include "Vmul_top___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmul_top___024root___dump_triggers__ico(Vmul_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vmul_top___024root___eval_triggers__ico(Vmul_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmul_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmul_top___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.at(0U) = (0U == vlSelf->__VicoIterCount);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vmul_top___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmul_top___024root___dump_triggers__act(Vmul_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vmul_top___024root___eval_triggers__act(Vmul_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmul_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmul_top___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = ((IData)(vlSelf->mul_top__DOT__tree0__DOT__cla0__DOT__genblk1__BRA__0__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__mul_top__DOT__tree0__DOT__cla0__DOT__genblk1__BRA__0__KET____DOT__cla_part0__DOT____Vcellout__carry0__c));
    vlSelf->__VactTriggered.at(1U) = ((IData)(vlSelf->mul_top__DOT__tree0__DOT__cla0__DOT__genblk1__BRA__4__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__mul_top__DOT__tree0__DOT__cla0__DOT__genblk1__BRA__4__KET____DOT__cla_part0__DOT____Vcellout__carry0__c));
    vlSelf->__VactTriggered.at(2U) = ((IData)(vlSelf->mul_top__DOT__tree0__DOT__cla0__DOT__genblk1__BRA__8__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__mul_top__DOT__tree0__DOT__cla0__DOT__genblk1__BRA__8__KET____DOT__cla_part0__DOT____Vcellout__carry0__c));
    vlSelf->__VactTriggered.at(3U) = ((IData)(vlSelf->mul_top__DOT__tree0__DOT__cla0__DOT__genblk1__BRA__12__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__mul_top__DOT__tree0__DOT__cla0__DOT__genblk1__BRA__12__KET____DOT__cla_part0__DOT____Vcellout__carry0__c));
    vlSelf->__VactTriggered.at(4U) = ((IData)(vlSelf->mul_top__DOT__tree0__DOT__cla0__DOT__genblk1__BRA__16__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__mul_top__DOT__tree0__DOT__cla0__DOT__genblk1__BRA__16__KET____DOT__cla_part0__DOT____Vcellout__carry0__c));
    vlSelf->__VactTriggered.at(5U) = ((IData)(vlSelf->mul_top__DOT__tree0__DOT__cla0__DOT__genblk1__BRA__20__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__mul_top__DOT__tree0__DOT__cla0__DOT__genblk1__BRA__20__KET____DOT__cla_part0__DOT____Vcellout__carry0__c));
    vlSelf->__VactTriggered.at(6U) = ((IData)(vlSelf->mul_top__DOT__tree0__DOT__cla0__DOT__genblk1__BRA__24__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__mul_top__DOT__tree0__DOT__cla0__DOT__genblk1__BRA__24__KET____DOT__cla_part0__DOT____Vcellout__carry0__c));
    vlSelf->__VactTriggered.at(7U) = ((IData)(vlSelf->mul_top__DOT__tree0__DOT__cla0__DOT__genblk1__BRA__28__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__mul_top__DOT__tree0__DOT__cla0__DOT__genblk1__BRA__28__KET____DOT__cla_part0__DOT____Vcellout__carry0__c));
    vlSelf->__Vtrigrprev__TOP__mul_top__DOT__tree0__DOT__cla0__DOT__genblk1__BRA__0__KET____DOT__cla_part0__DOT____Vcellout__carry0__c 
        = vlSelf->mul_top__DOT__tree0__DOT__cla0__DOT__genblk1__BRA__0__KET____DOT__cla_part0__DOT____Vcellout__carry0__c;
    vlSelf->__Vtrigrprev__TOP__mul_top__DOT__tree0__DOT__cla0__DOT__genblk1__BRA__4__KET____DOT__cla_part0__DOT____Vcellout__carry0__c 
        = vlSelf->mul_top__DOT__tree0__DOT__cla0__DOT__genblk1__BRA__4__KET____DOT__cla_part0__DOT____Vcellout__carry0__c;
    vlSelf->__Vtrigrprev__TOP__mul_top__DOT__tree0__DOT__cla0__DOT__genblk1__BRA__8__KET____DOT__cla_part0__DOT____Vcellout__carry0__c 
        = vlSelf->mul_top__DOT__tree0__DOT__cla0__DOT__genblk1__BRA__8__KET____DOT__cla_part0__DOT____Vcellout__carry0__c;
    vlSelf->__Vtrigrprev__TOP__mul_top__DOT__tree0__DOT__cla0__DOT__genblk1__BRA__12__KET____DOT__cla_part0__DOT____Vcellout__carry0__c 
        = vlSelf->mul_top__DOT__tree0__DOT__cla0__DOT__genblk1__BRA__12__KET____DOT__cla_part0__DOT____Vcellout__carry0__c;
    vlSelf->__Vtrigrprev__TOP__mul_top__DOT__tree0__DOT__cla0__DOT__genblk1__BRA__16__KET____DOT__cla_part0__DOT____Vcellout__carry0__c 
        = vlSelf->mul_top__DOT__tree0__DOT__cla0__DOT__genblk1__BRA__16__KET____DOT__cla_part0__DOT____Vcellout__carry0__c;
    vlSelf->__Vtrigrprev__TOP__mul_top__DOT__tree0__DOT__cla0__DOT__genblk1__BRA__20__KET____DOT__cla_part0__DOT____Vcellout__carry0__c 
        = vlSelf->mul_top__DOT__tree0__DOT__cla0__DOT__genblk1__BRA__20__KET____DOT__cla_part0__DOT____Vcellout__carry0__c;
    vlSelf->__Vtrigrprev__TOP__mul_top__DOT__tree0__DOT__cla0__DOT__genblk1__BRA__24__KET____DOT__cla_part0__DOT____Vcellout__carry0__c 
        = vlSelf->mul_top__DOT__tree0__DOT__cla0__DOT__genblk1__BRA__24__KET____DOT__cla_part0__DOT____Vcellout__carry0__c;
    vlSelf->__Vtrigrprev__TOP__mul_top__DOT__tree0__DOT__cla0__DOT__genblk1__BRA__28__KET____DOT__cla_part0__DOT____Vcellout__carry0__c 
        = vlSelf->mul_top__DOT__tree0__DOT__cla0__DOT__genblk1__BRA__28__KET____DOT__cla_part0__DOT____Vcellout__carry0__c;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.at(0U) = 1U;
        vlSelf->__VactTriggered.at(1U) = 1U;
        vlSelf->__VactTriggered.at(2U) = 1U;
        vlSelf->__VactTriggered.at(3U) = 1U;
        vlSelf->__VactTriggered.at(4U) = 1U;
        vlSelf->__VactTriggered.at(5U) = 1U;
        vlSelf->__VactTriggered.at(6U) = 1U;
        vlSelf->__VactTriggered.at(7U) = 1U;
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vmul_top___024root___dump_triggers__act(vlSelf);
    }
#endif
}
