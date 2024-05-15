// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdiv.h for the primary calling header

#include "verilated.h"

#include "Vdiv___024root.h"

VL_ATTR_COLD void Vdiv___024root___eval_static(Vdiv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdiv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdiv___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vdiv___024root___eval_initial(Vdiv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdiv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdiv___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigrprev__TOP__div__DOT__lzd0__DOT__lzd_32_0__DOT____Vcellout__lzd_16_1____pinNumber2 
        = vlSelf->div__DOT__lzd0__DOT__lzd_32_0__DOT____Vcellout__lzd_16_1____pinNumber2;
    vlSelf->__Vtrigrprev__TOP__div__DOT__lzd0__DOT__lzd_32_0__DOT____Vcellout__lzd_16_0____pinNumber2 
        = vlSelf->div__DOT__lzd0__DOT__lzd_32_0__DOT____Vcellout__lzd_16_0____pinNumber2;
    vlSelf->__Vtrigrprev__TOP__div__DOT__lzd0__DOT__lzd_32_1__DOT____Vcellout__lzd_16_1____pinNumber2 
        = vlSelf->div__DOT__lzd0__DOT__lzd_32_1__DOT____Vcellout__lzd_16_1____pinNumber2;
    vlSelf->__Vtrigrprev__TOP__div__DOT__lzd0__DOT__lzd_32_1__DOT____Vcellout__lzd_16_0____pinNumber2 
        = vlSelf->div__DOT__lzd0__DOT__lzd_32_1__DOT____Vcellout__lzd_16_0____pinNumber2;
    vlSelf->__Vtrigrprev__TOP__div__DOT__lzd1__DOT__lzd_32_0__DOT____Vcellout__lzd_16_1____pinNumber2 
        = vlSelf->div__DOT__lzd1__DOT__lzd_32_0__DOT____Vcellout__lzd_16_1____pinNumber2;
    vlSelf->__Vtrigrprev__TOP__div__DOT__lzd1__DOT__lzd_32_0__DOT____Vcellout__lzd_16_0____pinNumber2 
        = vlSelf->div__DOT__lzd1__DOT__lzd_32_0__DOT____Vcellout__lzd_16_0____pinNumber2;
    vlSelf->__Vtrigrprev__TOP__div__DOT__lzd1__DOT__lzd_32_1__DOT____Vcellout__lzd_16_1____pinNumber2 
        = vlSelf->div__DOT__lzd1__DOT__lzd_32_1__DOT____Vcellout__lzd_16_1____pinNumber2;
    vlSelf->__Vtrigrprev__TOP__div__DOT__lzd1__DOT__lzd_32_1__DOT____Vcellout__lzd_16_0____pinNumber2 
        = vlSelf->div__DOT__lzd1__DOT__lzd_32_1__DOT____Vcellout__lzd_16_0____pinNumber2;
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void Vdiv___024root___eval_final(Vdiv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdiv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdiv___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vdiv___024root___eval_triggers__stl(Vdiv___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vdiv___024root___dump_triggers__stl(Vdiv___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vdiv___024root___eval_stl(Vdiv___024root* vlSelf);

VL_ATTR_COLD void Vdiv___024root___eval_settle(Vdiv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdiv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdiv___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vdiv___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vdiv___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("/home/chelsea/cpu/div_64/vsrc/div.v", 1, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vdiv___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdiv___024root___dump_triggers__stl(Vdiv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdiv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdiv___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
    if (vlSelf->__VstlTriggered.at(1U)) {
        VL_DBG_MSGF("         'stl' region trigger index 1 is active: @([hybrid] div.lzd0.lzd_32_0.__Vcellout__lzd_16_1____pinNumber2)\n");
    }
    if (vlSelf->__VstlTriggered.at(2U)) {
        VL_DBG_MSGF("         'stl' region trigger index 2 is active: @([hybrid] div.lzd0.lzd_32_0.__Vcellout__lzd_16_0____pinNumber2)\n");
    }
    if (vlSelf->__VstlTriggered.at(3U)) {
        VL_DBG_MSGF("         'stl' region trigger index 3 is active: @([hybrid] div.lzd0.lzd_32_1.__Vcellout__lzd_16_1____pinNumber2)\n");
    }
    if (vlSelf->__VstlTriggered.at(4U)) {
        VL_DBG_MSGF("         'stl' region trigger index 4 is active: @([hybrid] div.lzd0.lzd_32_1.__Vcellout__lzd_16_0____pinNumber2)\n");
    }
    if (vlSelf->__VstlTriggered.at(5U)) {
        VL_DBG_MSGF("         'stl' region trigger index 5 is active: @([hybrid] div.lzd1.lzd_32_0.__Vcellout__lzd_16_1____pinNumber2)\n");
    }
    if (vlSelf->__VstlTriggered.at(6U)) {
        VL_DBG_MSGF("         'stl' region trigger index 6 is active: @([hybrid] div.lzd1.lzd_32_0.__Vcellout__lzd_16_0____pinNumber2)\n");
    }
    if (vlSelf->__VstlTriggered.at(7U)) {
        VL_DBG_MSGF("         'stl' region trigger index 7 is active: @([hybrid] div.lzd1.lzd_32_1.__Vcellout__lzd_16_1____pinNumber2)\n");
    }
    if (vlSelf->__VstlTriggered.at(8U)) {
        VL_DBG_MSGF("         'stl' region trigger index 8 is active: @([hybrid] div.lzd1.lzd_32_1.__Vcellout__lzd_16_0____pinNumber2)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vdiv___024root___stl_sequent__TOP__0(Vdiv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdiv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdiv___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->finish = (1U & ((IData)(vlSelf->div__DOT__current_state) 
                            >> 4U));
    vlSelf->div__DOT____Vcellinp__oppo1____pinNumber2 
        = ((IData)(vlSelf->sign) & (IData)((vlSelf->y 
                                            >> 0x3fU)));
    vlSelf->div__DOT____Vcellinp__oppo0____pinNumber2 
        = ((IData)(vlSelf->sign) & (IData)((vlSelf->x 
                                            >> 0x3fU)));
    vlSelf->div__DOT____Vcellinp__oppo2____pinNumber2 
        = ((IData)(vlSelf->sign) & ((IData)((vlSelf->x 
                                             >> 0x3fU)) 
                                    ^ (IData)((vlSelf->y 
                                               >> 0x3fU))));
    vlSelf->div__DOT__lzd1__DOT__lzd_32_1__DOT__lzd_16_1__DOT__z 
        = ((8U & ((~ (IData)((0U != (0xfU & (IData)(vlSelf->div__DOT__x_abs_reg))))) 
                  << 3U)) | ((4U & ((~ (IData)((0U 
                                                != 
                                                (0xfU 
                                                 & (IData)(
                                                           (vlSelf->div__DOT__x_abs_reg 
                                                            >> 4U)))))) 
                                    << 2U)) | ((2U 
                                                & ((~ (IData)(
                                                              (0U 
                                                               != 
                                                               (0xfU 
                                                                & (IData)(
                                                                          (vlSelf->div__DOT__x_abs_reg 
                                                                           >> 8U)))))) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0xfU 
                                                                 & (IData)(
                                                                           (vlSelf->div__DOT__x_abs_reg 
                                                                            >> 0xcU))))))))));
    vlSelf->div__DOT__lzd1__DOT__lzd_32_0__DOT__lzd_16_0__DOT__out_2[0U] 
        = ((2U & ((~ (IData)((0ULL != (0xc000000000000000ULL 
                                       & vlSelf->div__DOT__x_abs_reg)))) 
                  << 1U)) | (IData)(((~ (vlSelf->div__DOT__x_abs_reg 
                                         >> 0x3fU)) 
                                     & (0x2000000000000000ULL 
                                        != (0x6000000000000000ULL 
                                            & vlSelf->div__DOT__x_abs_reg)))));
    vlSelf->div__DOT__lzd1__DOT__lzd_32_0__DOT__lzd_16_0__DOT__out_2[1U] 
        = ((2U & ((~ (IData)((0ULL != (0xc00000000000000ULL 
                                       & vlSelf->div__DOT__x_abs_reg)))) 
                  << 1U)) | (IData)(((~ (vlSelf->div__DOT__x_abs_reg 
                                         >> 0x3bU)) 
                                     & (0x200000000000000ULL 
                                        != (0x600000000000000ULL 
                                            & vlSelf->div__DOT__x_abs_reg)))));
    vlSelf->div__DOT__lzd1__DOT__lzd_32_0__DOT__lzd_16_0__DOT__out_2[2U] 
        = ((2U & ((~ (IData)((0ULL != (0xc0000000000000ULL 
                                       & vlSelf->div__DOT__x_abs_reg)))) 
                  << 1U)) | (IData)(((~ (vlSelf->div__DOT__x_abs_reg 
                                         >> 0x37U)) 
                                     & (0x20000000000000ULL 
                                        != (0x60000000000000ULL 
                                            & vlSelf->div__DOT__x_abs_reg)))));
    vlSelf->div__DOT__lzd1__DOT__lzd_32_0__DOT__lzd_16_0__DOT__out_2[3U] 
        = ((2U & ((~ (IData)((0ULL != (0xc000000000000ULL 
                                       & vlSelf->div__DOT__x_abs_reg)))) 
                  << 1U)) | (IData)(((~ (vlSelf->div__DOT__x_abs_reg 
                                         >> 0x33U)) 
                                     & (0x2000000000000ULL 
                                        != (0x6000000000000ULL 
                                            & vlSelf->div__DOT__x_abs_reg)))));
    vlSelf->div__DOT__lzd1__DOT__lzd_32_0__DOT__lzd_16_1__DOT__out_2[0U] 
        = ((2U & ((~ (IData)((0ULL != (0xc00000000000ULL 
                                       & vlSelf->div__DOT__x_abs_reg)))) 
                  << 1U)) | (IData)(((~ (vlSelf->div__DOT__x_abs_reg 
                                         >> 0x2fU)) 
                                     & (0x200000000000ULL 
                                        != (0x600000000000ULL 
                                            & vlSelf->div__DOT__x_abs_reg)))));
    vlSelf->div__DOT__lzd1__DOT__lzd_32_0__DOT__lzd_16_1__DOT__out_2[1U] 
        = ((2U & ((~ (IData)((0ULL != (0xc0000000000ULL 
                                       & vlSelf->div__DOT__x_abs_reg)))) 
                  << 1U)) | (IData)(((~ (vlSelf->div__DOT__x_abs_reg 
                                         >> 0x2bU)) 
                                     & (0x20000000000ULL 
                                        != (0x60000000000ULL 
                                            & vlSelf->div__DOT__x_abs_reg)))));
    vlSelf->div__DOT__lzd1__DOT__lzd_32_0__DOT__lzd_16_1__DOT__out_2[2U] 
        = ((2U & ((~ (IData)((0ULL != (0xc000000000ULL 
                                       & vlSelf->div__DOT__x_abs_reg)))) 
                  << 1U)) | (IData)(((~ (vlSelf->div__DOT__x_abs_reg 
                                         >> 0x27U)) 
                                     & (0x2000000000ULL 
                                        != (0x6000000000ULL 
                                            & vlSelf->div__DOT__x_abs_reg)))));
    vlSelf->div__DOT__lzd1__DOT__lzd_32_0__DOT__lzd_16_1__DOT__out_2[3U] 
        = ((2U & ((~ (IData)((0ULL != (0xc00000000ULL 
                                       & vlSelf->div__DOT__x_abs_reg)))) 
                  << 1U)) | (IData)(((~ (vlSelf->div__DOT__x_abs_reg 
                                         >> 0x23U)) 
                                     & (0x200000000ULL 
                                        != (0x600000000ULL 
                                            & vlSelf->div__DOT__x_abs_reg)))));
    vlSelf->div__DOT__lzd1__DOT__lzd_32_1__DOT__lzd_16_0__DOT__out_2[0U] 
        = ((2U & ((~ (IData)((0ULL != (0xc0000000ULL 
                                       & vlSelf->div__DOT__x_abs_reg)))) 
                  << 1U)) | (IData)(((~ (vlSelf->div__DOT__x_abs_reg 
                                         >> 0x1fU)) 
                                     & (0x20000000ULL 
                                        != (0x60000000ULL 
                                            & vlSelf->div__DOT__x_abs_reg)))));
    vlSelf->div__DOT__lzd1__DOT__lzd_32_1__DOT__lzd_16_0__DOT__out_2[1U] 
        = ((2U & ((~ (IData)((0ULL != (0xc000000ULL 
                                       & vlSelf->div__DOT__x_abs_reg)))) 
                  << 1U)) | (IData)(((~ (vlSelf->div__DOT__x_abs_reg 
                                         >> 0x1bU)) 
                                     & (0x2000000ULL 
                                        != (0x6000000ULL 
                                            & vlSelf->div__DOT__x_abs_reg)))));
    vlSelf->div__DOT__lzd1__DOT__lzd_32_1__DOT__lzd_16_0__DOT__out_2[2U] 
        = ((2U & ((~ (IData)((0ULL != (0xc00000ULL 
                                       & vlSelf->div__DOT__x_abs_reg)))) 
                  << 1U)) | (IData)(((~ (vlSelf->div__DOT__x_abs_reg 
                                         >> 0x17U)) 
                                     & (0x200000ULL 
                                        != (0x600000ULL 
                                            & vlSelf->div__DOT__x_abs_reg)))));
    vlSelf->div__DOT__lzd1__DOT__lzd_32_1__DOT__lzd_16_0__DOT__out_2[3U] 
        = ((2U & ((~ (IData)((0ULL != (0xc0000ULL & vlSelf->div__DOT__x_abs_reg)))) 
                  << 1U)) | (IData)(((~ (vlSelf->div__DOT__x_abs_reg 
                                         >> 0x13U)) 
                                     & (0x20000ULL 
                                        != (0x60000ULL 
                                            & vlSelf->div__DOT__x_abs_reg)))));
    vlSelf->div__DOT__lzd1__DOT__lzd_32_1__DOT__lzd_16_1__DOT__out_2[0U] 
        = ((2U & ((~ (IData)((0ULL != (0xc000ULL & vlSelf->div__DOT__x_abs_reg)))) 
                  << 1U)) | (IData)(((~ (vlSelf->div__DOT__x_abs_reg 
                                         >> 0xfU)) 
                                     & (0x2000ULL != 
                                        (0x6000ULL 
                                         & vlSelf->div__DOT__x_abs_reg)))));
    vlSelf->div__DOT__lzd1__DOT__lzd_32_1__DOT__lzd_16_1__DOT__out_2[1U] 
        = ((2U & ((~ (IData)((0ULL != (0xc00ULL & vlSelf->div__DOT__x_abs_reg)))) 
                  << 1U)) | (IData)(((~ (vlSelf->div__DOT__x_abs_reg 
                                         >> 0xbU)) 
                                     & (0x200ULL != 
                                        (0x600ULL & vlSelf->div__DOT__x_abs_reg)))));
    vlSelf->div__DOT__lzd1__DOT__lzd_32_1__DOT__lzd_16_1__DOT__out_2[2U] 
        = ((2U & ((~ (IData)((0ULL != (0xc0ULL & vlSelf->div__DOT__x_abs_reg)))) 
                  << 1U)) | (IData)(((~ (vlSelf->div__DOT__x_abs_reg 
                                         >> 7U)) & 
                                     (0x20ULL != (0x60ULL 
                                                  & vlSelf->div__DOT__x_abs_reg)))));
    vlSelf->div__DOT__lzd1__DOT__lzd_32_1__DOT__lzd_16_1__DOT__out_2[3U] 
        = ((2U & ((~ (IData)((0ULL != (0xcULL & vlSelf->div__DOT__x_abs_reg)))) 
                  << 1U)) | (IData)(((~ (vlSelf->div__DOT__x_abs_reg 
                                         >> 3U)) & 
                                     (2ULL != (6ULL 
                                               & vlSelf->div__DOT__x_abs_reg)))));
    vlSelf->div__DOT__cla1__DOT__genblk1__BRA__60__KET____DOT__cla_part0__DOT__g 
        = (0xfU & ((IData)((vlSelf->div__DOT__dividend 
                            >> 0x3cU)) & (IData)((vlSelf->div__DOT__divisor 
                                                  >> 0x3cU))));
    vlSelf->div__DOT__lzd1__DOT__lzd_32_0__DOT__lzd_16_1__DOT__z 
        = ((8U & ((~ (IData)((0U != (0xfU & (IData)(
                                                    (vlSelf->div__DOT__x_abs_reg 
                                                     >> 0x20U)))))) 
                  << 3U)) | ((4U & ((~ (IData)((0U 
                                                != 
                                                (0xfU 
                                                 & (IData)(
                                                           (vlSelf->div__DOT__x_abs_reg 
                                                            >> 0x24U)))))) 
                                    << 2U)) | ((2U 
                                                & ((~ (IData)(
                                                              (0U 
                                                               != 
                                                               (0xfU 
                                                                & (IData)(
                                                                          (vlSelf->div__DOT__x_abs_reg 
                                                                           >> 0x28U)))))) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0xfU 
                                                                 & (IData)(
                                                                           (vlSelf->div__DOT__x_abs_reg 
                                                                            >> 0x2cU))))))))));
    vlSelf->div__DOT__lzd1__DOT__lzd_32_1__DOT__lzd_16_0__DOT__z 
        = ((8U & ((~ (IData)((0U != (0xfU & (IData)(
                                                    (vlSelf->div__DOT__x_abs_reg 
                                                     >> 0x10U)))))) 
                  << 3U)) | ((4U & ((~ (IData)((0U 
                                                != 
                                                (0xfU 
                                                 & (IData)(
                                                           (vlSelf->div__DOT__x_abs_reg 
                                                            >> 0x14U)))))) 
                                    << 2U)) | ((2U 
                                                & ((~ (IData)(
                                                              (0U 
                                                               != 
                                                               (0xfU 
                                                                & (IData)(
                                                                          (vlSelf->div__DOT__x_abs_reg 
                                                                           >> 0x18U)))))) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0xfU 
                                                                 & (IData)(
                                                                           (vlSelf->div__DOT__x_abs_reg 
                                                                            >> 0x1cU))))))))));
    vlSelf->div__DOT__lzd0__DOT__lzd_32_1__DOT__lzd_16_1__DOT__z 
        = ((8U & ((~ (IData)((0U != (0xfU & (IData)(vlSelf->div__DOT__y_abs_reg))))) 
                  << 3U)) | ((4U & ((~ (IData)((0U 
                                                != 
                                                (0xfU 
                                                 & (IData)(
                                                           (vlSelf->div__DOT__y_abs_reg 
                                                            >> 4U)))))) 
                                    << 2U)) | ((2U 
                                                & ((~ (IData)(
                                                              (0U 
                                                               != 
                                                               (0xfU 
                                                                & (IData)(
                                                                          (vlSelf->div__DOT__y_abs_reg 
                                                                           >> 8U)))))) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0xfU 
                                                                 & (IData)(
                                                                           (vlSelf->div__DOT__y_abs_reg 
                                                                            >> 0xcU))))))))));
    vlSelf->div__DOT__lzd0__DOT__lzd_32_0__DOT__lzd_16_0__DOT__out_2[0U] 
        = ((2U & ((~ (IData)((0ULL != (0xc000000000000000ULL 
                                       & vlSelf->div__DOT__y_abs_reg)))) 
                  << 1U)) | (IData)(((~ (vlSelf->div__DOT__y_abs_reg 
                                         >> 0x3fU)) 
                                     & (0x2000000000000000ULL 
                                        != (0x6000000000000000ULL 
                                            & vlSelf->div__DOT__y_abs_reg)))));
    vlSelf->div__DOT__lzd0__DOT__lzd_32_0__DOT__lzd_16_0__DOT__out_2[1U] 
        = ((2U & ((~ (IData)((0ULL != (0xc00000000000000ULL 
                                       & vlSelf->div__DOT__y_abs_reg)))) 
                  << 1U)) | (IData)(((~ (vlSelf->div__DOT__y_abs_reg 
                                         >> 0x3bU)) 
                                     & (0x200000000000000ULL 
                                        != (0x600000000000000ULL 
                                            & vlSelf->div__DOT__y_abs_reg)))));
    vlSelf->div__DOT__lzd0__DOT__lzd_32_0__DOT__lzd_16_0__DOT__out_2[2U] 
        = ((2U & ((~ (IData)((0ULL != (0xc0000000000000ULL 
                                       & vlSelf->div__DOT__y_abs_reg)))) 
                  << 1U)) | (IData)(((~ (vlSelf->div__DOT__y_abs_reg 
                                         >> 0x37U)) 
                                     & (0x20000000000000ULL 
                                        != (0x60000000000000ULL 
                                            & vlSelf->div__DOT__y_abs_reg)))));
    vlSelf->div__DOT__lzd0__DOT__lzd_32_0__DOT__lzd_16_0__DOT__out_2[3U] 
        = ((2U & ((~ (IData)((0ULL != (0xc000000000000ULL 
                                       & vlSelf->div__DOT__y_abs_reg)))) 
                  << 1U)) | (IData)(((~ (vlSelf->div__DOT__y_abs_reg 
                                         >> 0x33U)) 
                                     & (0x2000000000000ULL 
                                        != (0x6000000000000ULL 
                                            & vlSelf->div__DOT__y_abs_reg)))));
    vlSelf->div__DOT__lzd0__DOT__lzd_32_0__DOT__lzd_16_1__DOT__out_2[0U] 
        = ((2U & ((~ (IData)((0ULL != (0xc00000000000ULL 
                                       & vlSelf->div__DOT__y_abs_reg)))) 
                  << 1U)) | (IData)(((~ (vlSelf->div__DOT__y_abs_reg 
                                         >> 0x2fU)) 
                                     & (0x200000000000ULL 
                                        != (0x600000000000ULL 
                                            & vlSelf->div__DOT__y_abs_reg)))));
    vlSelf->div__DOT__lzd0__DOT__lzd_32_0__DOT__lzd_16_1__DOT__out_2[1U] 
        = ((2U & ((~ (IData)((0ULL != (0xc0000000000ULL 
                                       & vlSelf->div__DOT__y_abs_reg)))) 
                  << 1U)) | (IData)(((~ (vlSelf->div__DOT__y_abs_reg 
                                         >> 0x2bU)) 
                                     & (0x20000000000ULL 
                                        != (0x60000000000ULL 
                                            & vlSelf->div__DOT__y_abs_reg)))));
    vlSelf->div__DOT__lzd0__DOT__lzd_32_0__DOT__lzd_16_1__DOT__out_2[2U] 
        = ((2U & ((~ (IData)((0ULL != (0xc000000000ULL 
                                       & vlSelf->div__DOT__y_abs_reg)))) 
                  << 1U)) | (IData)(((~ (vlSelf->div__DOT__y_abs_reg 
                                         >> 0x27U)) 
                                     & (0x2000000000ULL 
                                        != (0x6000000000ULL 
                                            & vlSelf->div__DOT__y_abs_reg)))));
    vlSelf->div__DOT__lzd0__DOT__lzd_32_0__DOT__lzd_16_1__DOT__out_2[3U] 
        = ((2U & ((~ (IData)((0ULL != (0xc00000000ULL 
                                       & vlSelf->div__DOT__y_abs_reg)))) 
                  << 1U)) | (IData)(((~ (vlSelf->div__DOT__y_abs_reg 
                                         >> 0x23U)) 
                                     & (0x200000000ULL 
                                        != (0x600000000ULL 
                                            & vlSelf->div__DOT__y_abs_reg)))));
    vlSelf->div__DOT__lzd0__DOT__lzd_32_1__DOT__lzd_16_0__DOT__out_2[0U] 
        = ((2U & ((~ (IData)((0ULL != (0xc0000000ULL 
                                       & vlSelf->div__DOT__y_abs_reg)))) 
                  << 1U)) | (IData)(((~ (vlSelf->div__DOT__y_abs_reg 
                                         >> 0x1fU)) 
                                     & (0x20000000ULL 
                                        != (0x60000000ULL 
                                            & vlSelf->div__DOT__y_abs_reg)))));
    vlSelf->div__DOT__lzd0__DOT__lzd_32_1__DOT__lzd_16_0__DOT__out_2[1U] 
        = ((2U & ((~ (IData)((0ULL != (0xc000000ULL 
                                       & vlSelf->div__DOT__y_abs_reg)))) 
                  << 1U)) | (IData)(((~ (vlSelf->div__DOT__y_abs_reg 
                                         >> 0x1bU)) 
                                     & (0x2000000ULL 
                                        != (0x6000000ULL 
                                            & vlSelf->div__DOT__y_abs_reg)))));
    vlSelf->div__DOT__lzd0__DOT__lzd_32_1__DOT__lzd_16_0__DOT__out_2[2U] 
        = ((2U & ((~ (IData)((0ULL != (0xc00000ULL 
                                       & vlSelf->div__DOT__y_abs_reg)))) 
                  << 1U)) | (IData)(((~ (vlSelf->div__DOT__y_abs_reg 
                                         >> 0x17U)) 
                                     & (0x200000ULL 
                                        != (0x600000ULL 
                                            & vlSelf->div__DOT__y_abs_reg)))));
    vlSelf->div__DOT__lzd0__DOT__lzd_32_1__DOT__lzd_16_0__DOT__out_2[3U] 
        = ((2U & ((~ (IData)((0ULL != (0xc0000ULL & vlSelf->div__DOT__y_abs_reg)))) 
                  << 1U)) | (IData)(((~ (vlSelf->div__DOT__y_abs_reg 
                                         >> 0x13U)) 
                                     & (0x20000ULL 
                                        != (0x60000ULL 
                                            & vlSelf->div__DOT__y_abs_reg)))));
    vlSelf->div__DOT__lzd0__DOT__lzd_32_1__DOT__lzd_16_1__DOT__out_2[0U] 
        = ((2U & ((~ (IData)((0ULL != (0xc000ULL & vlSelf->div__DOT__y_abs_reg)))) 
                  << 1U)) | (IData)(((~ (vlSelf->div__DOT__y_abs_reg 
                                         >> 0xfU)) 
                                     & (0x2000ULL != 
                                        (0x6000ULL 
                                         & vlSelf->div__DOT__y_abs_reg)))));
    vlSelf->div__DOT__lzd0__DOT__lzd_32_1__DOT__lzd_16_1__DOT__out_2[1U] 
        = ((2U & ((~ (IData)((0ULL != (0xc00ULL & vlSelf->div__DOT__y_abs_reg)))) 
                  << 1U)) | (IData)(((~ (vlSelf->div__DOT__y_abs_reg 
                                         >> 0xbU)) 
                                     & (0x200ULL != 
                                        (0x600ULL & vlSelf->div__DOT__y_abs_reg)))));
    vlSelf->div__DOT__lzd0__DOT__lzd_32_1__DOT__lzd_16_1__DOT__out_2[2U] 
        = ((2U & ((~ (IData)((0ULL != (0xc0ULL & vlSelf->div__DOT__y_abs_reg)))) 
                  << 1U)) | (IData)(((~ (vlSelf->div__DOT__y_abs_reg 
                                         >> 7U)) & 
                                     (0x20ULL != (0x60ULL 
                                                  & vlSelf->div__DOT__y_abs_reg)))));
    vlSelf->div__DOT__lzd0__DOT__lzd_32_1__DOT__lzd_16_1__DOT__out_2[3U] 
        = ((2U & ((~ (IData)((0ULL != (0xcULL & vlSelf->div__DOT__y_abs_reg)))) 
                  << 1U)) | (IData)(((~ (vlSelf->div__DOT__y_abs_reg 
                                         >> 3U)) & 
                                     (2ULL != (6ULL 
                                               & vlSelf->div__DOT__y_abs_reg)))));
    vlSelf->div__DOT__cla1__DOT__genblk1__BRA__60__KET____DOT__cla_part0__DOT__p 
        = (0xfU & ((IData)((vlSelf->div__DOT__dividend 
                            >> 0x3cU)) ^ (IData)((vlSelf->div__DOT__divisor 
                                                  >> 0x3cU))));
    vlSelf->div__DOT__cla1__DOT__genblk1__BRA__56__KET____DOT__cla_part0__DOT__g 
        = (0xfU & ((IData)((vlSelf->div__DOT__dividend 
                            >> 0x38U)) & (IData)((vlSelf->div__DOT__divisor 
                                                  >> 0x38U))));
    vlSelf->div__DOT__lzd1__DOT__lzd_32_0__DOT__lzd_16_0__DOT__z 
        = ((8U & ((~ (IData)((0U != (0xfU & (IData)(
                                                    (vlSelf->div__DOT__x_abs_reg 
                                                     >> 0x30U)))))) 
                  << 3U)) | ((4U & ((~ (IData)((0U 
                                                != 
                                                (0xfU 
                                                 & (IData)(
                                                           (vlSelf->div__DOT__x_abs_reg 
                                                            >> 0x34U)))))) 
                                    << 2U)) | ((2U 
                                                & ((~ (IData)(
                                                              (0U 
                                                               != 
                                                               (0xfU 
                                                                & (IData)(
                                                                          (vlSelf->div__DOT__x_abs_reg 
                                                                           >> 0x38U)))))) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0xfU 
                                                                 & (IData)(
                                                                           (vlSelf->div__DOT__x_abs_reg 
                                                                            >> 0x3cU))))))))));
    vlSelf->div__DOT__cla1__DOT__genblk1__BRA__56__KET____DOT__cla_part0__DOT__p 
        = (0xfU & ((IData)((vlSelf->div__DOT__dividend 
                            >> 0x38U)) ^ (IData)((vlSelf->div__DOT__divisor 
                                                  >> 0x38U))));
    vlSelf->div__DOT__cla1__DOT__genblk1__BRA__52__KET____DOT__cla_part0__DOT__g 
        = (0xfU & ((IData)((vlSelf->div__DOT__dividend 
                            >> 0x34U)) & (IData)((vlSelf->div__DOT__divisor 
                                                  >> 0x34U))));
    vlSelf->div__DOT__lzd0__DOT__lzd_32_0__DOT__lzd_16_1__DOT__z 
        = ((8U & ((~ (IData)((0U != (0xfU & (IData)(
                                                    (vlSelf->div__DOT__y_abs_reg 
                                                     >> 0x20U)))))) 
                  << 3U)) | ((4U & ((~ (IData)((0U 
                                                != 
                                                (0xfU 
                                                 & (IData)(
                                                           (vlSelf->div__DOT__y_abs_reg 
                                                            >> 0x24U)))))) 
                                    << 2U)) | ((2U 
                                                & ((~ (IData)(
                                                              (0U 
                                                               != 
                                                               (0xfU 
                                                                & (IData)(
                                                                          (vlSelf->div__DOT__y_abs_reg 
                                                                           >> 0x28U)))))) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0xfU 
                                                                 & (IData)(
                                                                           (vlSelf->div__DOT__y_abs_reg 
                                                                            >> 0x2cU))))))))));
    vlSelf->div__DOT__lzd0__DOT__lzd_32_1__DOT__lzd_16_0__DOT__z 
        = ((8U & ((~ (IData)((0U != (0xfU & (IData)(
                                                    (vlSelf->div__DOT__y_abs_reg 
                                                     >> 0x10U)))))) 
                  << 3U)) | ((4U & ((~ (IData)((0U 
                                                != 
                                                (0xfU 
                                                 & (IData)(
                                                           (vlSelf->div__DOT__y_abs_reg 
                                                            >> 0x14U)))))) 
                                    << 2U)) | ((2U 
                                                & ((~ (IData)(
                                                              (0U 
                                                               != 
                                                               (0xfU 
                                                                & (IData)(
                                                                          (vlSelf->div__DOT__y_abs_reg 
                                                                           >> 0x18U)))))) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0xfU 
                                                                 & (IData)(
                                                                           (vlSelf->div__DOT__y_abs_reg 
                                                                            >> 0x1cU))))))))));
    vlSelf->div__DOT__cla1__DOT__genblk1__BRA__52__KET____DOT__cla_part0__DOT__p 
        = (0xfU & ((IData)((vlSelf->div__DOT__dividend 
                            >> 0x34U)) ^ (IData)((vlSelf->div__DOT__divisor 
                                                  >> 0x34U))));
    vlSelf->div__DOT__cla1__DOT__genblk1__BRA__48__KET____DOT__cla_part0__DOT__g 
        = (0xfU & ((IData)((vlSelf->div__DOT__dividend 
                            >> 0x30U)) & (IData)((vlSelf->div__DOT__divisor 
                                                  >> 0x30U))));
    vlSelf->div__DOT__lzd0__DOT__lzd_32_0__DOT__lzd_16_0__DOT__z 
        = ((8U & ((~ (IData)((0U != (0xfU & (IData)(
                                                    (vlSelf->div__DOT__y_abs_reg 
                                                     >> 0x30U)))))) 
                  << 3U)) | ((4U & ((~ (IData)((0U 
                                                != 
                                                (0xfU 
                                                 & (IData)(
                                                           (vlSelf->div__DOT__y_abs_reg 
                                                            >> 0x34U)))))) 
                                    << 2U)) | ((2U 
                                                & ((~ (IData)(
                                                              (0U 
                                                               != 
                                                               (0xfU 
                                                                & (IData)(
                                                                          (vlSelf->div__DOT__y_abs_reg 
                                                                           >> 0x38U)))))) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0xfU 
                                                                 & (IData)(
                                                                           (vlSelf->div__DOT__y_abs_reg 
                                                                            >> 0x3cU))))))))));
    vlSelf->div__DOT__cla1__DOT__genblk1__BRA__48__KET____DOT__cla_part0__DOT__p 
        = (0xfU & ((IData)((vlSelf->div__DOT__dividend 
                            >> 0x30U)) ^ (IData)((vlSelf->div__DOT__divisor 
                                                  >> 0x30U))));
    vlSelf->div__DOT__cla1__DOT__genblk1__BRA__44__KET____DOT__cla_part0__DOT__g 
        = (0xfU & ((IData)((vlSelf->div__DOT__dividend 
                            >> 0x2cU)) & (IData)((vlSelf->div__DOT__divisor 
                                                  >> 0x2cU))));
    vlSelf->div__DOT__cla1__DOT__genblk1__BRA__44__KET____DOT__cla_part0__DOT__p 
        = (0xfU & ((IData)((vlSelf->div__DOT__dividend 
                            >> 0x2cU)) ^ (IData)((vlSelf->div__DOT__divisor 
                                                  >> 0x2cU))));
    vlSelf->div__DOT__cla1__DOT__genblk1__BRA__40__KET____DOT__cla_part0__DOT__g 
        = (0xfU & ((IData)((vlSelf->div__DOT__dividend 
                            >> 0x28U)) & (IData)((vlSelf->div__DOT__divisor 
                                                  >> 0x28U))));
    vlSelf->div__DOT__cla1__DOT__genblk1__BRA__40__KET____DOT__cla_part0__DOT__p 
        = (0xfU & ((IData)((vlSelf->div__DOT__dividend 
                            >> 0x28U)) ^ (IData)((vlSelf->div__DOT__divisor 
                                                  >> 0x28U))));
    vlSelf->div__DOT__cla1__DOT__genblk1__BRA__36__KET____DOT__cla_part0__DOT__g 
        = (0xfU & ((IData)((vlSelf->div__DOT__dividend 
                            >> 0x24U)) & (IData)((vlSelf->div__DOT__divisor 
                                                  >> 0x24U))));
    vlSelf->div__DOT__cla1__DOT__genblk1__BRA__36__KET____DOT__cla_part0__DOT__p 
        = (0xfU & ((IData)((vlSelf->div__DOT__dividend 
                            >> 0x24U)) ^ (IData)((vlSelf->div__DOT__divisor 
                                                  >> 0x24U))));
    vlSelf->div__DOT__cla1__DOT__genblk1__BRA__32__KET____DOT__cla_part0__DOT__g 
        = (0xfU & ((IData)((vlSelf->div__DOT__dividend 
                            >> 0x20U)) & (IData)((vlSelf->div__DOT__divisor 
                                                  >> 0x20U))));
    vlSelf->div__DOT__cla1__DOT__genblk1__BRA__32__KET____DOT__cla_part0__DOT__p 
        = (0xfU & ((IData)((vlSelf->div__DOT__dividend 
                            >> 0x20U)) ^ (IData)((vlSelf->div__DOT__divisor 
                                                  >> 0x20U))));
    vlSelf->div__DOT__cla1__DOT__genblk1__BRA__28__KET____DOT__cla_part0__DOT__g 
        = (0xfU & ((IData)((vlSelf->div__DOT__dividend 
                            >> 0x1cU)) & (IData)((vlSelf->div__DOT__divisor 
                                                  >> 0x1cU))));
    vlSelf->div__DOT__cla1__DOT__genblk1__BRA__28__KET____DOT__cla_part0__DOT__p 
        = (0xfU & ((IData)((vlSelf->div__DOT__dividend 
                            >> 0x1cU)) ^ (IData)((vlSelf->div__DOT__divisor 
                                                  >> 0x1cU))));
    vlSelf->div__DOT__cla1__DOT__genblk1__BRA__24__KET____DOT__cla_part0__DOT__g 
        = (0xfU & ((IData)((vlSelf->div__DOT__dividend 
                            >> 0x18U)) & (IData)((vlSelf->div__DOT__divisor 
                                                  >> 0x18U))));
    vlSelf->div__DOT__cla1__DOT__genblk1__BRA__24__KET____DOT__cla_part0__DOT__p 
        = (0xfU & ((IData)((vlSelf->div__DOT__dividend 
                            >> 0x18U)) ^ (IData)((vlSelf->div__DOT__divisor 
                                                  >> 0x18U))));
    vlSelf->div__DOT__cla1__DOT__genblk1__BRA__20__KET____DOT__cla_part0__DOT__g 
        = (0xfU & ((IData)((vlSelf->div__DOT__dividend 
                            >> 0x14U)) & (IData)((vlSelf->div__DOT__divisor 
                                                  >> 0x14U))));
    vlSelf->div__DOT__cla1__DOT__genblk1__BRA__20__KET____DOT__cla_part0__DOT__p 
        = (0xfU & ((IData)((vlSelf->div__DOT__dividend 
                            >> 0x14U)) ^ (IData)((vlSelf->div__DOT__divisor 
                                                  >> 0x14U))));
    vlSelf->div__DOT__cla1__DOT__genblk1__BRA__16__KET____DOT__cla_part0__DOT__g 
        = (0xfU & ((IData)((vlSelf->div__DOT__dividend 
                            >> 0x10U)) & (IData)((vlSelf->div__DOT__divisor 
                                                  >> 0x10U))));
    vlSelf->div__DOT__cla1__DOT__genblk1__BRA__16__KET____DOT__cla_part0__DOT__p 
        = (0xfU & ((IData)((vlSelf->div__DOT__dividend 
                            >> 0x10U)) ^ (IData)((vlSelf->div__DOT__divisor 
                                                  >> 0x10U))));
    vlSelf->div__DOT__cla1__DOT__genblk1__BRA__12__KET____DOT__cla_part0__DOT__g 
        = (0xfU & ((IData)((vlSelf->div__DOT__dividend 
                            >> 0xcU)) & (IData)((vlSelf->div__DOT__divisor 
                                                 >> 0xcU))));
    vlSelf->div__DOT__cla1__DOT__genblk1__BRA__12__KET____DOT__cla_part0__DOT__p 
        = (0xfU & ((IData)((vlSelf->div__DOT__dividend 
                            >> 0xcU)) ^ (IData)((vlSelf->div__DOT__divisor 
                                                 >> 0xcU))));
    vlSelf->div__DOT__cla1__DOT__genblk1__BRA__8__KET____DOT__cla_part0__DOT__g 
        = (0xfU & ((IData)((vlSelf->div__DOT__dividend 
                            >> 8U)) & (IData)((vlSelf->div__DOT__divisor 
                                               >> 8U))));
    vlSelf->div__DOT__cla1__DOT__genblk1__BRA__8__KET____DOT__cla_part0__DOT__p 
        = (0xfU & ((IData)((vlSelf->div__DOT__dividend 
                            >> 8U)) ^ (IData)((vlSelf->div__DOT__divisor 
                                               >> 8U))));
    vlSelf->div__DOT__cla1__DOT__genblk1__BRA__4__KET____DOT__cla_part0__DOT__g 
        = (0xfU & ((IData)((vlSelf->div__DOT__dividend 
                            >> 4U)) & (IData)((vlSelf->div__DOT__divisor 
                                               >> 4U))));
    vlSelf->div__DOT__cla1__DOT__genblk1__BRA__4__KET____DOT__cla_part0__DOT__p 
        = (0xfU & ((IData)((vlSelf->div__DOT__dividend 
                            >> 4U)) ^ (IData)((vlSelf->div__DOT__divisor 
                                               >> 4U))));
    vlSelf->div__DOT__cla1__DOT__genblk1__BRA__0__KET____DOT__cla_part0__DOT__g 
        = (0xfU & ((IData)(vlSelf->div__DOT__dividend) 
                   & (IData)(vlSelf->div__DOT__divisor)));
    vlSelf->div__DOT__cla1__DOT__genblk1__BRA__0__KET____DOT__cla_part0__DOT__p 
        = (0xfU & ((IData)(vlSelf->div__DOT__dividend) 
                   ^ (IData)(vlSelf->div__DOT__divisor)));
    vlSelf->div__DOT__q = ((1U & ((~ (IData)(vlSelf->rst_n)) 
                                  | (IData)(vlSelf->div__DOT__current_state)))
                            ? 0U : ((1U & (IData)((vlSelf->div__DOT__dividend 
                                                   >> 0x3eU)))
                                     ? ((1U & (IData)(
                                                      (vlSelf->div__DOT__dividend 
                                                       >> 0x3dU)))
                                         ? 0U : 3U)
                                     : ((1U & (IData)(
                                                      (vlSelf->div__DOT__dividend 
                                                       >> 0x3dU)))
                                         ? 1U : 0U)));
    vlSelf->rem = ((vlSelf->div__DOT__r_abs_reg ^ (- (QData)((IData)(vlSelf->div__DOT____Vcellinp__oppo0____pinNumber2)))) 
                   + (QData)((IData)(vlSelf->div__DOT____Vcellinp__oppo0____pinNumber2)));
    vlSelf->result = ((vlSelf->div__DOT__s_abs_reg 
                       ^ (- (QData)((IData)(vlSelf->div__DOT____Vcellinp__oppo2____pinNumber2)))) 
                      + (QData)((IData)(vlSelf->div__DOT____Vcellinp__oppo2____pinNumber2)));
    vlSelf->div__DOT__lzd1__DOT____Vcellout__lzd_32_0____pinNumber3 
        = ((0xfU == (IData)(vlSelf->div__DOT__lzd1__DOT__lzd_32_0__DOT__lzd_16_0__DOT__z)) 
           & (0xfU == (IData)(vlSelf->div__DOT__lzd1__DOT__lzd_32_0__DOT__lzd_16_1__DOT__z)));
    vlSelf->div__DOT__lzd0__DOT____Vcellout__lzd_32_0____pinNumber3 
        = ((0xfU == (IData)(vlSelf->div__DOT__lzd0__DOT__lzd_32_0__DOT__lzd_16_0__DOT__z)) 
           & (0xfU == (IData)(vlSelf->div__DOT__lzd0__DOT__lzd_32_0__DOT__lzd_16_1__DOT__z)));
    vlSelf->div__DOT__cla1__DOT__genblk1__BRA__0__KET____DOT__cla_part0__DOT____Vcellout__carry0__c 
        = ((0xeU & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__0__KET____DOT__cla_part0__DOT____Vcellout__carry0__c)) 
           | (1U & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__0__KET____DOT__cla_part0__DOT__g)));
    vlSelf->div__DOT__cla1__DOT__genblk1__BRA__0__KET____DOT__cla_part0__DOT____Vcellout__carry0__c 
        = ((0xdU & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__0__KET____DOT__cla_part0__DOT____Vcellout__carry0__c)) 
           | (2U & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__0__KET____DOT__cla_part0__DOT__g) 
                    | (((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__0__KET____DOT__cla_part0__DOT__g) 
                        << 1U) & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__0__KET____DOT__cla_part0__DOT__p)))));
    vlSelf->div__DOT__cla1__DOT__genblk1__BRA__0__KET____DOT__cla_part0__DOT____Vcellout__carry0__c 
        = ((0xbU & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__0__KET____DOT__cla_part0__DOT____Vcellout__carry0__c)) 
           | (4U & ((0xfffffffcU & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__0__KET____DOT__cla_part0__DOT__g) 
                                    | (((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__0__KET____DOT__cla_part0__DOT__g) 
                                        << 1U) & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__0__KET____DOT__cla_part0__DOT__p)))) 
                    | (((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__0__KET____DOT__cla_part0__DOT__g) 
                        & (6U == (6U & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__0__KET____DOT__cla_part0__DOT__p)))) 
                       << 2U))));
    vlSelf->div__DOT__cla1__DOT__genblk1__BRA__0__KET____DOT__cla_part0__DOT____Vcellout__carry0__c 
        = ((7U & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__0__KET____DOT__cla_part0__DOT____Vcellout__carry0__c)) 
           | (8U & (((0xfffffff8U & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__0__KET____DOT__cla_part0__DOT__g) 
                                     | (((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__0__KET____DOT__cla_part0__DOT__g) 
                                         << 1U) & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__0__KET____DOT__cla_part0__DOT__p)))) 
                     | ((IData)((((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__0__KET____DOT__cla_part0__DOT__g) 
                                  >> 1U) & (0xcU == 
                                            (0xcU & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__0__KET____DOT__cla_part0__DOT__p))))) 
                        << 3U)) | (((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__0__KET____DOT__cla_part0__DOT__g) 
                                    & (0xeU == (0xeU 
                                                & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__0__KET____DOT__cla_part0__DOT__p)))) 
                                   << 3U))));
    vlSelf->div__DOT__add_B = (((- (QData)((IData)(
                                                   (3U 
                                                    == (IData)(vlSelf->div__DOT__q))))) 
                                & vlSelf->div__DOT__divisor) 
                               | ((- (QData)((IData)(
                                                     (1U 
                                                      == (IData)(vlSelf->div__DOT__q))))) 
                                  & vlSelf->div__DOT__divisor_n));
    vlSelf->div__DOT__cla1__DOT__genblk1__BRA__4__KET____DOT__cla_part0__DOT____Vcellout__carry0__c 
        = ((0xeU & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__4__KET____DOT__cla_part0__DOT____Vcellout__carry0__c)) 
           | (1U & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__4__KET____DOT__cla_part0__DOT__g) 
                    | (((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__0__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                        >> 3U) & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__4__KET____DOT__cla_part0__DOT__p)))));
    vlSelf->div__DOT__cla1__DOT__genblk1__BRA__4__KET____DOT__cla_part0__DOT____Vcellout__carry0__c 
        = ((0xdU & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__4__KET____DOT__cla_part0__DOT____Vcellout__carry0__c)) 
           | (2U & ((0xfffffffeU & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__4__KET____DOT__cla_part0__DOT__g) 
                                    | (((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__4__KET____DOT__cla_part0__DOT__g) 
                                        << 1U) & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__4__KET____DOT__cla_part0__DOT__p)))) 
                    | (0x3ffffffeU & ((((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__0__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                        >> 2U) & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__4__KET____DOT__cla_part0__DOT__p)) 
                                      & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__4__KET____DOT__cla_part0__DOT__p) 
                                         << 1U))))));
    vlSelf->div__DOT__cla1__DOT__genblk1__BRA__4__KET____DOT__cla_part0__DOT____Vcellout__carry0__c 
        = ((0xbU & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__4__KET____DOT__cla_part0__DOT____Vcellout__carry0__c)) 
           | (4U & (((0xfffffffcU & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__4__KET____DOT__cla_part0__DOT__g) 
                                     | (((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__4__KET____DOT__cla_part0__DOT__g) 
                                         << 1U) & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__4__KET____DOT__cla_part0__DOT__p)))) 
                     | (((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__4__KET____DOT__cla_part0__DOT__g) 
                         & (6U == (6U & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__4__KET____DOT__cla_part0__DOT__p)))) 
                        << 2U)) | ((IData)((((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__0__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                             >> 3U) 
                                            & (7U == 
                                               (7U 
                                                & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__4__KET____DOT__cla_part0__DOT__p))))) 
                                   << 2U))));
    vlSelf->div__DOT__cla1__DOT__genblk1__BRA__4__KET____DOT__cla_part0__DOT____Vcellout__carry0__c 
        = ((7U & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__4__KET____DOT__cla_part0__DOT____Vcellout__carry0__c)) 
           | (8U & ((((0xfffffff8U & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__4__KET____DOT__cla_part0__DOT__g) 
                                      | (((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__4__KET____DOT__cla_part0__DOT__g) 
                                          << 1U) & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__4__KET____DOT__cla_part0__DOT__p)))) 
                      | ((IData)((((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__4__KET____DOT__cla_part0__DOT__g) 
                                   >> 1U) & (0xcU == 
                                             (0xcU 
                                              & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__4__KET____DOT__cla_part0__DOT__p))))) 
                         << 3U)) | (((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__4__KET____DOT__cla_part0__DOT__g) 
                                     & (0xeU == (0xeU 
                                                 & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__4__KET____DOT__cla_part0__DOT__p)))) 
                                    << 3U)) | ((IData)(
                                                       (((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__0__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                         >> 3U) 
                                                        & (0xfU 
                                                           == (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__4__KET____DOT__cla_part0__DOT__p)))) 
                                               << 3U))));
    vlSelf->div__DOT__cla0__DOT__genblk1__BRA__60__KET____DOT__cla_part0__DOT__p 
        = (0xfU & ((IData)((0xfULL & (vlSelf->div__DOT__dividend 
                                      >> 0x3bU))) ^ (IData)(
                                                            (vlSelf->div__DOT__add_B 
                                                             >> 0x3cU))));
    vlSelf->div__DOT__cla0__DOT__genblk1__BRA__60__KET____DOT__cla_part0__DOT__g 
        = (0xfU & ((IData)((0xfULL & (vlSelf->div__DOT__dividend 
                                      >> 0x3bU))) & (IData)(
                                                            (vlSelf->div__DOT__add_B 
                                                             >> 0x3cU))));
    vlSelf->div__DOT__cla0__DOT__genblk1__BRA__56__KET____DOT__cla_part0__DOT__p 
        = (0xfU & ((IData)((0xffULL & (vlSelf->div__DOT__dividend 
                                       >> 0x37U))) 
                   ^ (IData)((vlSelf->div__DOT__add_B 
                              >> 0x38U))));
    vlSelf->div__DOT__cla0__DOT__genblk1__BRA__56__KET____DOT__cla_part0__DOT__g 
        = (0xfU & ((IData)((0xffULL & (vlSelf->div__DOT__dividend 
                                       >> 0x37U))) 
                   & (IData)((vlSelf->div__DOT__add_B 
                              >> 0x38U))));
    vlSelf->div__DOT__cla0__DOT__genblk1__BRA__52__KET____DOT__cla_part0__DOT__p 
        = (0xfU & ((IData)((0xfffULL & (vlSelf->div__DOT__dividend 
                                        >> 0x33U))) 
                   ^ (IData)((vlSelf->div__DOT__add_B 
                              >> 0x34U))));
    vlSelf->div__DOT__cla0__DOT__genblk1__BRA__52__KET____DOT__cla_part0__DOT__g 
        = (0xfU & ((IData)((0xfffULL & (vlSelf->div__DOT__dividend 
                                        >> 0x33U))) 
                   & (IData)((vlSelf->div__DOT__add_B 
                              >> 0x34U))));
    vlSelf->div__DOT__cla0__DOT__genblk1__BRA__48__KET____DOT__cla_part0__DOT__p 
        = (0xfU & ((IData)((0xffffULL & (vlSelf->div__DOT__dividend 
                                         >> 0x2fU))) 
                   ^ (IData)((vlSelf->div__DOT__add_B 
                              >> 0x30U))));
    vlSelf->div__DOT__cla0__DOT__genblk1__BRA__48__KET____DOT__cla_part0__DOT__g 
        = (0xfU & ((IData)((0xffffULL & (vlSelf->div__DOT__dividend 
                                         >> 0x2fU))) 
                   & (IData)((vlSelf->div__DOT__add_B 
                              >> 0x30U))));
    vlSelf->div__DOT__cla0__DOT__genblk1__BRA__44__KET____DOT__cla_part0__DOT__p 
        = (0xfU & ((IData)((0xfffffULL & (vlSelf->div__DOT__dividend 
                                          >> 0x2bU))) 
                   ^ (IData)((vlSelf->div__DOT__add_B 
                              >> 0x2cU))));
    vlSelf->div__DOT__cla0__DOT__genblk1__BRA__44__KET____DOT__cla_part0__DOT__g 
        = (0xfU & ((IData)((0xfffffULL & (vlSelf->div__DOT__dividend 
                                          >> 0x2bU))) 
                   & (IData)((vlSelf->div__DOT__add_B 
                              >> 0x2cU))));
    vlSelf->div__DOT__cla0__DOT__genblk1__BRA__40__KET____DOT__cla_part0__DOT__p 
        = (0xfU & ((IData)((0xffffffULL & (vlSelf->div__DOT__dividend 
                                           >> 0x27U))) 
                   ^ (IData)((vlSelf->div__DOT__add_B 
                              >> 0x28U))));
    vlSelf->div__DOT__cla0__DOT__genblk1__BRA__40__KET____DOT__cla_part0__DOT__g 
        = (0xfU & ((IData)((0xffffffULL & (vlSelf->div__DOT__dividend 
                                           >> 0x27U))) 
                   & (IData)((vlSelf->div__DOT__add_B 
                              >> 0x28U))));
    vlSelf->div__DOT__cla0__DOT__genblk1__BRA__36__KET____DOT__cla_part0__DOT__p 
        = (0xfU & ((IData)((0xfffffffULL & (vlSelf->div__DOT__dividend 
                                            >> 0x23U))) 
                   ^ (IData)((vlSelf->div__DOT__add_B 
                              >> 0x24U))));
    vlSelf->div__DOT__cla0__DOT__genblk1__BRA__36__KET____DOT__cla_part0__DOT__g 
        = (0xfU & ((IData)((0xfffffffULL & (vlSelf->div__DOT__dividend 
                                            >> 0x23U))) 
                   & (IData)((vlSelf->div__DOT__add_B 
                              >> 0x24U))));
    vlSelf->div__DOT__cla0__DOT__genblk1__BRA__32__KET____DOT__cla_part0__DOT__p 
        = (0xfU & ((IData)((0xffffffffULL & (vlSelf->div__DOT__dividend 
                                             >> 0x1fU))) 
                   ^ (IData)((vlSelf->div__DOT__add_B 
                              >> 0x20U))));
    vlSelf->div__DOT__cla0__DOT__genblk1__BRA__32__KET____DOT__cla_part0__DOT__g 
        = (0xfU & ((IData)((0xffffffffULL & (vlSelf->div__DOT__dividend 
                                             >> 0x1fU))) 
                   & (IData)((vlSelf->div__DOT__add_B 
                              >> 0x20U))));
    vlSelf->div__DOT__cla0__DOT__genblk1__BRA__28__KET____DOT__cla_part0__DOT__p 
        = (0xfU & ((IData)((0xfffffffffULL & (vlSelf->div__DOT__dividend 
                                              >> 0x1bU))) 
                   ^ (IData)((vlSelf->div__DOT__add_B 
                              >> 0x1cU))));
    vlSelf->div__DOT__cla0__DOT__genblk1__BRA__28__KET____DOT__cla_part0__DOT__g 
        = (0xfU & ((IData)((0xfffffffffULL & (vlSelf->div__DOT__dividend 
                                              >> 0x1bU))) 
                   & (IData)((vlSelf->div__DOT__add_B 
                              >> 0x1cU))));
    vlSelf->div__DOT__cla0__DOT__genblk1__BRA__24__KET____DOT__cla_part0__DOT__p 
        = (0xfU & ((IData)((0xffffffffffULL & (vlSelf->div__DOT__dividend 
                                               >> 0x17U))) 
                   ^ (IData)((vlSelf->div__DOT__add_B 
                              >> 0x18U))));
    vlSelf->div__DOT__cla0__DOT__genblk1__BRA__24__KET____DOT__cla_part0__DOT__g 
        = (0xfU & ((IData)((0xffffffffffULL & (vlSelf->div__DOT__dividend 
                                               >> 0x17U))) 
                   & (IData)((vlSelf->div__DOT__add_B 
                              >> 0x18U))));
    vlSelf->div__DOT__cla0__DOT__genblk1__BRA__20__KET____DOT__cla_part0__DOT__p 
        = (0xfU & ((IData)((0xfffffffffffULL & (vlSelf->div__DOT__dividend 
                                                >> 0x13U))) 
                   ^ (IData)((vlSelf->div__DOT__add_B 
                              >> 0x14U))));
    vlSelf->div__DOT__cla0__DOT__genblk1__BRA__20__KET____DOT__cla_part0__DOT__g 
        = (0xfU & ((IData)((0xfffffffffffULL & (vlSelf->div__DOT__dividend 
                                                >> 0x13U))) 
                   & (IData)((vlSelf->div__DOT__add_B 
                              >> 0x14U))));
    vlSelf->div__DOT__cla0__DOT__genblk1__BRA__16__KET____DOT__cla_part0__DOT__p 
        = (0xfU & ((IData)((0xffffffffffffULL & (vlSelf->div__DOT__dividend 
                                                 >> 0xfU))) 
                   ^ (IData)((vlSelf->div__DOT__add_B 
                              >> 0x10U))));
    vlSelf->div__DOT__cla0__DOT__genblk1__BRA__16__KET____DOT__cla_part0__DOT__g 
        = (0xfU & ((IData)((0xffffffffffffULL & (vlSelf->div__DOT__dividend 
                                                 >> 0xfU))) 
                   & (IData)((vlSelf->div__DOT__add_B 
                              >> 0x10U))));
    vlSelf->div__DOT__cla0__DOT__genblk1__BRA__12__KET____DOT__cla_part0__DOT__p 
        = (0xfU & ((IData)((0xfffffffffffffULL & (vlSelf->div__DOT__dividend 
                                                  >> 0xbU))) 
                   ^ (IData)((vlSelf->div__DOT__add_B 
                              >> 0xcU))));
    vlSelf->div__DOT__cla0__DOT__genblk1__BRA__12__KET____DOT__cla_part0__DOT__g 
        = (0xfU & ((IData)((0xfffffffffffffULL & (vlSelf->div__DOT__dividend 
                                                  >> 0xbU))) 
                   & (IData)((vlSelf->div__DOT__add_B 
                              >> 0xcU))));
    vlSelf->div__DOT__cla0__DOT__genblk1__BRA__8__KET____DOT__cla_part0__DOT__p 
        = (0xfU & ((IData)((0xffffffffffffffULL & (vlSelf->div__DOT__dividend 
                                                   >> 7U))) 
                   ^ (IData)((vlSelf->div__DOT__add_B 
                              >> 8U))));
    vlSelf->div__DOT__cla0__DOT__genblk1__BRA__8__KET____DOT__cla_part0__DOT__g 
        = (0xfU & ((IData)((0xffffffffffffffULL & (vlSelf->div__DOT__dividend 
                                                   >> 7U))) 
                   & (IData)((vlSelf->div__DOT__add_B 
                              >> 8U))));
    vlSelf->div__DOT__cla0__DOT__genblk1__BRA__4__KET____DOT__cla_part0__DOT__p 
        = (0xfU & ((IData)((0xfffffffffffffffULL & 
                            (vlSelf->div__DOT__dividend 
                             >> 3U))) ^ (IData)((vlSelf->div__DOT__add_B 
                                                 >> 4U))));
    vlSelf->div__DOT__cla0__DOT__genblk1__BRA__4__KET____DOT__cla_part0__DOT__g 
        = (0xfU & ((IData)((0xfffffffffffffffULL & 
                            (vlSelf->div__DOT__dividend 
                             >> 3U))) & (IData)((vlSelf->div__DOT__add_B 
                                                 >> 4U))));
    vlSelf->div__DOT__cla0__DOT__genblk1__BRA__0__KET____DOT__cla_part0__DOT__p 
        = ((8U & (((IData)((0x1fffffffffffffffULL & 
                            (vlSelf->div__DOT__dividend 
                             >> 2U))) ^ (IData)((vlSelf->div__DOT__add_B 
                                                 >> 3U))) 
                  << 3U)) | ((4U & (((IData)((0x3fffffffffffffffULL 
                                              & (vlSelf->div__DOT__dividend 
                                                 >> 1U))) 
                                     ^ (IData)((vlSelf->div__DOT__add_B 
                                                >> 2U))) 
                                    << 2U)) | ((2U 
                                                & (((IData)(
                                                            (0x7fffffffffffffffULL 
                                                             & vlSelf->div__DOT__dividend)) 
                                                    ^ (IData)(
                                                              (vlSelf->div__DOT__add_B 
                                                               >> 1U))) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (IData)(vlSelf->div__DOT__add_B)))));
    vlSelf->div__DOT__cla0__DOT__genblk1__BRA__0__KET____DOT__cla_part0__DOT__g 
        = ((8U & (((IData)((0x1fffffffffffffffULL & 
                            (vlSelf->div__DOT__dividend 
                             >> 2U))) & (IData)((vlSelf->div__DOT__add_B 
                                                 >> 3U))) 
                  << 3U)) | ((4U & (((IData)((0x3fffffffffffffffULL 
                                              & (vlSelf->div__DOT__dividend 
                                                 >> 1U))) 
                                     & (IData)((vlSelf->div__DOT__add_B 
                                                >> 2U))) 
                                    << 2U)) | (2U & 
                                               (((IData)(
                                                         (0x7fffffffffffffffULL 
                                                          & vlSelf->div__DOT__dividend)) 
                                                 & (IData)(
                                                           (vlSelf->div__DOT__add_B 
                                                            >> 1U))) 
                                                << 1U))));
    vlSelf->div__DOT__cla1__DOT__genblk1__BRA__8__KET____DOT__cla_part0__DOT____Vcellout__carry0__c 
        = ((0xeU & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__8__KET____DOT__cla_part0__DOT____Vcellout__carry0__c)) 
           | (1U & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__8__KET____DOT__cla_part0__DOT__g) 
                    | (((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__4__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                        >> 3U) & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__8__KET____DOT__cla_part0__DOT__p)))));
    vlSelf->div__DOT__cla1__DOT__genblk1__BRA__8__KET____DOT__cla_part0__DOT____Vcellout__carry0__c 
        = ((0xdU & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__8__KET____DOT__cla_part0__DOT____Vcellout__carry0__c)) 
           | (2U & ((0xfffffffeU & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__8__KET____DOT__cla_part0__DOT__g) 
                                    | (((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__8__KET____DOT__cla_part0__DOT__g) 
                                        << 1U) & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__8__KET____DOT__cla_part0__DOT__p)))) 
                    | (0x3ffffffeU & ((((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__4__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                        >> 2U) & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__8__KET____DOT__cla_part0__DOT__p)) 
                                      & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__8__KET____DOT__cla_part0__DOT__p) 
                                         << 1U))))));
    vlSelf->div__DOT__cla1__DOT__genblk1__BRA__8__KET____DOT__cla_part0__DOT____Vcellout__carry0__c 
        = ((0xbU & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__8__KET____DOT__cla_part0__DOT____Vcellout__carry0__c)) 
           | (4U & (((0xfffffffcU & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__8__KET____DOT__cla_part0__DOT__g) 
                                     | (((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__8__KET____DOT__cla_part0__DOT__g) 
                                         << 1U) & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__8__KET____DOT__cla_part0__DOT__p)))) 
                     | (((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__8__KET____DOT__cla_part0__DOT__g) 
                         & (6U == (6U & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__8__KET____DOT__cla_part0__DOT__p)))) 
                        << 2U)) | ((IData)((((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__4__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                             >> 3U) 
                                            & (7U == 
                                               (7U 
                                                & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__8__KET____DOT__cla_part0__DOT__p))))) 
                                   << 2U))));
    vlSelf->div__DOT__cla1__DOT__genblk1__BRA__8__KET____DOT__cla_part0__DOT____Vcellout__carry0__c 
        = ((7U & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__8__KET____DOT__cla_part0__DOT____Vcellout__carry0__c)) 
           | (8U & ((((0xfffffff8U & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__8__KET____DOT__cla_part0__DOT__g) 
                                      | (((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__8__KET____DOT__cla_part0__DOT__g) 
                                          << 1U) & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__8__KET____DOT__cla_part0__DOT__p)))) 
                      | ((IData)((((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__8__KET____DOT__cla_part0__DOT__g) 
                                   >> 1U) & (0xcU == 
                                             (0xcU 
                                              & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__8__KET____DOT__cla_part0__DOT__p))))) 
                         << 3U)) | (((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__8__KET____DOT__cla_part0__DOT__g) 
                                     & (0xeU == (0xeU 
                                                 & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__8__KET____DOT__cla_part0__DOT__p)))) 
                                    << 3U)) | ((IData)(
                                                       (((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__4__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                         >> 3U) 
                                                        & (0xfU 
                                                           == (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__8__KET____DOT__cla_part0__DOT__p)))) 
                                               << 3U))));
    vlSelf->div__DOT__cla0__DOT__genblk1__BRA__0__KET____DOT__cla_part0__DOT____Vcellout__carry0__c 
        = ((0xeU & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__0__KET____DOT__cla_part0__DOT____Vcellout__carry0__c)) 
           | (1U & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__0__KET____DOT__cla_part0__DOT__g)));
    vlSelf->div__DOT__cla0__DOT__genblk1__BRA__0__KET____DOT__cla_part0__DOT____Vcellout__carry0__c 
        = ((0xdU & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__0__KET____DOT__cla_part0__DOT____Vcellout__carry0__c)) 
           | (2U & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__0__KET____DOT__cla_part0__DOT__g) 
                    | (((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__0__KET____DOT__cla_part0__DOT__g) 
                        << 1U) & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__0__KET____DOT__cla_part0__DOT__p)))));
    vlSelf->div__DOT__cla0__DOT__genblk1__BRA__0__KET____DOT__cla_part0__DOT____Vcellout__carry0__c 
        = ((0xbU & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__0__KET____DOT__cla_part0__DOT____Vcellout__carry0__c)) 
           | (4U & ((0xfffffffcU & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__0__KET____DOT__cla_part0__DOT__g) 
                                    | (((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__0__KET____DOT__cla_part0__DOT__g) 
                                        << 1U) & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__0__KET____DOT__cla_part0__DOT__p)))) 
                    | (((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__0__KET____DOT__cla_part0__DOT__g) 
                        & (6U == (6U & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__0__KET____DOT__cla_part0__DOT__p)))) 
                       << 2U))));
    vlSelf->div__DOT__cla0__DOT__genblk1__BRA__0__KET____DOT__cla_part0__DOT____Vcellout__carry0__c 
        = ((7U & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__0__KET____DOT__cla_part0__DOT____Vcellout__carry0__c)) 
           | (8U & (((0xfffffff8U & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__0__KET____DOT__cla_part0__DOT__g) 
                                     | (((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__0__KET____DOT__cla_part0__DOT__g) 
                                         << 1U) & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__0__KET____DOT__cla_part0__DOT__p)))) 
                     | ((IData)((((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__0__KET____DOT__cla_part0__DOT__g) 
                                  >> 1U) & (0xcU == 
                                            (0xcU & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__0__KET____DOT__cla_part0__DOT__p))))) 
                        << 3U)) | (((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__0__KET____DOT__cla_part0__DOT__g) 
                                    & (0xeU == (0xeU 
                                                & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__0__KET____DOT__cla_part0__DOT__p)))) 
                                   << 3U))));
    vlSelf->div__DOT__cla1__DOT__genblk1__BRA__12__KET____DOT__cla_part0__DOT____Vcellout__carry0__c 
        = ((0xeU & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__12__KET____DOT__cla_part0__DOT____Vcellout__carry0__c)) 
           | (1U & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__12__KET____DOT__cla_part0__DOT__g) 
                    | (((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__8__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                        >> 3U) & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__12__KET____DOT__cla_part0__DOT__p)))));
    vlSelf->div__DOT__cla1__DOT__genblk1__BRA__12__KET____DOT__cla_part0__DOT____Vcellout__carry0__c 
        = ((0xdU & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__12__KET____DOT__cla_part0__DOT____Vcellout__carry0__c)) 
           | (2U & ((0xfffffffeU & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__12__KET____DOT__cla_part0__DOT__g) 
                                    | (((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__12__KET____DOT__cla_part0__DOT__g) 
                                        << 1U) & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__12__KET____DOT__cla_part0__DOT__p)))) 
                    | (0x3ffffffeU & ((((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__8__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                        >> 2U) & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__12__KET____DOT__cla_part0__DOT__p)) 
                                      & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__12__KET____DOT__cla_part0__DOT__p) 
                                         << 1U))))));
    vlSelf->div__DOT__cla1__DOT__genblk1__BRA__12__KET____DOT__cla_part0__DOT____Vcellout__carry0__c 
        = ((0xbU & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__12__KET____DOT__cla_part0__DOT____Vcellout__carry0__c)) 
           | (4U & (((0xfffffffcU & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__12__KET____DOT__cla_part0__DOT__g) 
                                     | (((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__12__KET____DOT__cla_part0__DOT__g) 
                                         << 1U) & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__12__KET____DOT__cla_part0__DOT__p)))) 
                     | (((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__12__KET____DOT__cla_part0__DOT__g) 
                         & (6U == (6U & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__12__KET____DOT__cla_part0__DOT__p)))) 
                        << 2U)) | ((IData)((((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__8__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                             >> 3U) 
                                            & (7U == 
                                               (7U 
                                                & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__12__KET____DOT__cla_part0__DOT__p))))) 
                                   << 2U))));
    vlSelf->div__DOT__cla1__DOT__genblk1__BRA__12__KET____DOT__cla_part0__DOT____Vcellout__carry0__c 
        = ((7U & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__12__KET____DOT__cla_part0__DOT____Vcellout__carry0__c)) 
           | (8U & ((((0xfffffff8U & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__12__KET____DOT__cla_part0__DOT__g) 
                                      | (((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__12__KET____DOT__cla_part0__DOT__g) 
                                          << 1U) & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__12__KET____DOT__cla_part0__DOT__p)))) 
                      | ((IData)((((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__12__KET____DOT__cla_part0__DOT__g) 
                                   >> 1U) & (0xcU == 
                                             (0xcU 
                                              & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__12__KET____DOT__cla_part0__DOT__p))))) 
                         << 3U)) | (((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__12__KET____DOT__cla_part0__DOT__g) 
                                     & (0xeU == (0xeU 
                                                 & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__12__KET____DOT__cla_part0__DOT__p)))) 
                                    << 3U)) | ((IData)(
                                                       (((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__8__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                         >> 3U) 
                                                        & (0xfU 
                                                           == (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__12__KET____DOT__cla_part0__DOT__p)))) 
                                               << 3U))));
    vlSelf->div__DOT__cla0__DOT__genblk1__BRA__4__KET____DOT__cla_part0__DOT____Vcellout__carry0__c 
        = ((0xeU & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__4__KET____DOT__cla_part0__DOT____Vcellout__carry0__c)) 
           | (1U & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__4__KET____DOT__cla_part0__DOT__g) 
                    | (((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__0__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                        >> 3U) & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__4__KET____DOT__cla_part0__DOT__p)))));
    vlSelf->div__DOT__cla0__DOT__genblk1__BRA__4__KET____DOT__cla_part0__DOT____Vcellout__carry0__c 
        = ((0xdU & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__4__KET____DOT__cla_part0__DOT____Vcellout__carry0__c)) 
           | (2U & ((0xfffffffeU & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__4__KET____DOT__cla_part0__DOT__g) 
                                    | (((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__4__KET____DOT__cla_part0__DOT__g) 
                                        << 1U) & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__4__KET____DOT__cla_part0__DOT__p)))) 
                    | (0x3ffffffeU & ((((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__0__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                        >> 2U) & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__4__KET____DOT__cla_part0__DOT__p)) 
                                      & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__4__KET____DOT__cla_part0__DOT__p) 
                                         << 1U))))));
    vlSelf->div__DOT__cla0__DOT__genblk1__BRA__4__KET____DOT__cla_part0__DOT____Vcellout__carry0__c 
        = ((0xbU & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__4__KET____DOT__cla_part0__DOT____Vcellout__carry0__c)) 
           | (4U & (((0xfffffffcU & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__4__KET____DOT__cla_part0__DOT__g) 
                                     | (((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__4__KET____DOT__cla_part0__DOT__g) 
                                         << 1U) & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__4__KET____DOT__cla_part0__DOT__p)))) 
                     | (((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__4__KET____DOT__cla_part0__DOT__g) 
                         & (6U == (6U & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__4__KET____DOT__cla_part0__DOT__p)))) 
                        << 2U)) | ((IData)((((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__0__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                             >> 3U) 
                                            & (7U == 
                                               (7U 
                                                & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__4__KET____DOT__cla_part0__DOT__p))))) 
                                   << 2U))));
    vlSelf->div__DOT__cla0__DOT__genblk1__BRA__4__KET____DOT__cla_part0__DOT____Vcellout__carry0__c 
        = ((7U & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__4__KET____DOT__cla_part0__DOT____Vcellout__carry0__c)) 
           | (8U & ((((0xfffffff8U & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__4__KET____DOT__cla_part0__DOT__g) 
                                      | (((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__4__KET____DOT__cla_part0__DOT__g) 
                                          << 1U) & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__4__KET____DOT__cla_part0__DOT__p)))) 
                      | ((IData)((((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__4__KET____DOT__cla_part0__DOT__g) 
                                   >> 1U) & (0xcU == 
                                             (0xcU 
                                              & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__4__KET____DOT__cla_part0__DOT__p))))) 
                         << 3U)) | (((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__4__KET____DOT__cla_part0__DOT__g) 
                                     & (0xeU == (0xeU 
                                                 & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__4__KET____DOT__cla_part0__DOT__p)))) 
                                    << 3U)) | ((IData)(
                                                       (((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__0__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                         >> 3U) 
                                                        & (0xfU 
                                                           == (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__4__KET____DOT__cla_part0__DOT__p)))) 
                                               << 3U))));
    vlSelf->div__DOT__cla1__DOT__genblk1__BRA__16__KET____DOT__cla_part0__DOT____Vcellout__carry0__c 
        = ((0xeU & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__16__KET____DOT__cla_part0__DOT____Vcellout__carry0__c)) 
           | (1U & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__16__KET____DOT__cla_part0__DOT__g) 
                    | (((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__12__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                        >> 3U) & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__16__KET____DOT__cla_part0__DOT__p)))));
    vlSelf->div__DOT__cla1__DOT__genblk1__BRA__16__KET____DOT__cla_part0__DOT____Vcellout__carry0__c 
        = ((0xdU & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__16__KET____DOT__cla_part0__DOT____Vcellout__carry0__c)) 
           | (2U & ((0xfffffffeU & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__16__KET____DOT__cla_part0__DOT__g) 
                                    | (((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__16__KET____DOT__cla_part0__DOT__g) 
                                        << 1U) & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__16__KET____DOT__cla_part0__DOT__p)))) 
                    | (0x3ffffffeU & ((((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__12__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                        >> 2U) & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__16__KET____DOT__cla_part0__DOT__p)) 
                                      & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__16__KET____DOT__cla_part0__DOT__p) 
                                         << 1U))))));
    vlSelf->div__DOT__cla1__DOT__genblk1__BRA__16__KET____DOT__cla_part0__DOT____Vcellout__carry0__c 
        = ((0xbU & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__16__KET____DOT__cla_part0__DOT____Vcellout__carry0__c)) 
           | (4U & (((0xfffffffcU & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__16__KET____DOT__cla_part0__DOT__g) 
                                     | (((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__16__KET____DOT__cla_part0__DOT__g) 
                                         << 1U) & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__16__KET____DOT__cla_part0__DOT__p)))) 
                     | (((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__16__KET____DOT__cla_part0__DOT__g) 
                         & (6U == (6U & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__16__KET____DOT__cla_part0__DOT__p)))) 
                        << 2U)) | ((IData)((((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__12__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                             >> 3U) 
                                            & (7U == 
                                               (7U 
                                                & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__16__KET____DOT__cla_part0__DOT__p))))) 
                                   << 2U))));
    vlSelf->div__DOT__cla1__DOT__genblk1__BRA__16__KET____DOT__cla_part0__DOT____Vcellout__carry0__c 
        = ((7U & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__16__KET____DOT__cla_part0__DOT____Vcellout__carry0__c)) 
           | (8U & ((((0xfffffff8U & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__16__KET____DOT__cla_part0__DOT__g) 
                                      | (((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__16__KET____DOT__cla_part0__DOT__g) 
                                          << 1U) & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__16__KET____DOT__cla_part0__DOT__p)))) 
                      | ((IData)((((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__16__KET____DOT__cla_part0__DOT__g) 
                                   >> 1U) & (0xcU == 
                                             (0xcU 
                                              & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__16__KET____DOT__cla_part0__DOT__p))))) 
                         << 3U)) | (((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__16__KET____DOT__cla_part0__DOT__g) 
                                     & (0xeU == (0xeU 
                                                 & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__16__KET____DOT__cla_part0__DOT__p)))) 
                                    << 3U)) | ((IData)(
                                                       (((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__12__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                         >> 3U) 
                                                        & (0xfU 
                                                           == (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__16__KET____DOT__cla_part0__DOT__p)))) 
                                               << 3U))));
    vlSelf->div__DOT__cla0__DOT__genblk1__BRA__8__KET____DOT__cla_part0__DOT____Vcellout__carry0__c 
        = ((0xeU & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__8__KET____DOT__cla_part0__DOT____Vcellout__carry0__c)) 
           | (1U & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__8__KET____DOT__cla_part0__DOT__g) 
                    | (((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__4__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                        >> 3U) & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__8__KET____DOT__cla_part0__DOT__p)))));
    vlSelf->div__DOT__cla0__DOT__genblk1__BRA__8__KET____DOT__cla_part0__DOT____Vcellout__carry0__c 
        = ((0xdU & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__8__KET____DOT__cla_part0__DOT____Vcellout__carry0__c)) 
           | (2U & ((0xfffffffeU & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__8__KET____DOT__cla_part0__DOT__g) 
                                    | (((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__8__KET____DOT__cla_part0__DOT__g) 
                                        << 1U) & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__8__KET____DOT__cla_part0__DOT__p)))) 
                    | (0x3ffffffeU & ((((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__4__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                        >> 2U) & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__8__KET____DOT__cla_part0__DOT__p)) 
                                      & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__8__KET____DOT__cla_part0__DOT__p) 
                                         << 1U))))));
    vlSelf->div__DOT__cla0__DOT__genblk1__BRA__8__KET____DOT__cla_part0__DOT____Vcellout__carry0__c 
        = ((0xbU & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__8__KET____DOT__cla_part0__DOT____Vcellout__carry0__c)) 
           | (4U & (((0xfffffffcU & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__8__KET____DOT__cla_part0__DOT__g) 
                                     | (((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__8__KET____DOT__cla_part0__DOT__g) 
                                         << 1U) & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__8__KET____DOT__cla_part0__DOT__p)))) 
                     | (((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__8__KET____DOT__cla_part0__DOT__g) 
                         & (6U == (6U & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__8__KET____DOT__cla_part0__DOT__p)))) 
                        << 2U)) | ((IData)((((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__4__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                             >> 3U) 
                                            & (7U == 
                                               (7U 
                                                & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__8__KET____DOT__cla_part0__DOT__p))))) 
                                   << 2U))));
    vlSelf->div__DOT__cla0__DOT__genblk1__BRA__8__KET____DOT__cla_part0__DOT____Vcellout__carry0__c 
        = ((7U & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__8__KET____DOT__cla_part0__DOT____Vcellout__carry0__c)) 
           | (8U & ((((0xfffffff8U & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__8__KET____DOT__cla_part0__DOT__g) 
                                      | (((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__8__KET____DOT__cla_part0__DOT__g) 
                                          << 1U) & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__8__KET____DOT__cla_part0__DOT__p)))) 
                      | ((IData)((((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__8__KET____DOT__cla_part0__DOT__g) 
                                   >> 1U) & (0xcU == 
                                             (0xcU 
                                              & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__8__KET____DOT__cla_part0__DOT__p))))) 
                         << 3U)) | (((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__8__KET____DOT__cla_part0__DOT__g) 
                                     & (0xeU == (0xeU 
                                                 & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__8__KET____DOT__cla_part0__DOT__p)))) 
                                    << 3U)) | ((IData)(
                                                       (((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__4__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                         >> 3U) 
                                                        & (0xfU 
                                                           == (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__8__KET____DOT__cla_part0__DOT__p)))) 
                                               << 3U))));
    vlSelf->div__DOT__cla1__DOT__genblk1__BRA__20__KET____DOT__cla_part0__DOT____Vcellout__carry0__c 
        = ((0xeU & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__20__KET____DOT__cla_part0__DOT____Vcellout__carry0__c)) 
           | (1U & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__20__KET____DOT__cla_part0__DOT__g) 
                    | (((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__16__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                        >> 3U) & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__20__KET____DOT__cla_part0__DOT__p)))));
    vlSelf->div__DOT__cla1__DOT__genblk1__BRA__20__KET____DOT__cla_part0__DOT____Vcellout__carry0__c 
        = ((0xdU & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__20__KET____DOT__cla_part0__DOT____Vcellout__carry0__c)) 
           | (2U & ((0xfffffffeU & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__20__KET____DOT__cla_part0__DOT__g) 
                                    | (((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__20__KET____DOT__cla_part0__DOT__g) 
                                        << 1U) & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__20__KET____DOT__cla_part0__DOT__p)))) 
                    | (0x3ffffffeU & ((((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__16__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                        >> 2U) & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__20__KET____DOT__cla_part0__DOT__p)) 
                                      & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__20__KET____DOT__cla_part0__DOT__p) 
                                         << 1U))))));
    vlSelf->div__DOT__cla1__DOT__genblk1__BRA__20__KET____DOT__cla_part0__DOT____Vcellout__carry0__c 
        = ((0xbU & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__20__KET____DOT__cla_part0__DOT____Vcellout__carry0__c)) 
           | (4U & (((0xfffffffcU & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__20__KET____DOT__cla_part0__DOT__g) 
                                     | (((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__20__KET____DOT__cla_part0__DOT__g) 
                                         << 1U) & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__20__KET____DOT__cla_part0__DOT__p)))) 
                     | (((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__20__KET____DOT__cla_part0__DOT__g) 
                         & (6U == (6U & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__20__KET____DOT__cla_part0__DOT__p)))) 
                        << 2U)) | ((IData)((((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__16__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                             >> 3U) 
                                            & (7U == 
                                               (7U 
                                                & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__20__KET____DOT__cla_part0__DOT__p))))) 
                                   << 2U))));
    vlSelf->div__DOT__cla1__DOT__genblk1__BRA__20__KET____DOT__cla_part0__DOT____Vcellout__carry0__c 
        = ((7U & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__20__KET____DOT__cla_part0__DOT____Vcellout__carry0__c)) 
           | (8U & ((((0xfffffff8U & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__20__KET____DOT__cla_part0__DOT__g) 
                                      | (((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__20__KET____DOT__cla_part0__DOT__g) 
                                          << 1U) & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__20__KET____DOT__cla_part0__DOT__p)))) 
                      | ((IData)((((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__20__KET____DOT__cla_part0__DOT__g) 
                                   >> 1U) & (0xcU == 
                                             (0xcU 
                                              & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__20__KET____DOT__cla_part0__DOT__p))))) 
                         << 3U)) | (((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__20__KET____DOT__cla_part0__DOT__g) 
                                     & (0xeU == (0xeU 
                                                 & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__20__KET____DOT__cla_part0__DOT__p)))) 
                                    << 3U)) | ((IData)(
                                                       (((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__16__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                         >> 3U) 
                                                        & (0xfU 
                                                           == (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__20__KET____DOT__cla_part0__DOT__p)))) 
                                               << 3U))));
    vlSelf->div__DOT__cla0__DOT__genblk1__BRA__12__KET____DOT__cla_part0__DOT____Vcellout__carry0__c 
        = ((0xeU & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__12__KET____DOT__cla_part0__DOT____Vcellout__carry0__c)) 
           | (1U & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__12__KET____DOT__cla_part0__DOT__g) 
                    | (((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__8__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                        >> 3U) & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__12__KET____DOT__cla_part0__DOT__p)))));
    vlSelf->div__DOT__cla0__DOT__genblk1__BRA__12__KET____DOT__cla_part0__DOT____Vcellout__carry0__c 
        = ((0xdU & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__12__KET____DOT__cla_part0__DOT____Vcellout__carry0__c)) 
           | (2U & ((0xfffffffeU & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__12__KET____DOT__cla_part0__DOT__g) 
                                    | (((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__12__KET____DOT__cla_part0__DOT__g) 
                                        << 1U) & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__12__KET____DOT__cla_part0__DOT__p)))) 
                    | (0x3ffffffeU & ((((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__8__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                        >> 2U) & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__12__KET____DOT__cla_part0__DOT__p)) 
                                      & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__12__KET____DOT__cla_part0__DOT__p) 
                                         << 1U))))));
    vlSelf->div__DOT__cla0__DOT__genblk1__BRA__12__KET____DOT__cla_part0__DOT____Vcellout__carry0__c 
        = ((0xbU & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__12__KET____DOT__cla_part0__DOT____Vcellout__carry0__c)) 
           | (4U & (((0xfffffffcU & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__12__KET____DOT__cla_part0__DOT__g) 
                                     | (((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__12__KET____DOT__cla_part0__DOT__g) 
                                         << 1U) & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__12__KET____DOT__cla_part0__DOT__p)))) 
                     | (((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__12__KET____DOT__cla_part0__DOT__g) 
                         & (6U == (6U & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__12__KET____DOT__cla_part0__DOT__p)))) 
                        << 2U)) | ((IData)((((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__8__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                             >> 3U) 
                                            & (7U == 
                                               (7U 
                                                & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__12__KET____DOT__cla_part0__DOT__p))))) 
                                   << 2U))));
    vlSelf->div__DOT__cla0__DOT__genblk1__BRA__12__KET____DOT__cla_part0__DOT____Vcellout__carry0__c 
        = ((7U & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__12__KET____DOT__cla_part0__DOT____Vcellout__carry0__c)) 
           | (8U & ((((0xfffffff8U & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__12__KET____DOT__cla_part0__DOT__g) 
                                      | (((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__12__KET____DOT__cla_part0__DOT__g) 
                                          << 1U) & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__12__KET____DOT__cla_part0__DOT__p)))) 
                      | ((IData)((((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__12__KET____DOT__cla_part0__DOT__g) 
                                   >> 1U) & (0xcU == 
                                             (0xcU 
                                              & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__12__KET____DOT__cla_part0__DOT__p))))) 
                         << 3U)) | (((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__12__KET____DOT__cla_part0__DOT__g) 
                                     & (0xeU == (0xeU 
                                                 & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__12__KET____DOT__cla_part0__DOT__p)))) 
                                    << 3U)) | ((IData)(
                                                       (((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__8__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                         >> 3U) 
                                                        & (0xfU 
                                                           == (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__12__KET____DOT__cla_part0__DOT__p)))) 
                                               << 3U))));
    vlSelf->div__DOT__cla1__DOT__genblk1__BRA__24__KET____DOT__cla_part0__DOT____Vcellout__carry0__c 
        = ((0xeU & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__24__KET____DOT__cla_part0__DOT____Vcellout__carry0__c)) 
           | (1U & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__24__KET____DOT__cla_part0__DOT__g) 
                    | (((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__20__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                        >> 3U) & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__24__KET____DOT__cla_part0__DOT__p)))));
    vlSelf->div__DOT__cla1__DOT__genblk1__BRA__24__KET____DOT__cla_part0__DOT____Vcellout__carry0__c 
        = ((0xdU & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__24__KET____DOT__cla_part0__DOT____Vcellout__carry0__c)) 
           | (2U & ((0xfffffffeU & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__24__KET____DOT__cla_part0__DOT__g) 
                                    | (((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__24__KET____DOT__cla_part0__DOT__g) 
                                        << 1U) & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__24__KET____DOT__cla_part0__DOT__p)))) 
                    | (0x3ffffffeU & ((((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__20__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                        >> 2U) & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__24__KET____DOT__cla_part0__DOT__p)) 
                                      & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__24__KET____DOT__cla_part0__DOT__p) 
                                         << 1U))))));
    vlSelf->div__DOT__cla1__DOT__genblk1__BRA__24__KET____DOT__cla_part0__DOT____Vcellout__carry0__c 
        = ((0xbU & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__24__KET____DOT__cla_part0__DOT____Vcellout__carry0__c)) 
           | (4U & (((0xfffffffcU & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__24__KET____DOT__cla_part0__DOT__g) 
                                     | (((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__24__KET____DOT__cla_part0__DOT__g) 
                                         << 1U) & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__24__KET____DOT__cla_part0__DOT__p)))) 
                     | (((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__24__KET____DOT__cla_part0__DOT__g) 
                         & (6U == (6U & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__24__KET____DOT__cla_part0__DOT__p)))) 
                        << 2U)) | ((IData)((((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__20__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                             >> 3U) 
                                            & (7U == 
                                               (7U 
                                                & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__24__KET____DOT__cla_part0__DOT__p))))) 
                                   << 2U))));
    vlSelf->div__DOT__cla1__DOT__genblk1__BRA__24__KET____DOT__cla_part0__DOT____Vcellout__carry0__c 
        = ((7U & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__24__KET____DOT__cla_part0__DOT____Vcellout__carry0__c)) 
           | (8U & ((((0xfffffff8U & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__24__KET____DOT__cla_part0__DOT__g) 
                                      | (((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__24__KET____DOT__cla_part0__DOT__g) 
                                          << 1U) & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__24__KET____DOT__cla_part0__DOT__p)))) 
                      | ((IData)((((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__24__KET____DOT__cla_part0__DOT__g) 
                                   >> 1U) & (0xcU == 
                                             (0xcU 
                                              & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__24__KET____DOT__cla_part0__DOT__p))))) 
                         << 3U)) | (((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__24__KET____DOT__cla_part0__DOT__g) 
                                     & (0xeU == (0xeU 
                                                 & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__24__KET____DOT__cla_part0__DOT__p)))) 
                                    << 3U)) | ((IData)(
                                                       (((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__20__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                         >> 3U) 
                                                        & (0xfU 
                                                           == (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__24__KET____DOT__cla_part0__DOT__p)))) 
                                               << 3U))));
    vlSelf->div__DOT__cla0__DOT__genblk1__BRA__16__KET____DOT__cla_part0__DOT____Vcellout__carry0__c 
        = ((0xeU & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__16__KET____DOT__cla_part0__DOT____Vcellout__carry0__c)) 
           | (1U & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__16__KET____DOT__cla_part0__DOT__g) 
                    | (((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__12__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                        >> 3U) & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__16__KET____DOT__cla_part0__DOT__p)))));
    vlSelf->div__DOT__cla0__DOT__genblk1__BRA__16__KET____DOT__cla_part0__DOT____Vcellout__carry0__c 
        = ((0xdU & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__16__KET____DOT__cla_part0__DOT____Vcellout__carry0__c)) 
           | (2U & ((0xfffffffeU & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__16__KET____DOT__cla_part0__DOT__g) 
                                    | (((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__16__KET____DOT__cla_part0__DOT__g) 
                                        << 1U) & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__16__KET____DOT__cla_part0__DOT__p)))) 
                    | (0x3ffffffeU & ((((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__12__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                        >> 2U) & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__16__KET____DOT__cla_part0__DOT__p)) 
                                      & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__16__KET____DOT__cla_part0__DOT__p) 
                                         << 1U))))));
    vlSelf->div__DOT__cla0__DOT__genblk1__BRA__16__KET____DOT__cla_part0__DOT____Vcellout__carry0__c 
        = ((0xbU & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__16__KET____DOT__cla_part0__DOT____Vcellout__carry0__c)) 
           | (4U & (((0xfffffffcU & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__16__KET____DOT__cla_part0__DOT__g) 
                                     | (((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__16__KET____DOT__cla_part0__DOT__g) 
                                         << 1U) & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__16__KET____DOT__cla_part0__DOT__p)))) 
                     | (((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__16__KET____DOT__cla_part0__DOT__g) 
                         & (6U == (6U & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__16__KET____DOT__cla_part0__DOT__p)))) 
                        << 2U)) | ((IData)((((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__12__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                             >> 3U) 
                                            & (7U == 
                                               (7U 
                                                & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__16__KET____DOT__cla_part0__DOT__p))))) 
                                   << 2U))));
    vlSelf->div__DOT__cla0__DOT__genblk1__BRA__16__KET____DOT__cla_part0__DOT____Vcellout__carry0__c 
        = ((7U & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__16__KET____DOT__cla_part0__DOT____Vcellout__carry0__c)) 
           | (8U & ((((0xfffffff8U & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__16__KET____DOT__cla_part0__DOT__g) 
                                      | (((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__16__KET____DOT__cla_part0__DOT__g) 
                                          << 1U) & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__16__KET____DOT__cla_part0__DOT__p)))) 
                      | ((IData)((((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__16__KET____DOT__cla_part0__DOT__g) 
                                   >> 1U) & (0xcU == 
                                             (0xcU 
                                              & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__16__KET____DOT__cla_part0__DOT__p))))) 
                         << 3U)) | (((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__16__KET____DOT__cla_part0__DOT__g) 
                                     & (0xeU == (0xeU 
                                                 & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__16__KET____DOT__cla_part0__DOT__p)))) 
                                    << 3U)) | ((IData)(
                                                       (((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__12__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                         >> 3U) 
                                                        & (0xfU 
                                                           == (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__16__KET____DOT__cla_part0__DOT__p)))) 
                                               << 3U))));
    vlSelf->div__DOT__cla1__DOT__genblk1__BRA__28__KET____DOT__cla_part0__DOT____Vcellout__carry0__c 
        = ((0xeU & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__28__KET____DOT__cla_part0__DOT____Vcellout__carry0__c)) 
           | (1U & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__28__KET____DOT__cla_part0__DOT__g) 
                    | (((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__24__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                        >> 3U) & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__28__KET____DOT__cla_part0__DOT__p)))));
    vlSelf->div__DOT__cla1__DOT__genblk1__BRA__28__KET____DOT__cla_part0__DOT____Vcellout__carry0__c 
        = ((0xdU & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__28__KET____DOT__cla_part0__DOT____Vcellout__carry0__c)) 
           | (2U & ((0xfffffffeU & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__28__KET____DOT__cla_part0__DOT__g) 
                                    | (((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__28__KET____DOT__cla_part0__DOT__g) 
                                        << 1U) & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__28__KET____DOT__cla_part0__DOT__p)))) 
                    | (0x3ffffffeU & ((((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__24__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                        >> 2U) & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__28__KET____DOT__cla_part0__DOT__p)) 
                                      & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__28__KET____DOT__cla_part0__DOT__p) 
                                         << 1U))))));
    vlSelf->div__DOT__cla1__DOT__genblk1__BRA__28__KET____DOT__cla_part0__DOT____Vcellout__carry0__c 
        = ((0xbU & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__28__KET____DOT__cla_part0__DOT____Vcellout__carry0__c)) 
           | (4U & (((0xfffffffcU & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__28__KET____DOT__cla_part0__DOT__g) 
                                     | (((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__28__KET____DOT__cla_part0__DOT__g) 
                                         << 1U) & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__28__KET____DOT__cla_part0__DOT__p)))) 
                     | (((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__28__KET____DOT__cla_part0__DOT__g) 
                         & (6U == (6U & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__28__KET____DOT__cla_part0__DOT__p)))) 
                        << 2U)) | ((IData)((((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__24__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                             >> 3U) 
                                            & (7U == 
                                               (7U 
                                                & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__28__KET____DOT__cla_part0__DOT__p))))) 
                                   << 2U))));
    vlSelf->div__DOT__cla1__DOT__genblk1__BRA__28__KET____DOT__cla_part0__DOT____Vcellout__carry0__c 
        = ((7U & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__28__KET____DOT__cla_part0__DOT____Vcellout__carry0__c)) 
           | (8U & ((((0xfffffff8U & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__28__KET____DOT__cla_part0__DOT__g) 
                                      | (((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__28__KET____DOT__cla_part0__DOT__g) 
                                          << 1U) & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__28__KET____DOT__cla_part0__DOT__p)))) 
                      | ((IData)((((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__28__KET____DOT__cla_part0__DOT__g) 
                                   >> 1U) & (0xcU == 
                                             (0xcU 
                                              & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__28__KET____DOT__cla_part0__DOT__p))))) 
                         << 3U)) | (((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__28__KET____DOT__cla_part0__DOT__g) 
                                     & (0xeU == (0xeU 
                                                 & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__28__KET____DOT__cla_part0__DOT__p)))) 
                                    << 3U)) | ((IData)(
                                                       (((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__24__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                         >> 3U) 
                                                        & (0xfU 
                                                           == (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__28__KET____DOT__cla_part0__DOT__p)))) 
                                               << 3U))));
    vlSelf->div__DOT__cla0__DOT__genblk1__BRA__20__KET____DOT__cla_part0__DOT____Vcellout__carry0__c 
        = ((0xeU & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__20__KET____DOT__cla_part0__DOT____Vcellout__carry0__c)) 
           | (1U & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__20__KET____DOT__cla_part0__DOT__g) 
                    | (((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__16__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                        >> 3U) & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__20__KET____DOT__cla_part0__DOT__p)))));
    vlSelf->div__DOT__cla0__DOT__genblk1__BRA__20__KET____DOT__cla_part0__DOT____Vcellout__carry0__c 
        = ((0xdU & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__20__KET____DOT__cla_part0__DOT____Vcellout__carry0__c)) 
           | (2U & ((0xfffffffeU & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__20__KET____DOT__cla_part0__DOT__g) 
                                    | (((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__20__KET____DOT__cla_part0__DOT__g) 
                                        << 1U) & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__20__KET____DOT__cla_part0__DOT__p)))) 
                    | (0x3ffffffeU & ((((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__16__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                        >> 2U) & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__20__KET____DOT__cla_part0__DOT__p)) 
                                      & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__20__KET____DOT__cla_part0__DOT__p) 
                                         << 1U))))));
    vlSelf->div__DOT__cla0__DOT__genblk1__BRA__20__KET____DOT__cla_part0__DOT____Vcellout__carry0__c 
        = ((0xbU & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__20__KET____DOT__cla_part0__DOT____Vcellout__carry0__c)) 
           | (4U & (((0xfffffffcU & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__20__KET____DOT__cla_part0__DOT__g) 
                                     | (((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__20__KET____DOT__cla_part0__DOT__g) 
                                         << 1U) & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__20__KET____DOT__cla_part0__DOT__p)))) 
                     | (((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__20__KET____DOT__cla_part0__DOT__g) 
                         & (6U == (6U & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__20__KET____DOT__cla_part0__DOT__p)))) 
                        << 2U)) | ((IData)((((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__16__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                             >> 3U) 
                                            & (7U == 
                                               (7U 
                                                & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__20__KET____DOT__cla_part0__DOT__p))))) 
                                   << 2U))));
    vlSelf->div__DOT__cla0__DOT__genblk1__BRA__20__KET____DOT__cla_part0__DOT____Vcellout__carry0__c 
        = ((7U & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__20__KET____DOT__cla_part0__DOT____Vcellout__carry0__c)) 
           | (8U & ((((0xfffffff8U & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__20__KET____DOT__cla_part0__DOT__g) 
                                      | (((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__20__KET____DOT__cla_part0__DOT__g) 
                                          << 1U) & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__20__KET____DOT__cla_part0__DOT__p)))) 
                      | ((IData)((((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__20__KET____DOT__cla_part0__DOT__g) 
                                   >> 1U) & (0xcU == 
                                             (0xcU 
                                              & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__20__KET____DOT__cla_part0__DOT__p))))) 
                         << 3U)) | (((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__20__KET____DOT__cla_part0__DOT__g) 
                                     & (0xeU == (0xeU 
                                                 & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__20__KET____DOT__cla_part0__DOT__p)))) 
                                    << 3U)) | ((IData)(
                                                       (((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__16__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                         >> 3U) 
                                                        & (0xfU 
                                                           == (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__20__KET____DOT__cla_part0__DOT__p)))) 
                                               << 3U))));
    vlSelf->div__DOT__cla1__DOT__genblk1__BRA__32__KET____DOT__cla_part0__DOT____Vcellout__carry0__c 
        = ((0xeU & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__32__KET____DOT__cla_part0__DOT____Vcellout__carry0__c)) 
           | (1U & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__32__KET____DOT__cla_part0__DOT__g) 
                    | (((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__28__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                        >> 3U) & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__32__KET____DOT__cla_part0__DOT__p)))));
    vlSelf->div__DOT__cla1__DOT__genblk1__BRA__32__KET____DOT__cla_part0__DOT____Vcellout__carry0__c 
        = ((0xdU & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__32__KET____DOT__cla_part0__DOT____Vcellout__carry0__c)) 
           | (2U & ((0xfffffffeU & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__32__KET____DOT__cla_part0__DOT__g) 
                                    | (((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__32__KET____DOT__cla_part0__DOT__g) 
                                        << 1U) & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__32__KET____DOT__cla_part0__DOT__p)))) 
                    | (0x3ffffffeU & ((((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__28__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                        >> 2U) & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__32__KET____DOT__cla_part0__DOT__p)) 
                                      & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__32__KET____DOT__cla_part0__DOT__p) 
                                         << 1U))))));
    vlSelf->div__DOT__cla1__DOT__genblk1__BRA__32__KET____DOT__cla_part0__DOT____Vcellout__carry0__c 
        = ((0xbU & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__32__KET____DOT__cla_part0__DOT____Vcellout__carry0__c)) 
           | (4U & (((0xfffffffcU & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__32__KET____DOT__cla_part0__DOT__g) 
                                     | (((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__32__KET____DOT__cla_part0__DOT__g) 
                                         << 1U) & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__32__KET____DOT__cla_part0__DOT__p)))) 
                     | (((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__32__KET____DOT__cla_part0__DOT__g) 
                         & (6U == (6U & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__32__KET____DOT__cla_part0__DOT__p)))) 
                        << 2U)) | ((IData)((((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__28__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                             >> 3U) 
                                            & (7U == 
                                               (7U 
                                                & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__32__KET____DOT__cla_part0__DOT__p))))) 
                                   << 2U))));
    vlSelf->div__DOT__cla1__DOT__genblk1__BRA__32__KET____DOT__cla_part0__DOT____Vcellout__carry0__c 
        = ((7U & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__32__KET____DOT__cla_part0__DOT____Vcellout__carry0__c)) 
           | (8U & ((((0xfffffff8U & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__32__KET____DOT__cla_part0__DOT__g) 
                                      | (((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__32__KET____DOT__cla_part0__DOT__g) 
                                          << 1U) & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__32__KET____DOT__cla_part0__DOT__p)))) 
                      | ((IData)((((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__32__KET____DOT__cla_part0__DOT__g) 
                                   >> 1U) & (0xcU == 
                                             (0xcU 
                                              & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__32__KET____DOT__cla_part0__DOT__p))))) 
                         << 3U)) | (((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__32__KET____DOT__cla_part0__DOT__g) 
                                     & (0xeU == (0xeU 
                                                 & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__32__KET____DOT__cla_part0__DOT__p)))) 
                                    << 3U)) | ((IData)(
                                                       (((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__28__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                         >> 3U) 
                                                        & (0xfU 
                                                           == (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__32__KET____DOT__cla_part0__DOT__p)))) 
                                               << 3U))));
    vlSelf->div__DOT__cla0__DOT__genblk1__BRA__24__KET____DOT__cla_part0__DOT____Vcellout__carry0__c 
        = ((0xeU & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__24__KET____DOT__cla_part0__DOT____Vcellout__carry0__c)) 
           | (1U & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__24__KET____DOT__cla_part0__DOT__g) 
                    | (((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__20__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                        >> 3U) & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__24__KET____DOT__cla_part0__DOT__p)))));
    vlSelf->div__DOT__cla0__DOT__genblk1__BRA__24__KET____DOT__cla_part0__DOT____Vcellout__carry0__c 
        = ((0xdU & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__24__KET____DOT__cla_part0__DOT____Vcellout__carry0__c)) 
           | (2U & ((0xfffffffeU & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__24__KET____DOT__cla_part0__DOT__g) 
                                    | (((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__24__KET____DOT__cla_part0__DOT__g) 
                                        << 1U) & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__24__KET____DOT__cla_part0__DOT__p)))) 
                    | (0x3ffffffeU & ((((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__20__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                        >> 2U) & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__24__KET____DOT__cla_part0__DOT__p)) 
                                      & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__24__KET____DOT__cla_part0__DOT__p) 
                                         << 1U))))));
    vlSelf->div__DOT__cla0__DOT__genblk1__BRA__24__KET____DOT__cla_part0__DOT____Vcellout__carry0__c 
        = ((0xbU & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__24__KET____DOT__cla_part0__DOT____Vcellout__carry0__c)) 
           | (4U & (((0xfffffffcU & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__24__KET____DOT__cla_part0__DOT__g) 
                                     | (((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__24__KET____DOT__cla_part0__DOT__g) 
                                         << 1U) & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__24__KET____DOT__cla_part0__DOT__p)))) 
                     | (((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__24__KET____DOT__cla_part0__DOT__g) 
                         & (6U == (6U & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__24__KET____DOT__cla_part0__DOT__p)))) 
                        << 2U)) | ((IData)((((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__20__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                             >> 3U) 
                                            & (7U == 
                                               (7U 
                                                & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__24__KET____DOT__cla_part0__DOT__p))))) 
                                   << 2U))));
    vlSelf->div__DOT__cla0__DOT__genblk1__BRA__24__KET____DOT__cla_part0__DOT____Vcellout__carry0__c 
        = ((7U & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__24__KET____DOT__cla_part0__DOT____Vcellout__carry0__c)) 
           | (8U & ((((0xfffffff8U & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__24__KET____DOT__cla_part0__DOT__g) 
                                      | (((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__24__KET____DOT__cla_part0__DOT__g) 
                                          << 1U) & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__24__KET____DOT__cla_part0__DOT__p)))) 
                      | ((IData)((((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__24__KET____DOT__cla_part0__DOT__g) 
                                   >> 1U) & (0xcU == 
                                             (0xcU 
                                              & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__24__KET____DOT__cla_part0__DOT__p))))) 
                         << 3U)) | (((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__24__KET____DOT__cla_part0__DOT__g) 
                                     & (0xeU == (0xeU 
                                                 & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__24__KET____DOT__cla_part0__DOT__p)))) 
                                    << 3U)) | ((IData)(
                                                       (((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__20__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                         >> 3U) 
                                                        & (0xfU 
                                                           == (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__24__KET____DOT__cla_part0__DOT__p)))) 
                                               << 3U))));
    vlSelf->div__DOT__cla1__DOT__genblk1__BRA__36__KET____DOT__cla_part0__DOT____Vcellout__carry0__c 
        = ((0xeU & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__36__KET____DOT__cla_part0__DOT____Vcellout__carry0__c)) 
           | (1U & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__36__KET____DOT__cla_part0__DOT__g) 
                    | (((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__32__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                        >> 3U) & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__36__KET____DOT__cla_part0__DOT__p)))));
    vlSelf->div__DOT__cla1__DOT__genblk1__BRA__36__KET____DOT__cla_part0__DOT____Vcellout__carry0__c 
        = ((0xdU & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__36__KET____DOT__cla_part0__DOT____Vcellout__carry0__c)) 
           | (2U & ((0xfffffffeU & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__36__KET____DOT__cla_part0__DOT__g) 
                                    | (((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__36__KET____DOT__cla_part0__DOT__g) 
                                        << 1U) & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__36__KET____DOT__cla_part0__DOT__p)))) 
                    | (0x3ffffffeU & ((((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__32__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                        >> 2U) & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__36__KET____DOT__cla_part0__DOT__p)) 
                                      & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__36__KET____DOT__cla_part0__DOT__p) 
                                         << 1U))))));
    vlSelf->div__DOT__cla1__DOT__genblk1__BRA__36__KET____DOT__cla_part0__DOT____Vcellout__carry0__c 
        = ((0xbU & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__36__KET____DOT__cla_part0__DOT____Vcellout__carry0__c)) 
           | (4U & (((0xfffffffcU & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__36__KET____DOT__cla_part0__DOT__g) 
                                     | (((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__36__KET____DOT__cla_part0__DOT__g) 
                                         << 1U) & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__36__KET____DOT__cla_part0__DOT__p)))) 
                     | (((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__36__KET____DOT__cla_part0__DOT__g) 
                         & (6U == (6U & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__36__KET____DOT__cla_part0__DOT__p)))) 
                        << 2U)) | ((IData)((((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__32__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                             >> 3U) 
                                            & (7U == 
                                               (7U 
                                                & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__36__KET____DOT__cla_part0__DOT__p))))) 
                                   << 2U))));
    vlSelf->div__DOT__cla1__DOT__genblk1__BRA__36__KET____DOT__cla_part0__DOT____Vcellout__carry0__c 
        = ((7U & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__36__KET____DOT__cla_part0__DOT____Vcellout__carry0__c)) 
           | (8U & ((((0xfffffff8U & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__36__KET____DOT__cla_part0__DOT__g) 
                                      | (((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__36__KET____DOT__cla_part0__DOT__g) 
                                          << 1U) & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__36__KET____DOT__cla_part0__DOT__p)))) 
                      | ((IData)((((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__36__KET____DOT__cla_part0__DOT__g) 
                                   >> 1U) & (0xcU == 
                                             (0xcU 
                                              & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__36__KET____DOT__cla_part0__DOT__p))))) 
                         << 3U)) | (((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__36__KET____DOT__cla_part0__DOT__g) 
                                     & (0xeU == (0xeU 
                                                 & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__36__KET____DOT__cla_part0__DOT__p)))) 
                                    << 3U)) | ((IData)(
                                                       (((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__32__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                         >> 3U) 
                                                        & (0xfU 
                                                           == (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__36__KET____DOT__cla_part0__DOT__p)))) 
                                               << 3U))));
    vlSelf->div__DOT__cla0__DOT__genblk1__BRA__28__KET____DOT__cla_part0__DOT____Vcellout__carry0__c 
        = ((0xeU & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__28__KET____DOT__cla_part0__DOT____Vcellout__carry0__c)) 
           | (1U & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__28__KET____DOT__cla_part0__DOT__g) 
                    | (((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__24__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                        >> 3U) & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__28__KET____DOT__cla_part0__DOT__p)))));
    vlSelf->div__DOT__cla0__DOT__genblk1__BRA__28__KET____DOT__cla_part0__DOT____Vcellout__carry0__c 
        = ((0xdU & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__28__KET____DOT__cla_part0__DOT____Vcellout__carry0__c)) 
           | (2U & ((0xfffffffeU & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__28__KET____DOT__cla_part0__DOT__g) 
                                    | (((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__28__KET____DOT__cla_part0__DOT__g) 
                                        << 1U) & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__28__KET____DOT__cla_part0__DOT__p)))) 
                    | (0x3ffffffeU & ((((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__24__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                        >> 2U) & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__28__KET____DOT__cla_part0__DOT__p)) 
                                      & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__28__KET____DOT__cla_part0__DOT__p) 
                                         << 1U))))));
    vlSelf->div__DOT__cla0__DOT__genblk1__BRA__28__KET____DOT__cla_part0__DOT____Vcellout__carry0__c 
        = ((0xbU & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__28__KET____DOT__cla_part0__DOT____Vcellout__carry0__c)) 
           | (4U & (((0xfffffffcU & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__28__KET____DOT__cla_part0__DOT__g) 
                                     | (((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__28__KET____DOT__cla_part0__DOT__g) 
                                         << 1U) & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__28__KET____DOT__cla_part0__DOT__p)))) 
                     | (((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__28__KET____DOT__cla_part0__DOT__g) 
                         & (6U == (6U & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__28__KET____DOT__cla_part0__DOT__p)))) 
                        << 2U)) | ((IData)((((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__24__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                             >> 3U) 
                                            & (7U == 
                                               (7U 
                                                & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__28__KET____DOT__cla_part0__DOT__p))))) 
                                   << 2U))));
    vlSelf->div__DOT__cla0__DOT__genblk1__BRA__28__KET____DOT__cla_part0__DOT____Vcellout__carry0__c 
        = ((7U & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__28__KET____DOT__cla_part0__DOT____Vcellout__carry0__c)) 
           | (8U & ((((0xfffffff8U & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__28__KET____DOT__cla_part0__DOT__g) 
                                      | (((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__28__KET____DOT__cla_part0__DOT__g) 
                                          << 1U) & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__28__KET____DOT__cla_part0__DOT__p)))) 
                      | ((IData)((((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__28__KET____DOT__cla_part0__DOT__g) 
                                   >> 1U) & (0xcU == 
                                             (0xcU 
                                              & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__28__KET____DOT__cla_part0__DOT__p))))) 
                         << 3U)) | (((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__28__KET____DOT__cla_part0__DOT__g) 
                                     & (0xeU == (0xeU 
                                                 & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__28__KET____DOT__cla_part0__DOT__p)))) 
                                    << 3U)) | ((IData)(
                                                       (((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__24__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                         >> 3U) 
                                                        & (0xfU 
                                                           == (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__28__KET____DOT__cla_part0__DOT__p)))) 
                                               << 3U))));
    vlSelf->div__DOT__cla1__DOT__genblk1__BRA__40__KET____DOT__cla_part0__DOT____Vcellout__carry0__c 
        = ((0xeU & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__40__KET____DOT__cla_part0__DOT____Vcellout__carry0__c)) 
           | (1U & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__40__KET____DOT__cla_part0__DOT__g) 
                    | (((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__36__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                        >> 3U) & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__40__KET____DOT__cla_part0__DOT__p)))));
    vlSelf->div__DOT__cla1__DOT__genblk1__BRA__40__KET____DOT__cla_part0__DOT____Vcellout__carry0__c 
        = ((0xdU & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__40__KET____DOT__cla_part0__DOT____Vcellout__carry0__c)) 
           | (2U & ((0xfffffffeU & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__40__KET____DOT__cla_part0__DOT__g) 
                                    | (((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__40__KET____DOT__cla_part0__DOT__g) 
                                        << 1U) & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__40__KET____DOT__cla_part0__DOT__p)))) 
                    | (0x3ffffffeU & ((((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__36__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                        >> 2U) & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__40__KET____DOT__cla_part0__DOT__p)) 
                                      & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__40__KET____DOT__cla_part0__DOT__p) 
                                         << 1U))))));
    vlSelf->div__DOT__cla1__DOT__genblk1__BRA__40__KET____DOT__cla_part0__DOT____Vcellout__carry0__c 
        = ((0xbU & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__40__KET____DOT__cla_part0__DOT____Vcellout__carry0__c)) 
           | (4U & (((0xfffffffcU & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__40__KET____DOT__cla_part0__DOT__g) 
                                     | (((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__40__KET____DOT__cla_part0__DOT__g) 
                                         << 1U) & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__40__KET____DOT__cla_part0__DOT__p)))) 
                     | (((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__40__KET____DOT__cla_part0__DOT__g) 
                         & (6U == (6U & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__40__KET____DOT__cla_part0__DOT__p)))) 
                        << 2U)) | ((IData)((((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__36__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                             >> 3U) 
                                            & (7U == 
                                               (7U 
                                                & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__40__KET____DOT__cla_part0__DOT__p))))) 
                                   << 2U))));
    vlSelf->div__DOT__cla1__DOT__genblk1__BRA__40__KET____DOT__cla_part0__DOT____Vcellout__carry0__c 
        = ((7U & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__40__KET____DOT__cla_part0__DOT____Vcellout__carry0__c)) 
           | (8U & ((((0xfffffff8U & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__40__KET____DOT__cla_part0__DOT__g) 
                                      | (((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__40__KET____DOT__cla_part0__DOT__g) 
                                          << 1U) & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__40__KET____DOT__cla_part0__DOT__p)))) 
                      | ((IData)((((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__40__KET____DOT__cla_part0__DOT__g) 
                                   >> 1U) & (0xcU == 
                                             (0xcU 
                                              & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__40__KET____DOT__cla_part0__DOT__p))))) 
                         << 3U)) | (((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__40__KET____DOT__cla_part0__DOT__g) 
                                     & (0xeU == (0xeU 
                                                 & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__40__KET____DOT__cla_part0__DOT__p)))) 
                                    << 3U)) | ((IData)(
                                                       (((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__36__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                         >> 3U) 
                                                        & (0xfU 
                                                           == (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__40__KET____DOT__cla_part0__DOT__p)))) 
                                               << 3U))));
    vlSelf->div__DOT__cla0__DOT__genblk1__BRA__32__KET____DOT__cla_part0__DOT____Vcellout__carry0__c 
        = ((0xeU & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__32__KET____DOT__cla_part0__DOT____Vcellout__carry0__c)) 
           | (1U & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__32__KET____DOT__cla_part0__DOT__g) 
                    | (((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__28__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                        >> 3U) & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__32__KET____DOT__cla_part0__DOT__p)))));
    vlSelf->div__DOT__cla0__DOT__genblk1__BRA__32__KET____DOT__cla_part0__DOT____Vcellout__carry0__c 
        = ((0xdU & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__32__KET____DOT__cla_part0__DOT____Vcellout__carry0__c)) 
           | (2U & ((0xfffffffeU & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__32__KET____DOT__cla_part0__DOT__g) 
                                    | (((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__32__KET____DOT__cla_part0__DOT__g) 
                                        << 1U) & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__32__KET____DOT__cla_part0__DOT__p)))) 
                    | (0x3ffffffeU & ((((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__28__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                        >> 2U) & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__32__KET____DOT__cla_part0__DOT__p)) 
                                      & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__32__KET____DOT__cla_part0__DOT__p) 
                                         << 1U))))));
    vlSelf->div__DOT__cla0__DOT__genblk1__BRA__32__KET____DOT__cla_part0__DOT____Vcellout__carry0__c 
        = ((0xbU & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__32__KET____DOT__cla_part0__DOT____Vcellout__carry0__c)) 
           | (4U & (((0xfffffffcU & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__32__KET____DOT__cla_part0__DOT__g) 
                                     | (((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__32__KET____DOT__cla_part0__DOT__g) 
                                         << 1U) & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__32__KET____DOT__cla_part0__DOT__p)))) 
                     | (((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__32__KET____DOT__cla_part0__DOT__g) 
                         & (6U == (6U & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__32__KET____DOT__cla_part0__DOT__p)))) 
                        << 2U)) | ((IData)((((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__28__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                             >> 3U) 
                                            & (7U == 
                                               (7U 
                                                & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__32__KET____DOT__cla_part0__DOT__p))))) 
                                   << 2U))));
    vlSelf->div__DOT__cla0__DOT__genblk1__BRA__32__KET____DOT__cla_part0__DOT____Vcellout__carry0__c 
        = ((7U & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__32__KET____DOT__cla_part0__DOT____Vcellout__carry0__c)) 
           | (8U & ((((0xfffffff8U & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__32__KET____DOT__cla_part0__DOT__g) 
                                      | (((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__32__KET____DOT__cla_part0__DOT__g) 
                                          << 1U) & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__32__KET____DOT__cla_part0__DOT__p)))) 
                      | ((IData)((((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__32__KET____DOT__cla_part0__DOT__g) 
                                   >> 1U) & (0xcU == 
                                             (0xcU 
                                              & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__32__KET____DOT__cla_part0__DOT__p))))) 
                         << 3U)) | (((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__32__KET____DOT__cla_part0__DOT__g) 
                                     & (0xeU == (0xeU 
                                                 & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__32__KET____DOT__cla_part0__DOT__p)))) 
                                    << 3U)) | ((IData)(
                                                       (((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__28__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                         >> 3U) 
                                                        & (0xfU 
                                                           == (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__32__KET____DOT__cla_part0__DOT__p)))) 
                                               << 3U))));
    vlSelf->div__DOT__cla1__DOT__genblk1__BRA__44__KET____DOT__cla_part0__DOT____Vcellout__carry0__c 
        = ((0xeU & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__44__KET____DOT__cla_part0__DOT____Vcellout__carry0__c)) 
           | (1U & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__44__KET____DOT__cla_part0__DOT__g) 
                    | (((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__40__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                        >> 3U) & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__44__KET____DOT__cla_part0__DOT__p)))));
    vlSelf->div__DOT__cla1__DOT__genblk1__BRA__44__KET____DOT__cla_part0__DOT____Vcellout__carry0__c 
        = ((0xdU & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__44__KET____DOT__cla_part0__DOT____Vcellout__carry0__c)) 
           | (2U & ((0xfffffffeU & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__44__KET____DOT__cla_part0__DOT__g) 
                                    | (((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__44__KET____DOT__cla_part0__DOT__g) 
                                        << 1U) & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__44__KET____DOT__cla_part0__DOT__p)))) 
                    | (0x3ffffffeU & ((((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__40__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                        >> 2U) & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__44__KET____DOT__cla_part0__DOT__p)) 
                                      & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__44__KET____DOT__cla_part0__DOT__p) 
                                         << 1U))))));
    vlSelf->div__DOT__cla1__DOT__genblk1__BRA__44__KET____DOT__cla_part0__DOT____Vcellout__carry0__c 
        = ((0xbU & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__44__KET____DOT__cla_part0__DOT____Vcellout__carry0__c)) 
           | (4U & (((0xfffffffcU & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__44__KET____DOT__cla_part0__DOT__g) 
                                     | (((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__44__KET____DOT__cla_part0__DOT__g) 
                                         << 1U) & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__44__KET____DOT__cla_part0__DOT__p)))) 
                     | (((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__44__KET____DOT__cla_part0__DOT__g) 
                         & (6U == (6U & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__44__KET____DOT__cla_part0__DOT__p)))) 
                        << 2U)) | ((IData)((((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__40__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                             >> 3U) 
                                            & (7U == 
                                               (7U 
                                                & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__44__KET____DOT__cla_part0__DOT__p))))) 
                                   << 2U))));
    vlSelf->div__DOT__cla1__DOT__genblk1__BRA__44__KET____DOT__cla_part0__DOT____Vcellout__carry0__c 
        = ((7U & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__44__KET____DOT__cla_part0__DOT____Vcellout__carry0__c)) 
           | (8U & ((((0xfffffff8U & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__44__KET____DOT__cla_part0__DOT__g) 
                                      | (((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__44__KET____DOT__cla_part0__DOT__g) 
                                          << 1U) & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__44__KET____DOT__cla_part0__DOT__p)))) 
                      | ((IData)((((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__44__KET____DOT__cla_part0__DOT__g) 
                                   >> 1U) & (0xcU == 
                                             (0xcU 
                                              & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__44__KET____DOT__cla_part0__DOT__p))))) 
                         << 3U)) | (((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__44__KET____DOT__cla_part0__DOT__g) 
                                     & (0xeU == (0xeU 
                                                 & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__44__KET____DOT__cla_part0__DOT__p)))) 
                                    << 3U)) | ((IData)(
                                                       (((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__40__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                         >> 3U) 
                                                        & (0xfU 
                                                           == (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__44__KET____DOT__cla_part0__DOT__p)))) 
                                               << 3U))));
    vlSelf->div__DOT__cla0__DOT__genblk1__BRA__36__KET____DOT__cla_part0__DOT____Vcellout__carry0__c 
        = ((0xeU & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__36__KET____DOT__cla_part0__DOT____Vcellout__carry0__c)) 
           | (1U & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__36__KET____DOT__cla_part0__DOT__g) 
                    | (((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__32__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                        >> 3U) & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__36__KET____DOT__cla_part0__DOT__p)))));
    vlSelf->div__DOT__cla0__DOT__genblk1__BRA__36__KET____DOT__cla_part0__DOT____Vcellout__carry0__c 
        = ((0xdU & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__36__KET____DOT__cla_part0__DOT____Vcellout__carry0__c)) 
           | (2U & ((0xfffffffeU & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__36__KET____DOT__cla_part0__DOT__g) 
                                    | (((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__36__KET____DOT__cla_part0__DOT__g) 
                                        << 1U) & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__36__KET____DOT__cla_part0__DOT__p)))) 
                    | (0x3ffffffeU & ((((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__32__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                        >> 2U) & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__36__KET____DOT__cla_part0__DOT__p)) 
                                      & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__36__KET____DOT__cla_part0__DOT__p) 
                                         << 1U))))));
    vlSelf->div__DOT__cla0__DOT__genblk1__BRA__36__KET____DOT__cla_part0__DOT____Vcellout__carry0__c 
        = ((0xbU & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__36__KET____DOT__cla_part0__DOT____Vcellout__carry0__c)) 
           | (4U & (((0xfffffffcU & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__36__KET____DOT__cla_part0__DOT__g) 
                                     | (((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__36__KET____DOT__cla_part0__DOT__g) 
                                         << 1U) & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__36__KET____DOT__cla_part0__DOT__p)))) 
                     | (((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__36__KET____DOT__cla_part0__DOT__g) 
                         & (6U == (6U & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__36__KET____DOT__cla_part0__DOT__p)))) 
                        << 2U)) | ((IData)((((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__32__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                             >> 3U) 
                                            & (7U == 
                                               (7U 
                                                & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__36__KET____DOT__cla_part0__DOT__p))))) 
                                   << 2U))));
    vlSelf->div__DOT__cla0__DOT__genblk1__BRA__36__KET____DOT__cla_part0__DOT____Vcellout__carry0__c 
        = ((7U & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__36__KET____DOT__cla_part0__DOT____Vcellout__carry0__c)) 
           | (8U & ((((0xfffffff8U & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__36__KET____DOT__cla_part0__DOT__g) 
                                      | (((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__36__KET____DOT__cla_part0__DOT__g) 
                                          << 1U) & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__36__KET____DOT__cla_part0__DOT__p)))) 
                      | ((IData)((((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__36__KET____DOT__cla_part0__DOT__g) 
                                   >> 1U) & (0xcU == 
                                             (0xcU 
                                              & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__36__KET____DOT__cla_part0__DOT__p))))) 
                         << 3U)) | (((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__36__KET____DOT__cla_part0__DOT__g) 
                                     & (0xeU == (0xeU 
                                                 & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__36__KET____DOT__cla_part0__DOT__p)))) 
                                    << 3U)) | ((IData)(
                                                       (((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__32__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                         >> 3U) 
                                                        & (0xfU 
                                                           == (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__36__KET____DOT__cla_part0__DOT__p)))) 
                                               << 3U))));
    vlSelf->div__DOT__cla1__DOT__genblk1__BRA__48__KET____DOT__cla_part0__DOT____Vcellout__carry0__c 
        = ((0xeU & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__48__KET____DOT__cla_part0__DOT____Vcellout__carry0__c)) 
           | (1U & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__48__KET____DOT__cla_part0__DOT__g) 
                    | (((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__44__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                        >> 3U) & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__48__KET____DOT__cla_part0__DOT__p)))));
    vlSelf->div__DOT__cla1__DOT__genblk1__BRA__48__KET____DOT__cla_part0__DOT____Vcellout__carry0__c 
        = ((0xdU & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__48__KET____DOT__cla_part0__DOT____Vcellout__carry0__c)) 
           | (2U & ((0xfffffffeU & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__48__KET____DOT__cla_part0__DOT__g) 
                                    | (((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__48__KET____DOT__cla_part0__DOT__g) 
                                        << 1U) & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__48__KET____DOT__cla_part0__DOT__p)))) 
                    | (0x3ffffffeU & ((((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__44__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                        >> 2U) & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__48__KET____DOT__cla_part0__DOT__p)) 
                                      & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__48__KET____DOT__cla_part0__DOT__p) 
                                         << 1U))))));
    vlSelf->div__DOT__cla1__DOT__genblk1__BRA__48__KET____DOT__cla_part0__DOT____Vcellout__carry0__c 
        = ((0xbU & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__48__KET____DOT__cla_part0__DOT____Vcellout__carry0__c)) 
           | (4U & (((0xfffffffcU & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__48__KET____DOT__cla_part0__DOT__g) 
                                     | (((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__48__KET____DOT__cla_part0__DOT__g) 
                                         << 1U) & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__48__KET____DOT__cla_part0__DOT__p)))) 
                     | (((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__48__KET____DOT__cla_part0__DOT__g) 
                         & (6U == (6U & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__48__KET____DOT__cla_part0__DOT__p)))) 
                        << 2U)) | ((IData)((((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__44__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                             >> 3U) 
                                            & (7U == 
                                               (7U 
                                                & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__48__KET____DOT__cla_part0__DOT__p))))) 
                                   << 2U))));
    vlSelf->div__DOT__cla1__DOT__genblk1__BRA__48__KET____DOT__cla_part0__DOT____Vcellout__carry0__c 
        = ((7U & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__48__KET____DOT__cla_part0__DOT____Vcellout__carry0__c)) 
           | (8U & ((((0xfffffff8U & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__48__KET____DOT__cla_part0__DOT__g) 
                                      | (((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__48__KET____DOT__cla_part0__DOT__g) 
                                          << 1U) & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__48__KET____DOT__cla_part0__DOT__p)))) 
                      | ((IData)((((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__48__KET____DOT__cla_part0__DOT__g) 
                                   >> 1U) & (0xcU == 
                                             (0xcU 
                                              & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__48__KET____DOT__cla_part0__DOT__p))))) 
                         << 3U)) | (((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__48__KET____DOT__cla_part0__DOT__g) 
                                     & (0xeU == (0xeU 
                                                 & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__48__KET____DOT__cla_part0__DOT__p)))) 
                                    << 3U)) | ((IData)(
                                                       (((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__44__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                         >> 3U) 
                                                        & (0xfU 
                                                           == (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__48__KET____DOT__cla_part0__DOT__p)))) 
                                               << 3U))));
    vlSelf->div__DOT__cla0__DOT__genblk1__BRA__40__KET____DOT__cla_part0__DOT____Vcellout__carry0__c 
        = ((0xeU & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__40__KET____DOT__cla_part0__DOT____Vcellout__carry0__c)) 
           | (1U & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__40__KET____DOT__cla_part0__DOT__g) 
                    | (((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__36__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                        >> 3U) & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__40__KET____DOT__cla_part0__DOT__p)))));
    vlSelf->div__DOT__cla0__DOT__genblk1__BRA__40__KET____DOT__cla_part0__DOT____Vcellout__carry0__c 
        = ((0xdU & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__40__KET____DOT__cla_part0__DOT____Vcellout__carry0__c)) 
           | (2U & ((0xfffffffeU & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__40__KET____DOT__cla_part0__DOT__g) 
                                    | (((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__40__KET____DOT__cla_part0__DOT__g) 
                                        << 1U) & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__40__KET____DOT__cla_part0__DOT__p)))) 
                    | (0x3ffffffeU & ((((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__36__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                        >> 2U) & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__40__KET____DOT__cla_part0__DOT__p)) 
                                      & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__40__KET____DOT__cla_part0__DOT__p) 
                                         << 1U))))));
    vlSelf->div__DOT__cla0__DOT__genblk1__BRA__40__KET____DOT__cla_part0__DOT____Vcellout__carry0__c 
        = ((0xbU & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__40__KET____DOT__cla_part0__DOT____Vcellout__carry0__c)) 
           | (4U & (((0xfffffffcU & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__40__KET____DOT__cla_part0__DOT__g) 
                                     | (((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__40__KET____DOT__cla_part0__DOT__g) 
                                         << 1U) & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__40__KET____DOT__cla_part0__DOT__p)))) 
                     | (((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__40__KET____DOT__cla_part0__DOT__g) 
                         & (6U == (6U & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__40__KET____DOT__cla_part0__DOT__p)))) 
                        << 2U)) | ((IData)((((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__36__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                             >> 3U) 
                                            & (7U == 
                                               (7U 
                                                & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__40__KET____DOT__cla_part0__DOT__p))))) 
                                   << 2U))));
    vlSelf->div__DOT__cla0__DOT__genblk1__BRA__40__KET____DOT__cla_part0__DOT____Vcellout__carry0__c 
        = ((7U & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__40__KET____DOT__cla_part0__DOT____Vcellout__carry0__c)) 
           | (8U & ((((0xfffffff8U & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__40__KET____DOT__cla_part0__DOT__g) 
                                      | (((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__40__KET____DOT__cla_part0__DOT__g) 
                                          << 1U) & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__40__KET____DOT__cla_part0__DOT__p)))) 
                      | ((IData)((((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__40__KET____DOT__cla_part0__DOT__g) 
                                   >> 1U) & (0xcU == 
                                             (0xcU 
                                              & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__40__KET____DOT__cla_part0__DOT__p))))) 
                         << 3U)) | (((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__40__KET____DOT__cla_part0__DOT__g) 
                                     & (0xeU == (0xeU 
                                                 & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__40__KET____DOT__cla_part0__DOT__p)))) 
                                    << 3U)) | ((IData)(
                                                       (((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__36__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                         >> 3U) 
                                                        & (0xfU 
                                                           == (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__40__KET____DOT__cla_part0__DOT__p)))) 
                                               << 3U))));
    vlSelf->div__DOT__cla1__DOT__genblk1__BRA__52__KET____DOT__cla_part0__DOT____Vcellout__carry0__c 
        = ((0xeU & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__52__KET____DOT__cla_part0__DOT____Vcellout__carry0__c)) 
           | (1U & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__52__KET____DOT__cla_part0__DOT__g) 
                    | (((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__48__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                        >> 3U) & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__52__KET____DOT__cla_part0__DOT__p)))));
    vlSelf->div__DOT__cla1__DOT__genblk1__BRA__52__KET____DOT__cla_part0__DOT____Vcellout__carry0__c 
        = ((0xdU & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__52__KET____DOT__cla_part0__DOT____Vcellout__carry0__c)) 
           | (2U & ((0xfffffffeU & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__52__KET____DOT__cla_part0__DOT__g) 
                                    | (((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__52__KET____DOT__cla_part0__DOT__g) 
                                        << 1U) & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__52__KET____DOT__cla_part0__DOT__p)))) 
                    | (0x3ffffffeU & ((((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__48__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                        >> 2U) & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__52__KET____DOT__cla_part0__DOT__p)) 
                                      & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__52__KET____DOT__cla_part0__DOT__p) 
                                         << 1U))))));
    vlSelf->div__DOT__cla1__DOT__genblk1__BRA__52__KET____DOT__cla_part0__DOT____Vcellout__carry0__c 
        = ((0xbU & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__52__KET____DOT__cla_part0__DOT____Vcellout__carry0__c)) 
           | (4U & (((0xfffffffcU & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__52__KET____DOT__cla_part0__DOT__g) 
                                     | (((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__52__KET____DOT__cla_part0__DOT__g) 
                                         << 1U) & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__52__KET____DOT__cla_part0__DOT__p)))) 
                     | (((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__52__KET____DOT__cla_part0__DOT__g) 
                         & (6U == (6U & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__52__KET____DOT__cla_part0__DOT__p)))) 
                        << 2U)) | ((IData)((((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__48__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                             >> 3U) 
                                            & (7U == 
                                               (7U 
                                                & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__52__KET____DOT__cla_part0__DOT__p))))) 
                                   << 2U))));
    vlSelf->div__DOT__cla1__DOT__genblk1__BRA__52__KET____DOT__cla_part0__DOT____Vcellout__carry0__c 
        = ((7U & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__52__KET____DOT__cla_part0__DOT____Vcellout__carry0__c)) 
           | (8U & ((((0xfffffff8U & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__52__KET____DOT__cla_part0__DOT__g) 
                                      | (((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__52__KET____DOT__cla_part0__DOT__g) 
                                          << 1U) & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__52__KET____DOT__cla_part0__DOT__p)))) 
                      | ((IData)((((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__52__KET____DOT__cla_part0__DOT__g) 
                                   >> 1U) & (0xcU == 
                                             (0xcU 
                                              & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__52__KET____DOT__cla_part0__DOT__p))))) 
                         << 3U)) | (((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__52__KET____DOT__cla_part0__DOT__g) 
                                     & (0xeU == (0xeU 
                                                 & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__52__KET____DOT__cla_part0__DOT__p)))) 
                                    << 3U)) | ((IData)(
                                                       (((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__48__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                         >> 3U) 
                                                        & (0xfU 
                                                           == (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__52__KET____DOT__cla_part0__DOT__p)))) 
                                               << 3U))));
    vlSelf->div__DOT__cla0__DOT__genblk1__BRA__44__KET____DOT__cla_part0__DOT____Vcellout__carry0__c 
        = ((0xeU & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__44__KET____DOT__cla_part0__DOT____Vcellout__carry0__c)) 
           | (1U & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__44__KET____DOT__cla_part0__DOT__g) 
                    | (((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__40__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                        >> 3U) & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__44__KET____DOT__cla_part0__DOT__p)))));
    vlSelf->div__DOT__cla0__DOT__genblk1__BRA__44__KET____DOT__cla_part0__DOT____Vcellout__carry0__c 
        = ((0xdU & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__44__KET____DOT__cla_part0__DOT____Vcellout__carry0__c)) 
           | (2U & ((0xfffffffeU & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__44__KET____DOT__cla_part0__DOT__g) 
                                    | (((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__44__KET____DOT__cla_part0__DOT__g) 
                                        << 1U) & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__44__KET____DOT__cla_part0__DOT__p)))) 
                    | (0x3ffffffeU & ((((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__40__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                        >> 2U) & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__44__KET____DOT__cla_part0__DOT__p)) 
                                      & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__44__KET____DOT__cla_part0__DOT__p) 
                                         << 1U))))));
    vlSelf->div__DOT__cla0__DOT__genblk1__BRA__44__KET____DOT__cla_part0__DOT____Vcellout__carry0__c 
        = ((0xbU & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__44__KET____DOT__cla_part0__DOT____Vcellout__carry0__c)) 
           | (4U & (((0xfffffffcU & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__44__KET____DOT__cla_part0__DOT__g) 
                                     | (((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__44__KET____DOT__cla_part0__DOT__g) 
                                         << 1U) & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__44__KET____DOT__cla_part0__DOT__p)))) 
                     | (((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__44__KET____DOT__cla_part0__DOT__g) 
                         & (6U == (6U & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__44__KET____DOT__cla_part0__DOT__p)))) 
                        << 2U)) | ((IData)((((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__40__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                             >> 3U) 
                                            & (7U == 
                                               (7U 
                                                & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__44__KET____DOT__cla_part0__DOT__p))))) 
                                   << 2U))));
    vlSelf->div__DOT__cla0__DOT__genblk1__BRA__44__KET____DOT__cla_part0__DOT____Vcellout__carry0__c 
        = ((7U & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__44__KET____DOT__cla_part0__DOT____Vcellout__carry0__c)) 
           | (8U & ((((0xfffffff8U & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__44__KET____DOT__cla_part0__DOT__g) 
                                      | (((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__44__KET____DOT__cla_part0__DOT__g) 
                                          << 1U) & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__44__KET____DOT__cla_part0__DOT__p)))) 
                      | ((IData)((((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__44__KET____DOT__cla_part0__DOT__g) 
                                   >> 1U) & (0xcU == 
                                             (0xcU 
                                              & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__44__KET____DOT__cla_part0__DOT__p))))) 
                         << 3U)) | (((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__44__KET____DOT__cla_part0__DOT__g) 
                                     & (0xeU == (0xeU 
                                                 & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__44__KET____DOT__cla_part0__DOT__p)))) 
                                    << 3U)) | ((IData)(
                                                       (((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__40__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                         >> 3U) 
                                                        & (0xfU 
                                                           == (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__44__KET____DOT__cla_part0__DOT__p)))) 
                                               << 3U))));
    vlSelf->div__DOT__cla1__DOT__genblk1__BRA__56__KET____DOT__cla_part0__DOT____Vcellout__carry0__c 
        = ((0xeU & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__56__KET____DOT__cla_part0__DOT____Vcellout__carry0__c)) 
           | (1U & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__56__KET____DOT__cla_part0__DOT__g) 
                    | (((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__52__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                        >> 3U) & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__56__KET____DOT__cla_part0__DOT__p)))));
    vlSelf->div__DOT__cla1__DOT__genblk1__BRA__56__KET____DOT__cla_part0__DOT____Vcellout__carry0__c 
        = ((0xdU & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__56__KET____DOT__cla_part0__DOT____Vcellout__carry0__c)) 
           | (2U & ((0xfffffffeU & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__56__KET____DOT__cla_part0__DOT__g) 
                                    | (((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__56__KET____DOT__cla_part0__DOT__g) 
                                        << 1U) & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__56__KET____DOT__cla_part0__DOT__p)))) 
                    | (0x3ffffffeU & ((((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__52__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                        >> 2U) & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__56__KET____DOT__cla_part0__DOT__p)) 
                                      & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__56__KET____DOT__cla_part0__DOT__p) 
                                         << 1U))))));
    vlSelf->div__DOT__cla1__DOT__genblk1__BRA__56__KET____DOT__cla_part0__DOT____Vcellout__carry0__c 
        = ((0xbU & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__56__KET____DOT__cla_part0__DOT____Vcellout__carry0__c)) 
           | (4U & (((0xfffffffcU & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__56__KET____DOT__cla_part0__DOT__g) 
                                     | (((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__56__KET____DOT__cla_part0__DOT__g) 
                                         << 1U) & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__56__KET____DOT__cla_part0__DOT__p)))) 
                     | (((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__56__KET____DOT__cla_part0__DOT__g) 
                         & (6U == (6U & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__56__KET____DOT__cla_part0__DOT__p)))) 
                        << 2U)) | ((IData)((((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__52__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                             >> 3U) 
                                            & (7U == 
                                               (7U 
                                                & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__56__KET____DOT__cla_part0__DOT__p))))) 
                                   << 2U))));
    vlSelf->div__DOT__cla1__DOT__genblk1__BRA__56__KET____DOT__cla_part0__DOT____Vcellout__carry0__c 
        = ((7U & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__56__KET____DOT__cla_part0__DOT____Vcellout__carry0__c)) 
           | (8U & ((((0xfffffff8U & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__56__KET____DOT__cla_part0__DOT__g) 
                                      | (((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__56__KET____DOT__cla_part0__DOT__g) 
                                          << 1U) & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__56__KET____DOT__cla_part0__DOT__p)))) 
                      | ((IData)((((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__56__KET____DOT__cla_part0__DOT__g) 
                                   >> 1U) & (0xcU == 
                                             (0xcU 
                                              & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__56__KET____DOT__cla_part0__DOT__p))))) 
                         << 3U)) | (((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__56__KET____DOT__cla_part0__DOT__g) 
                                     & (0xeU == (0xeU 
                                                 & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__56__KET____DOT__cla_part0__DOT__p)))) 
                                    << 3U)) | ((IData)(
                                                       (((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__52__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                         >> 3U) 
                                                        & (0xfU 
                                                           == (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__56__KET____DOT__cla_part0__DOT__p)))) 
                                               << 3U))));
    vlSelf->div__DOT__cla0__DOT__genblk1__BRA__48__KET____DOT__cla_part0__DOT____Vcellout__carry0__c 
        = ((0xeU & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__48__KET____DOT__cla_part0__DOT____Vcellout__carry0__c)) 
           | (1U & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__48__KET____DOT__cla_part0__DOT__g) 
                    | (((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__44__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                        >> 3U) & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__48__KET____DOT__cla_part0__DOT__p)))));
    vlSelf->div__DOT__cla0__DOT__genblk1__BRA__48__KET____DOT__cla_part0__DOT____Vcellout__carry0__c 
        = ((0xdU & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__48__KET____DOT__cla_part0__DOT____Vcellout__carry0__c)) 
           | (2U & ((0xfffffffeU & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__48__KET____DOT__cla_part0__DOT__g) 
                                    | (((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__48__KET____DOT__cla_part0__DOT__g) 
                                        << 1U) & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__48__KET____DOT__cla_part0__DOT__p)))) 
                    | (0x3ffffffeU & ((((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__44__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                        >> 2U) & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__48__KET____DOT__cla_part0__DOT__p)) 
                                      & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__48__KET____DOT__cla_part0__DOT__p) 
                                         << 1U))))));
    vlSelf->div__DOT__cla0__DOT__genblk1__BRA__48__KET____DOT__cla_part0__DOT____Vcellout__carry0__c 
        = ((0xbU & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__48__KET____DOT__cla_part0__DOT____Vcellout__carry0__c)) 
           | (4U & (((0xfffffffcU & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__48__KET____DOT__cla_part0__DOT__g) 
                                     | (((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__48__KET____DOT__cla_part0__DOT__g) 
                                         << 1U) & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__48__KET____DOT__cla_part0__DOT__p)))) 
                     | (((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__48__KET____DOT__cla_part0__DOT__g) 
                         & (6U == (6U & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__48__KET____DOT__cla_part0__DOT__p)))) 
                        << 2U)) | ((IData)((((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__44__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                             >> 3U) 
                                            & (7U == 
                                               (7U 
                                                & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__48__KET____DOT__cla_part0__DOT__p))))) 
                                   << 2U))));
    vlSelf->div__DOT__cla0__DOT__genblk1__BRA__48__KET____DOT__cla_part0__DOT____Vcellout__carry0__c 
        = ((7U & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__48__KET____DOT__cla_part0__DOT____Vcellout__carry0__c)) 
           | (8U & ((((0xfffffff8U & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__48__KET____DOT__cla_part0__DOT__g) 
                                      | (((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__48__KET____DOT__cla_part0__DOT__g) 
                                          << 1U) & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__48__KET____DOT__cla_part0__DOT__p)))) 
                      | ((IData)((((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__48__KET____DOT__cla_part0__DOT__g) 
                                   >> 1U) & (0xcU == 
                                             (0xcU 
                                              & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__48__KET____DOT__cla_part0__DOT__p))))) 
                         << 3U)) | (((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__48__KET____DOT__cla_part0__DOT__g) 
                                     & (0xeU == (0xeU 
                                                 & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__48__KET____DOT__cla_part0__DOT__p)))) 
                                    << 3U)) | ((IData)(
                                                       (((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__44__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                         >> 3U) 
                                                        & (0xfU 
                                                           == (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__48__KET____DOT__cla_part0__DOT__p)))) 
                                               << 3U))));
    vlSelf->div__DOT__cla1__DOT__genblk1__BRA__60__KET____DOT__cla_part0__DOT____Vcellout__carry0__c 
        = ((0xeU & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__60__KET____DOT__cla_part0__DOT____Vcellout__carry0__c)) 
           | (1U & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__60__KET____DOT__cla_part0__DOT__g) 
                    | (((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__56__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                        >> 3U) & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__60__KET____DOT__cla_part0__DOT__p)))));
    vlSelf->div__DOT__cla1__DOT__genblk1__BRA__60__KET____DOT__cla_part0__DOT____Vcellout__carry0__c 
        = ((0xdU & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__60__KET____DOT__cla_part0__DOT____Vcellout__carry0__c)) 
           | (2U & ((0xfffffffeU & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__60__KET____DOT__cla_part0__DOT__g) 
                                    | (((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__60__KET____DOT__cla_part0__DOT__g) 
                                        << 1U) & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__60__KET____DOT__cla_part0__DOT__p)))) 
                    | (0x3ffffffeU & ((((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__56__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                        >> 2U) & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__60__KET____DOT__cla_part0__DOT__p)) 
                                      & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__60__KET____DOT__cla_part0__DOT__p) 
                                         << 1U))))));
    vlSelf->div__DOT__cla1__DOT__genblk1__BRA__60__KET____DOT__cla_part0__DOT____Vcellout__carry0__c 
        = ((0xbU & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__60__KET____DOT__cla_part0__DOT____Vcellout__carry0__c)) 
           | (4U & (((0xfffffffcU & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__60__KET____DOT__cla_part0__DOT__g) 
                                     | (((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__60__KET____DOT__cla_part0__DOT__g) 
                                         << 1U) & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__60__KET____DOT__cla_part0__DOT__p)))) 
                     | (((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__60__KET____DOT__cla_part0__DOT__g) 
                         & (6U == (6U & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__60__KET____DOT__cla_part0__DOT__p)))) 
                        << 2U)) | ((IData)((((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__56__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                             >> 3U) 
                                            & (7U == 
                                               (7U 
                                                & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__60__KET____DOT__cla_part0__DOT__p))))) 
                                   << 2U))));
    vlSelf->div__DOT__cla1__DOT__genblk1__BRA__60__KET____DOT__cla_part0__DOT____Vcellout__carry0__c 
        = ((7U & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__60__KET____DOT__cla_part0__DOT____Vcellout__carry0__c)) 
           | (8U & ((((0xfffffff8U & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__60__KET____DOT__cla_part0__DOT__g) 
                                      | (((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__60__KET____DOT__cla_part0__DOT__g) 
                                          << 1U) & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__60__KET____DOT__cla_part0__DOT__p)))) 
                      | ((IData)((((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__60__KET____DOT__cla_part0__DOT__g) 
                                   >> 1U) & (0xcU == 
                                             (0xcU 
                                              & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__60__KET____DOT__cla_part0__DOT__p))))) 
                         << 3U)) | (((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__60__KET____DOT__cla_part0__DOT__g) 
                                     & (0xeU == (0xeU 
                                                 & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__60__KET____DOT__cla_part0__DOT__p)))) 
                                    << 3U)) | ((IData)(
                                                       (((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__56__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                         >> 3U) 
                                                        & (0xfU 
                                                           == (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__60__KET____DOT__cla_part0__DOT__p)))) 
                                               << 3U))));
    vlSelf->div__DOT__cla0__DOT__genblk1__BRA__52__KET____DOT__cla_part0__DOT____Vcellout__carry0__c 
        = ((0xeU & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__52__KET____DOT__cla_part0__DOT____Vcellout__carry0__c)) 
           | (1U & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__52__KET____DOT__cla_part0__DOT__g) 
                    | (((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__48__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                        >> 3U) & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__52__KET____DOT__cla_part0__DOT__p)))));
    vlSelf->div__DOT__cla0__DOT__genblk1__BRA__52__KET____DOT__cla_part0__DOT____Vcellout__carry0__c 
        = ((0xdU & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__52__KET____DOT__cla_part0__DOT____Vcellout__carry0__c)) 
           | (2U & ((0xfffffffeU & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__52__KET____DOT__cla_part0__DOT__g) 
                                    | (((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__52__KET____DOT__cla_part0__DOT__g) 
                                        << 1U) & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__52__KET____DOT__cla_part0__DOT__p)))) 
                    | (0x3ffffffeU & ((((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__48__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                        >> 2U) & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__52__KET____DOT__cla_part0__DOT__p)) 
                                      & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__52__KET____DOT__cla_part0__DOT__p) 
                                         << 1U))))));
    vlSelf->div__DOT__cla0__DOT__genblk1__BRA__52__KET____DOT__cla_part0__DOT____Vcellout__carry0__c 
        = ((0xbU & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__52__KET____DOT__cla_part0__DOT____Vcellout__carry0__c)) 
           | (4U & (((0xfffffffcU & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__52__KET____DOT__cla_part0__DOT__g) 
                                     | (((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__52__KET____DOT__cla_part0__DOT__g) 
                                         << 1U) & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__52__KET____DOT__cla_part0__DOT__p)))) 
                     | (((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__52__KET____DOT__cla_part0__DOT__g) 
                         & (6U == (6U & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__52__KET____DOT__cla_part0__DOT__p)))) 
                        << 2U)) | ((IData)((((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__48__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                             >> 3U) 
                                            & (7U == 
                                               (7U 
                                                & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__52__KET____DOT__cla_part0__DOT__p))))) 
                                   << 2U))));
    vlSelf->div__DOT__cla0__DOT__genblk1__BRA__52__KET____DOT__cla_part0__DOT____Vcellout__carry0__c 
        = ((7U & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__52__KET____DOT__cla_part0__DOT____Vcellout__carry0__c)) 
           | (8U & ((((0xfffffff8U & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__52__KET____DOT__cla_part0__DOT__g) 
                                      | (((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__52__KET____DOT__cla_part0__DOT__g) 
                                          << 1U) & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__52__KET____DOT__cla_part0__DOT__p)))) 
                      | ((IData)((((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__52__KET____DOT__cla_part0__DOT__g) 
                                   >> 1U) & (0xcU == 
                                             (0xcU 
                                              & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__52__KET____DOT__cla_part0__DOT__p))))) 
                         << 3U)) | (((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__52__KET____DOT__cla_part0__DOT__g) 
                                     & (0xeU == (0xeU 
                                                 & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__52__KET____DOT__cla_part0__DOT__p)))) 
                                    << 3U)) | ((IData)(
                                                       (((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__48__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                         >> 3U) 
                                                        & (0xfU 
                                                           == (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__52__KET____DOT__cla_part0__DOT__p)))) 
                                               << 3U))));
    vlSelf->div__DOT__cla0__DOT__genblk1__BRA__56__KET____DOT__cla_part0__DOT____Vcellout__carry0__c 
        = ((0xeU & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__56__KET____DOT__cla_part0__DOT____Vcellout__carry0__c)) 
           | (1U & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__56__KET____DOT__cla_part0__DOT__g) 
                    | (((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__52__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                        >> 3U) & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__56__KET____DOT__cla_part0__DOT__p)))));
    vlSelf->div__DOT__cla0__DOT__genblk1__BRA__56__KET____DOT__cla_part0__DOT____Vcellout__carry0__c 
        = ((0xdU & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__56__KET____DOT__cla_part0__DOT____Vcellout__carry0__c)) 
           | (2U & ((0xfffffffeU & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__56__KET____DOT__cla_part0__DOT__g) 
                                    | (((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__56__KET____DOT__cla_part0__DOT__g) 
                                        << 1U) & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__56__KET____DOT__cla_part0__DOT__p)))) 
                    | (0x3ffffffeU & ((((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__52__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                        >> 2U) & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__56__KET____DOT__cla_part0__DOT__p)) 
                                      & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__56__KET____DOT__cla_part0__DOT__p) 
                                         << 1U))))));
    vlSelf->div__DOT__cla0__DOT__genblk1__BRA__56__KET____DOT__cla_part0__DOT____Vcellout__carry0__c 
        = ((0xbU & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__56__KET____DOT__cla_part0__DOT____Vcellout__carry0__c)) 
           | (4U & (((0xfffffffcU & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__56__KET____DOT__cla_part0__DOT__g) 
                                     | (((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__56__KET____DOT__cla_part0__DOT__g) 
                                         << 1U) & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__56__KET____DOT__cla_part0__DOT__p)))) 
                     | (((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__56__KET____DOT__cla_part0__DOT__g) 
                         & (6U == (6U & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__56__KET____DOT__cla_part0__DOT__p)))) 
                        << 2U)) | ((IData)((((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__52__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                             >> 3U) 
                                            & (7U == 
                                               (7U 
                                                & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__56__KET____DOT__cla_part0__DOT__p))))) 
                                   << 2U))));
    vlSelf->div__DOT__cla0__DOT__genblk1__BRA__56__KET____DOT__cla_part0__DOT____Vcellout__carry0__c 
        = ((7U & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__56__KET____DOT__cla_part0__DOT____Vcellout__carry0__c)) 
           | (8U & ((((0xfffffff8U & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__56__KET____DOT__cla_part0__DOT__g) 
                                      | (((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__56__KET____DOT__cla_part0__DOT__g) 
                                          << 1U) & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__56__KET____DOT__cla_part0__DOT__p)))) 
                      | ((IData)((((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__56__KET____DOT__cla_part0__DOT__g) 
                                   >> 1U) & (0xcU == 
                                             (0xcU 
                                              & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__56__KET____DOT__cla_part0__DOT__p))))) 
                         << 3U)) | (((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__56__KET____DOT__cla_part0__DOT__g) 
                                     & (0xeU == (0xeU 
                                                 & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__56__KET____DOT__cla_part0__DOT__p)))) 
                                    << 3U)) | ((IData)(
                                                       (((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__52__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                         >> 3U) 
                                                        & (0xfU 
                                                           == (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__56__KET____DOT__cla_part0__DOT__p)))) 
                                               << 3U))));
    vlSelf->div__DOT__cla0__DOT__genblk1__BRA__60__KET____DOT__cla_part0__DOT____Vcellout__carry0__c 
        = ((0xeU & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__60__KET____DOT__cla_part0__DOT____Vcellout__carry0__c)) 
           | (1U & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__60__KET____DOT__cla_part0__DOT__g) 
                    | (((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__56__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                        >> 3U) & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__60__KET____DOT__cla_part0__DOT__p)))));
    vlSelf->div__DOT__cla0__DOT__genblk1__BRA__60__KET____DOT__cla_part0__DOT____Vcellout__carry0__c 
        = ((0xdU & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__60__KET____DOT__cla_part0__DOT____Vcellout__carry0__c)) 
           | (2U & ((0xfffffffeU & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__60__KET____DOT__cla_part0__DOT__g) 
                                    | (((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__60__KET____DOT__cla_part0__DOT__g) 
                                        << 1U) & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__60__KET____DOT__cla_part0__DOT__p)))) 
                    | (0x3ffffffeU & ((((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__56__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                        >> 2U) & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__60__KET____DOT__cla_part0__DOT__p)) 
                                      & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__60__KET____DOT__cla_part0__DOT__p) 
                                         << 1U))))));
    vlSelf->div__DOT__cla0__DOT__genblk1__BRA__60__KET____DOT__cla_part0__DOT____Vcellout__carry0__c 
        = ((0xbU & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__60__KET____DOT__cla_part0__DOT____Vcellout__carry0__c)) 
           | (4U & (((0xfffffffcU & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__60__KET____DOT__cla_part0__DOT__g) 
                                     | (((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__60__KET____DOT__cla_part0__DOT__g) 
                                         << 1U) & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__60__KET____DOT__cla_part0__DOT__p)))) 
                     | (((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__60__KET____DOT__cla_part0__DOT__g) 
                         & (6U == (6U & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__60__KET____DOT__cla_part0__DOT__p)))) 
                        << 2U)) | ((IData)((((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__56__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                             >> 3U) 
                                            & (7U == 
                                               (7U 
                                                & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__60__KET____DOT__cla_part0__DOT__p))))) 
                                   << 2U))));
    vlSelf->div__DOT__cla0__DOT__genblk1__BRA__60__KET____DOT__cla_part0__DOT____Vcellout__carry0__c 
        = ((7U & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__60__KET____DOT__cla_part0__DOT____Vcellout__carry0__c)) 
           | (8U & ((((0xfffffff8U & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__60__KET____DOT__cla_part0__DOT__g) 
                                      | (((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__60__KET____DOT__cla_part0__DOT__g) 
                                          << 1U) & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__60__KET____DOT__cla_part0__DOT__p)))) 
                      | ((IData)((((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__60__KET____DOT__cla_part0__DOT__g) 
                                   >> 1U) & (0xcU == 
                                             (0xcU 
                                              & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__60__KET____DOT__cla_part0__DOT__p))))) 
                         << 3U)) | (((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__60__KET____DOT__cla_part0__DOT__g) 
                                     & (0xeU == (0xeU 
                                                 & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__60__KET____DOT__cla_part0__DOT__p)))) 
                                    << 3U)) | ((IData)(
                                                       (((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__56__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                         >> 3U) 
                                                        & (0xfU 
                                                           == (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__60__KET____DOT__cla_part0__DOT__p)))) 
                                               << 3U))));
}

