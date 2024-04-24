// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmul_top.h for the primary calling header

#include "verilated.h"

#include "Vmul_top__Syms.h"
#include "Vmul_top___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmul_top___024root___dump_triggers__stl(Vmul_top___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vmul_top___024root___eval_triggers__stl(Vmul_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmul_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmul_top___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.at(0U) = (0U == vlSelf->__VstlIterCount);
    vlSelf->__VstlTriggered.at(1U) = ((IData)(vlSelf->mul_top__DOT__tree0__DOT__cla0__DOT__genblk1__BRA__0__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__mul_top__DOT__tree0__DOT__cla0__DOT__genblk1__BRA__0__KET____DOT__cla_part0__DOT____Vcellout__carry0__c));
    vlSelf->__VstlTriggered.at(2U) = ((IData)(vlSelf->mul_top__DOT__tree0__DOT__cla0__DOT__genblk1__BRA__4__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__mul_top__DOT__tree0__DOT__cla0__DOT__genblk1__BRA__4__KET____DOT__cla_part0__DOT____Vcellout__carry0__c));
    vlSelf->__VstlTriggered.at(3U) = ((IData)(vlSelf->mul_top__DOT__tree0__DOT__cla0__DOT__genblk1__BRA__8__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__mul_top__DOT__tree0__DOT__cla0__DOT__genblk1__BRA__8__KET____DOT__cla_part0__DOT____Vcellout__carry0__c));
    vlSelf->__VstlTriggered.at(4U) = ((IData)(vlSelf->mul_top__DOT__tree0__DOT__cla0__DOT__genblk1__BRA__12__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__mul_top__DOT__tree0__DOT__cla0__DOT__genblk1__BRA__12__KET____DOT__cla_part0__DOT____Vcellout__carry0__c));
    vlSelf->__VstlTriggered.at(5U) = ((IData)(vlSelf->mul_top__DOT__tree0__DOT__cla0__DOT__genblk1__BRA__16__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__mul_top__DOT__tree0__DOT__cla0__DOT__genblk1__BRA__16__KET____DOT__cla_part0__DOT____Vcellout__carry0__c));
    vlSelf->__VstlTriggered.at(6U) = ((IData)(vlSelf->mul_top__DOT__tree0__DOT__cla0__DOT__genblk1__BRA__20__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__mul_top__DOT__tree0__DOT__cla0__DOT__genblk1__BRA__20__KET____DOT__cla_part0__DOT____Vcellout__carry0__c));
    vlSelf->__VstlTriggered.at(7U) = ((IData)(vlSelf->mul_top__DOT__tree0__DOT__cla0__DOT__genblk1__BRA__24__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__mul_top__DOT__tree0__DOT__cla0__DOT__genblk1__BRA__24__KET____DOT__cla_part0__DOT____Vcellout__carry0__c));
    vlSelf->__VstlTriggered.at(8U) = ((IData)(vlSelf->mul_top__DOT__tree0__DOT__cla0__DOT__genblk1__BRA__28__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
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
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VstlDidInit))))) {
        vlSelf->__VstlDidInit = 1U;
        vlSelf->__VstlTriggered.at(1U) = 1U;
        vlSelf->__VstlTriggered.at(2U) = 1U;
        vlSelf->__VstlTriggered.at(3U) = 1U;
        vlSelf->__VstlTriggered.at(4U) = 1U;
        vlSelf->__VstlTriggered.at(5U) = 1U;
        vlSelf->__VstlTriggered.at(6U) = 1U;
        vlSelf->__VstlTriggered.at(7U) = 1U;
        vlSelf->__VstlTriggered.at(8U) = 1U;
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vmul_top___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
