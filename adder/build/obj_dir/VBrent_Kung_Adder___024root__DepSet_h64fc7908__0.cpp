// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VBrent_Kung_Adder.h for the primary calling header

#include "verilated.h"

#include "VBrent_Kung_Adder___024root.h"

VL_INLINE_OPT void VBrent_Kung_Adder___024root___ico_comb__TOP__0(VBrent_Kung_Adder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBrent_Kung_Adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBrent_Kung_Adder___024root___ico_comb__TOP__0\n"); );
    // Body
    vlSelf->Brent_Kung_Adder__DOT____Vcellout__cin_generation__BRA__5__KET____DOT__f__cin 
        = (1U & (((vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp 
                   >> 0x1aU) & (IData)(vlSelf->c0)) 
                 | (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp 
                    >> 0x1bU)));
    vlSelf->Brent_Kung_Adder__DOT____Vcellout__cin_generation__BRA__4__KET____DOT__f__cin 
        = (1U & (((IData)((0x1400000U == (0x1400000U 
                                          & vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp))) 
                  & (IData)(vlSelf->c0)) | ((IData)(
                                                    (0x1800000U 
                                                     == 
                                                     (0x1800000U 
                                                      & vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp))) 
                                            | (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp 
                                               >> 0x19U))));
    vlSelf->Brent_Kung_Adder__DOT____Vcellout__cin_generation__BRA__3__KET____DOT__f__cin 
        = (1U & (((vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp 
                   >> 0x16U) & (IData)(vlSelf->c0)) 
                 | (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp 
                    >> 0x17U)));
    vlSelf->Brent_Kung_Adder__DOT____Vcellout__cin_generation__BRA__2__KET____DOT__f__cin 
        = (1U & (((IData)((0x140000U == (0x140000U 
                                         & vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp))) 
                  & (IData)(vlSelf->c0)) | ((IData)(
                                                    (0x180000U 
                                                     == 
                                                     (0x180000U 
                                                      & vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp))) 
                                            | (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp 
                                               >> 0x15U))));
    vlSelf->Brent_Kung_Adder__DOT____Vcellout__cin_generation__BRA__1__KET____DOT__f__cin 
        = (1U & (((vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp 
                   >> 0x12U) & (IData)(vlSelf->c0)) 
                 | (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp 
                    >> 0x13U)));
    vlSelf->Brent_Kung_Adder__DOT____Vcellout__cin_generation__BRA__0__KET____DOT__f__cin 
        = (1U & (((vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp 
                   >> 0x10U) & (IData)(vlSelf->c0)) 
                 | (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp 
                    >> 0x11U)));
    vlSelf->Brent_Kung_Adder__DOT____Vcellout__cin_generation__BRA__6__KET____DOT__f__cin 
        = (1U & (((IData)((0x14000000U == (0x14000000U 
                                           & vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp))) 
                  & (IData)(vlSelf->c0)) | ((IData)(
                                                    (0x18000000U 
                                                     == 
                                                     (0x18000000U 
                                                      & vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp))) 
                                            | (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp 
                                               >> 0x1dU))));
}