void Vdiv___024root___act_sequent__TOP__0(Vdiv___024root* vlSelf);
void Vdiv___024root___act_sequent__TOP__1(Vdiv___024root* vlSelf);
void Vdiv___024root___act_sequent__TOP__2(Vdiv___024root* vlSelf);
void Vdiv___024root___act_sequent__TOP__3(Vdiv___024root* vlSelf);
void Vdiv___024root___act_sequent__TOP__4(Vdiv___024root* vlSelf);
void Vdiv___024root___act_sequent__TOP__5(Vdiv___024root* vlSelf);
void Vdiv___024root___act_sequent__TOP__6(Vdiv___024root* vlSelf);
void Vdiv___024root___act_sequent__TOP__7(Vdiv___024root* vlSelf);
void Vdiv___024root___act_comb__TOP__0(Vdiv___024root* vlSelf);
void Vdiv___024root___act_comb__TOP__1(Vdiv___024root* vlSelf);
void Vdiv___024root___act_comb__TOP__2(Vdiv___024root* vlSelf);
void Vdiv___024root___act_comb__TOP__3(Vdiv___024root* vlSelf);
void Vdiv___024root___act_comb__TOP__4(Vdiv___024root* vlSelf);
void Vdiv___024root___act_comb__TOP__5(Vdiv___024root* vlSelf);
void Vdiv___024root___act_comb__TOP__6(Vdiv___024root* vlSelf);

