// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdiv.h for the primary calling header

#include "verilated.h"

#include "Vdiv__Syms.h"
#include "Vdiv___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdiv___024root___dump_triggers__stl(Vdiv___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vdiv___024root___eval_triggers__stl(Vdiv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdiv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdiv___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.at(0U) = (0U == vlSelf->__VstlIterCount);
    vlSelf->__VstlTriggered.at(1U) = ((IData)(vlSelf->div__DOT__lzd0__DOT__lzd_32_0__DOT____Vcellout__lzd_16_1____pinNumber2) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__div__DOT__lzd0__DOT__lzd_32_0__DOT____Vcellout__lzd_16_1____pinNumber2));
    vlSelf->__VstlTriggered.at(2U) = ((IData)(vlSelf->div__DOT__lzd0__DOT__lzd_32_0__DOT____Vcellout__lzd_16_0____pinNumber2) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__div__DOT__lzd0__DOT__lzd_32_0__DOT____Vcellout__lzd_16_0____pinNumber2));
    vlSelf->__VstlTriggered.at(3U) = ((IData)(vlSelf->div__DOT__lzd0__DOT__lzd_32_1__DOT____Vcellout__lzd_16_1____pinNumber2) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__div__DOT__lzd0__DOT__lzd_32_1__DOT____Vcellout__lzd_16_1____pinNumber2));
    vlSelf->__VstlTriggered.at(4U) = ((IData)(vlSelf->div__DOT__lzd0__DOT__lzd_32_1__DOT____Vcellout__lzd_16_0____pinNumber2) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__div__DOT__lzd0__DOT__lzd_32_1__DOT____Vcellout__lzd_16_0____pinNumber2));
    vlSelf->__VstlTriggered.at(5U) = ((IData)(vlSelf->div__DOT__lzd1__DOT__lzd_32_0__DOT____Vcellout__lzd_16_1____pinNumber2) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__div__DOT__lzd1__DOT__lzd_32_0__DOT____Vcellout__lzd_16_1____pinNumber2));
    vlSelf->__VstlTriggered.at(6U) = ((IData)(vlSelf->div__DOT__lzd1__DOT__lzd_32_0__DOT____Vcellout__lzd_16_0____pinNumber2) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__div__DOT__lzd1__DOT__lzd_32_0__DOT____Vcellout__lzd_16_0____pinNumber2));
    vlSelf->__VstlTriggered.at(7U) = ((IData)(vlSelf->div__DOT__lzd1__DOT__lzd_32_1__DOT____Vcellout__lzd_16_1____pinNumber2) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__div__DOT__lzd1__DOT__lzd_32_1__DOT____Vcellout__lzd_16_1____pinNumber2));
    vlSelf->__VstlTriggered.at(8U) = ((IData)(vlSelf->div__DOT__lzd1__DOT__lzd_32_1__DOT____Vcellout__lzd_16_0____pinNumber2) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__div__DOT__lzd1__DOT__lzd_32_1__DOT____Vcellout__lzd_16_0____pinNumber2));
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
        Vdiv___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