VL_INLINE_OPT void VBrent_Kung_Adder___024root___ico_sequent__TOP__0(VBrent_Kung_Adder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBrent_Kung_Adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBrent_Kung_Adder___024root___ico_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ __VdfgTmp_h6783f33b__0;
    __VdfgTmp_h6783f33b__0 = 0;
    CData/*0:0*/ __VdfgTmp_h34187557__0;
    __VdfgTmp_h34187557__0 = 0;
    // Body
    vlSelf->__VdfgTmp_ha00b13da__0 = (1U & ((IData)(
                                                    (vlSelf->A 
                                                     >> 0x18U)) 
                                            & (IData)(
                                                      (vlSelf->B 
                                                       >> 0x18U))));
    vlSelf->__VdfgTmp_ha4cc58c3__0 = (1U & ((IData)(
                                                    (vlSelf->A 
                                                     >> 0x19U)) 
                                            & (IData)(
                                                      (vlSelf->B 
                                                       >> 0x19U))));
    vlSelf->__VdfgTmp_h8da57233__0 = (1U & ((IData)(
                                                    (vlSelf->A 
                                                     >> 0x1aU)) 
                                            & (IData)(
                                                      (vlSelf->B 
                                                       >> 0x1aU))));
    vlSelf->__VdfgTmp_h8920b836__0 = (1U & ((IData)(
                                                    (vlSelf->A 
                                                     >> 0x1bU)) 
                                            & (IData)(
                                                      (vlSelf->B 
                                                       >> 0x1bU))));
    vlSelf->__VdfgTmp_h8783b4a3__0 = (1U & ((IData)(
                                                    (vlSelf->A 
                                                     >> 0x1cU)) 
                                            & (IData)(
                                                      (vlSelf->B 
                                                       >> 0x1cU))));
    vlSelf->__VdfgTmp_h8aa24c3a__0 = (1U & ((IData)(
                                                    (vlSelf->A 
                                                     >> 0x1dU)) 
                                            & (IData)(
                                                      (vlSelf->B 
                                                       >> 0x1dU))));
    vlSelf->__VdfgTmp_hb16c50d0__0 = (1U & ((IData)(
                                                    (vlSelf->A 
                                                     >> 0x1eU)) 
                                            & (IData)(
                                                      (vlSelf->B 
                                                       >> 0x1eU))));
    vlSelf->__VdfgTmp_hbe741e55__0 = (1U & ((IData)(
                                                    (vlSelf->A 
                                                     >> 0x1fU)) 
                                            & (IData)(
                                                      (vlSelf->B 
                                                       >> 0x1fU))));
    vlSelf->__VdfgTmp_h8bcd436b__0 = (1U & ((IData)(
                                                    (vlSelf->A 
                                                     >> 0x30U)) 
                                            & (IData)(
                                                      (vlSelf->B 
                                                       >> 0x30U))));
    vlSelf->__VdfgTmp_h5c44dec4__0 = (1U & ((IData)(
                                                    (vlSelf->A 
                                                     >> 0x31U)) 
                                            & (IData)(
                                                      (vlSelf->B 
                                                       >> 0x31U))));
    vlSelf->__VdfgTmp_h5592c408__0 = (1U & ((IData)(
                                                    (vlSelf->A 
                                                     >> 0x32U)) 
                                            & (IData)(
                                                      (vlSelf->B 
                                                       >> 0x32U))));
    vlSelf->__VdfgTmp_h53056e9b__0 = (1U & ((IData)(
                                                    (vlSelf->A 
                                                     >> 0x33U)) 
                                            & (IData)(
                                                      (vlSelf->B 
                                                       >> 0x33U))));
    vlSelf->__VdfgTmp_h533cc427__0 = (1U & ((IData)(
                                                    (vlSelf->A 
                                                     >> 0x34U)) 
                                            & (IData)(
                                                      (vlSelf->B 
                                                       >> 0x34U))));
    vlSelf->__VdfgTmp_h5adb9448__0 = (1U & ((IData)(
                                                    (vlSelf->A 
                                                     >> 0x35U)) 
                                            & (IData)(
                                                      (vlSelf->B 
                                                       >> 0x35U))));
    vlSelf->__VdfgTmp_h4643dc14__0 = (1U & ((IData)(
                                                    (vlSelf->A 
                                                     >> 0x36U)) 
                                            & (IData)(
                                                      (vlSelf->B 
                                                       >> 0x36U))));
    vlSelf->__VdfgTmp_h4614327f__0 = (1U & ((IData)(
                                                    (vlSelf->A 
                                                     >> 0x37U)) 
                                            & (IData)(
                                                      (vlSelf->B 
                                                       >> 0x37U))));
    vlSelf->__VdfgTmp_hb693cd38__0 = (1U & ((IData)(
                                                    (vlSelf->A 
                                                     >> 0x28U)) 
                                            & (IData)(
                                                      (vlSelf->B 
                                                       >> 0x28U))));
    vlSelf->__VdfgTmp_h4437eafd__0 = (1U & ((IData)(
                                                    (vlSelf->A 
                                                     >> 0x29U)) 
                                            & (IData)(
                                                      (vlSelf->B 
                                                       >> 0x29U))));
    vlSelf->__VdfgTmp_h5d5c3be5__0 = (1U & ((IData)(
                                                    (vlSelf->A 
                                                     >> 0x2aU)) 
                                            & (IData)(
                                                      (vlSelf->B 
                                                       >> 0x2aU))));
    vlSelf->__VdfgTmp_h5bd66994__0 = (1U & ((IData)(
                                                    (vlSelf->A 
                                                     >> 0x2bU)) 
                                            & (IData)(
                                                      (vlSelf->B 
                                                       >> 0x2bU))));
    vlSelf->__VdfgTmp_h5bbf9d18__0 = (1U & ((IData)(
                                                    (vlSelf->A 
                                                     >> 0x2cU)) 
                                            & (IData)(
                                                      (vlSelf->B 
                                                       >> 0x2cU))));
    vlSelf->__VdfgTmp_h58b5f4dd__0 = (1U & ((IData)(
                                                    (vlSelf->A 
                                                     >> 0x2dU)) 
                                            & (IData)(
                                                      (vlSelf->B 
                                                       >> 0x2dU))));
    vlSelf->__VdfgTmp_h81acfa95__0 = (1U & ((IData)(
                                                    (vlSelf->A 
                                                     >> 0x2eU)) 
                                            & (IData)(
                                                      (vlSelf->B 
                                                       >> 0x2eU))));
    vlSelf->__VdfgTmp_h8c84fcd4__0 = (1U & ((IData)(
                                                    (vlSelf->A 
                                                     >> 0x2fU)) 
                                            & (IData)(
                                                      (vlSelf->B 
                                                       >> 0x2fU))));
    vlSelf->__VdfgTmp_he57fb158__0 = (1U & ((IData)(
                                                    (vlSelf->A 
                                                     >> 0x10U)) 
                                            & (IData)(
                                                      (vlSelf->B 
                                                       >> 0x10U))));
    vlSelf->__VdfgTmp_heea9cdcf__0 = (1U & ((IData)(
                                                    (vlSelf->A 
                                                     >> 0x11U)) 
                                            & (IData)(
                                                      (vlSelf->B 
                                                       >> 0x11U))));
    vlSelf->__VdfgTmp_hbf6abe2d__0 = (1U & ((IData)(
                                                    (vlSelf->A 
                                                     >> 0x12U)) 
                                            & (IData)(
                                                      (vlSelf->B 
                                                       >> 0x12U))));
    vlSelf->__VdfgTmp_hbdb296aa__0 = (1U & ((IData)(
                                                    (vlSelf->A 
                                                     >> 0x13U)) 
                                            & (IData)(
                                                      (vlSelf->B 
                                                       >> 0x13U))));
    vlSelf->__VdfgTmp_hb17ff5d1__0 = (1U & ((IData)(
                                                    (vlSelf->A 
                                                     >> 0x14U)) 
                                            & (IData)(
                                                      (vlSelf->B 
                                                       >> 0x14U))));
    vlSelf->__VdfgTmp_h8b49bf26__0 = (1U & ((IData)(
                                                    (vlSelf->A 
                                                     >> 0x15U)) 
                                            & (IData)(
                                                      (vlSelf->B 
                                                       >> 0x15U))));
    vlSelf->__VdfgTmp_h8a10462a__0 = (1U & ((IData)(
                                                    (vlSelf->A 
                                                     >> 0x16U)) 
                                            & (IData)(
                                                      (vlSelf->B 
                                                       >> 0x16U))));
    vlSelf->__VdfgTmp_ha7143469__0 = (1U & ((IData)(
                                                    (vlSelf->A 
                                                     >> 0x17U)) 
                                            & (IData)(
                                                      (vlSelf->B 
                                                       >> 0x17U))));
    vlSelf->__VdfgTmp_hbe21faac__0 = (1U & ((IData)(
                                                    (vlSelf->A 
                                                     >> 8U)) 
                                            & (IData)(
                                                      (vlSelf->B 
                                                       >> 8U))));
    vlSelf->__VdfgTmp_ha5396d5d__0 = (1U & ((IData)(
                                                    (vlSelf->A 
                                                     >> 9U)) 
                                            & (IData)(
                                                      (vlSelf->B 
                                                       >> 9U))));
    vlSelf->__VdfgTmp_h9319e32f__0 = (1U & ((IData)(
                                                    (vlSelf->A 
                                                     >> 0xaU)) 
                                            & (IData)(
                                                      (vlSelf->B 
                                                       >> 0xaU))));
    vlSelf->__VdfgTmp_h9402bd92__0 = (1U & ((IData)(
                                                    (vlSelf->A 
                                                     >> 0xbU)) 
                                            & (IData)(
                                                      (vlSelf->B 
                                                       >> 0xbU))));
    vlSelf->__VdfgTmp_he9e0d610__0 = (1U & ((IData)(
                                                    (vlSelf->A 
                                                     >> 0xcU)) 
                                            & (IData)(
                                                      (vlSelf->B 
                                                       >> 0xcU))));
    vlSelf->__VdfgTmp_he2d7c735__0 = (1U & ((IData)(
                                                    (vlSelf->A 
                                                     >> 0xdU)) 
                                            & (IData)(
                                                      (vlSelf->B 
                                                       >> 0xdU))));
    vlSelf->__VdfgTmp_hfe3177f3__0 = (1U & ((IData)(
                                                    (vlSelf->A 
                                                     >> 0xeU)) 
                                            & (IData)(
                                                      (vlSelf->B 
                                                       >> 0xeU))));
    vlSelf->__VdfgTmp_he0cc5aca__0 = (1U & ((IData)(
                                                    (vlSelf->A 
                                                     >> 0xfU)) 
                                            & (IData)(
                                                      (vlSelf->B 
                                                       >> 0xfU))));
    vlSelf->__VdfgTmp_h44787b03__0 = (1U & ((IData)(
                                                    (vlSelf->A 
                                                     >> 0x38U)) 
                                            & (IData)(
                                                      (vlSelf->B 
                                                       >> 0x38U))));
    vlSelf->__VdfgTmp_had190e44__0 = (1U & ((IData)(
                                                    (vlSelf->A 
                                                     >> 0x39U)) 
                                            & (IData)(
                                                      (vlSelf->B 
                                                       >> 0x39U))));
    vlSelf->__VdfgTmp_haa51df4a__0 = (1U & ((IData)(
                                                    (vlSelf->A 
                                                     >> 0x3aU)) 
                                            & (IData)(
                                                      (vlSelf->B 
                                                       >> 0x3aU))));
    vlSelf->__VdfgTmp_hab53db2d__0 = (1U & ((IData)(
                                                    (vlSelf->A 
                                                     >> 0x3bU)) 
                                            & (IData)(
                                                      (vlSelf->B 
                                                       >> 0x3bU))));
    vlSelf->__VdfgTmp_ha829c5d0__0 = (1U & ((IData)(
                                                    (vlSelf->A 
                                                     >> 0x3cU)) 
                                            & (IData)(
                                                      (vlSelf->B 
                                                       >> 0x3cU))));
    vlSelf->__VdfgTmp_h516934af__0 = (1U & ((IData)(
                                                    (vlSelf->A 
                                                     >> 0x3dU)) 
                                            & (IData)(
                                                      (vlSelf->B 
                                                       >> 0x3dU))));
    vlSelf->__VdfgTmp_h5e42ada3__0 = (1U & ((IData)(
                                                    (vlSelf->A 
                                                     >> 0x3eU)) 
                                            & (IData)(
                                                      (vlSelf->B 
                                                       >> 0x3eU))));
    vlSelf->__VdfgTmp_h5f43e680__0 = (IData)(((vlSelf->A 
                                               & vlSelf->B) 
                                              >> 0x3fU));
    vlSelf->__VdfgTmp_hbfca6490__0 = (1U & ((IData)(
                                                    (vlSelf->A 
                                                     >> 0x20U)) 
                                            & (IData)(
                                                      (vlSelf->B 
                                                       >> 0x20U))));
    vlSelf->__VdfgTmp_h8e8a8ef3__0 = (1U & ((IData)(
                                                    (vlSelf->A 
                                                     >> 0x21U)) 
                                            & (IData)(
                                                      (vlSelf->B 
                                                       >> 0x21U))));
    vlSelf->__VdfgTmp_h8004c929__0 = (1U & ((IData)(
                                                    (vlSelf->A 
                                                     >> 0x22U)) 
                                            & (IData)(
                                                      (vlSelf->B 
                                                       >> 0x22U))));
    vlSelf->__VdfgTmp_h81447f02__0 = (1U & ((IData)(
                                                    (vlSelf->A 
                                                     >> 0x23U)) 
                                            & (IData)(
                                                      (vlSelf->B 
                                                       >> 0x23U))));
    vlSelf->__VdfgTmp_h9fbf3785__0 = (1U & ((IData)(
                                                    (vlSelf->A 
                                                     >> 0x24U)) 
                                            & (IData)(
                                                      (vlSelf->B 
                                                       >> 0x24U))));
    vlSelf->__VdfgTmp_h82a6176a__0 = (1U & ((IData)(
                                                    (vlSelf->A 
                                                     >> 0x25U)) 
                                            & (IData)(
                                                      (vlSelf->B 
                                                       >> 0x25U))));
    vlSelf->__VdfgTmp_hb6858702__0 = (1U & ((IData)(
                                                    (vlSelf->A 
                                                     >> 0x26U)) 
                                            & (IData)(
                                                      (vlSelf->B 
                                                       >> 0x26U))));
    vlSelf->__VdfgTmp_hb6975029__0 = (1U & ((IData)(
                                                    (vlSelf->A 
                                                     >> 0x27U)) 
                                            & (IData)(
                                                      (vlSelf->B 
                                                       >> 0x27U))));
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0 
        = (1U & ((IData)((vlSelf->A >> 0x20U)) ^ (IData)(
                                                         (vlSelf->B 
                                                          >> 0x20U))));
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0 
        = (1U & ((IData)((vlSelf->A >> 0x30U)) ^ (IData)(
                                                         (vlSelf->B 
                                                          >> 0x30U))));
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0 
        = (1U & ((IData)((vlSelf->A >> 0x28U)) ^ (IData)(
                                                         (vlSelf->B 
                                                          >> 0x28U))));
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0 
        = (1U & ((IData)((vlSelf->A >> 0x10U)) ^ (IData)(
                                                         (vlSelf->B 
                                                          >> 0x10U))));
    vlSelf->__VdfgTmp_h935bb1ff__0 = (1U & ((IData)(vlSelf->A) 
                                            & (IData)(vlSelf->B)));
    vlSelf->__VdfgTmp_h9eea7908__0 = (1U & ((IData)(
                                                    (vlSelf->A 
                                                     >> 1U)) 
                                            & (IData)(
                                                      (vlSelf->B 
                                                       >> 1U))));
    vlSelf->__VdfgTmp_hebc854fa__0 = (1U & ((IData)(
                                                    (vlSelf->A 
                                                     >> 2U)) 
                                            & (IData)(
                                                      (vlSelf->B 
                                                       >> 2U))));
    vlSelf->__VdfgTmp_heb1783bd__0 = (1U & ((IData)(
                                                    (vlSelf->A 
                                                     >> 3U)) 
                                            & (IData)(
                                                      (vlSelf->B 
                                                       >> 3U))));
    vlSelf->__VdfgTmp_he1be218e__0 = (1U & ((IData)(
                                                    (vlSelf->A 
                                                     >> 4U)) 
                                            & (IData)(
                                                      (vlSelf->B 
                                                       >> 4U))));
    vlSelf->__VdfgTmp_hb8898269__0 = (1U & ((IData)(
                                                    (vlSelf->A 
                                                     >> 5U)) 
                                            & (IData)(
                                                      (vlSelf->B 
                                                       >> 5U))));
    vlSelf->__VdfgTmp_hbbf91651__0 = (1U & ((IData)(
                                                    (vlSelf->A 
                                                     >> 6U)) 
                                            & (IData)(
                                                      (vlSelf->B 
                                                       >> 6U))));
    vlSelf->__VdfgTmp_hbb175292__0 = (1U & ((IData)(
                                                    (vlSelf->A 
                                                     >> 7U)) 
                                            & (IData)(
                                                      (vlSelf->B 
                                                       >> 7U))));
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT____VdfgTmp_h166b2609__0 
        = (1U & ((IData)((vlSelf->A >> 0x37U)) ^ (IData)(
                                                         (vlSelf->B 
                                                          >> 0x37U))));
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT____VdfgTmp_h1ce9aeec__0 
        = (1U & ((IData)((vlSelf->A >> 0x36U)) ^ (IData)(
                                                         (vlSelf->B 
                                                          >> 0x36U))));
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT____VdfgTmp_hc905584f__0 
        = (1U & ((IData)((vlSelf->A >> 0x35U)) ^ (IData)(
                                                         (vlSelf->B 
                                                          >> 0x35U))));
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT____VdfgTmp_h984bded2__0 
        = (1U & ((IData)((vlSelf->A >> 0x34U)) ^ (IData)(
                                                         (vlSelf->B 
                                                          >> 0x34U))));
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT____VdfgTmp_h352e0dcb__0 
        = (1U & ((IData)((vlSelf->A >> 0x33U)) ^ (IData)(
                                                         (vlSelf->B 
                                                          >> 0x33U))));
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT____VdfgTmp_hbf2851e6__0 
        = (1U & ((IData)((vlSelf->A >> 0x32U)) ^ (IData)(
                                                         (vlSelf->B 
                                                          >> 0x32U))));
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT____VdfgTmp_h8a1e19e7__0 
        = (1U & ((IData)((vlSelf->A >> 0x31U)) ^ (IData)(
                                                         (vlSelf->B 
                                                          >> 0x31U))));
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0 
        = (1U & ((IData)((vlSelf->A >> 0x18U)) ^ (IData)(
                                                         (vlSelf->B 
                                                          >> 0x18U))));
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0 
        = (1U & ((IData)((vlSelf->A >> 0x38U)) ^ (IData)(
                                                         (vlSelf->B 
                                                          >> 0x38U))));
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0 
        = (1U & ((IData)((vlSelf->A >> 8U)) ^ (IData)(
                                                      (vlSelf->B 
                                                       >> 8U))));
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0 
        = (1U & ((IData)(vlSelf->A) ^ (IData)(vlSelf->B)));
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT____VdfgTmp_h166b2609__0 
        = (1U & ((IData)((vlSelf->A >> 0x27U)) ^ (IData)(
                                                         (vlSelf->B 
                                                          >> 0x27U))));
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT____VdfgTmp_h1ce9aeec__0 
        = (1U & ((IData)((vlSelf->A >> 0x26U)) ^ (IData)(
                                                         (vlSelf->B 
                                                          >> 0x26U))));
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT____VdfgTmp_hc905584f__0 
        = (1U & ((IData)((vlSelf->A >> 0x25U)) ^ (IData)(
                                                         (vlSelf->B 
                                                          >> 0x25U))));
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT____VdfgTmp_h984bded2__0 
        = (1U & ((IData)((vlSelf->A >> 0x24U)) ^ (IData)(
                                                         (vlSelf->B 
                                                          >> 0x24U))));
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT____VdfgTmp_h352e0dcb__0 
        = (1U & ((IData)((vlSelf->A >> 0x23U)) ^ (IData)(
                                                         (vlSelf->B 
                                                          >> 0x23U))));
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT____VdfgTmp_hbf2851e6__0 
        = (1U & ((IData)((vlSelf->A >> 0x22U)) ^ (IData)(
                                                         (vlSelf->B 
                                                          >> 0x22U))));
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT____VdfgTmp_h8a1e19e7__0 
        = (1U & ((IData)((vlSelf->A >> 0x21U)) ^ (IData)(
                                                         (vlSelf->B 
                                                          >> 0x21U))));
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT____VdfgTmp_h166b2609__0 
        = (1U & ((IData)((vlSelf->A >> 0x2fU)) ^ (IData)(
                                                         (vlSelf->B 
                                                          >> 0x2fU))));
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT____VdfgTmp_h1ce9aeec__0 
        = (1U & ((IData)((vlSelf->A >> 0x2eU)) ^ (IData)(
                                                         (vlSelf->B 
                                                          >> 0x2eU))));
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT____VdfgTmp_hc905584f__0 
        = (1U & ((IData)((vlSelf->A >> 0x2dU)) ^ (IData)(
                                                         (vlSelf->B 
                                                          >> 0x2dU))));
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT____VdfgTmp_h984bded2__0 
        = (1U & ((IData)((vlSelf->A >> 0x2cU)) ^ (IData)(
                                                         (vlSelf->B 
                                                          >> 0x2cU))));
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT____VdfgTmp_h352e0dcb__0 
        = (1U & ((IData)((vlSelf->A >> 0x2bU)) ^ (IData)(
                                                         (vlSelf->B 
                                                          >> 0x2bU))));
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT____VdfgTmp_hbf2851e6__0 
        = (1U & ((IData)((vlSelf->A >> 0x2aU)) ^ (IData)(
                                                         (vlSelf->B 
                                                          >> 0x2aU))));
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT____VdfgTmp_h8a1e19e7__0 
        = (1U & ((IData)((vlSelf->A >> 0x29U)) ^ (IData)(
                                                         (vlSelf->B 
                                                          >> 0x29U))));
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT____VdfgTmp_h1ce9aeec__0 
        = (1U & ((IData)((vlSelf->A >> 0x3eU)) ^ (IData)(
                                                         (vlSelf->B 
                                                          >> 0x3eU))));
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT____VdfgTmp_hc905584f__0 
        = (1U & ((IData)((vlSelf->A >> 0x3dU)) ^ (IData)(
                                                         (vlSelf->B 
                                                          >> 0x3dU))));
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT____VdfgTmp_h984bded2__0 
        = (1U & ((IData)((vlSelf->A >> 0x3cU)) ^ (IData)(
                                                         (vlSelf->B 
                                                          >> 0x3cU))));
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT____VdfgTmp_h352e0dcb__0 
        = (1U & ((IData)((vlSelf->A >> 0x3bU)) ^ (IData)(
                                                         (vlSelf->B 
                                                          >> 0x3bU))));
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT____VdfgTmp_hbf2851e6__0 
        = (1U & ((IData)((vlSelf->A >> 0x3aU)) ^ (IData)(
                                                         (vlSelf->B 
                                                          >> 0x3aU))));
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT____VdfgTmp_h8a1e19e7__0 
        = (1U & ((IData)((vlSelf->A >> 0x39U)) ^ (IData)(
                                                         (vlSelf->B 
                                                          >> 0x39U))));
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT____VdfgTmp_h166b2609__0 
        = (1U & ((IData)((vlSelf->A >> 0x1fU)) ^ (IData)(
                                                         (vlSelf->B 
                                                          >> 0x1fU))));
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT____VdfgTmp_h1ce9aeec__0 
        = (1U & ((IData)((vlSelf->A >> 0x1eU)) ^ (IData)(
                                                         (vlSelf->B 
                                                          >> 0x1eU))));
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT____VdfgTmp_hc905584f__0 
        = (1U & ((IData)((vlSelf->A >> 0x1dU)) ^ (IData)(
                                                         (vlSelf->B 
                                                          >> 0x1dU))));
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT____VdfgTmp_h984bded2__0 
        = (1U & ((IData)((vlSelf->A >> 0x1cU)) ^ (IData)(
                                                         (vlSelf->B 
                                                          >> 0x1cU))));
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT____VdfgTmp_h352e0dcb__0 
        = (1U & ((IData)((vlSelf->A >> 0x1bU)) ^ (IData)(
                                                         (vlSelf->B 
                                                          >> 0x1bU))));
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT____VdfgTmp_hbf2851e6__0 
        = (1U & ((IData)((vlSelf->A >> 0x1aU)) ^ (IData)(
                                                         (vlSelf->B 
                                                          >> 0x1aU))));
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT____VdfgTmp_h8a1e19e7__0 
        = (1U & ((IData)((vlSelf->A >> 0x19U)) ^ (IData)(
                                                         (vlSelf->B 
                                                          >> 0x19U))));
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT____VdfgTmp_h166b2609__0 
        = (IData)(((vlSelf->A ^ vlSelf->B) >> 0x3fU));
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT____VdfgTmp_h166b2609__0 
        = (1U & ((IData)((vlSelf->A >> 0x17U)) ^ (IData)(
                                                         (vlSelf->B 
                                                          >> 0x17U))));
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT____VdfgTmp_h1ce9aeec__0 
        = (1U & ((IData)((vlSelf->A >> 0x16U)) ^ (IData)(
                                                         (vlSelf->B 
                                                          >> 0x16U))));
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT____VdfgTmp_hc905584f__0 
        = (1U & ((IData)((vlSelf->A >> 0x15U)) ^ (IData)(
                                                         (vlSelf->B 
                                                          >> 0x15U))));
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT____VdfgTmp_h984bded2__0 
        = (1U & ((IData)((vlSelf->A >> 0x14U)) ^ (IData)(
                                                         (vlSelf->B 
                                                          >> 0x14U))));
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT____VdfgTmp_h352e0dcb__0 
        = (1U & ((IData)((vlSelf->A >> 0x13U)) ^ (IData)(
                                                         (vlSelf->B 
                                                          >> 0x13U))));
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT____VdfgTmp_hbf2851e6__0 
        = (1U & ((IData)((vlSelf->A >> 0x12U)) ^ (IData)(
                                                         (vlSelf->B 
                                                          >> 0x12U))));
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT____VdfgTmp_h8a1e19e7__0 
        = (1U & ((IData)((vlSelf->A >> 0x11U)) ^ (IData)(
                                                         (vlSelf->B 
                                                          >> 0x11U))));
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT____VdfgTmp_h166b2609__0 
        = (1U & ((IData)((vlSelf->A >> 0xfU)) ^ (IData)(
                                                        (vlSelf->B 
                                                         >> 0xfU))));
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT____VdfgTmp_h1ce9aeec__0 
        = (1U & ((IData)((vlSelf->A >> 0xeU)) ^ (IData)(
                                                        (vlSelf->B 
                                                         >> 0xeU))));
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT____VdfgTmp_hc905584f__0 
        = (1U & ((IData)((vlSelf->A >> 0xdU)) ^ (IData)(
                                                        (vlSelf->B 
                                                         >> 0xdU))));
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT____VdfgTmp_h984bded2__0 
        = (1U & ((IData)((vlSelf->A >> 0xcU)) ^ (IData)(
                                                        (vlSelf->B 
                                                         >> 0xcU))));
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT____VdfgTmp_h352e0dcb__0 
        = (1U & ((IData)((vlSelf->A >> 0xbU)) ^ (IData)(
                                                        (vlSelf->B 
                                                         >> 0xbU))));
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT____VdfgTmp_hbf2851e6__0 
        = (1U & ((IData)((vlSelf->A >> 0xaU)) ^ (IData)(
                                                        (vlSelf->B 
                                                         >> 0xaU))));
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT____VdfgTmp_h8a1e19e7__0 
        = (1U & ((IData)((vlSelf->A >> 9U)) ^ (IData)(
                                                      (vlSelf->B 
                                                       >> 9U))));
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h166b2609__0 
        = (1U & ((IData)((vlSelf->A >> 7U)) ^ (IData)(
                                                      (vlSelf->B 
                                                       >> 7U))));
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h1ce9aeec__0 
        = (1U & ((IData)((vlSelf->A >> 6U)) ^ (IData)(
                                                      (vlSelf->B 
                                                       >> 6U))));
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_hc905584f__0 
        = (1U & ((IData)((vlSelf->A >> 5U)) ^ (IData)(
                                                      (vlSelf->B 
                                                       >> 5U))));
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h984bded2__0 
        = (1U & ((IData)((vlSelf->A >> 4U)) ^ (IData)(
                                                      (vlSelf->B 
                                                       >> 4U))));
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h352e0dcb__0 
        = (1U & ((IData)((vlSelf->A >> 3U)) ^ (IData)(
                                                      (vlSelf->B 
                                                       >> 3U))));
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_hbf2851e6__0 
        = (1U & ((IData)((vlSelf->A >> 2U)) ^ (IData)(
                                                      (vlSelf->B 
                                                       >> 2U))));
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h8a1e19e7__0 
        = (1U & ((IData)((vlSelf->A >> 1U)) ^ (IData)(
                                                      (vlSelf->B 
                                                       >> 1U))));
    vlSelf->__VdfgTmp_h0ed82a13__0 = ((IData)(vlSelf->__VdfgTmp_h4614327f__0) 
                                      | (((IData)(vlSelf->__VdfgTmp_h4643dc14__0) 
                                          & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT____VdfgTmp_h166b2609__0)) 
                                         | (((IData)(vlSelf->__VdfgTmp_h5adb9448__0) 
                                             & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT____VdfgTmp_h166b2609__0) 
                                                & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT____VdfgTmp_h1ce9aeec__0))) 
                                            | (((IData)(vlSelf->__VdfgTmp_h533cc427__0) 
                                                & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT____VdfgTmp_h166b2609__0) 
                                                   & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT____VdfgTmp_h1ce9aeec__0) 
                                                      & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT____VdfgTmp_hc905584f__0)))) 
                                               | (((IData)(vlSelf->__VdfgTmp_h53056e9b__0) 
                                                   & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT____VdfgTmp_h166b2609__0) 
                                                      & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT____VdfgTmp_h1ce9aeec__0) 
                                                         & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT____VdfgTmp_hc905584f__0) 
                                                            & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT____VdfgTmp_h984bded2__0))))) 
                                                  | (((IData)(vlSelf->__VdfgTmp_h5592c408__0) 
                                                      & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT____VdfgTmp_h166b2609__0) 
                                                         & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT____VdfgTmp_h1ce9aeec__0) 
                                                            & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT____VdfgTmp_hc905584f__0) 
                                                               & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT____VdfgTmp_h984bded2__0) 
                                                                  & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT____VdfgTmp_h352e0dcb__0)))))) 
                                                     | (((IData)(vlSelf->__VdfgTmp_h5c44dec4__0) 
                                                         & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT____VdfgTmp_h166b2609__0) 
                                                            & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT____VdfgTmp_h1ce9aeec__0) 
                                                               & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT____VdfgTmp_hc905584f__0) 
                                                                  & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT____VdfgTmp_h984bded2__0) 
                                                                     & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT____VdfgTmp_h352e0dcb__0) 
                                                                        & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT____VdfgTmp_hbf2851e6__0))))))) 
                                                        | ((IData)(vlSelf->__VdfgTmp_h8bcd436b__0) 
                                                           & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT____VdfgTmp_h166b2609__0) 
                                                              & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT____VdfgTmp_h1ce9aeec__0) 
                                                                 & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT____VdfgTmp_hc905584f__0) 
                                                                    & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT____VdfgTmp_h984bded2__0) 
                                                                       & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT____VdfgTmp_h352e0dcb__0) 
                                                                          & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT____VdfgTmp_hbf2851e6__0) 
                                                                             & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT____VdfgTmp_h8a1e19e7__0)))))))))))))));
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT__q 
        = ((((IData)(vlSelf->__VdfgTmp_h4614327f__0) 
             << 0xfU) | ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT____VdfgTmp_h166b2609__0) 
                         << 0xeU)) | ((((IData)(vlSelf->__VdfgTmp_h4643dc14__0) 
                                        << 0xdU) | 
                                       ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT____VdfgTmp_h1ce9aeec__0) 
                                        << 0xcU)) | 
                                      ((((IData)(vlSelf->__VdfgTmp_h5adb9448__0) 
                                         << 0xbU) | 
                                        ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT____VdfgTmp_hc905584f__0) 
                                         << 0xaU)) 
                                       | ((((IData)(vlSelf->__VdfgTmp_h533cc427__0) 
                                            << 9U) 
                                           | ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT____VdfgTmp_h984bded2__0) 
                                              << 8U)) 
                                          | ((((IData)(vlSelf->__VdfgTmp_h53056e9b__0) 
                                               << 7U) 
                                              | ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT____VdfgTmp_h352e0dcb__0) 
                                                 << 6U)) 
                                             | ((((IData)(vlSelf->__VdfgTmp_h5592c408__0) 
                                                  << 5U) 
                                                 | ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT____VdfgTmp_hbf2851e6__0) 
                                                    << 4U)) 
                                                | ((((IData)(vlSelf->__VdfgTmp_h5c44dec4__0) 
                                                     << 3U) 
                                                    | ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT____VdfgTmp_h8a1e19e7__0) 
                                                       << 2U)) 
                                                   | (((IData)(vlSelf->__VdfgTmp_h8bcd436b__0) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0)))))))));
    __VdfgTmp_h34187557__0 = ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT____VdfgTmp_h166b2609__0) 
                              & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT____VdfgTmp_h1ce9aeec__0) 
                                 & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT____VdfgTmp_hc905584f__0) 
                                    & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT____VdfgTmp_h984bded2__0) 
                                       & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT____VdfgTmp_h352e0dcb__0) 
                                          & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT____VdfgTmp_hbf2851e6__0) 
                                             & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT____VdfgTmp_h8a1e19e7__0) 
                                                & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0))))))));
    vlSelf->__VdfgTmp_ha2d76e15__0 = ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT____VdfgTmp_h166b2609__0) 
                                      & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT____VdfgTmp_h1ce9aeec__0) 
                                         & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT____VdfgTmp_hc905584f__0) 
                                            & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT____VdfgTmp_h984bded2__0) 
                                               & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT____VdfgTmp_h352e0dcb__0) 
                                                  & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT____VdfgTmp_hbf2851e6__0) 
                                                     & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT____VdfgTmp_h8a1e19e7__0) 
                                                        & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0))))))));
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT__q 
        = ((((IData)(vlSelf->__VdfgTmp_hb6975029__0) 
             << 0xfU) | ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT____VdfgTmp_h166b2609__0) 
                         << 0xeU)) | ((((IData)(vlSelf->__VdfgTmp_hb6858702__0) 
                                        << 0xdU) | 
                                       ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT____VdfgTmp_h1ce9aeec__0) 
                                        << 0xcU)) | 
                                      ((((IData)(vlSelf->__VdfgTmp_h82a6176a__0) 
                                         << 0xbU) | 
                                        ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT____VdfgTmp_hc905584f__0) 
                                         << 0xaU)) 
                                       | ((((IData)(vlSelf->__VdfgTmp_h9fbf3785__0) 
                                            << 9U) 
                                           | ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT____VdfgTmp_h984bded2__0) 
                                              << 8U)) 
                                          | ((((IData)(vlSelf->__VdfgTmp_h81447f02__0) 
                                               << 7U) 
                                              | ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT____VdfgTmp_h352e0dcb__0) 
                                                 << 6U)) 
                                             | ((((IData)(vlSelf->__VdfgTmp_h8004c929__0) 
                                                  << 5U) 
                                                 | ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT____VdfgTmp_hbf2851e6__0) 
                                                    << 4U)) 
                                                | ((((IData)(vlSelf->__VdfgTmp_h8e8a8ef3__0) 
                                                     << 3U) 
                                                    | ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT____VdfgTmp_h8a1e19e7__0) 
                                                       << 2U)) 
                                                   | (((IData)(vlSelf->__VdfgTmp_hbfca6490__0) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0)))))))));
    vlSelf->__VdfgTmp_h0d9cf317__0 = ((IData)(vlSelf->__VdfgTmp_hb6975029__0) 
                                      | (((IData)(vlSelf->__VdfgTmp_hb6858702__0) 
                                          & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT____VdfgTmp_h166b2609__0)) 
                                         | (((IData)(vlSelf->__VdfgTmp_h82a6176a__0) 
                                             & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT____VdfgTmp_h166b2609__0) 
                                                & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT____VdfgTmp_h1ce9aeec__0))) 
                                            | (((IData)(vlSelf->__VdfgTmp_h9fbf3785__0) 
                                                & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT____VdfgTmp_h166b2609__0) 
                                                   & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT____VdfgTmp_h1ce9aeec__0) 
                                                      & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT____VdfgTmp_hc905584f__0)))) 
                                               | (((IData)(vlSelf->__VdfgTmp_h81447f02__0) 
                                                   & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT____VdfgTmp_h166b2609__0) 
                                                      & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT____VdfgTmp_h1ce9aeec__0) 
                                                         & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT____VdfgTmp_hc905584f__0) 
                                                            & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT____VdfgTmp_h984bded2__0))))) 
                                                  | (((IData)(vlSelf->__VdfgTmp_h8004c929__0) 
                                                      & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT____VdfgTmp_h166b2609__0) 
                                                         & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT____VdfgTmp_h1ce9aeec__0) 
                                                            & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT____VdfgTmp_hc905584f__0) 
                                                               & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT____VdfgTmp_h984bded2__0) 
                                                                  & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT____VdfgTmp_h352e0dcb__0)))))) 
                                                     | (((IData)(vlSelf->__VdfgTmp_h8e8a8ef3__0) 
                                                         & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT____VdfgTmp_h166b2609__0) 
                                                            & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT____VdfgTmp_h1ce9aeec__0) 
                                                               & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT____VdfgTmp_hc905584f__0) 
                                                                  & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT____VdfgTmp_h984bded2__0) 
                                                                     & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT____VdfgTmp_h352e0dcb__0) 
                                                                        & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT____VdfgTmp_hbf2851e6__0))))))) 
                                                        | ((IData)(vlSelf->__VdfgTmp_hbfca6490__0) 
                                                           & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT____VdfgTmp_h166b2609__0) 
                                                              & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT____VdfgTmp_h1ce9aeec__0) 
                                                                 & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT____VdfgTmp_hc905584f__0) 
                                                                    & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT____VdfgTmp_h984bded2__0) 
                                                                       & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT____VdfgTmp_h352e0dcb__0) 
                                                                          & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT____VdfgTmp_hbf2851e6__0) 
                                                                             & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT____VdfgTmp_h8a1e19e7__0)))))))))))))));
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT__q 
        = ((((IData)(vlSelf->__VdfgTmp_h8c84fcd4__0) 
             << 0xfU) | ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT____VdfgTmp_h166b2609__0) 
                         << 0xeU)) | ((((IData)(vlSelf->__VdfgTmp_h81acfa95__0) 
                                        << 0xdU) | 
                                       ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT____VdfgTmp_h1ce9aeec__0) 
                                        << 0xcU)) | 
                                      ((((IData)(vlSelf->__VdfgTmp_h58b5f4dd__0) 
                                         << 0xbU) | 
                                        ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT____VdfgTmp_hc905584f__0) 
                                         << 0xaU)) 
                                       | ((((IData)(vlSelf->__VdfgTmp_h5bbf9d18__0) 
                                            << 9U) 
                                           | ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT____VdfgTmp_h984bded2__0) 
                                              << 8U)) 
                                          | ((((IData)(vlSelf->__VdfgTmp_h5bd66994__0) 
                                               << 7U) 
                                              | ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT____VdfgTmp_h352e0dcb__0) 
                                                 << 6U)) 
                                             | ((((IData)(vlSelf->__VdfgTmp_h5d5c3be5__0) 
                                                  << 5U) 
                                                 | ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT____VdfgTmp_hbf2851e6__0) 
                                                    << 4U)) 
                                                | ((((IData)(vlSelf->__VdfgTmp_h4437eafd__0) 
                                                     << 3U) 
                                                    | ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT____VdfgTmp_h8a1e19e7__0) 
                                                       << 2U)) 
                                                   | (((IData)(vlSelf->__VdfgTmp_hb693cd38__0) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0)))))))));
    vlSelf->Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__recursion_msbh__DOT__recursive_case__DOT__recursion_lsbh__DOT__trival_case__DOT__f__DOT____VdfgTmp_hef005df1__0 
        = ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT____VdfgTmp_h166b2609__0) 
           & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT____VdfgTmp_h1ce9aeec__0) 
              & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT____VdfgTmp_hc905584f__0) 
                 & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT____VdfgTmp_h984bded2__0) 
                    & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT____VdfgTmp_h352e0dcb__0) 
                       & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT____VdfgTmp_hbf2851e6__0) 
                          & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT____VdfgTmp_h8a1e19e7__0) 
                             & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0))))))));
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT__q 
        = ((((IData)(vlSelf->__VdfgTmp_hbe741e55__0) 
             << 0xfU) | ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT____VdfgTmp_h166b2609__0) 
                         << 0xeU)) | ((((IData)(vlSelf->__VdfgTmp_hb16c50d0__0) 
                                        << 0xdU) | 
                                       ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT____VdfgTmp_h1ce9aeec__0) 
                                        << 0xcU)) | 
                                      ((((IData)(vlSelf->__VdfgTmp_h8aa24c3a__0) 
                                         << 0xbU) | 
                                        ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT____VdfgTmp_hc905584f__0) 
                                         << 0xaU)) 
                                       | ((((IData)(vlSelf->__VdfgTmp_h8783b4a3__0) 
                                            << 9U) 
                                           | ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT____VdfgTmp_h984bded2__0) 
                                              << 8U)) 
                                          | ((((IData)(vlSelf->__VdfgTmp_h8920b836__0) 
                                               << 7U) 
                                              | ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT____VdfgTmp_h352e0dcb__0) 
                                                 << 6U)) 
                                             | ((((IData)(vlSelf->__VdfgTmp_h8da57233__0) 
                                                  << 5U) 
                                                 | ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT____VdfgTmp_hbf2851e6__0) 
                                                    << 4U)) 
                                                | ((((IData)(vlSelf->__VdfgTmp_ha4cc58c3__0) 
                                                     << 3U) 
                                                    | ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT____VdfgTmp_h8a1e19e7__0) 
                                                       << 2U)) 
                                                   | (((IData)(vlSelf->__VdfgTmp_ha00b13da__0) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0)))))))));
    vlSelf->Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__recursion_lsbh__DOT__recursive_case__DOT__recursion_msbh__DOT__trival_case__DOT__f__DOT____VdfgTmp_hef005df1__0 
        = ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT____VdfgTmp_h166b2609__0) 
           & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT____VdfgTmp_h1ce9aeec__0) 
              & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT____VdfgTmp_hc905584f__0) 
                 & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT____VdfgTmp_h984bded2__0) 
                    & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT____VdfgTmp_h352e0dcb__0) 
                       & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT____VdfgTmp_hbf2851e6__0) 
                          & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT____VdfgTmp_h8a1e19e7__0) 
                             & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0))))))));
    vlSelf->Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__recursion_msbh__DOT__recursive_case__DOT__recursion_msbh__DOT__trival_case__DOT__f__DOT____VdfgTmp_hef005df1__0 
        = ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT____VdfgTmp_h166b2609__0) 
           & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT____VdfgTmp_h1ce9aeec__0) 
              & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT____VdfgTmp_hc905584f__0) 
                 & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT____VdfgTmp_h984bded2__0) 
                    & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT____VdfgTmp_h352e0dcb__0) 
                       & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT____VdfgTmp_hbf2851e6__0) 
                          & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT____VdfgTmp_h8a1e19e7__0) 
                             & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0))))))));
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT__q 
        = ((((IData)(vlSelf->__VdfgTmp_h5f43e680__0) 
             << 0xfU) | ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT____VdfgTmp_h166b2609__0) 
                         << 0xeU)) | ((((IData)(vlSelf->__VdfgTmp_h5e42ada3__0) 
                                        << 0xdU) | 
                                       ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT____VdfgTmp_h1ce9aeec__0) 
                                        << 0xcU)) | 
                                      ((((IData)(vlSelf->__VdfgTmp_h516934af__0) 
                                         << 0xbU) | 
                                        ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT____VdfgTmp_hc905584f__0) 
                                         << 0xaU)) 
                                       | ((((IData)(vlSelf->__VdfgTmp_ha829c5d0__0) 
                                            << 9U) 
                                           | ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT____VdfgTmp_h984bded2__0) 
                                              << 8U)) 
                                          | ((((IData)(vlSelf->__VdfgTmp_hab53db2d__0) 
                                               << 7U) 
                                              | ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT____VdfgTmp_h352e0dcb__0) 
                                                 << 6U)) 
                                             | ((((IData)(vlSelf->__VdfgTmp_haa51df4a__0) 
                                                  << 5U) 
                                                 | ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT____VdfgTmp_hbf2851e6__0) 
                                                    << 4U)) 
                                                | ((((IData)(vlSelf->__VdfgTmp_had190e44__0) 
                                                     << 3U) 
                                                    | ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT____VdfgTmp_h8a1e19e7__0) 
                                                       << 2U)) 
                                                   | (((IData)(vlSelf->__VdfgTmp_h44787b03__0) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0)))))))));
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT__q 
        = ((((IData)(vlSelf->__VdfgTmp_ha7143469__0) 
             << 0xfU) | ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT____VdfgTmp_h166b2609__0) 
                         << 0xeU)) | ((((IData)(vlSelf->__VdfgTmp_h8a10462a__0) 
                                        << 0xdU) | 
                                       ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT____VdfgTmp_h1ce9aeec__0) 
                                        << 0xcU)) | 
                                      ((((IData)(vlSelf->__VdfgTmp_h8b49bf26__0) 
                                         << 0xbU) | 
                                        ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT____VdfgTmp_hc905584f__0) 
                                         << 0xaU)) 
                                       | ((((IData)(vlSelf->__VdfgTmp_hb17ff5d1__0) 
                                            << 9U) 
                                           | ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT____VdfgTmp_h984bded2__0) 
                                              << 8U)) 
                                          | ((((IData)(vlSelf->__VdfgTmp_hbdb296aa__0) 
                                               << 7U) 
                                              | ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT____VdfgTmp_h352e0dcb__0) 
                                                 << 6U)) 
                                             | ((((IData)(vlSelf->__VdfgTmp_hbf6abe2d__0) 
                                                  << 5U) 
                                                 | ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT____VdfgTmp_hbf2851e6__0) 
                                                    << 4U)) 
                                                | ((((IData)(vlSelf->__VdfgTmp_heea9cdcf__0) 
                                                     << 3U) 
                                                    | ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT____VdfgTmp_h8a1e19e7__0) 
                                                       << 2U)) 
                                                   | (((IData)(vlSelf->__VdfgTmp_he57fb158__0) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0)))))))));
    vlSelf->__VdfgTmp_h2a7d63e6__0 = ((IData)(vlSelf->__VdfgTmp_ha7143469__0) 
                                      | (((IData)(vlSelf->__VdfgTmp_h8a10462a__0) 
                                          & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT____VdfgTmp_h166b2609__0)) 
                                         | (((IData)(vlSelf->__VdfgTmp_h8b49bf26__0) 
                                             & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT____VdfgTmp_h166b2609__0) 
                                                & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT____VdfgTmp_h1ce9aeec__0))) 
                                            | (((IData)(vlSelf->__VdfgTmp_hb17ff5d1__0) 
                                                & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT____VdfgTmp_h166b2609__0) 
                                                   & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT____VdfgTmp_h1ce9aeec__0) 
                                                      & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT____VdfgTmp_hc905584f__0)))) 
                                               | (((IData)(vlSelf->__VdfgTmp_hbdb296aa__0) 
                                                   & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT____VdfgTmp_h166b2609__0) 
                                                      & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT____VdfgTmp_h1ce9aeec__0) 
                                                         & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT____VdfgTmp_hc905584f__0) 
                                                            & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT____VdfgTmp_h984bded2__0))))) 
                                                  | (((IData)(vlSelf->__VdfgTmp_hbf6abe2d__0) 
                                                      & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT____VdfgTmp_h166b2609__0) 
                                                         & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT____VdfgTmp_h1ce9aeec__0) 
                                                            & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT____VdfgTmp_hc905584f__0) 
                                                               & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT____VdfgTmp_h984bded2__0) 
                                                                  & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT____VdfgTmp_h352e0dcb__0)))))) 
                                                     | (((IData)(vlSelf->__VdfgTmp_heea9cdcf__0) 
                                                         & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT____VdfgTmp_h166b2609__0) 
                                                            & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT____VdfgTmp_h1ce9aeec__0) 
                                                               & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT____VdfgTmp_hc905584f__0) 
                                                                  & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT____VdfgTmp_h984bded2__0) 
                                                                     & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT____VdfgTmp_h352e0dcb__0) 
                                                                        & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT____VdfgTmp_hbf2851e6__0))))))) 
                                                        | ((IData)(vlSelf->__VdfgTmp_he57fb158__0) 
                                                           & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT____VdfgTmp_h166b2609__0) 
                                                              & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT____VdfgTmp_h1ce9aeec__0) 
                                                                 & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT____VdfgTmp_hc905584f__0) 
                                                                    & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT____VdfgTmp_h984bded2__0) 
                                                                       & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT____VdfgTmp_h352e0dcb__0) 
                                                                          & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT____VdfgTmp_hbf2851e6__0) 
                                                                             & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT____VdfgTmp_h8a1e19e7__0)))))))))))))));
    __VdfgTmp_h6783f33b__0 = ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT____VdfgTmp_h166b2609__0) 
                              & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT____VdfgTmp_h1ce9aeec__0) 
                                 & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT____VdfgTmp_hc905584f__0) 
                                    & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT____VdfgTmp_h984bded2__0) 
                                       & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT____VdfgTmp_h352e0dcb__0) 
                                          & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT____VdfgTmp_hbf2851e6__0) 
                                             & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT____VdfgTmp_h8a1e19e7__0) 
                                                & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0))))))));
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT__q 
        = ((((IData)(vlSelf->__VdfgTmp_he0cc5aca__0) 
             << 0xfU) | ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT____VdfgTmp_h166b2609__0) 
                         << 0xeU)) | ((((IData)(vlSelf->__VdfgTmp_hfe3177f3__0) 
                                        << 0xdU) | 
                                       ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT____VdfgTmp_h1ce9aeec__0) 
                                        << 0xcU)) | 
                                      ((((IData)(vlSelf->__VdfgTmp_he2d7c735__0) 
                                         << 0xbU) | 
                                        ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT____VdfgTmp_hc905584f__0) 
                                         << 0xaU)) 
                                       | ((((IData)(vlSelf->__VdfgTmp_he9e0d610__0) 
                                            << 9U) 
                                           | ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT____VdfgTmp_h984bded2__0) 
                                              << 8U)) 
                                          | ((((IData)(vlSelf->__VdfgTmp_h9402bd92__0) 
                                               << 7U) 
                                              | ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT____VdfgTmp_h352e0dcb__0) 
                                                 << 6U)) 
                                             | ((((IData)(vlSelf->__VdfgTmp_h9319e32f__0) 
                                                  << 5U) 
                                                 | ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT____VdfgTmp_hbf2851e6__0) 
                                                    << 4U)) 
                                                | ((((IData)(vlSelf->__VdfgTmp_ha5396d5d__0) 
                                                     << 3U) 
                                                    | ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT____VdfgTmp_h8a1e19e7__0) 
                                                       << 2U)) 
                                                   | (((IData)(vlSelf->__VdfgTmp_hbe21faac__0) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0)))))))));
    vlSelf->Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__recursion_lsbh__DOT__recursive_case__DOT__recursion_lsbh__DOT__trival_case__DOT__f__DOT____VdfgTmp_hef005df1__0 
        = ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT____VdfgTmp_h166b2609__0) 
           & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT____VdfgTmp_h1ce9aeec__0) 
              & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT____VdfgTmp_hc905584f__0) 
                 & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT____VdfgTmp_h984bded2__0) 
                    & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT____VdfgTmp_h352e0dcb__0) 
                       & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT____VdfgTmp_hbf2851e6__0) 
                          & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT____VdfgTmp_h8a1e19e7__0) 
                             & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0))))))));
    vlSelf->__VdfgTmp_hb04d5094__0 = ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h166b2609__0) 
                                      & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h1ce9aeec__0) 
                                         & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_hc905584f__0) 
                                            & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h984bded2__0) 
                                               & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h352e0dcb__0) 
                                                  & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_hbf2851e6__0) 
                                                     & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h8a1e19e7__0) 
                                                        & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0))))))));
    vlSelf->__VdfgTmp_hf48b56b2__0 = ((IData)(vlSelf->__VdfgTmp_hbb175292__0) 
                                      | (((IData)(vlSelf->__VdfgTmp_hbbf91651__0) 
                                          & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h166b2609__0)) 
                                         | (((IData)(vlSelf->__VdfgTmp_hb8898269__0) 
                                             & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h166b2609__0) 
                                                & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h1ce9aeec__0))) 
                                            | (((IData)(vlSelf->__VdfgTmp_he1be218e__0) 
                                                & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h166b2609__0) 
                                                   & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h1ce9aeec__0) 
                                                      & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_hc905584f__0)))) 
                                               | (((IData)(vlSelf->__VdfgTmp_heb1783bd__0) 
                                                   & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h166b2609__0) 
                                                      & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h1ce9aeec__0) 
                                                         & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_hc905584f__0) 
                                                            & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h984bded2__0))))) 
                                                  | (((IData)(vlSelf->__VdfgTmp_hebc854fa__0) 
                                                      & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h166b2609__0) 
                                                         & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h1ce9aeec__0) 
                                                            & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_hc905584f__0) 
                                                               & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h984bded2__0) 
                                                                  & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h352e0dcb__0)))))) 
                                                     | (((IData)(vlSelf->__VdfgTmp_h9eea7908__0) 
                                                         & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h166b2609__0) 
                                                            & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h1ce9aeec__0) 
                                                               & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_hc905584f__0) 
                                                                  & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h984bded2__0) 
                                                                     & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h352e0dcb__0) 
                                                                        & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_hbf2851e6__0))))))) 
                                                        | ((IData)(vlSelf->__VdfgTmp_h935bb1ff__0) 
                                                           & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h166b2609__0) 
                                                              & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h1ce9aeec__0) 
                                                                 & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_hc905584f__0) 
                                                                    & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h984bded2__0) 
                                                                       & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h352e0dcb__0) 
                                                                          & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_hbf2851e6__0) 
                                                                             & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h8a1e19e7__0)))))))))))))));
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT__q 
        = ((((IData)(vlSelf->__VdfgTmp_hbb175292__0) 
             << 0xfU) | ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h166b2609__0) 
                         << 0xeU)) | ((((IData)(vlSelf->__VdfgTmp_hbbf91651__0) 
                                        << 0xdU) | 
                                       ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h1ce9aeec__0) 
                                        << 0xcU)) | 
                                      ((((IData)(vlSelf->__VdfgTmp_hb8898269__0) 
                                         << 0xbU) | 
                                        ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_hc905584f__0) 
                                         << 0xaU)) 
                                       | ((((IData)(vlSelf->__VdfgTmp_he1be218e__0) 
                                            << 9U) 
                                           | ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h984bded2__0) 
                                              << 8U)) 
                                          | ((((IData)(vlSelf->__VdfgTmp_heb1783bd__0) 
                                               << 7U) 
                                              | ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h352e0dcb__0) 
                                                 << 6U)) 
                                             | ((((IData)(vlSelf->__VdfgTmp_hebc854fa__0) 
                                                  << 5U) 
                                                 | ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_hbf2851e6__0) 
                                                    << 4U)) 
                                                | ((((IData)(vlSelf->__VdfgTmp_h9eea7908__0) 
                                                     << 3U) 
                                                    | ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h8a1e19e7__0) 
                                                       << 2U)) 
                                                   | (((IData)(vlSelf->__VdfgTmp_h935bb1ff__0) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0)))))))));
    vlSelf->Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__recursion_msbh__DOT__recursive_case__DOT__recursion_msbh__DOT____Vcellinp__trival_case__DOT__f__ql 
        = (((IData)(vlSelf->__VdfgTmp_h0ed82a13__0) 
            << 1U) | (IData)(__VdfgTmp_h34187557__0));
    vlSelf->__VdfgTmp_h2bcc32ae__0 = ((IData)(vlSelf->Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__recursion_msbh__DOT__recursive_case__DOT__recursion_lsbh__DOT__trival_case__DOT__f__DOT____VdfgTmp_hef005df1__0) 
                                      & (IData)(vlSelf->__VdfgTmp_ha2d76e15__0));
    vlSelf->__VdfgTmp_hf945ba23__0 = (((IData)(vlSelf->Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__recursion_msbh__DOT__recursive_case__DOT__recursion_lsbh__DOT__trival_case__DOT__f__DOT____VdfgTmp_hef005df1__0) 
                                       & (IData)(vlSelf->__VdfgTmp_h0d9cf317__0)) 
                                      | ((IData)(vlSelf->__VdfgTmp_h8c84fcd4__0) 
                                         | (((IData)(vlSelf->__VdfgTmp_h81acfa95__0) 
                                             & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT____VdfgTmp_h166b2609__0)) 
                                            | (((IData)(vlSelf->__VdfgTmp_h58b5f4dd__0) 
                                                & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT____VdfgTmp_h166b2609__0) 
                                                   & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT____VdfgTmp_h1ce9aeec__0))) 
                                               | (((IData)(vlSelf->__VdfgTmp_h5bbf9d18__0) 
                                                   & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT____VdfgTmp_h166b2609__0) 
                                                      & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT____VdfgTmp_h1ce9aeec__0) 
                                                         & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT____VdfgTmp_hc905584f__0)))) 
                                                  | (((IData)(vlSelf->__VdfgTmp_h5bd66994__0) 
                                                      & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT____VdfgTmp_h166b2609__0) 
                                                         & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT____VdfgTmp_h1ce9aeec__0) 
                                                            & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT____VdfgTmp_hc905584f__0) 
                                                               & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT____VdfgTmp_h984bded2__0))))) 
                                                     | (((IData)(vlSelf->__VdfgTmp_h5d5c3be5__0) 
                                                         & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT____VdfgTmp_h166b2609__0) 
                                                            & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT____VdfgTmp_h1ce9aeec__0) 
                                                               & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT____VdfgTmp_hc905584f__0) 
                                                                  & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT____VdfgTmp_h984bded2__0) 
                                                                     & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT____VdfgTmp_h352e0dcb__0)))))) 
                                                        | (((IData)(vlSelf->__VdfgTmp_h4437eafd__0) 
                                                            & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT____VdfgTmp_h166b2609__0) 
                                                               & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT____VdfgTmp_h1ce9aeec__0) 
                                                                  & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT____VdfgTmp_hc905584f__0) 
                                                                     & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT____VdfgTmp_h984bded2__0) 
                                                                        & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT____VdfgTmp_h352e0dcb__0) 
                                                                           & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT____VdfgTmp_hbf2851e6__0))))))) 
                                                           | ((IData)(vlSelf->__VdfgTmp_hb693cd38__0) 
                                                              & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT____VdfgTmp_h166b2609__0) 
                                                                 & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT____VdfgTmp_h1ce9aeec__0) 
                                                                    & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT____VdfgTmp_hc905584f__0) 
                                                                       & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT____VdfgTmp_h984bded2__0) 
                                                                          & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT____VdfgTmp_h352e0dcb__0) 
                                                                             & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT____VdfgTmp_hbf2851e6__0) 
                                                                                & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT____VdfgTmp_h8a1e19e7__0))))))))))))))));
    vlSelf->Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__recursion_msbh__DOT__recursive_case__DOT__parallel_stitch_up__BRA__6__KET____DOT__parallel_stitch_up_produce__DOT__f__DOT____VdfgTmp_hef005df1__0 
        = ((IData)(vlSelf->Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__recursion_msbh__DOT__recursive_case__DOT__recursion_msbh__DOT__trival_case__DOT__f__DOT____VdfgTmp_hef005df1__0) 
           & (IData)(__VdfgTmp_h34187557__0));
    vlSelf->Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__recursion_lsbh__DOT__recursive_case__DOT__recursion_msbh__DOT____Vcellinp__trival_case__DOT__f__ql 
        = (((IData)(vlSelf->__VdfgTmp_h2a7d63e6__0) 
            << 1U) | (IData)(__VdfgTmp_h6783f33b__0));
    vlSelf->Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__recursion_lsbh__DOT__recursive_case__DOT__parallel_stitch_up__BRA__6__KET____DOT__parallel_stitch_up_produce__DOT__f__DOT____VdfgTmp_hef005df1__0 
        = ((IData)(vlSelf->Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__recursion_lsbh__DOT__recursive_case__DOT__recursion_msbh__DOT__trival_case__DOT__f__DOT____VdfgTmp_hef005df1__0) 
           & (IData)(__VdfgTmp_h6783f33b__0));
    vlSelf->__VdfgTmp_hce8acf83__0 = ((IData)(vlSelf->Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__recursion_lsbh__DOT__recursive_case__DOT__recursion_lsbh__DOT__trival_case__DOT__f__DOT____VdfgTmp_hef005df1__0) 
                                      & (IData)(vlSelf->__VdfgTmp_hb04d5094__0));
    vlSelf->__VdfgTmp_ha94b5c3c__0 = (((IData)(vlSelf->Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__recursion_lsbh__DOT__recursive_case__DOT__recursion_lsbh__DOT__trival_case__DOT__f__DOT____VdfgTmp_hef005df1__0) 
                                       & (IData)(vlSelf->__VdfgTmp_hf48b56b2__0)) 
                                      | ((IData)(vlSelf->__VdfgTmp_he0cc5aca__0) 
                                         | (((IData)(vlSelf->__VdfgTmp_hfe3177f3__0) 
                                             & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT____VdfgTmp_h166b2609__0)) 
                                            | (((IData)(vlSelf->__VdfgTmp_he2d7c735__0) 
                                                & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT____VdfgTmp_h166b2609__0) 
                                                   & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT____VdfgTmp_h1ce9aeec__0))) 
                                               | (((IData)(vlSelf->__VdfgTmp_he9e0d610__0) 
                                                   & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT____VdfgTmp_h166b2609__0) 
                                                      & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT____VdfgTmp_h1ce9aeec__0) 
                                                         & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT____VdfgTmp_hc905584f__0)))) 
                                                  | (((IData)(vlSelf->__VdfgTmp_h9402bd92__0) 
                                                      & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT____VdfgTmp_h166b2609__0) 
                                                         & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT____VdfgTmp_h1ce9aeec__0) 
                                                            & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT____VdfgTmp_hc905584f__0) 
                                                               & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT____VdfgTmp_h984bded2__0))))) 
                                                     | (((IData)(vlSelf->__VdfgTmp_h9319e32f__0) 
                                                         & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT____VdfgTmp_h166b2609__0) 
                                                            & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT____VdfgTmp_h1ce9aeec__0) 
                                                               & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT____VdfgTmp_hc905584f__0) 
                                                                  & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT____VdfgTmp_h984bded2__0) 
                                                                     & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT____VdfgTmp_h352e0dcb__0)))))) 
                                                        | (((IData)(vlSelf->__VdfgTmp_ha5396d5d__0) 
                                                            & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT____VdfgTmp_h166b2609__0) 
                                                               & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT____VdfgTmp_h1ce9aeec__0) 
                                                                  & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT____VdfgTmp_hc905584f__0) 
                                                                     & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT____VdfgTmp_h984bded2__0) 
                                                                        & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT____VdfgTmp_h352e0dcb__0) 
                                                                           & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT____VdfgTmp_hbf2851e6__0))))))) 
                                                           | ((IData)(vlSelf->__VdfgTmp_hbe21faac__0) 
                                                              & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT____VdfgTmp_h166b2609__0) 
                                                                 & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT____VdfgTmp_h1ce9aeec__0) 
                                                                    & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT____VdfgTmp_hc905584f__0) 
                                                                       & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT____VdfgTmp_h984bded2__0) 
                                                                          & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT____VdfgTmp_h352e0dcb__0) 
                                                                             & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT____VdfgTmp_hbf2851e6__0) 
                                                                                & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT____VdfgTmp_h8a1e19e7__0))))))))))))))));
    vlSelf->Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__recursion_msbh__DOT____Vcellout__recursive_case__DOT__recursion_lsbh__r 
        = ((((IData)(vlSelf->__VdfgTmp_hf945ba23__0) 
             << 3U) | ((IData)(vlSelf->__VdfgTmp_h2bcc32ae__0) 
                       << 2U)) | (((IData)(vlSelf->__VdfgTmp_h0d9cf317__0) 
                                   << 1U) | (IData)(vlSelf->__VdfgTmp_ha2d76e15__0)));
    vlSelf->Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__parallel_stitch_up__BRA__14__KET____DOT__parallel_stitch_up_produce__DOT__f__DOT____VdfgTmp_hef005df1__0 
        = ((IData)(vlSelf->Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__recursion_msbh__DOT__recursive_case__DOT__parallel_stitch_up__BRA__6__KET____DOT__parallel_stitch_up_produce__DOT__f__DOT____VdfgTmp_hef005df1__0) 
           & (IData)(vlSelf->__VdfgTmp_h2bcc32ae__0));
    vlSelf->__VdfgTmp_h21f0d06f__0 = (((IData)(vlSelf->Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__recursion_msbh__DOT__recursive_case__DOT__parallel_stitch_up__BRA__6__KET____DOT__parallel_stitch_up_produce__DOT__f__DOT____VdfgTmp_hef005df1__0) 
                                       & (IData)(vlSelf->__VdfgTmp_hf945ba23__0)) 
                                      | (((IData)(vlSelf->Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__recursion_msbh__DOT__recursive_case__DOT__recursion_msbh__DOT__trival_case__DOT__f__DOT____VdfgTmp_hef005df1__0) 
                                          & (IData)(vlSelf->__VdfgTmp_h0ed82a13__0)) 
                                         | ((IData)(vlSelf->__VdfgTmp_h5f43e680__0) 
                                            | (((IData)(vlSelf->__VdfgTmp_h5e42ada3__0) 
                                                & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT____VdfgTmp_h166b2609__0)) 
                                               | (((IData)(vlSelf->__VdfgTmp_h516934af__0) 
                                                   & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT____VdfgTmp_h166b2609__0) 
                                                      & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT____VdfgTmp_h1ce9aeec__0))) 
                                                  | (((IData)(vlSelf->__VdfgTmp_ha829c5d0__0) 
                                                      & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT____VdfgTmp_h166b2609__0) 
                                                         & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT____VdfgTmp_h1ce9aeec__0) 
                                                            & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT____VdfgTmp_hc905584f__0)))) 
                                                     | (((IData)(vlSelf->__VdfgTmp_hab53db2d__0) 
                                                         & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT____VdfgTmp_h166b2609__0) 
                                                            & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT____VdfgTmp_h1ce9aeec__0) 
                                                               & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT____VdfgTmp_hc905584f__0) 
                                                                  & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT____VdfgTmp_h984bded2__0))))) 
                                                        | (((IData)(vlSelf->__VdfgTmp_haa51df4a__0) 
                                                            & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT____VdfgTmp_h166b2609__0) 
                                                               & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT____VdfgTmp_h1ce9aeec__0) 
                                                                  & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT____VdfgTmp_hc905584f__0) 
                                                                     & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT____VdfgTmp_h984bded2__0) 
                                                                        & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT____VdfgTmp_h352e0dcb__0)))))) 
                                                           | (((IData)(vlSelf->__VdfgTmp_had190e44__0) 
                                                               & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT____VdfgTmp_h166b2609__0) 
                                                                  & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT____VdfgTmp_h1ce9aeec__0) 
                                                                     & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT____VdfgTmp_hc905584f__0) 
                                                                        & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT____VdfgTmp_h984bded2__0) 
                                                                           & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT____VdfgTmp_h352e0dcb__0) 
                                                                              & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT____VdfgTmp_hbf2851e6__0))))))) 
                                                              | ((IData)(vlSelf->__VdfgTmp_h44787b03__0) 
                                                                 & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT____VdfgTmp_h166b2609__0) 
                                                                    & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT____VdfgTmp_h1ce9aeec__0) 
                                                                       & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT____VdfgTmp_hc905584f__0) 
                                                                          & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT____VdfgTmp_h984bded2__0) 
                                                                             & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT____VdfgTmp_h352e0dcb__0) 
                                                                                & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT____VdfgTmp_hbf2851e6__0) 
                                                                                & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT____VdfgTmp_h8a1e19e7__0)))))))))))))))));
    vlSelf->__VdfgTmp_h08445fd0__0 = ((IData)(vlSelf->Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__recursion_lsbh__DOT__recursive_case__DOT__parallel_stitch_up__BRA__6__KET____DOT__parallel_stitch_up_produce__DOT__f__DOT____VdfgTmp_hef005df1__0) 
                                      & (IData)(vlSelf->__VdfgTmp_hce8acf83__0));
    vlSelf->Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__recursion_lsbh__DOT____Vcellout__recursive_case__DOT__recursion_lsbh__r 
        = ((((IData)(vlSelf->__VdfgTmp_ha94b5c3c__0) 
             << 3U) | ((IData)(vlSelf->__VdfgTmp_hce8acf83__0) 
                       << 2U)) | (((IData)(vlSelf->__VdfgTmp_hf48b56b2__0) 
                                   << 1U) | (IData)(vlSelf->__VdfgTmp_hb04d5094__0)));
    vlSelf->__VdfgTmp_h02636d51__0 = (((IData)(vlSelf->Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__recursion_lsbh__DOT__recursive_case__DOT__parallel_stitch_up__BRA__6__KET____DOT__parallel_stitch_up_produce__DOT__f__DOT____VdfgTmp_hef005df1__0) 
                                       & (IData)(vlSelf->__VdfgTmp_ha94b5c3c__0)) 
                                      | (((IData)(vlSelf->Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__recursion_lsbh__DOT__recursive_case__DOT__recursion_msbh__DOT__trival_case__DOT__f__DOT____VdfgTmp_hef005df1__0) 
                                          & (IData)(vlSelf->__VdfgTmp_h2a7d63e6__0)) 
                                         | ((IData)(vlSelf->__VdfgTmp_hbe741e55__0) 
                                            | (((IData)(vlSelf->__VdfgTmp_hb16c50d0__0) 
                                                & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT____VdfgTmp_h166b2609__0)) 
                                               | (((IData)(vlSelf->__VdfgTmp_h8aa24c3a__0) 
                                                   & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT____VdfgTmp_h166b2609__0) 
                                                      & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT____VdfgTmp_h1ce9aeec__0))) 
                                                  | (((IData)(vlSelf->__VdfgTmp_h8783b4a3__0) 
                                                      & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT____VdfgTmp_h166b2609__0) 
                                                         & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT____VdfgTmp_h1ce9aeec__0) 
                                                            & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT____VdfgTmp_hc905584f__0)))) 
                                                     | (((IData)(vlSelf->__VdfgTmp_h8920b836__0) 
                                                         & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT____VdfgTmp_h166b2609__0) 
                                                            & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT____VdfgTmp_h1ce9aeec__0) 
                                                               & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT____VdfgTmp_hc905584f__0) 
                                                                  & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT____VdfgTmp_h984bded2__0))))) 
                                                        | (((IData)(vlSelf->__VdfgTmp_h8da57233__0) 
                                                            & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT____VdfgTmp_h166b2609__0) 
                                                               & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT____VdfgTmp_h1ce9aeec__0) 
                                                                  & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT____VdfgTmp_hc905584f__0) 
                                                                     & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT____VdfgTmp_h984bded2__0) 
                                                                        & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT____VdfgTmp_h352e0dcb__0)))))) 
                                                           | (((IData)(vlSelf->__VdfgTmp_ha4cc58c3__0) 
                                                               & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT____VdfgTmp_h166b2609__0) 
                                                                  & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT____VdfgTmp_h1ce9aeec__0) 
                                                                     & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT____VdfgTmp_hc905584f__0) 
                                                                        & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT____VdfgTmp_h984bded2__0) 
                                                                           & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT____VdfgTmp_h352e0dcb__0) 
                                                                              & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT____VdfgTmp_hbf2851e6__0))))))) 
                                                              | ((IData)(vlSelf->__VdfgTmp_ha00b13da__0) 
                                                                 & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT____VdfgTmp_h166b2609__0) 
                                                                    & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT____VdfgTmp_h1ce9aeec__0) 
                                                                       & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT____VdfgTmp_hc905584f__0) 
                                                                          & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT____VdfgTmp_h984bded2__0) 
                                                                             & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT____VdfgTmp_h352e0dcb__0) 
                                                                                & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT____VdfgTmp_hbf2851e6__0) 
                                                                                & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT____VdfgTmp_h8a1e19e7__0)))))))))))))))));
    vlSelf->__VdfgTmp_h1f5a1e66__0 = (((IData)(vlSelf->Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__recursion_msbh__DOT__recursive_case__DOT__recursion_msbh__DOT____Vcellinp__trival_case__DOT__f__ql) 
                                       << 4U) | (IData)(vlSelf->Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__recursion_msbh__DOT____Vcellout__recursive_case__DOT__recursion_lsbh__r));
    vlSelf->Brent_Kung_Adder__DOT__t1__DOT____Vcellout__recursive_case__DOT__recursion_lsbh__r 
        = ((((IData)(vlSelf->__VdfgTmp_h02636d51__0) 
             << 7U) | ((IData)(vlSelf->__VdfgTmp_h08445fd0__0) 
                       << 6U)) | (((IData)(vlSelf->Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__recursion_lsbh__DOT__recursive_case__DOT__recursion_msbh__DOT____Vcellinp__trival_case__DOT__f__ql) 
                                   << 4U) | (IData)(vlSelf->Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__recursion_lsbh__DOT____Vcellout__recursive_case__DOT__recursion_lsbh__r)));
}