VL_ATTR_COLD void Vdiv___024root___eval_stl(Vdiv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdiv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdiv___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vdiv___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
    if ((vlSelf->__VstlTriggered.at(0U) | vlSelf->__VstlTriggered.at(7U))) {
        Vdiv___024root___act_sequent__TOP__0(vlSelf);
    }
    if ((vlSelf->__VstlTriggered.at(0U) | vlSelf->__VstlTriggered.at(5U))) {
        Vdiv___024root___act_sequent__TOP__1(vlSelf);
    }
    if ((vlSelf->__VstlTriggered.at(0U) | vlSelf->__VstlTriggered.at(8U))) {
        Vdiv___024root___act_sequent__TOP__2(vlSelf);
    }
    if ((vlSelf->__VstlTriggered.at(0U) | vlSelf->__VstlTriggered.at(3U))) {
        Vdiv___024root___act_sequent__TOP__3(vlSelf);
    }
    if ((vlSelf->__VstlTriggered.at(0U) | vlSelf->__VstlTriggered.at(6U))) {
        Vdiv___024root___act_sequent__TOP__4(vlSelf);
    }
    if ((vlSelf->__VstlTriggered.at(0U) | vlSelf->__VstlTriggered.at(1U))) {
        Vdiv___024root___act_sequent__TOP__5(vlSelf);
    }
    if ((vlSelf->__VstlTriggered.at(0U) | vlSelf->__VstlTriggered.at(4U))) {
        Vdiv___024root___act_sequent__TOP__6(vlSelf);
    }
    if ((vlSelf->__VstlTriggered.at(0U) | vlSelf->__VstlTriggered.at(2U))) {
        Vdiv___024root___act_sequent__TOP__7(vlSelf);
    }
    if (((vlSelf->__VstlTriggered.at(0U) | vlSelf->__VstlTriggered.at(7U)) 
         | vlSelf->__VstlTriggered.at(8U))) {
        Vdiv___024root___act_comb__TOP__0(vlSelf);
    }
    if (((vlSelf->__VstlTriggered.at(0U) | vlSelf->__VstlTriggered.at(5U)) 
         | vlSelf->__VstlTriggered.at(6U))) {
        Vdiv___024root___act_comb__TOP__1(vlSelf);
    }
    if (((((vlSelf->__VstlTriggered.at(0U) | vlSelf->__VstlTriggered.at(5U)) 
           | vlSelf->__VstlTriggered.at(6U)) | vlSelf->__VstlTriggered.at(7U)) 
         | vlSelf->__VstlTriggered.at(8U))) {
        Vdiv___024root___act_comb__TOP__2(vlSelf);
    }
    if (((vlSelf->__VstlTriggered.at(0U) | vlSelf->__VstlTriggered.at(3U)) 
         | vlSelf->__VstlTriggered.at(4U))) {
        Vdiv___024root___act_comb__TOP__3(vlSelf);
    }
    if (((vlSelf->__VstlTriggered.at(0U) | vlSelf->__VstlTriggered.at(1U)) 
         | vlSelf->__VstlTriggered.at(2U))) {
        Vdiv___024root___act_comb__TOP__4(vlSelf);
    }
    if (((((vlSelf->__VstlTriggered.at(0U) | vlSelf->__VstlTriggered.at(1U)) 
           | vlSelf->__VstlTriggered.at(2U)) | vlSelf->__VstlTriggered.at(3U)) 
         | vlSelf->__VstlTriggered.at(4U))) {
        Vdiv___024root___act_comb__TOP__5(vlSelf);
    }
    if (((((((((vlSelf->__VstlTriggered.at(0U) | vlSelf->__VstlTriggered.at(1U)) 
               | vlSelf->__VstlTriggered.at(2U)) | vlSelf->__VstlTriggered.at(3U)) 
             | vlSelf->__VstlTriggered.at(4U)) | vlSelf->__VstlTriggered.at(5U)) 
           | vlSelf->__VstlTriggered.at(6U)) | vlSelf->__VstlTriggered.at(7U)) 
         | vlSelf->__VstlTriggered.at(8U))) {
        Vdiv___024root___act_comb__TOP__6(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdiv___024root___dump_triggers__ico(Vdiv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdiv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdiv___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VicoTriggered.at(0U)) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdiv___024root___dump_triggers__act(Vdiv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdiv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdiv___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([hybrid] div.lzd0.lzd_32_0.__Vcellout__lzd_16_1____pinNumber2)\n");
    }
    if (vlSelf->__VactTriggered.at(1U)) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([hybrid] div.lzd0.lzd_32_0.__Vcellout__lzd_16_0____pinNumber2)\n");
    }
    if (vlSelf->__VactTriggered.at(2U)) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([hybrid] div.lzd0.lzd_32_1.__Vcellout__lzd_16_1____pinNumber2)\n");
    }
    if (vlSelf->__VactTriggered.at(3U)) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @([hybrid] div.lzd0.lzd_32_1.__Vcellout__lzd_16_0____pinNumber2)\n");
    }
    if (vlSelf->__VactTriggered.at(4U)) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @([hybrid] div.lzd1.lzd_32_0.__Vcellout__lzd_16_1____pinNumber2)\n");
    }
    if (vlSelf->__VactTriggered.at(5U)) {
        VL_DBG_MSGF("         'act' region trigger index 5 is active: @([hybrid] div.lzd1.lzd_32_0.__Vcellout__lzd_16_0____pinNumber2)\n");
    }
    if (vlSelf->__VactTriggered.at(6U)) {
        VL_DBG_MSGF("         'act' region trigger index 6 is active: @([hybrid] div.lzd1.lzd_32_1.__Vcellout__lzd_16_1____pinNumber2)\n");
    }
    if (vlSelf->__VactTriggered.at(7U)) {
        VL_DBG_MSGF("         'act' region trigger index 7 is active: @([hybrid] div.lzd1.lzd_32_1.__Vcellout__lzd_16_0____pinNumber2)\n");
    }
    if (vlSelf->__VactTriggered.at(8U)) {
        VL_DBG_MSGF("         'act' region trigger index 8 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdiv___024root___dump_triggers__nba(Vdiv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdiv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdiv___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([hybrid] div.lzd0.lzd_32_0.__Vcellout__lzd_16_1____pinNumber2)\n");
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([hybrid] div.lzd0.lzd_32_0.__Vcellout__lzd_16_0____pinNumber2)\n");
    }
    if (vlSelf->__VnbaTriggered.at(2U)) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([hybrid] div.lzd0.lzd_32_1.__Vcellout__lzd_16_1____pinNumber2)\n");
    }
    if (vlSelf->__VnbaTriggered.at(3U)) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @([hybrid] div.lzd0.lzd_32_1.__Vcellout__lzd_16_0____pinNumber2)\n");
    }
    if (vlSelf->__VnbaTriggered.at(4U)) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @([hybrid] div.lzd1.lzd_32_0.__Vcellout__lzd_16_1____pinNumber2)\n");
    }
    if (vlSelf->__VnbaTriggered.at(5U)) {
        VL_DBG_MSGF("         'nba' region trigger index 5 is active: @([hybrid] div.lzd1.lzd_32_0.__Vcellout__lzd_16_0____pinNumber2)\n");
    }
    if (vlSelf->__VnbaTriggered.at(6U)) {
        VL_DBG_MSGF("         'nba' region trigger index 6 is active: @([hybrid] div.lzd1.lzd_32_1.__Vcellout__lzd_16_1____pinNumber2)\n");
    }
    if (vlSelf->__VnbaTriggered.at(7U)) {
        VL_DBG_MSGF("         'nba' region trigger index 7 is active: @([hybrid] div.lzd1.lzd_32_1.__Vcellout__lzd_16_0____pinNumber2)\n");
    }
    if (vlSelf->__VnbaTriggered.at(8U)) {
        VL_DBG_MSGF("         'nba' region trigger index 8 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vdiv___024root___ctor_var_reset(Vdiv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdiv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdiv___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = 0;
    vlSelf->rst_n = 0;
    vlSelf->valid = 0;
    vlSelf->sign = 0;
    vlSelf->x = 0;
    vlSelf->y = 0;
    vlSelf->result = 0;
    vlSelf->rem = 0;
    vlSelf->finish = 0;
    vlSelf->div__DOT__current_state = 0;
    vlSelf->div__DOT__next_state = 0;
    vlSelf->div__DOT____Vcellinp__oppo0____pinNumber2 = 0;
    vlSelf->div__DOT____Vcellinp__oppo1____pinNumber2 = 0;
    vlSelf->div__DOT__x_abs_reg = 0;
    vlSelf->div__DOT__y_abs_reg = 0;
    vlSelf->div__DOT__divisor_n = 0;
    vlSelf->div__DOT__divisor = 0;
    vlSelf->div__DOT__dividend = 0;
    vlSelf->div__DOT__shift_y = 0;
    vlSelf->div__DOT__shift_x_tmp = 0;
    vlSelf->div__DOT__shift = 0;
    vlSelf->div__DOT__q = 0;
    vlSelf->div__DOT__cout = 0;
    vlSelf->div__DOT__add_B = 0;
    vlSelf->div__DOT__fix_a = 0;
    vlSelf->div__DOT__fix_b = 0;
    vlSelf->div__DOT__s_abs_reg = 0;
    vlSelf->div__DOT__r_abs_reg = 0;
    vlSelf->div__DOT__r_abs = 0;
    vlSelf->div__DOT__i = 0;
    vlSelf->div__DOT____Vcellinp__oppo2____pinNumber2 = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->div__DOT__lzd0__DOT__out_3_0[__Vi0] = 0;
    }
    vlSelf->div__DOT__lzd0__DOT____Vcellout__lzd_32_0____pinNumber3 = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->div__DOT__lzd0__DOT__lzd_32_0__DOT__out_3_0[__Vi0] = 0;
    }
    vlSelf->div__DOT__lzd0__DOT__lzd_32_0__DOT____Vcellout__lzd_16_0____pinNumber2 = 0;
    vlSelf->div__DOT__lzd0__DOT__lzd_32_0__DOT____Vcellout__lzd_16_1____pinNumber2 = 0;
    vlSelf->div__DOT__lzd0__DOT__lzd_32_0__DOT__lzd_16_0__DOT__z = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->div__DOT__lzd0__DOT__lzd_32_0__DOT__lzd_16_0__DOT__out_2[__Vi0] = 0;
    }
    vlSelf->div__DOT__lzd0__DOT__lzd_32_0__DOT__lzd_16_1__DOT__z = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->div__DOT__lzd0__DOT__lzd_32_0__DOT__lzd_16_1__DOT__out_2[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->div__DOT__lzd0__DOT__lzd_32_1__DOT__out_3_0[__Vi0] = 0;
    }
    vlSelf->div__DOT__lzd0__DOT__lzd_32_1__DOT____Vcellout__lzd_16_0____pinNumber2 = 0;
    vlSelf->div__DOT__lzd0__DOT__lzd_32_1__DOT____Vcellout__lzd_16_1____pinNumber2 = 0;
    vlSelf->div__DOT__lzd0__DOT__lzd_32_1__DOT__lzd_16_0__DOT__z = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->div__DOT__lzd0__DOT__lzd_32_1__DOT__lzd_16_0__DOT__out_2[__Vi0] = 0;
    }
    vlSelf->div__DOT__lzd0__DOT__lzd_32_1__DOT__lzd_16_1__DOT__z = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->div__DOT__lzd0__DOT__lzd_32_1__DOT__lzd_16_1__DOT__out_2[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->div__DOT__lzd1__DOT__out_3_0[__Vi0] = 0;
    }
    vlSelf->div__DOT__lzd1__DOT____Vcellout__lzd_32_0____pinNumber3 = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->div__DOT__lzd1__DOT__lzd_32_0__DOT__out_3_0[__Vi0] = 0;
    }
    vlSelf->div__DOT__lzd1__DOT__lzd_32_0__DOT____Vcellout__lzd_16_0____pinNumber2 = 0;
    vlSelf->div__DOT__lzd1__DOT__lzd_32_0__DOT____Vcellout__lzd_16_1____pinNumber2 = 0;
    vlSelf->div__DOT__lzd1__DOT__lzd_32_0__DOT__lzd_16_0__DOT__z = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->div__DOT__lzd1__DOT__lzd_32_0__DOT__lzd_16_0__DOT__out_2[__Vi0] = 0;
    }
    vlSelf->div__DOT__lzd1__DOT__lzd_32_0__DOT__lzd_16_1__DOT__z = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->div__DOT__lzd1__DOT__lzd_32_0__DOT__lzd_16_1__DOT__out_2[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->div__DOT__lzd1__DOT__lzd_32_1__DOT__out_3_0[__Vi0] = 0;
    }
    vlSelf->div__DOT__lzd1__DOT__lzd_32_1__DOT____Vcellout__lzd_16_0____pinNumber2 = 0;
    vlSelf->div__DOT__lzd1__DOT__lzd_32_1__DOT____Vcellout__lzd_16_1____pinNumber2 = 0;
    vlSelf->div__DOT__lzd1__DOT__lzd_32_1__DOT__lzd_16_0__DOT__z = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->div__DOT__lzd1__DOT__lzd_32_1__DOT__lzd_16_0__DOT__out_2[__Vi0] = 0;
    }
    vlSelf->div__DOT__lzd1__DOT__lzd_32_1__DOT__lzd_16_1__DOT__z = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->div__DOT__lzd1__DOT__lzd_32_1__DOT__lzd_16_1__DOT__out_2[__Vi0] = 0;
    }
    vlSelf->div__DOT__cla0__DOT__genblk1__BRA__0__KET____DOT__cla_part0__DOT__p = 0;
    vlSelf->div__DOT__cla0__DOT__genblk1__BRA__0__KET____DOT__cla_part0__DOT__g = 0;
    vlSelf->div__DOT__cla0__DOT__genblk1__BRA__0__KET____DOT__cla_part0__DOT____Vcellout__carry0__c = 0;
    vlSelf->div__DOT__cla0__DOT__genblk1__BRA__4__KET____DOT__cla_part0__DOT__p = 0;
    vlSelf->div__DOT__cla0__DOT__genblk1__BRA__4__KET____DOT__cla_part0__DOT__g = 0;
    vlSelf->div__DOT__cla0__DOT__genblk1__BRA__4__KET____DOT__cla_part0__DOT____Vcellout__carry0__c = 0;
    vlSelf->div__DOT__cla0__DOT__genblk1__BRA__8__KET____DOT__cla_part0__DOT__p = 0;
    vlSelf->div__DOT__cla0__DOT__genblk1__BRA__8__KET____DOT__cla_part0__DOT__g = 0;
    vlSelf->div__DOT__cla0__DOT__genblk1__BRA__8__KET____DOT__cla_part0__DOT____Vcellout__carry0__c = 0;
    vlSelf->div__DOT__cla0__DOT__genblk1__BRA__12__KET____DOT__cla_part0__DOT__p = 0;
    vlSelf->div__DOT__cla0__DOT__genblk1__BRA__12__KET____DOT__cla_part0__DOT__g = 0;
    vlSelf->div__DOT__cla0__DOT__genblk1__BRA__12__KET____DOT__cla_part0__DOT____Vcellout__carry0__c = 0;
    vlSelf->div__DOT__cla0__DOT__genblk1__BRA__16__KET____DOT__cla_part0__DOT__p = 0;
    vlSelf->div__DOT__cla0__DOT__genblk1__BRA__16__KET____DOT__cla_part0__DOT__g = 0;
    vlSelf->div__DOT__cla0__DOT__genblk1__BRA__16__KET____DOT__cla_part0__DOT____Vcellout__carry0__c = 0;
    vlSelf->div__DOT__cla0__DOT__genblk1__BRA__20__KET____DOT__cla_part0__DOT__p = 0;
    vlSelf->div__DOT__cla0__DOT__genblk1__BRA__20__KET____DOT__cla_part0__DOT__g = 0;
    vlSelf->div__DOT__cla0__DOT__genblk1__BRA__20__KET____DOT__cla_part0__DOT____Vcellout__carry0__c = 0;
    vlSelf->div__DOT__cla0__DOT__genblk1__BRA__24__KET____DOT__cla_part0__DOT__p = 0;
    vlSelf->div__DOT__cla0__DOT__genblk1__BRA__24__KET____DOT__cla_part0__DOT__g = 0;
    vlSelf->div__DOT__cla0__DOT__genblk1__BRA__24__KET____DOT__cla_part0__DOT____Vcellout__carry0__c = 0;
    vlSelf->div__DOT__cla0__DOT__genblk1__BRA__28__KET____DOT__cla_part0__DOT__p = 0;
    vlSelf->div__DOT__cla0__DOT__genblk1__BRA__28__KET____DOT__cla_part0__DOT__g = 0;
    vlSelf->div__DOT__cla0__DOT__genblk1__BRA__28__KET____DOT__cla_part0__DOT____Vcellout__carry0__c = 0;
    vlSelf->div__DOT__cla0__DOT__genblk1__BRA__32__KET____DOT__cla_part0__DOT__p = 0;
    vlSelf->div__DOT__cla0__DOT__genblk1__BRA__32__KET____DOT__cla_part0__DOT__g = 0;
    vlSelf->div__DOT__cla0__DOT__genblk1__BRA__32__KET____DOT__cla_part0__DOT____Vcellout__carry0__c = 0;
    vlSelf->div__DOT__cla0__DOT__genblk1__BRA__36__KET____DOT__cla_part0__DOT__p = 0;
    vlSelf->div__DOT__cla0__DOT__genblk1__BRA__36__KET____DOT__cla_part0__DOT__g = 0;
    vlSelf->div__DOT__cla0__DOT__genblk1__BRA__36__KET____DOT__cla_part0__DOT____Vcellout__carry0__c = 0;
    vlSelf->div__DOT__cla0__DOT__genblk1__BRA__40__KET____DOT__cla_part0__DOT__p = 0;
    vlSelf->div__DOT__cla0__DOT__genblk1__BRA__40__KET____DOT__cla_part0__DOT__g = 0;
    vlSelf->div__DOT__cla0__DOT__genblk1__BRA__40__KET____DOT__cla_part0__DOT____Vcellout__carry0__c = 0;
    vlSelf->div__DOT__cla0__DOT__genblk1__BRA__44__KET____DOT__cla_part0__DOT__p = 0;
    vlSelf->div__DOT__cla0__DOT__genblk1__BRA__44__KET____DOT__cla_part0__DOT__g = 0;
    vlSelf->div__DOT__cla0__DOT__genblk1__BRA__44__KET____DOT__cla_part0__DOT____Vcellout__carry0__c = 0;
    vlSelf->div__DOT__cla0__DOT__genblk1__BRA__48__KET____DOT__cla_part0__DOT__p = 0;
    vlSelf->div__DOT__cla0__DOT__genblk1__BRA__48__KET____DOT__cla_part0__DOT__g = 0;
    vlSelf->div__DOT__cla0__DOT__genblk1__BRA__48__KET____DOT__cla_part0__DOT____Vcellout__carry0__c = 0;
    vlSelf->div__DOT__cla0__DOT__genblk1__BRA__52__KET____DOT__cla_part0__DOT__p = 0;
    vlSelf->div__DOT__cla0__DOT__genblk1__BRA__52__KET____DOT__cla_part0__DOT__g = 0;
    vlSelf->div__DOT__cla0__DOT__genblk1__BRA__52__KET____DOT__cla_part0__DOT____Vcellout__carry0__c = 0;
    vlSelf->div__DOT__cla0__DOT__genblk1__BRA__56__KET____DOT__cla_part0__DOT__p = 0;
    vlSelf->div__DOT__cla0__DOT__genblk1__BRA__56__KET____DOT__cla_part0__DOT__g = 0;
    vlSelf->div__DOT__cla0__DOT__genblk1__BRA__56__KET____DOT__cla_part0__DOT____Vcellout__carry0__c = 0;
    vlSelf->div__DOT__cla0__DOT__genblk1__BRA__60__KET____DOT__cla_part0__DOT__p = 0;
    vlSelf->div__DOT__cla0__DOT__genblk1__BRA__60__KET____DOT__cla_part0__DOT__g = 0;
    vlSelf->div__DOT__cla0__DOT__genblk1__BRA__60__KET____DOT__cla_part0__DOT____Vcellout__carry0__c = 0;
    vlSelf->div__DOT__cla1__DOT__genblk1__BRA__0__KET____DOT__cla_part0__DOT__p = 0;
    vlSelf->div__DOT__cla1__DOT__genblk1__BRA__0__KET____DOT__cla_part0__DOT__g = 0;
    vlSelf->div__DOT__cla1__DOT__genblk1__BRA__0__KET____DOT__cla_part0__DOT____Vcellout__carry0__c = 0;
    vlSelf->div__DOT__cla1__DOT__genblk1__BRA__4__KET____DOT__cla_part0__DOT__p = 0;
    vlSelf->div__DOT__cla1__DOT__genblk1__BRA__4__KET____DOT__cla_part0__DOT__g = 0;
    vlSelf->div__DOT__cla1__DOT__genblk1__BRA__4__KET____DOT__cla_part0__DOT____Vcellout__carry0__c = 0;
    vlSelf->div__DOT__cla1__DOT__genblk1__BRA__8__KET____DOT__cla_part0__DOT__p = 0;
    vlSelf->div__DOT__cla1__DOT__genblk1__BRA__8__KET____DOT__cla_part0__DOT__g = 0;
    vlSelf->div__DOT__cla1__DOT__genblk1__BRA__8__KET____DOT__cla_part0__DOT____Vcellout__carry0__c = 0;
    vlSelf->div__DOT__cla1__DOT__genblk1__BRA__12__KET____DOT__cla_part0__DOT__p = 0;
    vlSelf->div__DOT__cla1__DOT__genblk1__BRA__12__KET____DOT__cla_part0__DOT__g = 0;
    vlSelf->div__DOT__cla1__DOT__genblk1__BRA__12__KET____DOT__cla_part0__DOT____Vcellout__carry0__c = 0;
    vlSelf->div__DOT__cla1__DOT__genblk1__BRA__16__KET____DOT__cla_part0__DOT__p = 0;
    vlSelf->div__DOT__cla1__DOT__genblk1__BRA__16__KET____DOT__cla_part0__DOT__g = 0;
    vlSelf->div__DOT__cla1__DOT__genblk1__BRA__16__KET____DOT__cla_part0__DOT____Vcellout__carry0__c = 0;
    vlSelf->div__DOT__cla1__DOT__genblk1__BRA__20__KET____DOT__cla_part0__DOT__p = 0;
    vlSelf->div__DOT__cla1__DOT__genblk1__BRA__20__KET____DOT__cla_part0__DOT__g = 0;
    vlSelf->div__DOT__cla1__DOT__genblk1__BRA__20__KET____DOT__cla_part0__DOT____Vcellout__carry0__c = 0;
    vlSelf->div__DOT__cla1__DOT__genblk1__BRA__24__KET____DOT__cla_part0__DOT__p = 0;
    vlSelf->div__DOT__cla1__DOT__genblk1__BRA__24__KET____DOT__cla_part0__DOT__g = 0;
    vlSelf->div__DOT__cla1__DOT__genblk1__BRA__24__KET____DOT__cla_part0__DOT____Vcellout__carry0__c = 0;
    vlSelf->div__DOT__cla1__DOT__genblk1__BRA__28__KET____DOT__cla_part0__DOT__p = 0;
    vlSelf->div__DOT__cla1__DOT__genblk1__BRA__28__KET____DOT__cla_part0__DOT__g = 0;
    vlSelf->div__DOT__cla1__DOT__genblk1__BRA__28__KET____DOT__cla_part0__DOT____Vcellout__carry0__c = 0;
    vlSelf->div__DOT__cla1__DOT__genblk1__BRA__32__KET____DOT__cla_part0__DOT__p = 0;
    vlSelf->div__DOT__cla1__DOT__genblk1__BRA__32__KET____DOT__cla_part0__DOT__g = 0;
    vlSelf->div__DOT__cla1__DOT__genblk1__BRA__32__KET____DOT__cla_part0__DOT____Vcellout__carry0__c = 0;
    vlSelf->div__DOT__cla1__DOT__genblk1__BRA__36__KET____DOT__cla_part0__DOT__p = 0;
    vlSelf->div__DOT__cla1__DOT__genblk1__BRA__36__KET____DOT__cla_part0__DOT__g = 0;
    vlSelf->div__DOT__cla1__DOT__genblk1__BRA__36__KET____DOT__cla_part0__DOT____Vcellout__carry0__c = 0;
    vlSelf->div__DOT__cla1__DOT__genblk1__BRA__40__KET____DOT__cla_part0__DOT__p = 0;
    vlSelf->div__DOT__cla1__DOT__genblk1__BRA__40__KET____DOT__cla_part0__DOT__g = 0;
    vlSelf->div__DOT__cla1__DOT__genblk1__BRA__40__KET____DOT__cla_part0__DOT____Vcellout__carry0__c = 0;
    vlSelf->div__DOT__cla1__DOT__genblk1__BRA__44__KET____DOT__cla_part0__DOT__p = 0;
    vlSelf->div__DOT__cla1__DOT__genblk1__BRA__44__KET____DOT__cla_part0__DOT__g = 0;
    vlSelf->div__DOT__cla1__DOT__genblk1__BRA__44__KET____DOT__cla_part0__DOT____Vcellout__carry0__c = 0;
    vlSelf->div__DOT__cla1__DOT__genblk1__BRA__48__KET____DOT__cla_part0__DOT__p = 0;
    vlSelf->div__DOT__cla1__DOT__genblk1__BRA__48__KET____DOT__cla_part0__DOT__g = 0;
    vlSelf->div__DOT__cla1__DOT__genblk1__BRA__48__KET____DOT__cla_part0__DOT____Vcellout__carry0__c = 0;
    vlSelf->div__DOT__cla1__DOT__genblk1__BRA__52__KET____DOT__cla_part0__DOT__p = 0;
    vlSelf->div__DOT__cla1__DOT__genblk1__BRA__52__KET____DOT__cla_part0__DOT__g = 0;
    vlSelf->div__DOT__cla1__DOT__genblk1__BRA__52__KET____DOT__cla_part0__DOT____Vcellout__carry0__c = 0;
    vlSelf->div__DOT__cla1__DOT__genblk1__BRA__56__KET____DOT__cla_part0__DOT__p = 0;
    vlSelf->div__DOT__cla1__DOT__genblk1__BRA__56__KET____DOT__cla_part0__DOT__g = 0;
    vlSelf->div__DOT__cla1__DOT__genblk1__BRA__56__KET____DOT__cla_part0__DOT____Vcellout__carry0__c = 0;
    vlSelf->div__DOT__cla1__DOT__genblk1__BRA__60__KET____DOT__cla_part0__DOT__p = 0;
    vlSelf->div__DOT__cla1__DOT__genblk1__BRA__60__KET____DOT__cla_part0__DOT__g = 0;
    vlSelf->div__DOT__cla1__DOT__genblk1__BRA__60__KET____DOT__cla_part0__DOT____Vcellout__carry0__c = 0;
    vlSelf->__Vtrigrprev__TOP__div__DOT__lzd0__DOT__lzd_32_0__DOT____Vcellout__lzd_16_1____pinNumber2 = 0;
    vlSelf->__Vtrigrprev__TOP__div__DOT__lzd0__DOT__lzd_32_0__DOT____Vcellout__lzd_16_0____pinNumber2 = 0;
    vlSelf->__Vtrigrprev__TOP__div__DOT__lzd0__DOT__lzd_32_1__DOT____Vcellout__lzd_16_1____pinNumber2 = 0;
    vlSelf->__Vtrigrprev__TOP__div__DOT__lzd0__DOT__lzd_32_1__DOT____Vcellout__lzd_16_0____pinNumber2 = 0;
    vlSelf->__Vtrigrprev__TOP__div__DOT__lzd1__DOT__lzd_32_0__DOT____Vcellout__lzd_16_1____pinNumber2 = 0;
    vlSelf->__Vtrigrprev__TOP__div__DOT__lzd1__DOT__lzd_32_0__DOT____Vcellout__lzd_16_0____pinNumber2 = 0;
    vlSelf->__Vtrigrprev__TOP__div__DOT__lzd1__DOT__lzd_32_1__DOT____Vcellout__lzd_16_1____pinNumber2 = 0;
    vlSelf->__Vtrigrprev__TOP__div__DOT__lzd1__DOT__lzd_32_1__DOT____Vcellout__lzd_16_0____pinNumber2 = 0;
    vlSelf->__VstlDidInit = 0;
    vlSelf->__Vtrigrprev__TOP__clk = 0;
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
