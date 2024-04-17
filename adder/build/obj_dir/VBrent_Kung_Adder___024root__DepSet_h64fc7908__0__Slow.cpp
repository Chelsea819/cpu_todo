// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VBrent_Kung_Adder.h for the primary calling header

#include "verilated.h"

#include "VBrent_Kung_Adder___024root.h"

VL_ATTR_COLD void VBrent_Kung_Adder___024root___eval_static(VBrent_Kung_Adder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBrent_Kung_Adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBrent_Kung_Adder___024root___eval_static\n"); );
}

VL_ATTR_COLD void VBrent_Kung_Adder___024root___eval_initial(VBrent_Kung_Adder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBrent_Kung_Adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBrent_Kung_Adder___024root___eval_initial\n"); );
    // Body
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
}

VL_ATTR_COLD void VBrent_Kung_Adder___024root___eval_final(VBrent_Kung_Adder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBrent_Kung_Adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBrent_Kung_Adder___024root___eval_final\n"); );
}

VL_ATTR_COLD void VBrent_Kung_Adder___024root___eval_triggers__stl(VBrent_Kung_Adder___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VBrent_Kung_Adder___024root___dump_triggers__stl(VBrent_Kung_Adder___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void VBrent_Kung_Adder___024root___eval_stl(VBrent_Kung_Adder___024root* vlSelf);

VL_ATTR_COLD void VBrent_Kung_Adder___024root___eval_settle(VBrent_Kung_Adder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBrent_Kung_Adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBrent_Kung_Adder___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        VBrent_Kung_Adder___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                VBrent_Kung_Adder___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("/home/chelsea/cpu/vsrc/Brent_Kung_Adder.v", 2, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            VBrent_Kung_Adder___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VBrent_Kung_Adder___024root___dump_triggers__stl(VBrent_Kung_Adder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBrent_Kung_Adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBrent_Kung_Adder___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
    if (vlSelf->__VstlTriggered.at(1U)) {
        VL_DBG_MSGF("         'stl' region trigger index 1 is active: @([hybrid] Brent_Kung_Adder.parallel_FA_CLA_prefix[0].f.c)\n");
    }
    if (vlSelf->__VstlTriggered.at(2U)) {
        VL_DBG_MSGF("         'stl' region trigger index 2 is active: @([hybrid] Brent_Kung_Adder.parallel_FA_CLA_prefix[7].f.c)\n");
    }
    if (vlSelf->__VstlTriggered.at(3U)) {
        VL_DBG_MSGF("         'stl' region trigger index 3 is active: @([hybrid] Brent_Kung_Adder.parallel_FA_CLA_prefix[6].f.c)\n");
    }
    if (vlSelf->__VstlTriggered.at(4U)) {
        VL_DBG_MSGF("         'stl' region trigger index 4 is active: @([hybrid] Brent_Kung_Adder.parallel_FA_CLA_prefix[5].f.c)\n");
    }
    if (vlSelf->__VstlTriggered.at(5U)) {
        VL_DBG_MSGF("         'stl' region trigger index 5 is active: @([hybrid] Brent_Kung_Adder.parallel_FA_CLA_prefix[4].f.c)\n");
    }
    if (vlSelf->__VstlTriggered.at(6U)) {
        VL_DBG_MSGF("         'stl' region trigger index 6 is active: @([hybrid] Brent_Kung_Adder.parallel_FA_CLA_prefix[3].f.c)\n");
    }
    if (vlSelf->__VstlTriggered.at(7U)) {
        VL_DBG_MSGF("         'stl' region trigger index 7 is active: @([hybrid] Brent_Kung_Adder.parallel_FA_CLA_prefix[2].f.c)\n");
    }
    if (vlSelf->__VstlTriggered.at(8U)) {
        VL_DBG_MSGF("         'stl' region trigger index 8 is active: @([hybrid] Brent_Kung_Adder.parallel_FA_CLA_prefix[1].f.c)\n");
    }
    if (vlSelf->__VstlTriggered.at(9U)) {
        VL_DBG_MSGF("         'stl' region trigger index 9 is active: @([hybrid] Brent_Kung_Adder.t2.r_temp)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VBrent_Kung_Adder___024root___stl_sequent__TOP__0(VBrent_Kung_Adder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBrent_Kung_Adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBrent_Kung_Adder___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->Brent_Kung_Adder__DOT__t2__DOT____Vcellout__second_half_level__BRA__0__KET____DOT__second_half_level_logic__BRA__5__KET____DOT__f__r 
        = ((2U & (((IData)((0x480U == (0x480U & vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp))) 
                   << 1U) | (0x3ffffeU & (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp 
                                          >> 0xaU)))) 
           | (IData)((0x440U == (0x440U & vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp))));
}

void VBrent_Kung_Adder___024root___ico_comb__TOP__0(VBrent_Kung_Adder___024root* vlSelf);
void VBrent_Kung_Adder___024root___ico_sequent__TOP__0(VBrent_Kung_Adder___024root* vlSelf);
void VBrent_Kung_Adder___024root___ico_comb__TOP__1(VBrent_Kung_Adder___024root* vlSelf);
void VBrent_Kung_Adder___024root___ico_comb__TOP__2(VBrent_Kung_Adder___024root* vlSelf);
void VBrent_Kung_Adder___024root___ico_comb__TOP__3(VBrent_Kung_Adder___024root* vlSelf);
void VBrent_Kung_Adder___024root___ico_comb__TOP__4(VBrent_Kung_Adder___024root* vlSelf);
void VBrent_Kung_Adder___024root___ico_comb__TOP__5(VBrent_Kung_Adder___024root* vlSelf);
void VBrent_Kung_Adder___024root___ico_comb__TOP__6(VBrent_Kung_Adder___024root* vlSelf);
void VBrent_Kung_Adder___024root___ico_comb__TOP__7(VBrent_Kung_Adder___024root* vlSelf);
void VBrent_Kung_Adder___024root___ico_comb__TOP__8(VBrent_Kung_Adder___024root* vlSelf);
void VBrent_Kung_Adder___024root___ico_comb__TOP__9(VBrent_Kung_Adder___024root* vlSelf);
void VBrent_Kung_Adder___024root___ico_comb__TOP__10(VBrent_Kung_Adder___024root* vlSelf);

VL_ATTR_COLD void VBrent_Kung_Adder___024root___eval_stl(VBrent_Kung_Adder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBrent_Kung_Adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBrent_Kung_Adder___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(9U)) {
        VBrent_Kung_Adder___024root___stl_sequent__TOP__0(vlSelf);
    }
    if ((vlSelf->__VstlTriggered.at(0U) | vlSelf->__VstlTriggered.at(9U))) {
        VBrent_Kung_Adder___024root___ico_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[0x15U] = 1U;
        vlSelf->__Vm_traceActivity[0x14U] = 1U;
        vlSelf->__Vm_traceActivity[0x13U] = 1U;
        vlSelf->__Vm_traceActivity[0x12U] = 1U;
        vlSelf->__Vm_traceActivity[0x11U] = 1U;
        vlSelf->__Vm_traceActivity[0x10U] = 1U;
        vlSelf->__Vm_traceActivity[0xfU] = 1U;
        vlSelf->__Vm_traceActivity[0xeU] = 1U;
        vlSelf->__Vm_traceActivity[0xdU] = 1U;
        vlSelf->__Vm_traceActivity[0xcU] = 1U;
        vlSelf->__Vm_traceActivity[0xbU] = 1U;
        vlSelf->__Vm_traceActivity[0xaU] = 1U;
        vlSelf->__Vm_traceActivity[9U] = 1U;
        vlSelf->__Vm_traceActivity[8U] = 1U;
        vlSelf->__Vm_traceActivity[7U] = 1U;
        vlSelf->__Vm_traceActivity[6U] = 1U;
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VBrent_Kung_Adder___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[0x15U] = 1U;
        vlSelf->__Vm_traceActivity[0x14U] = 1U;
        vlSelf->__Vm_traceActivity[0x13U] = 1U;
        vlSelf->__Vm_traceActivity[0x12U] = 1U;
        vlSelf->__Vm_traceActivity[0x11U] = 1U;
        vlSelf->__Vm_traceActivity[0x10U] = 1U;
        vlSelf->__Vm_traceActivity[0xfU] = 1U;
        vlSelf->__Vm_traceActivity[0xeU] = 1U;
        vlSelf->__Vm_traceActivity[0xdU] = 1U;
        vlSelf->__Vm_traceActivity[0xcU] = 1U;
        vlSelf->__Vm_traceActivity[0xbU] = 1U;
        vlSelf->__Vm_traceActivity[0xaU] = 1U;
        vlSelf->__Vm_traceActivity[9U] = 1U;
        vlSelf->__Vm_traceActivity[8U] = 1U;
        vlSelf->__Vm_traceActivity[7U] = 1U;
        vlSelf->__Vm_traceActivity[6U] = 1U;
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
    if (((vlSelf->__VstlTriggered.at(0U) | vlSelf->__VstlTriggered.at(3U)) 
         | vlSelf->__VstlTriggered.at(9U))) {
        VBrent_Kung_Adder___024root___ico_comb__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[0x15U] = 1U;
        vlSelf->__Vm_traceActivity[0x14U] = 1U;
        vlSelf->__Vm_traceActivity[0x13U] = 1U;
        vlSelf->__Vm_traceActivity[0x12U] = 1U;
        vlSelf->__Vm_traceActivity[0x11U] = 1U;
        vlSelf->__Vm_traceActivity[0x10U] = 1U;
        vlSelf->__Vm_traceActivity[0xfU] = 1U;
        vlSelf->__Vm_traceActivity[0xeU] = 1U;
        vlSelf->__Vm_traceActivity[0xdU] = 1U;
        vlSelf->__Vm_traceActivity[0xcU] = 1U;
        vlSelf->__Vm_traceActivity[0xbU] = 1U;
        vlSelf->__Vm_traceActivity[0xaU] = 1U;
        vlSelf->__Vm_traceActivity[9U] = 1U;
        vlSelf->__Vm_traceActivity[8U] = 1U;
        vlSelf->__Vm_traceActivity[7U] = 1U;
        vlSelf->__Vm_traceActivity[6U] = 1U;
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
    if (((vlSelf->__VstlTriggered.at(0U) | vlSelf->__VstlTriggered.at(5U)) 
         | vlSelf->__VstlTriggered.at(9U))) {
        VBrent_Kung_Adder___024root___ico_comb__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[0x15U] = 1U;
        vlSelf->__Vm_traceActivity[0x14U] = 1U;
        vlSelf->__Vm_traceActivity[0x13U] = 1U;
        vlSelf->__Vm_traceActivity[0x12U] = 1U;
        vlSelf->__Vm_traceActivity[0x11U] = 1U;
        vlSelf->__Vm_traceActivity[0x10U] = 1U;
        vlSelf->__Vm_traceActivity[0xfU] = 1U;
        vlSelf->__Vm_traceActivity[0xeU] = 1U;
        vlSelf->__Vm_traceActivity[0xdU] = 1U;
        vlSelf->__Vm_traceActivity[0xcU] = 1U;
        vlSelf->__Vm_traceActivity[0xbU] = 1U;
        vlSelf->__Vm_traceActivity[0xaU] = 1U;
        vlSelf->__Vm_traceActivity[9U] = 1U;
        vlSelf->__Vm_traceActivity[8U] = 1U;
        vlSelf->__Vm_traceActivity[7U] = 1U;
        vlSelf->__Vm_traceActivity[6U] = 1U;
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
    if (((vlSelf->__VstlTriggered.at(0U) | vlSelf->__VstlTriggered.at(4U)) 
         | vlSelf->__VstlTriggered.at(9U))) {
        VBrent_Kung_Adder___024root___ico_comb__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[0x15U] = 1U;
        vlSelf->__Vm_traceActivity[0x14U] = 1U;
        vlSelf->__Vm_traceActivity[0x13U] = 1U;
        vlSelf->__Vm_traceActivity[0x12U] = 1U;
        vlSelf->__Vm_traceActivity[0x11U] = 1U;
        vlSelf->__Vm_traceActivity[0x10U] = 1U;
        vlSelf->__Vm_traceActivity[0xfU] = 1U;
        vlSelf->__Vm_traceActivity[0xeU] = 1U;
        vlSelf->__Vm_traceActivity[0xdU] = 1U;
        vlSelf->__Vm_traceActivity[0xcU] = 1U;
        vlSelf->__Vm_traceActivity[0xbU] = 1U;
        vlSelf->__Vm_traceActivity[0xaU] = 1U;
        vlSelf->__Vm_traceActivity[9U] = 1U;
        vlSelf->__Vm_traceActivity[8U] = 1U;
        vlSelf->__Vm_traceActivity[7U] = 1U;
        vlSelf->__Vm_traceActivity[6U] = 1U;
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
    if (((vlSelf->__VstlTriggered.at(0U) | vlSelf->__VstlTriggered.at(6U)) 
         | vlSelf->__VstlTriggered.at(9U))) {
        VBrent_Kung_Adder___024root___ico_comb__TOP__4(vlSelf);
        vlSelf->__Vm_traceActivity[0x15U] = 1U;
        vlSelf->__Vm_traceActivity[0x14U] = 1U;
        vlSelf->__Vm_traceActivity[0x13U] = 1U;
        vlSelf->__Vm_traceActivity[0x12U] = 1U;
        vlSelf->__Vm_traceActivity[0x11U] = 1U;
        vlSelf->__Vm_traceActivity[0x10U] = 1U;
        vlSelf->__Vm_traceActivity[0xfU] = 1U;
        vlSelf->__Vm_traceActivity[0xeU] = 1U;
        vlSelf->__Vm_traceActivity[0xdU] = 1U;
        vlSelf->__Vm_traceActivity[0xcU] = 1U;
        vlSelf->__Vm_traceActivity[0xbU] = 1U;
        vlSelf->__Vm_traceActivity[0xaU] = 1U;
        vlSelf->__Vm_traceActivity[9U] = 1U;
        vlSelf->__Vm_traceActivity[8U] = 1U;
        vlSelf->__Vm_traceActivity[7U] = 1U;
        vlSelf->__Vm_traceActivity[6U] = 1U;
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
    if (((vlSelf->__VstlTriggered.at(0U) | vlSelf->__VstlTriggered.at(2U)) 
         | vlSelf->__VstlTriggered.at(9U))) {
        VBrent_Kung_Adder___024root___ico_comb__TOP__5(vlSelf);
        vlSelf->__Vm_traceActivity[0x15U] = 1U;
        vlSelf->__Vm_traceActivity[0x14U] = 1U;
        vlSelf->__Vm_traceActivity[0x13U] = 1U;
        vlSelf->__Vm_traceActivity[0x12U] = 1U;
        vlSelf->__Vm_traceActivity[0x11U] = 1U;
        vlSelf->__Vm_traceActivity[0x10U] = 1U;
        vlSelf->__Vm_traceActivity[0xfU] = 1U;
        vlSelf->__Vm_traceActivity[0xeU] = 1U;
        vlSelf->__Vm_traceActivity[0xdU] = 1U;
        vlSelf->__Vm_traceActivity[0xcU] = 1U;
        vlSelf->__Vm_traceActivity[0xbU] = 1U;
        vlSelf->__Vm_traceActivity[0xaU] = 1U;
        vlSelf->__Vm_traceActivity[9U] = 1U;
        vlSelf->__Vm_traceActivity[8U] = 1U;
        vlSelf->__Vm_traceActivity[7U] = 1U;
        vlSelf->__Vm_traceActivity[6U] = 1U;
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
    if (((vlSelf->__VstlTriggered.at(0U) | vlSelf->__VstlTriggered.at(7U)) 
         | vlSelf->__VstlTriggered.at(9U))) {
        VBrent_Kung_Adder___024root___ico_comb__TOP__6(vlSelf);
        vlSelf->__Vm_traceActivity[0x15U] = 1U;
        vlSelf->__Vm_traceActivity[0x14U] = 1U;
        vlSelf->__Vm_traceActivity[0x13U] = 1U;
        vlSelf->__Vm_traceActivity[0x12U] = 1U;
        vlSelf->__Vm_traceActivity[0x11U] = 1U;
        vlSelf->__Vm_traceActivity[0x10U] = 1U;
        vlSelf->__Vm_traceActivity[0xfU] = 1U;
        vlSelf->__Vm_traceActivity[0xeU] = 1U;
        vlSelf->__Vm_traceActivity[0xdU] = 1U;
        vlSelf->__Vm_traceActivity[0xcU] = 1U;
        vlSelf->__Vm_traceActivity[0xbU] = 1U;
        vlSelf->__Vm_traceActivity[0xaU] = 1U;
        vlSelf->__Vm_traceActivity[9U] = 1U;
        vlSelf->__Vm_traceActivity[8U] = 1U;
        vlSelf->__Vm_traceActivity[7U] = 1U;
        vlSelf->__Vm_traceActivity[6U] = 1U;
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
    if (((vlSelf->__VstlTriggered.at(0U) | vlSelf->__VstlTriggered.at(8U)) 
         | vlSelf->__VstlTriggered.at(9U))) {
        VBrent_Kung_Adder___024root___ico_comb__TOP__7(vlSelf);
        vlSelf->__Vm_traceActivity[0x15U] = 1U;
        vlSelf->__Vm_traceActivity[0x14U] = 1U;
        vlSelf->__Vm_traceActivity[0x13U] = 1U;
        vlSelf->__Vm_traceActivity[0x12U] = 1U;
        vlSelf->__Vm_traceActivity[0x11U] = 1U;
        vlSelf->__Vm_traceActivity[0x10U] = 1U;
        vlSelf->__Vm_traceActivity[0xfU] = 1U;
        vlSelf->__Vm_traceActivity[0xeU] = 1U;
        vlSelf->__Vm_traceActivity[0xdU] = 1U;
        vlSelf->__Vm_traceActivity[0xcU] = 1U;
        vlSelf->__Vm_traceActivity[0xbU] = 1U;
        vlSelf->__Vm_traceActivity[0xaU] = 1U;
        vlSelf->__Vm_traceActivity[9U] = 1U;
        vlSelf->__Vm_traceActivity[8U] = 1U;
        vlSelf->__Vm_traceActivity[7U] = 1U;
        vlSelf->__Vm_traceActivity[6U] = 1U;
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
    if ((vlSelf->__VstlTriggered.at(0U) | vlSelf->__VstlTriggered.at(1U))) {
        VBrent_Kung_Adder___024root___ico_comb__TOP__8(vlSelf);
        vlSelf->__Vm_traceActivity[0x15U] = 1U;
        vlSelf->__Vm_traceActivity[0x14U] = 1U;
        vlSelf->__Vm_traceActivity[0x13U] = 1U;
        vlSelf->__Vm_traceActivity[0x12U] = 1U;
        vlSelf->__Vm_traceActivity[0x11U] = 1U;
        vlSelf->__Vm_traceActivity[0x10U] = 1U;
        vlSelf->__Vm_traceActivity[0xfU] = 1U;
        vlSelf->__Vm_traceActivity[0xeU] = 1U;
        vlSelf->__Vm_traceActivity[0xdU] = 1U;
        vlSelf->__Vm_traceActivity[0xcU] = 1U;
        vlSelf->__Vm_traceActivity[0xbU] = 1U;
        vlSelf->__Vm_traceActivity[0xaU] = 1U;
        vlSelf->__Vm_traceActivity[9U] = 1U;
        vlSelf->__Vm_traceActivity[8U] = 1U;
        vlSelf->__Vm_traceActivity[7U] = 1U;
        vlSelf->__Vm_traceActivity[6U] = 1U;
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
    if ((vlSelf->__VstlTriggered.at(0U) | vlSelf->__VstlTriggered.at(9U))) {
        VBrent_Kung_Adder___024root___ico_comb__TOP__9(vlSelf);
        vlSelf->__Vm_traceActivity[0x15U] = 1U;
        vlSelf->__Vm_traceActivity[0x14U] = 1U;
        vlSelf->__Vm_traceActivity[0x13U] = 1U;
        vlSelf->__Vm_traceActivity[0x12U] = 1U;
        vlSelf->__Vm_traceActivity[0x11U] = 1U;
        vlSelf->__Vm_traceActivity[0x10U] = 1U;
        vlSelf->__Vm_traceActivity[0xfU] = 1U;
        vlSelf->__Vm_traceActivity[0xeU] = 1U;
        vlSelf->__Vm_traceActivity[0xdU] = 1U;
        vlSelf->__Vm_traceActivity[0xcU] = 1U;
        vlSelf->__Vm_traceActivity[0xbU] = 1U;
        vlSelf->__Vm_traceActivity[0xaU] = 1U;
        vlSelf->__Vm_traceActivity[9U] = 1U;
        vlSelf->__Vm_traceActivity[8U] = 1U;
        vlSelf->__Vm_traceActivity[7U] = 1U;
        vlSelf->__Vm_traceActivity[6U] = 1U;
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
    if ((((((((((vlSelf->__VstlTriggered.at(0U) | vlSelf->__VstlTriggered.at(1U)) 
                | vlSelf->__VstlTriggered.at(2U)) | vlSelf->__VstlTriggered.at(3U)) 
              | vlSelf->__VstlTriggered.at(4U)) | vlSelf->__VstlTriggered.at(5U)) 
            | vlSelf->__VstlTriggered.at(6U)) | vlSelf->__VstlTriggered.at(7U)) 
          | vlSelf->__VstlTriggered.at(8U)) | vlSelf->__VstlTriggered.at(9U))) {
        VBrent_Kung_Adder___024root___ico_comb__TOP__10(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VBrent_Kung_Adder___024root___dump_triggers__ico(VBrent_Kung_Adder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBrent_Kung_Adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBrent_Kung_Adder___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VicoTriggered.at(0U)) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
    if (vlSelf->__VicoTriggered.at(1U)) {
        VL_DBG_MSGF("         'ico' region trigger index 1 is active: @([hybrid] Brent_Kung_Adder.parallel_FA_CLA_prefix[0].f.c)\n");
    }
    if (vlSelf->__VicoTriggered.at(2U)) {
        VL_DBG_MSGF("         'ico' region trigger index 2 is active: @([hybrid] Brent_Kung_Adder.parallel_FA_CLA_prefix[7].f.c)\n");
    }
    if (vlSelf->__VicoTriggered.at(3U)) {
        VL_DBG_MSGF("         'ico' region trigger index 3 is active: @([hybrid] Brent_Kung_Adder.parallel_FA_CLA_prefix[6].f.c)\n");
    }
    if (vlSelf->__VicoTriggered.at(4U)) {
        VL_DBG_MSGF("         'ico' region trigger index 4 is active: @([hybrid] Brent_Kung_Adder.parallel_FA_CLA_prefix[5].f.c)\n");
    }
    if (vlSelf->__VicoTriggered.at(5U)) {
        VL_DBG_MSGF("         'ico' region trigger index 5 is active: @([hybrid] Brent_Kung_Adder.parallel_FA_CLA_prefix[4].f.c)\n");
    }
    if (vlSelf->__VicoTriggered.at(6U)) {
        VL_DBG_MSGF("         'ico' region trigger index 6 is active: @([hybrid] Brent_Kung_Adder.parallel_FA_CLA_prefix[3].f.c)\n");
    }
    if (vlSelf->__VicoTriggered.at(7U)) {
        VL_DBG_MSGF("         'ico' region trigger index 7 is active: @([hybrid] Brent_Kung_Adder.parallel_FA_CLA_prefix[2].f.c)\n");
    }
    if (vlSelf->__VicoTriggered.at(8U)) {
        VL_DBG_MSGF("         'ico' region trigger index 8 is active: @([hybrid] Brent_Kung_Adder.parallel_FA_CLA_prefix[1].f.c)\n");
    }
    if (vlSelf->__VicoTriggered.at(9U)) {
        VL_DBG_MSGF("         'ico' region trigger index 9 is active: @([hybrid] Brent_Kung_Adder.t2.r_temp)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VBrent_Kung_Adder___024root___dump_triggers__act(VBrent_Kung_Adder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBrent_Kung_Adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBrent_Kung_Adder___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([hybrid] Brent_Kung_Adder.parallel_FA_CLA_prefix[0].f.c)\n");
    }
    if (vlSelf->__VactTriggered.at(1U)) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([hybrid] Brent_Kung_Adder.parallel_FA_CLA_prefix[7].f.c)\n");
    }
    if (vlSelf->__VactTriggered.at(2U)) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([hybrid] Brent_Kung_Adder.parallel_FA_CLA_prefix[6].f.c)\n");
    }
    if (vlSelf->__VactTriggered.at(3U)) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @([hybrid] Brent_Kung_Adder.parallel_FA_CLA_prefix[5].f.c)\n");
    }
    if (vlSelf->__VactTriggered.at(4U)) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @([hybrid] Brent_Kung_Adder.parallel_FA_CLA_prefix[4].f.c)\n");
    }
    if (vlSelf->__VactTriggered.at(5U)) {
        VL_DBG_MSGF("         'act' region trigger index 5 is active: @([hybrid] Brent_Kung_Adder.parallel_FA_CLA_prefix[3].f.c)\n");
    }
    if (vlSelf->__VactTriggered.at(6U)) {
        VL_DBG_MSGF("         'act' region trigger index 6 is active: @([hybrid] Brent_Kung_Adder.parallel_FA_CLA_prefix[2].f.c)\n");
    }
    if (vlSelf->__VactTriggered.at(7U)) {
        VL_DBG_MSGF("         'act' region trigger index 7 is active: @([hybrid] Brent_Kung_Adder.parallel_FA_CLA_prefix[1].f.c)\n");
    }
    if (vlSelf->__VactTriggered.at(8U)) {
        VL_DBG_MSGF("         'act' region trigger index 8 is active: @([hybrid] Brent_Kung_Adder.t2.r_temp)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VBrent_Kung_Adder___024root___dump_triggers__nba(VBrent_Kung_Adder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBrent_Kung_Adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBrent_Kung_Adder___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([hybrid] Brent_Kung_Adder.parallel_FA_CLA_prefix[0].f.c)\n");
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([hybrid] Brent_Kung_Adder.parallel_FA_CLA_prefix[7].f.c)\n");
    }
    if (vlSelf->__VnbaTriggered.at(2U)) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([hybrid] Brent_Kung_Adder.parallel_FA_CLA_prefix[6].f.c)\n");
    }
    if (vlSelf->__VnbaTriggered.at(3U)) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @([hybrid] Brent_Kung_Adder.parallel_FA_CLA_prefix[5].f.c)\n");
    }
    if (vlSelf->__VnbaTriggered.at(4U)) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @([hybrid] Brent_Kung_Adder.parallel_FA_CLA_prefix[4].f.c)\n");
    }
    if (vlSelf->__VnbaTriggered.at(5U)) {
        VL_DBG_MSGF("         'nba' region trigger index 5 is active: @([hybrid] Brent_Kung_Adder.parallel_FA_CLA_prefix[3].f.c)\n");
    }
    if (vlSelf->__VnbaTriggered.at(6U)) {
        VL_DBG_MSGF("         'nba' region trigger index 6 is active: @([hybrid] Brent_Kung_Adder.parallel_FA_CLA_prefix[2].f.c)\n");
    }
    if (vlSelf->__VnbaTriggered.at(7U)) {
        VL_DBG_MSGF("         'nba' region trigger index 7 is active: @([hybrid] Brent_Kung_Adder.parallel_FA_CLA_prefix[1].f.c)\n");
    }
    if (vlSelf->__VnbaTriggered.at(8U)) {
        VL_DBG_MSGF("         'nba' region trigger index 8 is active: @([hybrid] Brent_Kung_Adder.t2.r_temp)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VBrent_Kung_Adder___024root___ctor_var_reset(VBrent_Kung_Adder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBrent_Kung_Adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBrent_Kung_Adder___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->A = 0;
    vlSelf->B = 0;
    VL_ZERO_RESET_W(65, vlSelf->S);
    vlSelf->c0 = 0;
    vlSelf->Brent_Kung_Adder__DOT____Vcellout__cin_generation__BRA__0__KET____DOT__f__cin = 0;
    vlSelf->Brent_Kung_Adder__DOT____Vcellout__cin_generation__BRA__1__KET____DOT__f__cin = 0;
    vlSelf->Brent_Kung_Adder__DOT____Vcellout__cin_generation__BRA__2__KET____DOT__f__cin = 0;
    vlSelf->Brent_Kung_Adder__DOT____Vcellout__cin_generation__BRA__3__KET____DOT__f__cin = 0;
    vlSelf->Brent_Kung_Adder__DOT____Vcellout__cin_generation__BRA__4__KET____DOT__f__cin = 0;
    vlSelf->Brent_Kung_Adder__DOT____Vcellout__cin_generation__BRA__5__KET____DOT__f__cin = 0;
    vlSelf->Brent_Kung_Adder__DOT____Vcellout__cin_generation__BRA__6__KET____DOT__f__cin = 0;
    vlSelf->Brent_Kung_Adder__DOT____Vcellout__cin_generation__BRA__7__KET____DOT__f__cin = 0;
    vlSelf->Brent_Kung_Adder__DOT____VdfgTmp_h5b5c6a0f__0 = 0;
    vlSelf->Brent_Kung_Adder__DOT____VdfgTmp_h335431e1__0 = 0;
    vlSelf->Brent_Kung_Adder__DOT__t1__DOT____Vcellout__recursive_case__DOT__recursion_lsbh__r = 0;
    vlSelf->Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__recursion_lsbh__DOT____Vcellout__recursive_case__DOT__recursion_lsbh__r = 0;
    vlSelf->Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__recursion_lsbh__DOT__recursive_case__DOT__recursion_lsbh__DOT__trival_case__DOT__f__DOT____VdfgTmp_hef005df1__0 = 0;
    vlSelf->Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__recursion_lsbh__DOT__recursive_case__DOT__recursion_msbh__DOT____Vcellinp__trival_case__DOT__f__ql = 0;
    vlSelf->Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__recursion_lsbh__DOT__recursive_case__DOT__recursion_msbh__DOT__trival_case__DOT__f__DOT____VdfgTmp_hef005df1__0 = 0;
    vlSelf->Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__recursion_lsbh__DOT__recursive_case__DOT__parallel_stitch_up__BRA__6__KET____DOT__parallel_stitch_up_produce__DOT__f__DOT____VdfgTmp_hef005df1__0 = 0;
    vlSelf->Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__recursion_msbh__DOT____Vcellout__recursive_case__DOT__recursion_lsbh__r = 0;
    vlSelf->Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__recursion_msbh__DOT__recursive_case__DOT__recursion_lsbh__DOT__trival_case__DOT__f__DOT____VdfgTmp_hef005df1__0 = 0;
    vlSelf->Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__recursion_msbh__DOT__recursive_case__DOT__recursion_msbh__DOT____Vcellinp__trival_case__DOT__f__ql = 0;
    vlSelf->Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__recursion_msbh__DOT__recursive_case__DOT__recursion_msbh__DOT__trival_case__DOT__f__DOT____VdfgTmp_hef005df1__0 = 0;
    vlSelf->Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__recursion_msbh__DOT__recursive_case__DOT__parallel_stitch_up__BRA__6__KET____DOT__parallel_stitch_up_produce__DOT__f__DOT____VdfgTmp_hef005df1__0 = 0;
    vlSelf->Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__parallel_stitch_up__BRA__14__KET____DOT__parallel_stitch_up_produce__DOT__f__DOT____VdfgTmp_hef005df1__0 = 0;
    vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp = 0;
    vlSelf->Brent_Kung_Adder__DOT__t2__DOT____Vcellout__second_half_level__BRA__0__KET____DOT__second_half_level_logic__BRA__5__KET____DOT__f__r = 0;
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT__q = 0;
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT__c = 0;
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____Vcellout__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__s = 0;
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h166b2609__0 = 0;
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h1ce9aeec__0 = 0;
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_hc905584f__0 = 0;
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h984bded2__0 = 0;
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h352e0dcb__0 = 0;
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_hbf2851e6__0 = 0;
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h8a1e19e7__0 = 0;
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0 = 0;
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT__q = 0;
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT__c = 0;
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT____VdfgTmp_h166b2609__0 = 0;
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT____VdfgTmp_h1ce9aeec__0 = 0;
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT____VdfgTmp_hc905584f__0 = 0;
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT____VdfgTmp_h984bded2__0 = 0;
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT____VdfgTmp_h352e0dcb__0 = 0;
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT____VdfgTmp_hbf2851e6__0 = 0;
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT____VdfgTmp_h8a1e19e7__0 = 0;
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0 = 0;
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT__q = 0;
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT__c = 0;
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT____VdfgTmp_h166b2609__0 = 0;
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT____VdfgTmp_h1ce9aeec__0 = 0;
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT____VdfgTmp_hc905584f__0 = 0;
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT____VdfgTmp_h984bded2__0 = 0;
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT____VdfgTmp_h352e0dcb__0 = 0;
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT____VdfgTmp_hbf2851e6__0 = 0;
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT____VdfgTmp_h8a1e19e7__0 = 0;
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0 = 0;
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT__q = 0;
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT__c = 0;
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT____VdfgTmp_h166b2609__0 = 0;
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT____VdfgTmp_h1ce9aeec__0 = 0;
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT____VdfgTmp_hc905584f__0 = 0;
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT____VdfgTmp_h984bded2__0 = 0;
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT____VdfgTmp_h352e0dcb__0 = 0;
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT____VdfgTmp_hbf2851e6__0 = 0;
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT____VdfgTmp_h8a1e19e7__0 = 0;
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0 = 0;
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT__q = 0;
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT__c = 0;
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT____VdfgTmp_h166b2609__0 = 0;
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT____VdfgTmp_h1ce9aeec__0 = 0;
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT____VdfgTmp_hc905584f__0 = 0;
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT____VdfgTmp_h984bded2__0 = 0;
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT____VdfgTmp_h352e0dcb__0 = 0;
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT____VdfgTmp_hbf2851e6__0 = 0;
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT____VdfgTmp_h8a1e19e7__0 = 0;
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0 = 0;
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT__q = 0;
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT__c = 0;
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT____VdfgTmp_h166b2609__0 = 0;
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT____VdfgTmp_h1ce9aeec__0 = 0;
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT____VdfgTmp_hc905584f__0 = 0;
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT____VdfgTmp_h984bded2__0 = 0;
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT____VdfgTmp_h352e0dcb__0 = 0;
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT____VdfgTmp_hbf2851e6__0 = 0;
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT____VdfgTmp_h8a1e19e7__0 = 0;
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0 = 0;
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT__q = 0;
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT__c = 0;
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT____VdfgTmp_h166b2609__0 = 0;
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT____VdfgTmp_h1ce9aeec__0 = 0;
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT____VdfgTmp_hc905584f__0 = 0;
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT____VdfgTmp_h984bded2__0 = 0;
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT____VdfgTmp_h352e0dcb__0 = 0;
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT____VdfgTmp_hbf2851e6__0 = 0;
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT____VdfgTmp_h8a1e19e7__0 = 0;
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0 = 0;
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT__q = 0;
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT__c = 0;
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT____VdfgTmp_h166b2609__0 = 0;
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT____VdfgTmp_h1ce9aeec__0 = 0;
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT____VdfgTmp_hc905584f__0 = 0;
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT____VdfgTmp_h984bded2__0 = 0;
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT____VdfgTmp_h352e0dcb__0 = 0;
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT____VdfgTmp_hbf2851e6__0 = 0;
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT____VdfgTmp_h8a1e19e7__0 = 0;
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0 = 0;
    vlSelf->__VdfgTmp_h1f5a1e66__0 = 0;
    vlSelf->__VdfgTmp_h02636d51__0 = 0;
    vlSelf->__VdfgTmp_h21f0d06f__0 = 0;
    vlSelf->__VdfgTmp_h08445fd0__0 = 0;
    vlSelf->__VdfgTmp_ha94b5c3c__0 = 0;
    vlSelf->__VdfgTmp_hce8acf83__0 = 0;
    vlSelf->__VdfgTmp_hf48b56b2__0 = 0;
    vlSelf->__VdfgTmp_hb04d5094__0 = 0;
    vlSelf->__VdfgTmp_h2a7d63e6__0 = 0;
    vlSelf->__VdfgTmp_hf945ba23__0 = 0;
    vlSelf->__VdfgTmp_h2bcc32ae__0 = 0;
    vlSelf->__VdfgTmp_h0d9cf317__0 = 0;
    vlSelf->__VdfgTmp_ha2d76e15__0 = 0;
    vlSelf->__VdfgTmp_h0ed82a13__0 = 0;
    vlSelf->__VdfgTmp_hbb175292__0 = 0;
    vlSelf->__VdfgTmp_hbbf91651__0 = 0;
    vlSelf->__VdfgTmp_hb8898269__0 = 0;
    vlSelf->__VdfgTmp_he1be218e__0 = 0;
    vlSelf->__VdfgTmp_heb1783bd__0 = 0;
    vlSelf->__VdfgTmp_hebc854fa__0 = 0;
    vlSelf->__VdfgTmp_h9eea7908__0 = 0;
    vlSelf->__VdfgTmp_h935bb1ff__0 = 0;
    vlSelf->__VdfgTmp_he0cc5aca__0 = 0;
    vlSelf->__VdfgTmp_hfe3177f3__0 = 0;
    vlSelf->__VdfgTmp_he2d7c735__0 = 0;
    vlSelf->__VdfgTmp_he9e0d610__0 = 0;
    vlSelf->__VdfgTmp_h9402bd92__0 = 0;
    vlSelf->__VdfgTmp_h9319e32f__0 = 0;
    vlSelf->__VdfgTmp_ha5396d5d__0 = 0;
    vlSelf->__VdfgTmp_hbe21faac__0 = 0;
    vlSelf->__VdfgTmp_ha7143469__0 = 0;
    vlSelf->__VdfgTmp_h8a10462a__0 = 0;
    vlSelf->__VdfgTmp_h8b49bf26__0 = 0;
    vlSelf->__VdfgTmp_hb17ff5d1__0 = 0;
    vlSelf->__VdfgTmp_hbdb296aa__0 = 0;
    vlSelf->__VdfgTmp_hbf6abe2d__0 = 0;
    vlSelf->__VdfgTmp_heea9cdcf__0 = 0;
    vlSelf->__VdfgTmp_he57fb158__0 = 0;
    vlSelf->__VdfgTmp_hbe741e55__0 = 0;
    vlSelf->__VdfgTmp_hb16c50d0__0 = 0;
    vlSelf->__VdfgTmp_h8aa24c3a__0 = 0;
    vlSelf->__VdfgTmp_h8783b4a3__0 = 0;
    vlSelf->__VdfgTmp_h8920b836__0 = 0;
    vlSelf->__VdfgTmp_h8da57233__0 = 0;
    vlSelf->__VdfgTmp_ha4cc58c3__0 = 0;
    vlSelf->__VdfgTmp_ha00b13da__0 = 0;
    vlSelf->__VdfgTmp_hb6975029__0 = 0;
    vlSelf->__VdfgTmp_hb6858702__0 = 0;
    vlSelf->__VdfgTmp_h82a6176a__0 = 0;
    vlSelf->__VdfgTmp_h9fbf3785__0 = 0;
    vlSelf->__VdfgTmp_h81447f02__0 = 0;
    vlSelf->__VdfgTmp_h8004c929__0 = 0;
    vlSelf->__VdfgTmp_h8e8a8ef3__0 = 0;
    vlSelf->__VdfgTmp_hbfca6490__0 = 0;
    vlSelf->__VdfgTmp_h8c84fcd4__0 = 0;
    vlSelf->__VdfgTmp_h81acfa95__0 = 0;
    vlSelf->__VdfgTmp_h58b5f4dd__0 = 0;
    vlSelf->__VdfgTmp_h5bbf9d18__0 = 0;
    vlSelf->__VdfgTmp_h5bd66994__0 = 0;
    vlSelf->__VdfgTmp_h5d5c3be5__0 = 0;
    vlSelf->__VdfgTmp_h4437eafd__0 = 0;
    vlSelf->__VdfgTmp_hb693cd38__0 = 0;
    vlSelf->__VdfgTmp_h4614327f__0 = 0;
    vlSelf->__VdfgTmp_h4643dc14__0 = 0;
    vlSelf->__VdfgTmp_h5adb9448__0 = 0;
    vlSelf->__VdfgTmp_h533cc427__0 = 0;
    vlSelf->__VdfgTmp_h53056e9b__0 = 0;
    vlSelf->__VdfgTmp_h5592c408__0 = 0;
    vlSelf->__VdfgTmp_h5c44dec4__0 = 0;
    vlSelf->__VdfgTmp_h8bcd436b__0 = 0;
    vlSelf->__VdfgTmp_h5f43e680__0 = 0;
    vlSelf->__VdfgTmp_h5e42ada3__0 = 0;
    vlSelf->__VdfgTmp_h516934af__0 = 0;
    vlSelf->__VdfgTmp_ha829c5d0__0 = 0;
    vlSelf->__VdfgTmp_hab53db2d__0 = 0;
    vlSelf->__VdfgTmp_haa51df4a__0 = 0;
    vlSelf->__VdfgTmp_had190e44__0 = 0;
    vlSelf->__VdfgTmp_h44787b03__0 = 0;
    vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT__c = 0;
    vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT__c = 0;
    vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT__c = 0;
    vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT__c = 0;
    vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT__c = 0;
    vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT__c = 0;
    vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT__c = 0;
    vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT__c = 0;
    vlSelf->__Vtrigrprev__TOP__Brent_Kung_Adder__DOT__t2__DOT__r_temp = 0;
    vlSelf->__VstlDidInit = 0;
    vlSelf->__VicoDidInit = 0;
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 22; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