VL_INLINE_OPT void VBrent_Kung_Adder___024root___ico_comb__TOP__1(VBrent_Kung_Adder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBrent_Kung_Adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBrent_Kung_Adder___024root___ico_comb__TOP__1\n"); );
    // Init
    CData/*31:0*/ __Vtemp_hf635d8d0__0;
    // Body
    __Vtemp_hf635d8d0__0 = ((0x80U & ((0x3ffff80U & 
                                       ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT__q) 
                                        >> 6U)) | (0x7ffff80U 
                                                   & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT__q) 
                                                       >> 5U) 
                                                      & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT__c) 
                                                         << 1U))))) 
                            | ((0x40U & ((0x7ffffc0U 
                                          & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT__q) 
                                             >> 5U)) 
                                         | (0xfffffc0U 
                                            & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT__q) 
                                                >> 4U) 
                                               & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT__c) 
                                                  << 1U))))) 
                               | ((0x20U & ((0xfffffe0U 
                                             & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT__q) 
                                                >> 4U)) 
                                            | (0x1fffffe0U 
                                               & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT__q) 
                                                   >> 3U) 
                                                  & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT__c) 
                                                     << 1U))))) 
                                  | ((0x10U & ((0x1ffffff0U 
                                                & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT__q) 
                                                   >> 3U)) 
                                               | (0x3ffffff0U 
                                                  & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT__q) 
                                                      >> 2U) 
                                                     & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT__c) 
                                                        << 1U))))) 
                                     | ((8U & ((0x3ffffff8U 
                                                & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT__q) 
                                                   >> 2U)) 
                                               | (0x7ffffff8U 
                                                  & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT__q) 
                                                      >> 1U) 
                                                     & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT__c) 
                                                        << 1U))))) 
                                        | ((4U & ((0x7ffffffcU 
                                                   & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT__q) 
                                                      >> 1U)) 
                                                  | (0xfffffffcU 
                                                     & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT__q) 
                                                        & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT__c) 
                                                           << 1U))))) 
                                           | ((2U & 
                                               ((0xfffffffeU 
                                                 & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT__q)) 
                                                | (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT__q) 
                                                    & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT__c)) 
                                                   << 1U))) 
                                              | (IData)(vlSelf->Brent_Kung_Adder__DOT____Vcellout__cin_generation__BRA__5__KET____DOT__f__cin))))))));
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT__c 
        = __Vtemp_hf635d8d0__0;
}

