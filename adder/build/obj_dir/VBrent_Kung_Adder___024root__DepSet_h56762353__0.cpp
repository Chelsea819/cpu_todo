// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VBrent_Kung_Adder.h for the primary calling header

#include "verilated.h"

#include "VBrent_Kung_Adder__Syms.h"
#include "VBrent_Kung_Adder___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VBrent_Kung_Adder___024root___dump_triggers__ico(VBrent_Kung_Adder___024root* vlSelf);
#endif  // VL_DEBUG

void VBrent_Kung_Adder___024root___eval_triggers__ico(VBrent_Kung_Adder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBrent_Kung_Adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBrent_Kung_Adder___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.at(0U) = (0U == vlSelf->__VicoIterCount);
    vlSelf->__VicoTriggered.at(1U) = ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT__c) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT__c));
    vlSelf->__VicoTriggered.at(2U) = ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT__c) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT__c));
    vlSelf->__VicoTriggered.at(3U) = ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT__c) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT__c));
    vlSelf->__VicoTriggered.at(4U) = ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT__c) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT__c));
    vlSelf->__VicoTriggered.at(5U) = ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT__c) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT__c));
    vlSelf->__VicoTriggered.at(6U) = ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT__c) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT__c));
    vlSelf->__VicoTriggered.at(7U) = ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT__c) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT__c));
    vlSelf->__VicoTriggered.at(8U) = ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT__c) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT__c));
    vlSelf->__VicoTriggered.at(9U) = (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp 
                                      != vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__t2__DOT__r_temp);
    vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT__c 
        = vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT__c;
    vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT__c 
        = vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT__c;
    vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT__c 
        = vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT__c;
    vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT__c 
        = vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT__c;
    vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT__c 
        = vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT__c;
    vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT__c 
        = vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT__c;
    vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT__c 
        = vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT__c;
    vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT__c 
        = vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT__c;
    vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__t2__DOT__r_temp 
        = vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VicoDidInit))))) {
        vlSelf->__VicoDidInit = 1U;
        vlSelf->__VicoTriggered.at(1U) = 1U;
        vlSelf->__VicoTriggered.at(2U) = 1U;
        vlSelf->__VicoTriggered.at(3U) = 1U;
        vlSelf->__VicoTriggered.at(4U) = 1U;
        vlSelf->__VicoTriggered.at(5U) = 1U;
        vlSelf->__VicoTriggered.at(6U) = 1U;
        vlSelf->__VicoTriggered.at(7U) = 1U;
        vlSelf->__VicoTriggered.at(8U) = 1U;
        vlSelf->__VicoTriggered.at(9U) = 1U;
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VBrent_Kung_Adder___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VBrent_Kung_Adder___024root___dump_triggers__act(VBrent_Kung_Adder___024root* vlSelf);
#endif  // VL_DEBUG

void VBrent_Kung_Adder___024root___eval_triggers__act(VBrent_Kung_Adder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBrent_Kung_Adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBrent_Kung_Adder___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT__c) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT__c));
    vlSelf->__VactTriggered.at(1U) = ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT__c) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT__c));
    vlSelf->__VactTriggered.at(2U) = ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT__c) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT__c));
    vlSelf->__VactTriggered.at(3U) = ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT__c) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT__c));
    vlSelf->__VactTriggered.at(4U) = ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT__c) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT__c));
    vlSelf->__VactTriggered.at(5U) = ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT__c) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT__c));
    vlSelf->__VactTriggered.at(6U) = ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT__c) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT__c));
    vlSelf->__VactTriggered.at(7U) = ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT__c) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT__c));
    vlSelf->__VactTriggered.at(8U) = (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp 
                                      != vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__t2__DOT__r_temp);
    vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT__c 
        = vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT__c;
    vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT__c 
        = vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT__c;
    vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT__c 
        = vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT__c;
    vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT__c 
        = vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT__c;
    vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT__c 
        = vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT__c;
    vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT__c 
        = vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT__c;
    vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT__c 
        = vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT__c;
    vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT__c 
        = vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT__c;
    vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__t2__DOT__r_temp 
        = vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp;
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
        vlSelf->__VactTriggered.at(8U) = 1U;
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VBrent_Kung_Adder___024root___dump_triggers__act(vlSelf);
    }
#endif
}