VL_INLINE_OPT void VBrent_Kung_Adder___024root___ico_comb__TOP__2(VBrent_Kung_Adder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBrent_Kung_Adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBrent_Kung_Adder___024root___ico_comb__TOP__2\n"); );
    // Init
    CData/*31:0*/ __Vtemp_h3dce9f9d__0;
    // Body
    __Vtemp_h3dce9f9d__0 = ((0x80U & ((0x3ffff80U & 
                                       ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT__q) 
                                        >> 6U)) | (0x7ffff80U 
                                                   & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT__q) 
                                                       >> 5U) 
                                                      & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT__c) 
                                                         << 1U))))) 
                            | ((0x40U & ((0x7ffffc0U 
                                          & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT__q) 
                                             >> 5U)) 
                                         | (0xfffffc0U 
                                            & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT__q) 
                                                >> 4U) 
                                               & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT__c) 
                                                  << 1U))))) 
                               | ((0x20U & ((0xfffffe0U 
                                             & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT__q) 
                                                >> 4U)) 
                                            | (0x1fffffe0U 
                                               & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT__q) 
                                                   >> 3U) 
                                                  & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT__c) 
                                                     << 1U))))) 
                                  | ((0x10U & ((0x1ffffff0U 
                                                & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT__q) 
                                                   >> 3U)) 
                                               | (0x3ffffff0U 
                                                  & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT__q) 
                                                      >> 2U) 
                                                     & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT__c) 
                                                        << 1U))))) 
                                     | ((8U & ((0x3ffffff8U 
                                                & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT__q) 
                                                   >> 2U)) 
                                               | (0x7ffffff8U 
                                                  & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT__q) 
                                                      >> 1U) 
                                                     & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT__c) 
                                                        << 1U))))) 
                                        | ((4U & ((0x7ffffffcU 
                                                   & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT__q) 
                                                      >> 1U)) 
                                                  | (0xfffffffcU 
                                                     & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT__q) 
                                                        & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT__c) 
                                                           << 1U))))) 
                                           | ((2U & 
                                               ((0xfffffffeU 
                                                 & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT__q)) 
                                                | (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT__q) 
                                                    & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT__c)) 
                                                   << 1U))) 
                                              | (IData)(vlSelf->Brent_Kung_Adder__DOT____Vcellout__cin_generation__BRA__3__KET____DOT__f__cin))))))));
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT__c 
        = __Vtemp_h3dce9f9d__0;
}

VL_INLINE_OPT void VBrent_Kung_Adder___024root___ico_comb__TOP__3(VBrent_Kung_Adder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBrent_Kung_Adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBrent_Kung_Adder___024root___ico_comb__TOP__3\n"); );
    // Init
    CData/*31:0*/ __Vtemp_hb2b0c8c8__0;
    // Body
    __Vtemp_hb2b0c8c8__0 = ((0x80U & ((0x3ffff80U & 
                                       ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT__q) 
                                        >> 6U)) | (0x7ffff80U 
                                                   & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT__q) 
                                                       >> 5U) 
                                                      & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT__c) 
                                                         << 1U))))) 
                            | ((0x40U & ((0x7ffffc0U 
                                          & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT__q) 
                                             >> 5U)) 
                                         | (0xfffffc0U 
                                            & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT__q) 
                                                >> 4U) 
                                               & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT__c) 
                                                  << 1U))))) 
                               | ((0x20U & ((0xfffffe0U 
                                             & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT__q) 
                                                >> 4U)) 
                                            | (0x1fffffe0U 
                                               & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT__q) 
                                                   >> 3U) 
                                                  & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT__c) 
                                                     << 1U))))) 
                                  | ((0x10U & ((0x1ffffff0U 
                                                & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT__q) 
                                                   >> 3U)) 
                                               | (0x3ffffff0U 
                                                  & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT__q) 
                                                      >> 2U) 
                                                     & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT__c) 
                                                        << 1U))))) 
                                     | ((8U & ((0x3ffffff8U 
                                                & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT__q) 
                                                   >> 2U)) 
                                               | (0x7ffffff8U 
                                                  & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT__q) 
                                                      >> 1U) 
                                                     & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT__c) 
                                                        << 1U))))) 
                                        | ((4U & ((0x7ffffffcU 
                                                   & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT__q) 
                                                      >> 1U)) 
                                                  | (0xfffffffcU 
                                                     & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT__q) 
                                                        & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT__c) 
                                                           << 1U))))) 
                                           | ((2U & 
                                               ((0xfffffffeU 
                                                 & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT__q)) 
                                                | (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT__q) 
                                                    & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT__c)) 
                                                   << 1U))) 
                                              | (IData)(vlSelf->Brent_Kung_Adder__DOT____Vcellout__cin_generation__BRA__4__KET____DOT__f__cin))))))));
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT__c 
        = __Vtemp_hb2b0c8c8__0;
}

VL_INLINE_OPT void VBrent_Kung_Adder___024root___ico_comb__TOP__4(VBrent_Kung_Adder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBrent_Kung_Adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBrent_Kung_Adder___024root___ico_comb__TOP__4\n"); );
    // Init
    CData/*31:0*/ __Vtemp_hdb75c317__0;
    // Body
    __Vtemp_hdb75c317__0 = ((0x80U & ((0x3ffff80U & 
                                       ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT__q) 
                                        >> 6U)) | (0x7ffff80U 
                                                   & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT__q) 
                                                       >> 5U) 
                                                      & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT__c) 
                                                         << 1U))))) 
                            | ((0x40U & ((0x7ffffc0U 
                                          & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT__q) 
                                             >> 5U)) 
                                         | (0xfffffc0U 
                                            & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT__q) 
                                                >> 4U) 
                                               & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT__c) 
                                                  << 1U))))) 
                               | ((0x20U & ((0xfffffe0U 
                                             & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT__q) 
                                                >> 4U)) 
                                            | (0x1fffffe0U 
                                               & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT__q) 
                                                   >> 3U) 
                                                  & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT__c) 
                                                     << 1U))))) 
                                  | ((0x10U & ((0x1ffffff0U 
                                                & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT__q) 
                                                   >> 3U)) 
                                               | (0x3ffffff0U 
                                                  & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT__q) 
                                                      >> 2U) 
                                                     & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT__c) 
                                                        << 1U))))) 
                                     | ((8U & ((0x3ffffff8U 
                                                & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT__q) 
                                                   >> 2U)) 
                                               | (0x7ffffff8U 
                                                  & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT__q) 
                                                      >> 1U) 
                                                     & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT__c) 
                                                        << 1U))))) 
                                        | ((4U & ((0x7ffffffcU 
                                                   & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT__q) 
                                                      >> 1U)) 
                                                  | (0xfffffffcU 
                                                     & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT__q) 
                                                        & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT__c) 
                                                           << 1U))))) 
                                           | ((2U & 
                                               ((0xfffffffeU 
                                                 & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT__q)) 
                                                | (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT__q) 
                                                    & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT__c)) 
                                                   << 1U))) 
                                              | (IData)(vlSelf->Brent_Kung_Adder__DOT____Vcellout__cin_generation__BRA__2__KET____DOT__f__cin))))))));
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT__c 
        = __Vtemp_hdb75c317__0;
}

VL_INLINE_OPT void VBrent_Kung_Adder___024root___ico_comb__TOP__5(VBrent_Kung_Adder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBrent_Kung_Adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBrent_Kung_Adder___024root___ico_comb__TOP__5\n"); );
    // Init
    CData/*31:0*/ __Vtemp_he105c81a__0;
    // Body
    __Vtemp_he105c81a__0 = ((0x80U & ((0x3ffff80U & 
                                       ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT__q) 
                                        >> 6U)) | (0x7ffff80U 
                                                   & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT__q) 
                                                       >> 5U) 
                                                      & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT__c) 
                                                         << 1U))))) 
                            | ((0x40U & ((0x7ffffc0U 
                                          & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT__q) 
                                             >> 5U)) 
                                         | (0xfffffc0U 
                                            & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT__q) 
                                                >> 4U) 
                                               & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT__c) 
                                                  << 1U))))) 
                               | ((0x20U & ((0xfffffe0U 
                                             & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT__q) 
                                                >> 4U)) 
                                            | (0x1fffffe0U 
                                               & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT__q) 
                                                   >> 3U) 
                                                  & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT__c) 
                                                     << 1U))))) 
                                  | ((0x10U & ((0x1ffffff0U 
                                                & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT__q) 
                                                   >> 3U)) 
                                               | (0x3ffffff0U 
                                                  & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT__q) 
                                                      >> 2U) 
                                                     & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT__c) 
                                                        << 1U))))) 
                                     | ((8U & ((0x3ffffff8U 
                                                & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT__q) 
                                                   >> 2U)) 
                                               | (0x7ffffff8U 
                                                  & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT__q) 
                                                      >> 1U) 
                                                     & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT__c) 
                                                        << 1U))))) 
                                        | ((4U & ((0x7ffffffcU 
                                                   & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT__q) 
                                                      >> 1U)) 
                                                  | (0xfffffffcU 
                                                     & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT__q) 
                                                        & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT__c) 
                                                           << 1U))))) 
                                           | ((2U & 
                                               ((0xfffffffeU 
                                                 & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT__q)) 
                                                | (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT__q) 
                                                    & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT__c)) 
                                                   << 1U))) 
                                              | (IData)(vlSelf->Brent_Kung_Adder__DOT____Vcellout__cin_generation__BRA__6__KET____DOT__f__cin))))))));
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT__c 
        = __Vtemp_he105c81a__0;
    vlSelf->Brent_Kung_Adder__DOT____VdfgTmp_h5b5c6a0f__0 
        = ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT____VdfgTmp_h166b2609__0) 
           ^ ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT__c) 
              >> 7U));
}

VL_INLINE_OPT void VBrent_Kung_Adder___024root___ico_comb__TOP__6(VBrent_Kung_Adder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBrent_Kung_Adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBrent_Kung_Adder___024root___ico_comb__TOP__6\n"); );
    // Init
    CData/*31:0*/ __Vtemp_h4bb6a2b3__0;
    // Body
    __Vtemp_h4bb6a2b3__0 = ((0x80U & ((0x3ffff80U & 
                                       ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT__q) 
                                        >> 6U)) | (0x7ffff80U 
                                                   & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT__q) 
                                                       >> 5U) 
                                                      & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT__c) 
                                                         << 1U))))) 
                            | ((0x40U & ((0x7ffffc0U 
                                          & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT__q) 
                                             >> 5U)) 
                                         | (0xfffffc0U 
                                            & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT__q) 
                                                >> 4U) 
                                               & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT__c) 
                                                  << 1U))))) 
                               | ((0x20U & ((0xfffffe0U 
                                             & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT__q) 
                                                >> 4U)) 
                                            | (0x1fffffe0U 
                                               & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT__q) 
                                                   >> 3U) 
                                                  & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT__c) 
                                                     << 1U))))) 
                                  | ((0x10U & ((0x1ffffff0U 
                                                & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT__q) 
                                                   >> 3U)) 
                                               | (0x3ffffff0U 
                                                  & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT__q) 
                                                      >> 2U) 
                                                     & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT__c) 
                                                        << 1U))))) 
                                     | ((8U & ((0x3ffffff8U 
                                                & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT__q) 
                                                   >> 2U)) 
                                               | (0x7ffffff8U 
                                                  & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT__q) 
                                                      >> 1U) 
                                                     & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT__c) 
                                                        << 1U))))) 
                                        | ((4U & ((0x7ffffffcU 
                                                   & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT__q) 
                                                      >> 1U)) 
                                                  | (0xfffffffcU 
                                                     & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT__q) 
                                                        & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT__c) 
                                                           << 1U))))) 
                                           | ((2U & 
                                               ((0xfffffffeU 
                                                 & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT__q)) 
                                                | (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT__q) 
                                                    & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT__c)) 
                                                   << 1U))) 
                                              | (IData)(vlSelf->Brent_Kung_Adder__DOT____Vcellout__cin_generation__BRA__1__KET____DOT__f__cin))))))));
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT__c 
        = __Vtemp_h4bb6a2b3__0;
}

VL_INLINE_OPT void VBrent_Kung_Adder___024root___ico_comb__TOP__7(VBrent_Kung_Adder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBrent_Kung_Adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBrent_Kung_Adder___024root___ico_comb__TOP__7\n"); );
    // Init
    CData/*31:0*/ __Vtemp_h4bf74a45__0;
    // Body
    __Vtemp_h4bf74a45__0 = ((0x80U & ((0x3ffff80U & 
                                       ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT__q) 
                                        >> 6U)) | (0x7ffff80U 
                                                   & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT__q) 
                                                       >> 5U) 
                                                      & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT__c) 
                                                         << 1U))))) 
                            | ((0x40U & ((0x7ffffc0U 
                                          & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT__q) 
                                             >> 5U)) 
                                         | (0xfffffc0U 
                                            & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT__q) 
                                                >> 4U) 
                                               & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT__c) 
                                                  << 1U))))) 
                               | ((0x20U & ((0xfffffe0U 
                                             & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT__q) 
                                                >> 4U)) 
                                            | (0x1fffffe0U 
                                               & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT__q) 
                                                   >> 3U) 
                                                  & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT__c) 
                                                     << 1U))))) 
                                  | ((0x10U & ((0x1ffffff0U 
                                                & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT__q) 
                                                   >> 3U)) 
                                               | (0x3ffffff0U 
                                                  & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT__q) 
                                                      >> 2U) 
                                                     & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT__c) 
                                                        << 1U))))) 
                                     | ((8U & ((0x3ffffff8U 
                                                & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT__q) 
                                                   >> 2U)) 
                                               | (0x7ffffff8U 
                                                  & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT__q) 
                                                      >> 1U) 
                                                     & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT__c) 
                                                        << 1U))))) 
                                        | ((4U & ((0x7ffffffcU 
                                                   & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT__q) 
                                                      >> 1U)) 
                                                  | (0xfffffffcU 
                                                     & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT__q) 
                                                        & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT__c) 
                                                           << 1U))))) 
                                           | ((2U & 
                                               ((0xfffffffeU 
                                                 & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT__q)) 
                                                | (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT__q) 
                                                    & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT__c)) 
                                                   << 1U))) 
                                              | (IData)(vlSelf->Brent_Kung_Adder__DOT____Vcellout__cin_generation__BRA__0__KET____DOT__f__cin))))))));
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT__c 
        = __Vtemp_h4bf74a45__0;
}

VL_INLINE_OPT void VBrent_Kung_Adder___024root___ico_comb__TOP__8(VBrent_Kung_Adder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBrent_Kung_Adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBrent_Kung_Adder___024root___ico_comb__TOP__8\n"); );
    // Init
    CData/*31:0*/ __Vtemp_h1d813003__0;
    // Body
    __Vtemp_h1d813003__0 = ((0x80U & ((0x3ffff80U & 
                                       ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT__q) 
                                        >> 6U)) | (0x7ffff80U 
                                                   & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT__q) 
                                                       >> 5U) 
                                                      & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT__c) 
                                                         << 1U))))) 
                            | ((0x40U & ((0x7ffffc0U 
                                          & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT__q) 
                                             >> 5U)) 
                                         | (0xfffffc0U 
                                            & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT__q) 
                                                >> 4U) 
                                               & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT__c) 
                                                  << 1U))))) 
                               | ((0x20U & ((0xfffffe0U 
                                             & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT__q) 
                                                >> 4U)) 
                                            | (0x1fffffe0U 
                                               & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT__q) 
                                                   >> 3U) 
                                                  & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT__c) 
                                                     << 1U))))) 
                                  | ((0x10U & ((0x1ffffff0U 
                                                & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT__q) 
                                                   >> 3U)) 
                                               | (0x3ffffff0U 
                                                  & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT__q) 
                                                      >> 2U) 
                                                     & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT__c) 
                                                        << 1U))))) 
                                     | ((8U & ((0x3ffffff8U 
                                                & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT__q) 
                                                   >> 2U)) 
                                               | (0x7ffffff8U 
                                                  & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT__q) 
                                                      >> 1U) 
                                                     & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT__c) 
                                                        << 1U))))) 
                                        | ((4U & ((0x7ffffffcU 
                                                   & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT__q) 
                                                      >> 1U)) 
                                                  | (0xfffffffcU 
                                                     & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT__q) 
                                                        & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT__c) 
                                                           << 1U))))) 
                                           | ((2U & 
                                               ((0xfffffffeU 
                                                 & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT__q)) 
                                                | (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT__q) 
                                                    & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT__c)) 
                                                   << 1U))) 
                                              | (IData)(vlSelf->c0))))))));
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT__c 
        = __Vtemp_h1d813003__0;
    vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____Vcellout__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__s 
        = (1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0) 
                 ^ (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT__c)));
}

VL_INLINE_OPT void VBrent_Kung_Adder___024root___ico_comb__TOP__9(VBrent_Kung_Adder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBrent_Kung_Adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBrent_Kung_Adder___024root___ico_comb__TOP__9\n"); );
    // Body
    vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp 
        = ((0xf0000000U & (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp 
                           << 0x10U)) | (((IData)(vlSelf->Brent_Kung_Adder__DOT__t2__DOT____Vcellout__second_half_level__BRA__0__KET____DOT__second_half_level_logic__BRA__5__KET____DOT__f__r) 
                                          << 0x1aU) 
                                         | ((0x3ff0000U 
                                             & (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp 
                                                << 0x10U)) 
                                            | ((((((IData)(vlSelf->Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__parallel_stitch_up__BRA__14__KET____DOT__parallel_stitch_up_produce__DOT__f__DOT____VdfgTmp_hef005df1__0) 
                                                   & (IData)(vlSelf->__VdfgTmp_h02636d51__0)) 
                                                  | (IData)(vlSelf->__VdfgTmp_h21f0d06f__0)) 
                                                 << 0xfU) 
                                                | (((IData)(vlSelf->Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__parallel_stitch_up__BRA__14__KET____DOT__parallel_stitch_up_produce__DOT__f__DOT____VdfgTmp_hef005df1__0) 
                                                    & (IData)(vlSelf->__VdfgTmp_h08445fd0__0)) 
                                                   << 0xeU)) 
                                               | (((IData)(vlSelf->__VdfgTmp_h1f5a1e66__0) 
                                                   << 8U) 
                                                  | (IData)(vlSelf->Brent_Kung_Adder__DOT__t1__DOT____Vcellout__recursive_case__DOT__recursion_lsbh__r))))));
    vlSelf->Brent_Kung_Adder__DOT____Vcellout__cin_generation__BRA__7__KET____DOT__f__cin 
        = (1U & (((vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp 
                   >> 0x1eU) & (IData)(vlSelf->c0)) 
                 | (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp 
                    >> 0x1fU)));
}

VL_INLINE_OPT void VBrent_Kung_Adder___024root___ico_comb__TOP__10(VBrent_Kung_Adder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBrent_Kung_Adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBrent_Kung_Adder___024root___ico_comb__TOP__10\n"); );
    // Body
    vlSelf->Brent_Kung_Adder__DOT____VdfgTmp_h335431e1__0 
        = (((QData)((IData)((((IData)(vlSelf->Brent_Kung_Adder__DOT____VdfgTmp_h5b5c6a0f__0) 
                              << 7U) | ((0x40U & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT____VdfgTmp_h1ce9aeec__0) 
                                                   << 6U) 
                                                  ^ 
                                                  (0xffffffc0U 
                                                   & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT__c)))) 
                                        | ((0x20U & 
                                            (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT____VdfgTmp_hc905584f__0) 
                                              << 5U) 
                                             ^ (0xffffffe0U 
                                                & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT__c)))) 
                                           | ((0x10U 
                                               & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT____VdfgTmp_h984bded2__0) 
                                                   << 4U) 
                                                  ^ 
                                                  (0xfffffff0U 
                                                   & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT__c)))) 
                                              | ((8U 
                                                  & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT____VdfgTmp_h352e0dcb__0) 
                                                      << 3U) 
                                                     ^ 
                                                     (0xfffffff8U 
                                                      & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT__c)))) 
                                                 | ((4U 
                                                     & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT____VdfgTmp_hbf2851e6__0) 
                                                         << 2U) 
                                                        ^ 
                                                        (0xfffffffcU 
                                                         & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT__c)))) 
                                                    | ((2U 
                                                        & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT____VdfgTmp_h8a1e19e7__0) 
                                                            << 1U) 
                                                           ^ 
                                                           (0xfffffffeU 
                                                            & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT__c)))) 
                                                       | (1U 
                                                          & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0) 
                                                             ^ (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT__c)))))))))))) 
            << 0x38U) | (((QData)((IData)(((((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT____VdfgTmp_h166b2609__0) 
                                             ^ ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT__c) 
                                                >> 7U)) 
                                            << 7U) 
                                           | ((0x40U 
                                               & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT____VdfgTmp_h1ce9aeec__0) 
                                                   << 6U) 
                                                  ^ 
                                                  (0xffffffc0U 
                                                   & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT__c)))) 
                                              | ((0x20U 
                                                  & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT____VdfgTmp_hc905584f__0) 
                                                      << 5U) 
                                                     ^ 
                                                     (0xffffffe0U 
                                                      & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT__c)))) 
                                                 | ((0x10U 
                                                     & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT____VdfgTmp_h984bded2__0) 
                                                         << 4U) 
                                                        ^ 
                                                        (0xfffffff0U 
                                                         & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT__c)))) 
                                                    | ((8U 
                                                        & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT____VdfgTmp_h352e0dcb__0) 
                                                            << 3U) 
                                                           ^ 
                                                           (0xfffffff8U 
                                                            & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT__c)))) 
                                                       | ((4U 
                                                           & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT____VdfgTmp_hbf2851e6__0) 
                                                               << 2U) 
                                                              ^ 
                                                              (0xfffffffcU 
                                                               & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT__c)))) 
                                                          | ((2U 
                                                              & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT____VdfgTmp_h8a1e19e7__0) 
                                                                  << 1U) 
                                                                 ^ 
                                                                 (0xfffffffeU 
                                                                  & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT__c)))) 
                                                             | (1U 
                                                                & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0) 
                                                                   ^ (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT__c)))))))))))) 
                          << 0x30U) | (((QData)((IData)(
                                                        ((((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT____VdfgTmp_h166b2609__0) 
                                                           ^ 
                                                           ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT__c) 
                                                            >> 7U)) 
                                                          << 7U) 
                                                         | ((0x40U 
                                                             & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT____VdfgTmp_h1ce9aeec__0) 
                                                                 << 6U) 
                                                                ^ 
                                                                (0xffffffc0U 
                                                                 & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT__c)))) 
                                                            | ((0x20U 
                                                                & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT____VdfgTmp_hc905584f__0) 
                                                                    << 5U) 
                                                                   ^ 
                                                                   (0xffffffe0U 
                                                                    & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT__c)))) 
                                                               | ((0x10U 
                                                                   & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT____VdfgTmp_h984bded2__0) 
                                                                       << 4U) 
                                                                      ^ 
                                                                      (0xfffffff0U 
                                                                       & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT__c)))) 
                                                                  | ((8U 
                                                                      & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT____VdfgTmp_h352e0dcb__0) 
                                                                          << 3U) 
                                                                         ^ 
                                                                         (0xfffffff8U 
                                                                          & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT__c)))) 
                                                                     | ((4U 
                                                                         & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT____VdfgTmp_hbf2851e6__0) 
                                                                             << 2U) 
                                                                            ^ 
                                                                            (0xfffffffcU 
                                                                             & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT__c)))) 
                                                                        | ((2U 
                                                                            & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT____VdfgTmp_h8a1e19e7__0) 
                                                                                << 1U) 
                                                                               ^ 
                                                                               (0xfffffffeU 
                                                                                & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT__c)))) 
                                                                           | (1U 
                                                                              & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0) 
                                                                                ^ (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT__c)))))))))))) 
                                        << 0x28U) | 
                                       (((QData)((IData)(
                                                         ((((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT____VdfgTmp_h166b2609__0) 
                                                            ^ 
                                                            ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT__c) 
                                                             >> 7U)) 
                                                           << 7U) 
                                                          | ((0x40U 
                                                              & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT____VdfgTmp_h1ce9aeec__0) 
                                                                  << 6U) 
                                                                 ^ 
                                                                 (0xffffffc0U 
                                                                  & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT__c)))) 
                                                             | ((0x20U 
                                                                 & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT____VdfgTmp_hc905584f__0) 
                                                                     << 5U) 
                                                                    ^ 
                                                                    (0xffffffe0U 
                                                                     & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT__c)))) 
                                                                | ((0x10U 
                                                                    & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT____VdfgTmp_h984bded2__0) 
                                                                        << 4U) 
                                                                       ^ 
                                                                       (0xfffffff0U 
                                                                        & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT__c)))) 
                                                                   | ((8U 
                                                                       & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT____VdfgTmp_h352e0dcb__0) 
                                                                           << 3U) 
                                                                          ^ 
                                                                          (0xfffffff8U 
                                                                           & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT__c)))) 
                                                                      | ((4U 
                                                                          & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT____VdfgTmp_hbf2851e6__0) 
                                                                              << 2U) 
                                                                             ^ 
                                                                             (0xfffffffcU 
                                                                              & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT__c)))) 
                                                                         | ((2U 
                                                                             & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT____VdfgTmp_h8a1e19e7__0) 
                                                                                << 1U) 
                                                                                ^ 
                                                                                (0xfffffffeU 
                                                                                & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT__c)))) 
                                                                            | (1U 
                                                                               & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0) 
                                                                                ^ (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT__c)))))))))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          (((((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT____VdfgTmp_h166b2609__0) 
                                                              ^ 
                                                              ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT__c) 
                                                               >> 7U)) 
                                                             << 0x1fU) 
                                                            | ((0x40000000U 
                                                                & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT____VdfgTmp_h1ce9aeec__0) 
                                                                    << 0x1eU) 
                                                                   ^ 
                                                                   (0xc0000000U 
                                                                    & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT__c) 
                                                                       << 0x18U)))) 
                                                               | ((0x20000000U 
                                                                   & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT____VdfgTmp_hc905584f__0) 
                                                                       << 0x1dU) 
                                                                      ^ 
                                                                      (0xe0000000U 
                                                                       & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT__c) 
                                                                          << 0x18U)))) 
                                                                  | ((0x10000000U 
                                                                      & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT____VdfgTmp_h984bded2__0) 
                                                                          << 0x1cU) 
                                                                         ^ 
                                                                         (0xf0000000U 
                                                                          & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT__c) 
                                                                             << 0x18U)))) 
                                                                     | ((0x8000000U 
                                                                         & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT____VdfgTmp_h352e0dcb__0) 
                                                                             << 0x1bU) 
                                                                            ^ 
                                                                            (0xf8000000U 
                                                                             & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT__c) 
                                                                                << 0x18U)))) 
                                                                        | ((0x4000000U 
                                                                            & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT____VdfgTmp_hbf2851e6__0) 
                                                                                << 0x1aU) 
                                                                               ^ 
                                                                               (0xfc000000U 
                                                                                & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT__c) 
                                                                                << 0x18U)))) 
                                                                           | ((0x2000000U 
                                                                               & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT____VdfgTmp_h8a1e19e7__0) 
                                                                                << 0x19U) 
                                                                                ^ 
                                                                                (0xfe000000U 
                                                                                & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT__c) 
                                                                                << 0x18U)))) 
                                                                              | (0x1000000U 
                                                                                & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0) 
                                                                                ^ (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT__c)) 
                                                                                << 0x18U))))))))) 
                                                           | (((((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT____VdfgTmp_h166b2609__0) 
                                                                 ^ 
                                                                 ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT__c) 
                                                                  >> 7U)) 
                                                                << 0x17U) 
                                                               | ((0x400000U 
                                                                   & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT____VdfgTmp_h1ce9aeec__0) 
                                                                       << 0x16U) 
                                                                      ^ 
                                                                      (0xffc00000U 
                                                                       & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT__c) 
                                                                          << 0x10U)))) 
                                                                  | ((0x200000U 
                                                                      & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT____VdfgTmp_hc905584f__0) 
                                                                          << 0x15U) 
                                                                         ^ 
                                                                         (0xffe00000U 
                                                                          & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT__c) 
                                                                             << 0x10U)))) 
                                                                     | ((0x100000U 
                                                                         & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT____VdfgTmp_h984bded2__0) 
                                                                             << 0x14U) 
                                                                            ^ 
                                                                            (0xfff00000U 
                                                                             & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT__c) 
                                                                                << 0x10U)))) 
                                                                        | ((0x80000U 
                                                                            & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT____VdfgTmp_h352e0dcb__0) 
                                                                                << 0x13U) 
                                                                               ^ 
                                                                               (0xfff80000U 
                                                                                & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT__c) 
                                                                                << 0x10U)))) 
                                                                           | ((0x40000U 
                                                                               & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT____VdfgTmp_hbf2851e6__0) 
                                                                                << 0x12U) 
                                                                                ^ 
                                                                                (0xfffc0000U 
                                                                                & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT__c) 
                                                                                << 0x10U)))) 
                                                                              | ((0x20000U 
                                                                                & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT____VdfgTmp_h8a1e19e7__0) 
                                                                                << 0x11U) 
                                                                                ^ 
                                                                                (0xfffe0000U 
                                                                                & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT__c) 
                                                                                << 0x10U)))) 
                                                                                | (0x10000U 
                                                                                & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0) 
                                                                                ^ (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT__c)) 
                                                                                << 0x10U))))))))) 
                                                              | (((((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT____VdfgTmp_h166b2609__0) 
                                                                    ^ 
                                                                    ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT__c) 
                                                                     >> 7U)) 
                                                                   << 0xfU) 
                                                                  | ((0x4000U 
                                                                      & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT____VdfgTmp_h1ce9aeec__0) 
                                                                          << 0xeU) 
                                                                         ^ 
                                                                         (0xffffc000U 
                                                                          & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT__c) 
                                                                             << 8U)))) 
                                                                     | ((0x2000U 
                                                                         & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT____VdfgTmp_hc905584f__0) 
                                                                             << 0xdU) 
                                                                            ^ 
                                                                            (0xffffe000U 
                                                                             & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT__c) 
                                                                                << 8U)))) 
                                                                        | ((0x1000U 
                                                                            & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT____VdfgTmp_h984bded2__0) 
                                                                                << 0xcU) 
                                                                               ^ 
                                                                               (0xfffff000U 
                                                                                & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT__c) 
                                                                                << 8U)))) 
                                                                           | ((0x800U 
                                                                               & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT____VdfgTmp_h352e0dcb__0) 
                                                                                << 0xbU) 
                                                                                ^ 
                                                                                (0xfffff800U 
                                                                                & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT__c) 
                                                                                << 8U)))) 
                                                                              | ((0x400U 
                                                                                & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT____VdfgTmp_hbf2851e6__0) 
                                                                                << 0xaU) 
                                                                                ^ 
                                                                                (0xfffffc00U 
                                                                                & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT__c) 
                                                                                << 8U)))) 
                                                                                | ((0x200U 
                                                                                & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT____VdfgTmp_h8a1e19e7__0) 
                                                                                << 9U) 
                                                                                ^ 
                                                                                (0xfffffe00U 
                                                                                & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT__c) 
                                                                                << 8U)))) 
                                                                                | (0x100U 
                                                                                & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0) 
                                                                                ^ (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT__c)) 
                                                                                << 8U))))))))) 
                                                                 | ((((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h166b2609__0) 
                                                                      ^ 
                                                                      ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT__c) 
                                                                       >> 7U)) 
                                                                     << 7U) 
                                                                    | ((0x40U 
                                                                        & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h1ce9aeec__0) 
                                                                            << 6U) 
                                                                           ^ 
                                                                           (0xffffffc0U 
                                                                            & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT__c)))) 
                                                                       | ((0x20U 
                                                                           & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_hc905584f__0) 
                                                                               << 5U) 
                                                                              ^ 
                                                                              (0xffffffe0U 
                                                                               & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT__c)))) 
                                                                          | ((0x10U 
                                                                              & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h984bded2__0) 
                                                                                << 4U) 
                                                                                ^ 
                                                                                (0xfffffff0U 
                                                                                & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT__c)))) 
                                                                             | ((8U 
                                                                                & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h352e0dcb__0) 
                                                                                << 3U) 
                                                                                ^ 
                                                                                (0xfffffff8U 
                                                                                & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT__c)))) 
                                                                                | ((4U 
                                                                                & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_hbf2851e6__0) 
                                                                                << 2U) 
                                                                                ^ 
                                                                                (0xfffffffcU 
                                                                                & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT__c)))) 
                                                                                | ((2U 
                                                                                & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h8a1e19e7__0) 
                                                                                << 1U) 
                                                                                ^ 
                                                                                (0xfffffffeU 
                                                                                & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT__c)))) 
                                                                                | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____Vcellout__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__s)))))))))))))))));
    if (vlSelf->Brent_Kung_Adder__DOT____VdfgTmp_h5b5c6a0f__0) {
        vlSelf->S[0U] = (IData)((((QData)((IData)(vlSelf->Brent_Kung_Adder__DOT____VdfgTmp_h5b5c6a0f__0)) 
                                  << 0x3fU) | ((0x7ffffffffffffffeULL 
                                                & ((~ 
                                                    (vlSelf->Brent_Kung_Adder__DOT____VdfgTmp_h335431e1__0 
                                                     >> 1U)) 
                                                   << 1U)) 
                                               | (QData)((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____Vcellout__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__s)))));
        vlSelf->S[1U] = (IData)(((((QData)((IData)(vlSelf->Brent_Kung_Adder__DOT____VdfgTmp_h5b5c6a0f__0)) 
                                   << 0x3fU) | ((0x7ffffffffffffffeULL 
                                                 & ((~ 
                                                     (vlSelf->Brent_Kung_Adder__DOT____VdfgTmp_h335431e1__0 
                                                      >> 1U)) 
                                                    << 1U)) 
                                                | (QData)((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____Vcellout__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__s)))) 
                                 >> 0x20U));
    } else {
        vlSelf->S[0U] = (IData)(vlSelf->Brent_Kung_Adder__DOT____VdfgTmp_h335431e1__0);
        vlSelf->S[1U] = (IData)((vlSelf->Brent_Kung_Adder__DOT____VdfgTmp_h335431e1__0 
                                 >> 0x20U));
    }
    vlSelf->S[2U] = vlSelf->Brent_Kung_Adder__DOT____Vcellout__cin_generation__BRA__7__KET____DOT__f__cin;
}

void VBrent_Kung_Adder___024root___eval_ico(VBrent_Kung_Adder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBrent_Kung_Adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBrent_Kung_Adder___024root___eval_ico\n"); );
    // Body
    if ((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(9U))) {
        VBrent_Kung_Adder___024root___ico_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if (vlSelf->__VicoTriggered.at(0U)) {
        VBrent_Kung_Adder___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if (((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(3U)) 
         | vlSelf->__VicoTriggered.at(9U))) {
        VBrent_Kung_Adder___024root___ico_comb__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if (((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(5U)) 
         | vlSelf->__VicoTriggered.at(9U))) {
        VBrent_Kung_Adder___024root___ico_comb__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    if (((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(4U)) 
         | vlSelf->__VicoTriggered.at(9U))) {
        VBrent_Kung_Adder___024root___ico_comb__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
    }
    if (((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(6U)) 
         | vlSelf->__VicoTriggered.at(9U))) {
        VBrent_Kung_Adder___024root___ico_comb__TOP__4(vlSelf);
        vlSelf->__Vm_traceActivity[6U] = 1U;
    }
    if (((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(2U)) 
         | vlSelf->__VicoTriggered.at(9U))) {
        VBrent_Kung_Adder___024root___ico_comb__TOP__5(vlSelf);
        vlSelf->__Vm_traceActivity[7U] = 1U;
    }
    if (((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(7U)) 
         | vlSelf->__VicoTriggered.at(9U))) {
        VBrent_Kung_Adder___024root___ico_comb__TOP__6(vlSelf);
        vlSelf->__Vm_traceActivity[8U] = 1U;
    }
    if (((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(8U)) 
         | vlSelf->__VicoTriggered.at(9U))) {
        VBrent_Kung_Adder___024root___ico_comb__TOP__7(vlSelf);
        vlSelf->__Vm_traceActivity[9U] = 1U;
    }
    if ((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(1U))) {
        VBrent_Kung_Adder___024root___ico_comb__TOP__8(vlSelf);
        vlSelf->__Vm_traceActivity[0xaU] = 1U;
    }
    if ((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(9U))) {
        VBrent_Kung_Adder___024root___ico_comb__TOP__9(vlSelf);
        vlSelf->__Vm_traceActivity[0xbU] = 1U;
    }
    if ((((((((((vlSelf->__VicoTriggered.at(0U) | vlSelf->__VicoTriggered.at(1U)) 
                | vlSelf->__VicoTriggered.at(2U)) | vlSelf->__VicoTriggered.at(3U)) 
              | vlSelf->__VicoTriggered.at(4U)) | vlSelf->__VicoTriggered.at(5U)) 
            | vlSelf->__VicoTriggered.at(6U)) | vlSelf->__VicoTriggered.at(7U)) 
          | vlSelf->__VicoTriggered.at(8U)) | vlSelf->__VicoTriggered.at(9U))) {
        VBrent_Kung_Adder___024root___ico_comb__TOP__10(vlSelf);
    }
}

VL_INLINE_OPT void VBrent_Kung_Adder___024root___act_sequent__TOP__0(VBrent_Kung_Adder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBrent_Kung_Adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBrent_Kung_Adder___024root___act_sequent__TOP__0\n"); );
    // Body
    vlSelf->Brent_Kung_Adder__DOT__t2__DOT____Vcellout__second_half_level__BRA__0__KET____DOT__second_half_level_logic__BRA__5__KET____DOT__f__r 
        = ((2U & (((IData)((0x480U == (0x480U & vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp))) 
                   << 1U) | (0x3ffffeU & (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp 
                                          >> 0xaU)))) 
           | (IData)((0x440U == (0x440U & vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp))));
    vlSelf->Brent_Kung_Adder__DOT____Vcellout__cin_generation__BRA__5__KET____DOT__f__cin 
        = (1U & (((vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp 
                   >> 0x1aU) & (IData)(vlSelf->c0)) 
                 | (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp 
                    >> 0x1bU)));
    vlSelf->Brent_Kung_Adder__DOT____Vcellout__cin_generation__BRA__4__KET____DOT__f__cin 
        = (1U & (((IData)((0x1400000U == (0x1400000U 
                                          & vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp))) 
                  & (IData)(vlSelf->c0)) | ((IData)(
                                                    (0x1800000U 
                                                     == 
                                                     (0x1800000U 
                                                      & vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp))) 
                                            | (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp 
                                               >> 0x19U))));
    vlSelf->Brent_Kung_Adder__DOT____Vcellout__cin_generation__BRA__3__KET____DOT__f__cin 
        = (1U & (((vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp 
                   >> 0x16U) & (IData)(vlSelf->c0)) 
                 | (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp 
                    >> 0x17U)));
    vlSelf->Brent_Kung_Adder__DOT____Vcellout__cin_generation__BRA__2__KET____DOT__f__cin 
        = (1U & (((IData)((0x140000U == (0x140000U 
                                         & vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp))) 
                  & (IData)(vlSelf->c0)) | ((IData)(
                                                    (0x180000U 
                                                     == 
                                                     (0x180000U 
                                                      & vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp))) 
                                            | (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp 
                                               >> 0x15U))));
    vlSelf->Brent_Kung_Adder__DOT____Vcellout__cin_generation__BRA__1__KET____DOT__f__cin 
        = (1U & (((vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp 
                   >> 0x12U) & (IData)(vlSelf->c0)) 
                 | (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp 
                    >> 0x13U)));
    vlSelf->Brent_Kung_Adder__DOT____Vcellout__cin_generation__BRA__0__KET____DOT__f__cin 
        = (1U & (((vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp 
                   >> 0x10U) & (IData)(vlSelf->c0)) 
                 | (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp 
                    >> 0x11U)));
    vlSelf->Brent_Kung_Adder__DOT____Vcellout__cin_generation__BRA__6__KET____DOT__f__cin 
        = (1U & (((IData)((0x14000000U == (0x14000000U 
                                           & vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp))) 
                  & (IData)(vlSelf->c0)) | ((IData)(
                                                    (0x18000000U 
                                                     == 
                                                     (0x18000000U 
                                                      & vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp))) 
                                            | (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp 
                                               >> 0x1dU))));
}

void VBrent_Kung_Adder___024root___eval_act(VBrent_Kung_Adder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBrent_Kung_Adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBrent_Kung_Adder___024root___eval_act\n"); );
    // Body
    if (vlSelf->__VactTriggered.at(8U)) {
        VBrent_Kung_Adder___024root___act_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[0xcU] = 1U;
    }
    if ((vlSelf->__VactTriggered.at(2U) | vlSelf->__VactTriggered.at(8U))) {
        VBrent_Kung_Adder___024root___ico_comb__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[0xdU] = 1U;
    }
    if ((vlSelf->__VactTriggered.at(4U) | vlSelf->__VactTriggered.at(8U))) {
        VBrent_Kung_Adder___024root___ico_comb__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[0xeU] = 1U;
    }
    if ((vlSelf->__VactTriggered.at(3U) | vlSelf->__VactTriggered.at(8U))) {
        VBrent_Kung_Adder___024root___ico_comb__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[0xfU] = 1U;
    }
    if ((vlSelf->__VactTriggered.at(5U) | vlSelf->__VactTriggered.at(8U))) {
        VBrent_Kung_Adder___024root___ico_comb__TOP__4(vlSelf);
        vlSelf->__Vm_traceActivity[0x10U] = 1U;
    }
    if ((vlSelf->__VactTriggered.at(1U) | vlSelf->__VactTriggered.at(8U))) {
        VBrent_Kung_Adder___024root___ico_comb__TOP__5(vlSelf);
        vlSelf->__Vm_traceActivity[0x11U] = 1U;
    }
    if ((vlSelf->__VactTriggered.at(6U) | vlSelf->__VactTriggered.at(8U))) {
        VBrent_Kung_Adder___024root___ico_comb__TOP__6(vlSelf);
        vlSelf->__Vm_traceActivity[0x12U] = 1U;
    }
    if ((vlSelf->__VactTriggered.at(7U) | vlSelf->__VactTriggered.at(8U))) {
        VBrent_Kung_Adder___024root___ico_comb__TOP__7(vlSelf);
        vlSelf->__Vm_traceActivity[0x13U] = 1U;
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VBrent_Kung_Adder___024root___ico_comb__TOP__8(vlSelf);
        vlSelf->__Vm_traceActivity[0x14U] = 1U;
    }
    if (vlSelf->__VactTriggered.at(8U)) {
        VBrent_Kung_Adder___024root___ico_comb__TOP__9(vlSelf);
        vlSelf->__Vm_traceActivity[0x15U] = 1U;
    }
    if (((((((((vlSelf->__VactTriggered.at(0U) | vlSelf->__VactTriggered.at(1U)) 
               | vlSelf->__VactTriggered.at(2U)) | vlSelf->__VactTriggered.at(3U)) 
             | vlSelf->__VactTriggered.at(4U)) | vlSelf->__VactTriggered.at(5U)) 
           | vlSelf->__VactTriggered.at(6U)) | vlSelf->__VactTriggered.at(7U)) 
         | vlSelf->__VactTriggered.at(8U))) {
        VBrent_Kung_Adder___024root___ico_comb__TOP__10(vlSelf);
    }
}

void VBrent_Kung_Adder___024root___eval_nba(VBrent_Kung_Adder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBrent_Kung_Adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBrent_Kung_Adder___024root___eval_nba\n"); );
}

void VBrent_Kung_Adder___024root___eval_triggers__ico(VBrent_Kung_Adder___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VBrent_Kung_Adder___024root___dump_triggers__ico(VBrent_Kung_Adder___024root* vlSelf);
#endif  // VL_DEBUG
void VBrent_Kung_Adder___024root___eval_triggers__act(VBrent_Kung_Adder___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VBrent_Kung_Adder___024root___dump_triggers__act(VBrent_Kung_Adder___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VBrent_Kung_Adder___024root___dump_triggers__nba(VBrent_Kung_Adder___024root* vlSelf);
#endif  // VL_DEBUG

void VBrent_Kung_Adder___024root___eval(VBrent_Kung_Adder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBrent_Kung_Adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBrent_Kung_Adder___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<9> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        VBrent_Kung_Adder___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                VBrent_Kung_Adder___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("/home/chelsea/cpu/vsrc/Brent_Kung_Adder.v", 2, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            VBrent_Kung_Adder___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            VBrent_Kung_Adder___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    VBrent_Kung_Adder___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("/home/chelsea/cpu/vsrc/Brent_Kung_Adder.v", 2, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                VBrent_Kung_Adder___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                VBrent_Kung_Adder___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("/home/chelsea/cpu/vsrc/Brent_Kung_Adder.v", 2, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            VBrent_Kung_Adder___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void VBrent_Kung_Adder___024root___eval_debug_assertions(VBrent_Kung_Adder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBrent_Kung_Adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBrent_Kung_Adder___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->c0 & 0xfeU))) {
        Verilated::overWidthError("c0");}
}
#endif  // VL_DEBUG
