// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdiv.h for the primary calling header

#include "verilated.h"

#include "Vdiv___024root.h"

extern const VlUnpacked<CData/*4:0*/, 4096> Vdiv__ConstPool__TABLE_hc49d9719_0;

VL_INLINE_OPT void Vdiv___024root___ico_sequent__TOP__0(Vdiv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdiv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdiv___024root___ico_sequent__TOP__0\n"); );
    // Init
    SData/*11:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
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
    __Vtableidx1 = (((IData)(vlSelf->valid) << 0xbU) 
                    | (((IData)(vlSelf->rst_n) << 0xaU) 
                       | (((((IData)(vlSelf->div__DOT__cout) 
                             == (0x3fU & ((IData)(vlSelf->div__DOT__shift) 
                                          - (IData)(1U))))
                             ? 8U : 4U) << 5U) | (IData)(vlSelf->div__DOT__current_state))));
    vlSelf->div__DOT__next_state = Vdiv__ConstPool__TABLE_hc49d9719_0
        [__Vtableidx1];
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
    vlSelf->div__DOT__add_B = (((- (QData)((IData)(
                                                   (3U 
                                                    == (IData)(vlSelf->div__DOT__q))))) 
                                & vlSelf->div__DOT__divisor) 
                               | ((- (QData)((IData)(
                                                     (1U 
                                                      == (IData)(vlSelf->div__DOT__q))))) 
                                  & vlSelf->div__DOT__divisor_n));
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

void Vdiv___024root___eval_ico(Vdiv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdiv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdiv___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        Vdiv___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

VL_INLINE_OPT void Vdiv___024root___act_sequent__TOP__0(Vdiv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdiv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdiv___024root___act_sequent__TOP__0\n"); );
    // Init
    CData/*31:0*/ __Vtemp_h92173361__0;
    // Body
    __Vtemp_h92173361__0 = (((IData)(((3U == (3U & (IData)(vlSelf->div__DOT__lzd1__DOT__lzd_32_1__DOT__lzd_16_1__DOT__z))) 
                                      & (0xcU != (0xcU 
                                                  & (IData)(vlSelf->div__DOT__lzd1__DOT__lzd_32_1__DOT__lzd_16_1__DOT__z))))) 
                             << 3U) | ((4U & (((IData)(vlSelf->div__DOT__lzd1__DOT__lzd_32_1__DOT__lzd_16_1__DOT__z) 
                                               & ((~ 
                                                   ((IData)(vlSelf->div__DOT__lzd1__DOT__lzd_32_1__DOT__lzd_16_1__DOT__z) 
                                                    >> 1U)) 
                                                  | (IData)(
                                                            (4U 
                                                             == 
                                                             (0xcU 
                                                              & (IData)(vlSelf->div__DOT__lzd1__DOT__lzd_32_1__DOT__lzd_16_1__DOT__z)))))) 
                                              << 2U)) 
                                       | (((((- (IData)((IData)(
                                                                (0U 
                                                                 == 
                                                                 (0xcU 
                                                                  & (IData)(vlSelf->div__DOT__lzd1__DOT__lzd_32_1__DOT____Vcellout__lzd_16_1____pinNumber2)))))) 
                                             & vlSelf->div__DOT__lzd1__DOT__lzd_32_1__DOT__lzd_16_1__DOT__out_2
                                             [0U]) 
                                            | ((- (IData)((IData)(
                                                                  (4U 
                                                                   == 
                                                                   (0xcU 
                                                                    & (IData)(vlSelf->div__DOT__lzd1__DOT__lzd_32_1__DOT____Vcellout__lzd_16_1____pinNumber2)))))) 
                                               & vlSelf->div__DOT__lzd1__DOT__lzd_32_1__DOT__lzd_16_1__DOT__out_2
                                               [1U])) 
                                           | ((- (IData)((IData)(
                                                                 (8U 
                                                                  == 
                                                                  (0xcU 
                                                                   & (IData)(vlSelf->div__DOT__lzd1__DOT__lzd_32_1__DOT____Vcellout__lzd_16_1____pinNumber2)))))) 
                                              & vlSelf->div__DOT__lzd1__DOT__lzd_32_1__DOT__lzd_16_1__DOT__out_2
                                              [2U])) 
                                          | ((- (IData)((IData)(
                                                                (0xcU 
                                                                 == 
                                                                 (0xcU 
                                                                  & (IData)(vlSelf->div__DOT__lzd1__DOT__lzd_32_1__DOT____Vcellout__lzd_16_1____pinNumber2)))))) 
                                             & vlSelf->div__DOT__lzd1__DOT__lzd_32_1__DOT__lzd_16_1__DOT__out_2
                                             [3U]))));
    vlSelf->div__DOT__lzd1__DOT__lzd_32_1__DOT____Vcellout__lzd_16_1____pinNumber2 
        = __Vtemp_h92173361__0;
    vlSelf->div__DOT__lzd1__DOT__lzd_32_1__DOT__out_3_0[1U] 
        = vlSelf->div__DOT__lzd1__DOT__lzd_32_1__DOT____Vcellout__lzd_16_1____pinNumber2;
}

VL_INLINE_OPT void Vdiv___024root___act_sequent__TOP__1(Vdiv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdiv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdiv___024root___act_sequent__TOP__1\n"); );
    // Init
    CData/*31:0*/ __Vtemp_h3452bcf6__0;
    // Body
    __Vtemp_h3452bcf6__0 = (((IData)(((3U == (3U & (IData)(vlSelf->div__DOT__lzd1__DOT__lzd_32_0__DOT__lzd_16_1__DOT__z))) 
                                      & (0xcU != (0xcU 
                                                  & (IData)(vlSelf->div__DOT__lzd1__DOT__lzd_32_0__DOT__lzd_16_1__DOT__z))))) 
                             << 3U) | ((4U & (((IData)(vlSelf->div__DOT__lzd1__DOT__lzd_32_0__DOT__lzd_16_1__DOT__z) 
                                               & ((~ 
                                                   ((IData)(vlSelf->div__DOT__lzd1__DOT__lzd_32_0__DOT__lzd_16_1__DOT__z) 
                                                    >> 1U)) 
                                                  | (IData)(
                                                            (4U 
                                                             == 
                                                             (0xcU 
                                                              & (IData)(vlSelf->div__DOT__lzd1__DOT__lzd_32_0__DOT__lzd_16_1__DOT__z)))))) 
                                              << 2U)) 
                                       | (((((- (IData)((IData)(
                                                                (0U 
                                                                 == 
                                                                 (0xcU 
                                                                  & (IData)(vlSelf->div__DOT__lzd1__DOT__lzd_32_0__DOT____Vcellout__lzd_16_1____pinNumber2)))))) 
                                             & vlSelf->div__DOT__lzd1__DOT__lzd_32_0__DOT__lzd_16_1__DOT__out_2
                                             [0U]) 
                                            | ((- (IData)((IData)(
                                                                  (4U 
                                                                   == 
                                                                   (0xcU 
                                                                    & (IData)(vlSelf->div__DOT__lzd1__DOT__lzd_32_0__DOT____Vcellout__lzd_16_1____pinNumber2)))))) 
                                               & vlSelf->div__DOT__lzd1__DOT__lzd_32_0__DOT__lzd_16_1__DOT__out_2
                                               [1U])) 
                                           | ((- (IData)((IData)(
                                                                 (8U 
                                                                  == 
                                                                  (0xcU 
                                                                   & (IData)(vlSelf->div__DOT__lzd1__DOT__lzd_32_0__DOT____Vcellout__lzd_16_1____pinNumber2)))))) 
                                              & vlSelf->div__DOT__lzd1__DOT__lzd_32_0__DOT__lzd_16_1__DOT__out_2
                                              [2U])) 
                                          | ((- (IData)((IData)(
                                                                (0xcU 
                                                                 == 
                                                                 (0xcU 
                                                                  & (IData)(vlSelf->div__DOT__lzd1__DOT__lzd_32_0__DOT____Vcellout__lzd_16_1____pinNumber2)))))) 
                                             & vlSelf->div__DOT__lzd1__DOT__lzd_32_0__DOT__lzd_16_1__DOT__out_2
                                             [3U]))));
    vlSelf->div__DOT__lzd1__DOT__lzd_32_0__DOT____Vcellout__lzd_16_1____pinNumber2 
        = __Vtemp_h3452bcf6__0;
    vlSelf->div__DOT__lzd1__DOT__lzd_32_0__DOT__out_3_0[1U] 
        = vlSelf->div__DOT__lzd1__DOT__lzd_32_0__DOT____Vcellout__lzd_16_1____pinNumber2;
}

VL_INLINE_OPT void Vdiv___024root___act_sequent__TOP__2(Vdiv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdiv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdiv___024root___act_sequent__TOP__2\n"); );
    // Init
    CData/*31:0*/ __Vtemp_h7ecde2de__0;
    // Body
    __Vtemp_h7ecde2de__0 = (((IData)(((3U == (3U & (IData)(vlSelf->div__DOT__lzd1__DOT__lzd_32_1__DOT__lzd_16_0__DOT__z))) 
                                      & (0xcU != (0xcU 
                                                  & (IData)(vlSelf->div__DOT__lzd1__DOT__lzd_32_1__DOT__lzd_16_0__DOT__z))))) 
                             << 3U) | ((4U & (((IData)(vlSelf->div__DOT__lzd1__DOT__lzd_32_1__DOT__lzd_16_0__DOT__z) 
                                               & ((~ 
                                                   ((IData)(vlSelf->div__DOT__lzd1__DOT__lzd_32_1__DOT__lzd_16_0__DOT__z) 
                                                    >> 1U)) 
                                                  | (IData)(
                                                            (4U 
                                                             == 
                                                             (0xcU 
                                                              & (IData)(vlSelf->div__DOT__lzd1__DOT__lzd_32_1__DOT__lzd_16_0__DOT__z)))))) 
                                              << 2U)) 
                                       | (((((- (IData)((IData)(
                                                                (0U 
                                                                 == 
                                                                 (0xcU 
                                                                  & (IData)(vlSelf->div__DOT__lzd1__DOT__lzd_32_1__DOT____Vcellout__lzd_16_0____pinNumber2)))))) 
                                             & vlSelf->div__DOT__lzd1__DOT__lzd_32_1__DOT__lzd_16_0__DOT__out_2
                                             [0U]) 
                                            | ((- (IData)((IData)(
                                                                  (4U 
                                                                   == 
                                                                   (0xcU 
                                                                    & (IData)(vlSelf->div__DOT__lzd1__DOT__lzd_32_1__DOT____Vcellout__lzd_16_0____pinNumber2)))))) 
                                               & vlSelf->div__DOT__lzd1__DOT__lzd_32_1__DOT__lzd_16_0__DOT__out_2
                                               [1U])) 
                                           | ((- (IData)((IData)(
                                                                 (8U 
                                                                  == 
                                                                  (0xcU 
                                                                   & (IData)(vlSelf->div__DOT__lzd1__DOT__lzd_32_1__DOT____Vcellout__lzd_16_0____pinNumber2)))))) 
                                              & vlSelf->div__DOT__lzd1__DOT__lzd_32_1__DOT__lzd_16_0__DOT__out_2
                                              [2U])) 
                                          | ((- (IData)((IData)(
                                                                (0xcU 
                                                                 == 
                                                                 (0xcU 
                                                                  & (IData)(vlSelf->div__DOT__lzd1__DOT__lzd_32_1__DOT____Vcellout__lzd_16_0____pinNumber2)))))) 
                                             & vlSelf->div__DOT__lzd1__DOT__lzd_32_1__DOT__lzd_16_0__DOT__out_2
                                             [3U]))));
    vlSelf->div__DOT__lzd1__DOT__lzd_32_1__DOT____Vcellout__lzd_16_0____pinNumber2 
        = __Vtemp_h7ecde2de__0;
    vlSelf->div__DOT__lzd1__DOT__lzd_32_1__DOT__out_3_0[0U] 
        = vlSelf->div__DOT__lzd1__DOT__lzd_32_1__DOT____Vcellout__lzd_16_0____pinNumber2;
}

VL_INLINE_OPT void Vdiv___024root___act_sequent__TOP__3(Vdiv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdiv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdiv___024root___act_sequent__TOP__3\n"); );
    // Init
    CData/*31:0*/ __Vtemp_h8cc62561__0;
    // Body
    __Vtemp_h8cc62561__0 = (((IData)(((3U == (3U & (IData)(vlSelf->div__DOT__lzd0__DOT__lzd_32_1__DOT__lzd_16_1__DOT__z))) 
                                      & (0xcU != (0xcU 
                                                  & (IData)(vlSelf->div__DOT__lzd0__DOT__lzd_32_1__DOT__lzd_16_1__DOT__z))))) 
                             << 3U) | ((4U & (((IData)(vlSelf->div__DOT__lzd0__DOT__lzd_32_1__DOT__lzd_16_1__DOT__z) 
                                               & ((~ 
                                                   ((IData)(vlSelf->div__DOT__lzd0__DOT__lzd_32_1__DOT__lzd_16_1__DOT__z) 
                                                    >> 1U)) 
                                                  | (IData)(
                                                            (4U 
                                                             == 
                                                             (0xcU 
                                                              & (IData)(vlSelf->div__DOT__lzd0__DOT__lzd_32_1__DOT__lzd_16_1__DOT__z)))))) 
                                              << 2U)) 
                                       | (((((- (IData)((IData)(
                                                                (0U 
                                                                 == 
                                                                 (0xcU 
                                                                  & (IData)(vlSelf->div__DOT__lzd0__DOT__lzd_32_1__DOT____Vcellout__lzd_16_1____pinNumber2)))))) 
                                             & vlSelf->div__DOT__lzd0__DOT__lzd_32_1__DOT__lzd_16_1__DOT__out_2
                                             [0U]) 
                                            | ((- (IData)((IData)(
                                                                  (4U 
                                                                   == 
                                                                   (0xcU 
                                                                    & (IData)(vlSelf->div__DOT__lzd0__DOT__lzd_32_1__DOT____Vcellout__lzd_16_1____pinNumber2)))))) 
                                               & vlSelf->div__DOT__lzd0__DOT__lzd_32_1__DOT__lzd_16_1__DOT__out_2
                                               [1U])) 
                                           | ((- (IData)((IData)(
                                                                 (8U 
                                                                  == 
                                                                  (0xcU 
                                                                   & (IData)(vlSelf->div__DOT__lzd0__DOT__lzd_32_1__DOT____Vcellout__lzd_16_1____pinNumber2)))))) 
                                              & vlSelf->div__DOT__lzd0__DOT__lzd_32_1__DOT__lzd_16_1__DOT__out_2
                                              [2U])) 
                                          | ((- (IData)((IData)(
                                                                (0xcU 
                                                                 == 
                                                                 (0xcU 
                                                                  & (IData)(vlSelf->div__DOT__lzd0__DOT__lzd_32_1__DOT____Vcellout__lzd_16_1____pinNumber2)))))) 
                                             & vlSelf->div__DOT__lzd0__DOT__lzd_32_1__DOT__lzd_16_1__DOT__out_2
                                             [3U]))));
    vlSelf->div__DOT__lzd0__DOT__lzd_32_1__DOT____Vcellout__lzd_16_1____pinNumber2 
        = __Vtemp_h8cc62561__0;
    vlSelf->div__DOT__lzd0__DOT__lzd_32_1__DOT__out_3_0[1U] 
        = vlSelf->div__DOT__lzd0__DOT__lzd_32_1__DOT____Vcellout__lzd_16_1____pinNumber2;
}

VL_INLINE_OPT void Vdiv___024root___act_sequent__TOP__4(Vdiv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdiv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdiv___024root___act_sequent__TOP__4\n"); );
    // Init
    CData/*31:0*/ __Vtemp_h401d68a5__0;
    // Body
    __Vtemp_h401d68a5__0 = (((IData)(((3U == (3U & (IData)(vlSelf->div__DOT__lzd1__DOT__lzd_32_0__DOT__lzd_16_0__DOT__z))) 
                                      & (0xcU != (0xcU 
                                                  & (IData)(vlSelf->div__DOT__lzd1__DOT__lzd_32_0__DOT__lzd_16_0__DOT__z))))) 
                             << 3U) | ((4U & (((IData)(vlSelf->div__DOT__lzd1__DOT__lzd_32_0__DOT__lzd_16_0__DOT__z) 
                                               & ((~ 
                                                   ((IData)(vlSelf->div__DOT__lzd1__DOT__lzd_32_0__DOT__lzd_16_0__DOT__z) 
                                                    >> 1U)) 
                                                  | (IData)(
                                                            (4U 
                                                             == 
                                                             (0xcU 
                                                              & (IData)(vlSelf->div__DOT__lzd1__DOT__lzd_32_0__DOT__lzd_16_0__DOT__z)))))) 
                                              << 2U)) 
                                       | (((((- (IData)((IData)(
                                                                (0U 
                                                                 == 
                                                                 (0xcU 
                                                                  & (IData)(vlSelf->div__DOT__lzd1__DOT__lzd_32_0__DOT____Vcellout__lzd_16_0____pinNumber2)))))) 
                                             & vlSelf->div__DOT__lzd1__DOT__lzd_32_0__DOT__lzd_16_0__DOT__out_2
                                             [0U]) 
                                            | ((- (IData)((IData)(
                                                                  (4U 
                                                                   == 
                                                                   (0xcU 
                                                                    & (IData)(vlSelf->div__DOT__lzd1__DOT__lzd_32_0__DOT____Vcellout__lzd_16_0____pinNumber2)))))) 
                                               & vlSelf->div__DOT__lzd1__DOT__lzd_32_0__DOT__lzd_16_0__DOT__out_2
                                               [1U])) 
                                           | ((- (IData)((IData)(
                                                                 (8U 
                                                                  == 
                                                                  (0xcU 
                                                                   & (IData)(vlSelf->div__DOT__lzd1__DOT__lzd_32_0__DOT____Vcellout__lzd_16_0____pinNumber2)))))) 
                                              & vlSelf->div__DOT__lzd1__DOT__lzd_32_0__DOT__lzd_16_0__DOT__out_2
                                              [2U])) 
                                          | ((- (IData)((IData)(
                                                                (0xcU 
                                                                 == 
                                                                 (0xcU 
                                                                  & (IData)(vlSelf->div__DOT__lzd1__DOT__lzd_32_0__DOT____Vcellout__lzd_16_0____pinNumber2)))))) 
                                             & vlSelf->div__DOT__lzd1__DOT__lzd_32_0__DOT__lzd_16_0__DOT__out_2
                                             [3U]))));
    vlSelf->div__DOT__lzd1__DOT__lzd_32_0__DOT____Vcellout__lzd_16_0____pinNumber2 
        = __Vtemp_h401d68a5__0;
    vlSelf->div__DOT__lzd1__DOT__lzd_32_0__DOT__out_3_0[0U] 
        = vlSelf->div__DOT__lzd1__DOT__lzd_32_0__DOT____Vcellout__lzd_16_0____pinNumber2;
}

VL_INLINE_OPT void Vdiv___024root___act_sequent__TOP__5(Vdiv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdiv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdiv___024root___act_sequent__TOP__5\n"); );
    // Init
    CData/*31:0*/ __Vtemp_h866a68ce__0;
    // Body
    __Vtemp_h866a68ce__0 = (((IData)(((3U == (3U & (IData)(vlSelf->div__DOT__lzd0__DOT__lzd_32_0__DOT__lzd_16_1__DOT__z))) 
                                      & (0xcU != (0xcU 
                                                  & (IData)(vlSelf->div__DOT__lzd0__DOT__lzd_32_0__DOT__lzd_16_1__DOT__z))))) 
                             << 3U) | ((4U & (((IData)(vlSelf->div__DOT__lzd0__DOT__lzd_32_0__DOT__lzd_16_1__DOT__z) 
                                               & ((~ 
                                                   ((IData)(vlSelf->div__DOT__lzd0__DOT__lzd_32_0__DOT__lzd_16_1__DOT__z) 
                                                    >> 1U)) 
                                                  | (IData)(
                                                            (4U 
                                                             == 
                                                             (0xcU 
                                                              & (IData)(vlSelf->div__DOT__lzd0__DOT__lzd_32_0__DOT__lzd_16_1__DOT__z)))))) 
                                              << 2U)) 
                                       | (((((- (IData)((IData)(
                                                                (0U 
                                                                 == 
                                                                 (0xcU 
                                                                  & (IData)(vlSelf->div__DOT__lzd0__DOT__lzd_32_0__DOT____Vcellout__lzd_16_1____pinNumber2)))))) 
                                             & vlSelf->div__DOT__lzd0__DOT__lzd_32_0__DOT__lzd_16_1__DOT__out_2
                                             [0U]) 
                                            | ((- (IData)((IData)(
                                                                  (4U 
                                                                   == 
                                                                   (0xcU 
                                                                    & (IData)(vlSelf->div__DOT__lzd0__DOT__lzd_32_0__DOT____Vcellout__lzd_16_1____pinNumber2)))))) 
                                               & vlSelf->div__DOT__lzd0__DOT__lzd_32_0__DOT__lzd_16_1__DOT__out_2
                                               [1U])) 
                                           | ((- (IData)((IData)(
                                                                 (8U 
                                                                  == 
                                                                  (0xcU 
                                                                   & (IData)(vlSelf->div__DOT__lzd0__DOT__lzd_32_0__DOT____Vcellout__lzd_16_1____pinNumber2)))))) 
                                              & vlSelf->div__DOT__lzd0__DOT__lzd_32_0__DOT__lzd_16_1__DOT__out_2
                                              [2U])) 
                                          | ((- (IData)((IData)(
                                                                (0xcU 
                                                                 == 
                                                                 (0xcU 
                                                                  & (IData)(vlSelf->div__DOT__lzd0__DOT__lzd_32_0__DOT____Vcellout__lzd_16_1____pinNumber2)))))) 
                                             & vlSelf->div__DOT__lzd0__DOT__lzd_32_0__DOT__lzd_16_1__DOT__out_2
                                             [3U]))));
    vlSelf->div__DOT__lzd0__DOT__lzd_32_0__DOT____Vcellout__lzd_16_1____pinNumber2 
        = __Vtemp_h866a68ce__0;
    vlSelf->div__DOT__lzd0__DOT__lzd_32_0__DOT__out_3_0[1U] 
        = vlSelf->div__DOT__lzd0__DOT__lzd_32_0__DOT____Vcellout__lzd_16_1____pinNumber2;
}

VL_INLINE_OPT void Vdiv___024root___act_sequent__TOP__6(Vdiv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdiv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdiv___024root___act_sequent__TOP__6\n"); );
    // Init
    CData/*31:0*/ __Vtemp_h1b05ecc8__0;
    // Body
    __Vtemp_h1b05ecc8__0 = (((IData)(((3U == (3U & (IData)(vlSelf->div__DOT__lzd0__DOT__lzd_32_1__DOT__lzd_16_0__DOT__z))) 
                                      & (0xcU != (0xcU 
                                                  & (IData)(vlSelf->div__DOT__lzd0__DOT__lzd_32_1__DOT__lzd_16_0__DOT__z))))) 
                             << 3U) | ((4U & (((IData)(vlSelf->div__DOT__lzd0__DOT__lzd_32_1__DOT__lzd_16_0__DOT__z) 
                                               & ((~ 
                                                   ((IData)(vlSelf->div__DOT__lzd0__DOT__lzd_32_1__DOT__lzd_16_0__DOT__z) 
                                                    >> 1U)) 
                                                  | (IData)(
                                                            (4U 
                                                             == 
                                                             (0xcU 
                                                              & (IData)(vlSelf->div__DOT__lzd0__DOT__lzd_32_1__DOT__lzd_16_0__DOT__z)))))) 
                                              << 2U)) 
                                       | (((((- (IData)((IData)(
                                                                (0U 
                                                                 == 
                                                                 (0xcU 
                                                                  & (IData)(vlSelf->div__DOT__lzd0__DOT__lzd_32_1__DOT____Vcellout__lzd_16_0____pinNumber2)))))) 
                                             & vlSelf->div__DOT__lzd0__DOT__lzd_32_1__DOT__lzd_16_0__DOT__out_2
                                             [0U]) 
                                            | ((- (IData)((IData)(
                                                                  (4U 
                                                                   == 
                                                                   (0xcU 
                                                                    & (IData)(vlSelf->div__DOT__lzd0__DOT__lzd_32_1__DOT____Vcellout__lzd_16_0____pinNumber2)))))) 
                                               & vlSelf->div__DOT__lzd0__DOT__lzd_32_1__DOT__lzd_16_0__DOT__out_2
                                               [1U])) 
                                           | ((- (IData)((IData)(
                                                                 (8U 
                                                                  == 
                                                                  (0xcU 
                                                                   & (IData)(vlSelf->div__DOT__lzd0__DOT__lzd_32_1__DOT____Vcellout__lzd_16_0____pinNumber2)))))) 
                                              & vlSelf->div__DOT__lzd0__DOT__lzd_32_1__DOT__lzd_16_0__DOT__out_2
                                              [2U])) 
                                          | ((- (IData)((IData)(
                                                                (0xcU 
                                                                 == 
                                                                 (0xcU 
                                                                  & (IData)(vlSelf->div__DOT__lzd0__DOT__lzd_32_1__DOT____Vcellout__lzd_16_0____pinNumber2)))))) 
                                             & vlSelf->div__DOT__lzd0__DOT__lzd_32_1__DOT__lzd_16_0__DOT__out_2
                                             [3U]))));
    vlSelf->div__DOT__lzd0__DOT__lzd_32_1__DOT____Vcellout__lzd_16_0____pinNumber2 
        = __Vtemp_h1b05ecc8__0;
    vlSelf->div__DOT__lzd0__DOT__lzd_32_1__DOT__out_3_0[0U] 
        = vlSelf->div__DOT__lzd0__DOT__lzd_32_1__DOT____Vcellout__lzd_16_0____pinNumber2;
}

VL_INLINE_OPT void Vdiv___024root___act_sequent__TOP__7(Vdiv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdiv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdiv___024root___act_sequent__TOP__7\n"); );
    // Init
    CData/*31:0*/ __Vtemp_h7e68e805__0;
    // Body
    __Vtemp_h7e68e805__0 = (((IData)(((3U == (3U & (IData)(vlSelf->div__DOT__lzd0__DOT__lzd_32_0__DOT__lzd_16_0__DOT__z))) 
                                      & (0xcU != (0xcU 
                                                  & (IData)(vlSelf->div__DOT__lzd0__DOT__lzd_32_0__DOT__lzd_16_0__DOT__z))))) 
                             << 3U) | ((4U & (((IData)(vlSelf->div__DOT__lzd0__DOT__lzd_32_0__DOT__lzd_16_0__DOT__z) 
                                               & ((~ 
                                                   ((IData)(vlSelf->div__DOT__lzd0__DOT__lzd_32_0__DOT__lzd_16_0__DOT__z) 
                                                    >> 1U)) 
                                                  | (IData)(
                                                            (4U 
                                                             == 
                                                             (0xcU 
                                                              & (IData)(vlSelf->div__DOT__lzd0__DOT__lzd_32_0__DOT__lzd_16_0__DOT__z)))))) 
                                              << 2U)) 
                                       | (((((- (IData)((IData)(
                                                                (0U 
                                                                 == 
                                                                 (0xcU 
                                                                  & (IData)(vlSelf->div__DOT__lzd0__DOT__lzd_32_0__DOT____Vcellout__lzd_16_0____pinNumber2)))))) 
                                             & vlSelf->div__DOT__lzd0__DOT__lzd_32_0__DOT__lzd_16_0__DOT__out_2
                                             [0U]) 
                                            | ((- (IData)((IData)(
                                                                  (4U 
                                                                   == 
                                                                   (0xcU 
                                                                    & (IData)(vlSelf->div__DOT__lzd0__DOT__lzd_32_0__DOT____Vcellout__lzd_16_0____pinNumber2)))))) 
                                               & vlSelf->div__DOT__lzd0__DOT__lzd_32_0__DOT__lzd_16_0__DOT__out_2
                                               [1U])) 
                                           | ((- (IData)((IData)(
                                                                 (8U 
                                                                  == 
                                                                  (0xcU 
                                                                   & (IData)(vlSelf->div__DOT__lzd0__DOT__lzd_32_0__DOT____Vcellout__lzd_16_0____pinNumber2)))))) 
                                              & vlSelf->div__DOT__lzd0__DOT__lzd_32_0__DOT__lzd_16_0__DOT__out_2
                                              [2U])) 
                                          | ((- (IData)((IData)(
                                                                (0xcU 
                                                                 == 
                                                                 (0xcU 
                                                                  & (IData)(vlSelf->div__DOT__lzd0__DOT__lzd_32_0__DOT____Vcellout__lzd_16_0____pinNumber2)))))) 
                                             & vlSelf->div__DOT__lzd0__DOT__lzd_32_0__DOT__lzd_16_0__DOT__out_2
                                             [3U]))));
    vlSelf->div__DOT__lzd0__DOT__lzd_32_0__DOT____Vcellout__lzd_16_0____pinNumber2 
        = __Vtemp_h7e68e805__0;
    vlSelf->div__DOT__lzd0__DOT__lzd_32_0__DOT__out_3_0[0U] 
        = vlSelf->div__DOT__lzd0__DOT__lzd_32_0__DOT____Vcellout__lzd_16_0____pinNumber2;
}

VL_INLINE_OPT void Vdiv___024root___act_comb__TOP__0(Vdiv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdiv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdiv___024root___act_comb__TOP__0\n"); );
    // Body
    vlSelf->div__DOT__lzd1__DOT__out_3_0[1U] = (((IData)(
                                                         (0xfU 
                                                          == (IData)(vlSelf->div__DOT__lzd1__DOT__lzd_32_1__DOT__lzd_16_0__DOT__z))) 
                                                 << 4U) 
                                                | (((- (IData)(
                                                               (1U 
                                                                & (~ (IData)(
                                                                             (0xfU 
                                                                              == (IData)(vlSelf->div__DOT__lzd1__DOT__lzd_32_1__DOT__lzd_16_0__DOT__z))))))) 
                                                    & (IData)(vlSelf->div__DOT__lzd1__DOT__lzd_32_1__DOT____Vcellout__lzd_16_0____pinNumber2)) 
                                                   | ((- (IData)(
                                                                 (0xfU 
                                                                  == (IData)(vlSelf->div__DOT__lzd1__DOT__lzd_32_1__DOT__lzd_16_0__DOT__z)))) 
                                                      & (IData)(vlSelf->div__DOT__lzd1__DOT__lzd_32_1__DOT____Vcellout__lzd_16_1____pinNumber2))));
}

VL_INLINE_OPT void Vdiv___024root___act_comb__TOP__1(Vdiv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdiv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdiv___024root___act_comb__TOP__1\n"); );
    // Body
    vlSelf->div__DOT__lzd1__DOT__out_3_0[0U] = (((IData)(
                                                         (0xfU 
                                                          == (IData)(vlSelf->div__DOT__lzd1__DOT__lzd_32_0__DOT__lzd_16_0__DOT__z))) 
                                                 << 4U) 
                                                | (((- (IData)(
                                                               (1U 
                                                                & (~ (IData)(
                                                                             (0xfU 
                                                                              == (IData)(vlSelf->div__DOT__lzd1__DOT__lzd_32_0__DOT__lzd_16_0__DOT__z))))))) 
                                                    & (IData)(vlSelf->div__DOT__lzd1__DOT__lzd_32_0__DOT____Vcellout__lzd_16_0____pinNumber2)) 
                                                   | ((- (IData)(
                                                                 (0xfU 
                                                                  == (IData)(vlSelf->div__DOT__lzd1__DOT__lzd_32_0__DOT__lzd_16_0__DOT__z)))) 
                                                      & (IData)(vlSelf->div__DOT__lzd1__DOT__lzd_32_0__DOT____Vcellout__lzd_16_1____pinNumber2))));
}

VL_INLINE_OPT void Vdiv___024root___act_comb__TOP__2(Vdiv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdiv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdiv___024root___act_comb__TOP__2\n"); );
    // Body
    vlSelf->div__DOT__shift_x_tmp = (((IData)(vlSelf->div__DOT__lzd1__DOT____Vcellout__lzd_32_0____pinNumber3) 
                                      << 5U) | (((- (IData)(
                                                            (1U 
                                                             & (~ (IData)(vlSelf->div__DOT__lzd1__DOT____Vcellout__lzd_32_0____pinNumber3))))) 
                                                 & (((IData)(
                                                             (0xfU 
                                                              == (IData)(vlSelf->div__DOT__lzd1__DOT__lzd_32_0__DOT__lzd_16_0__DOT__z))) 
                                                     << 4U) 
                                                    | (((- (IData)(
                                                                   (1U 
                                                                    & (~ (IData)(
                                                                                (0xfU 
                                                                                == (IData)(vlSelf->div__DOT__lzd1__DOT__lzd_32_0__DOT__lzd_16_0__DOT__z))))))) 
                                                        & (IData)(vlSelf->div__DOT__lzd1__DOT__lzd_32_0__DOT____Vcellout__lzd_16_0____pinNumber2)) 
                                                       | ((- (IData)(
                                                                     (0xfU 
                                                                      == (IData)(vlSelf->div__DOT__lzd1__DOT__lzd_32_0__DOT__lzd_16_0__DOT__z)))) 
                                                          & (IData)(vlSelf->div__DOT__lzd1__DOT__lzd_32_0__DOT____Vcellout__lzd_16_1____pinNumber2))))) 
                                                | ((- (IData)((IData)(vlSelf->div__DOT__lzd1__DOT____Vcellout__lzd_32_0____pinNumber3))) 
                                                   & (((IData)(
                                                               (0xfU 
                                                                == (IData)(vlSelf->div__DOT__lzd1__DOT__lzd_32_1__DOT__lzd_16_0__DOT__z))) 
                                                       << 4U) 
                                                      | (((- (IData)(
                                                                     (1U 
                                                                      & (~ (IData)(
                                                                                (0xfU 
                                                                                == (IData)(vlSelf->div__DOT__lzd1__DOT__lzd_32_1__DOT__lzd_16_0__DOT__z))))))) 
                                                          & (IData)(vlSelf->div__DOT__lzd1__DOT__lzd_32_1__DOT____Vcellout__lzd_16_0____pinNumber2)) 
                                                         | ((- (IData)(
                                                                       (0xfU 
                                                                        == (IData)(vlSelf->div__DOT__lzd1__DOT__lzd_32_1__DOT__lzd_16_0__DOT__z)))) 
                                                            & (IData)(vlSelf->div__DOT__lzd1__DOT__lzd_32_1__DOT____Vcellout__lzd_16_1____pinNumber2)))))));
}

VL_INLINE_OPT void Vdiv___024root___act_comb__TOP__3(Vdiv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdiv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdiv___024root___act_comb__TOP__3\n"); );
    // Body
    vlSelf->div__DOT__lzd0__DOT__out_3_0[1U] = (((IData)(
                                                         (0xfU 
                                                          == (IData)(vlSelf->div__DOT__lzd0__DOT__lzd_32_1__DOT__lzd_16_0__DOT__z))) 
                                                 << 4U) 
                                                | (((- (IData)(
                                                               (1U 
                                                                & (~ (IData)(
                                                                             (0xfU 
                                                                              == (IData)(vlSelf->div__DOT__lzd0__DOT__lzd_32_1__DOT__lzd_16_0__DOT__z))))))) 
                                                    & (IData)(vlSelf->div__DOT__lzd0__DOT__lzd_32_1__DOT____Vcellout__lzd_16_0____pinNumber2)) 
                                                   | ((- (IData)(
                                                                 (0xfU 
                                                                  == (IData)(vlSelf->div__DOT__lzd0__DOT__lzd_32_1__DOT__lzd_16_0__DOT__z)))) 
                                                      & (IData)(vlSelf->div__DOT__lzd0__DOT__lzd_32_1__DOT____Vcellout__lzd_16_1____pinNumber2))));
}

VL_INLINE_OPT void Vdiv___024root___act_comb__TOP__4(Vdiv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdiv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdiv___024root___act_comb__TOP__4\n"); );
    // Body
    vlSelf->div__DOT__lzd0__DOT__out_3_0[0U] = (((IData)(
                                                         (0xfU 
                                                          == (IData)(vlSelf->div__DOT__lzd0__DOT__lzd_32_0__DOT__lzd_16_0__DOT__z))) 
                                                 << 4U) 
                                                | (((- (IData)(
                                                               (1U 
                                                                & (~ (IData)(
                                                                             (0xfU 
                                                                              == (IData)(vlSelf->div__DOT__lzd0__DOT__lzd_32_0__DOT__lzd_16_0__DOT__z))))))) 
                                                    & (IData)(vlSelf->div__DOT__lzd0__DOT__lzd_32_0__DOT____Vcellout__lzd_16_0____pinNumber2)) 
                                                   | ((- (IData)(
                                                                 (0xfU 
                                                                  == (IData)(vlSelf->div__DOT__lzd0__DOT__lzd_32_0__DOT__lzd_16_0__DOT__z)))) 
                                                      & (IData)(vlSelf->div__DOT__lzd0__DOT__lzd_32_0__DOT____Vcellout__lzd_16_1____pinNumber2))));
}

VL_INLINE_OPT void Vdiv___024root___act_comb__TOP__5(Vdiv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdiv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdiv___024root___act_comb__TOP__5\n"); );
    // Body
    vlSelf->div__DOT__shift_y = (((IData)(vlSelf->div__DOT__lzd0__DOT____Vcellout__lzd_32_0____pinNumber3) 
                                  << 5U) | (((- (IData)(
                                                        (1U 
                                                         & (~ (IData)(vlSelf->div__DOT__lzd0__DOT____Vcellout__lzd_32_0____pinNumber3))))) 
                                             & (((IData)(
                                                         (0xfU 
                                                          == (IData)(vlSelf->div__DOT__lzd0__DOT__lzd_32_0__DOT__lzd_16_0__DOT__z))) 
                                                 << 4U) 
                                                | (((- (IData)(
                                                               (1U 
                                                                & (~ (IData)(
                                                                             (0xfU 
                                                                              == (IData)(vlSelf->div__DOT__lzd0__DOT__lzd_32_0__DOT__lzd_16_0__DOT__z))))))) 
                                                    & (IData)(vlSelf->div__DOT__lzd0__DOT__lzd_32_0__DOT____Vcellout__lzd_16_0____pinNumber2)) 
                                                   | ((- (IData)(
                                                                 (0xfU 
                                                                  == (IData)(vlSelf->div__DOT__lzd0__DOT__lzd_32_0__DOT__lzd_16_0__DOT__z)))) 
                                                      & (IData)(vlSelf->div__DOT__lzd0__DOT__lzd_32_0__DOT____Vcellout__lzd_16_1____pinNumber2))))) 
                                            | ((- (IData)((IData)(vlSelf->div__DOT__lzd0__DOT____Vcellout__lzd_32_0____pinNumber3))) 
                                               & (((IData)(
                                                           (0xfU 
                                                            == (IData)(vlSelf->div__DOT__lzd0__DOT__lzd_32_1__DOT__lzd_16_0__DOT__z))) 
                                                   << 4U) 
                                                  | (((- (IData)(
                                                                 (1U 
                                                                  & (~ (IData)(
                                                                               (0xfU 
                                                                                == (IData)(vlSelf->div__DOT__lzd0__DOT__lzd_32_1__DOT__lzd_16_0__DOT__z))))))) 
                                                      & (IData)(vlSelf->div__DOT__lzd0__DOT__lzd_32_1__DOT____Vcellout__lzd_16_0____pinNumber2)) 
                                                     | ((- (IData)(
                                                                   (0xfU 
                                                                    == (IData)(vlSelf->div__DOT__lzd0__DOT__lzd_32_1__DOT__lzd_16_0__DOT__z)))) 
                                                        & (IData)(vlSelf->div__DOT__lzd0__DOT__lzd_32_1__DOT____Vcellout__lzd_16_1____pinNumber2)))))));
    vlSelf->div__DOT__r_abs = ((1U & (IData)((vlSelf->div__DOT__dividend 
                                              >> 0x3fU)))
                                ? ((0x3fU >= ((IData)(vlSelf->div__DOT__shift_y) 
                                              - (IData)(1U)))
                                    ? ((((QData)((IData)(
                                                         (((0xeU 
                                                            & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__60__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                               << 1U)) 
                                                           | (1U 
                                                              & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__56__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                                 >> 3U))) 
                                                          ^ (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__60__KET____DOT__cla_part0__DOT__p)))) 
                                         << 0x3cU) 
                                        | (((QData)((IData)(
                                                            (((0xeU 
                                                               & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__56__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                                  << 1U)) 
                                                              | (1U 
                                                                 & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__52__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                                    >> 3U))) 
                                                             ^ (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__56__KET____DOT__cla_part0__DOT__p)))) 
                                            << 0x38U) 
                                           | (((QData)((IData)(
                                                               (((0xeU 
                                                                  & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__52__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                                     << 1U)) 
                                                                 | (1U 
                                                                    & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__48__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                                       >> 3U))) 
                                                                ^ (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__52__KET____DOT__cla_part0__DOT__p)))) 
                                               << 0x34U) 
                                              | (((QData)((IData)(
                                                                  (((0xeU 
                                                                     & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__48__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                                        << 1U)) 
                                                                    | (1U 
                                                                       & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__44__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                                          >> 3U))) 
                                                                   ^ (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__48__KET____DOT__cla_part0__DOT__p)))) 
                                                  << 0x30U) 
                                                 | (((QData)((IData)(
                                                                     (((0xeU 
                                                                        & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__44__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                                           << 1U)) 
                                                                       | (1U 
                                                                          & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__40__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                                             >> 3U))) 
                                                                      ^ (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__44__KET____DOT__cla_part0__DOT__p)))) 
                                                     << 0x2cU) 
                                                    | (((QData)((IData)(
                                                                        (((0xeU 
                                                                           & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__40__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                                              << 1U)) 
                                                                          | (1U 
                                                                             & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__36__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                                                >> 3U))) 
                                                                         ^ (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__40__KET____DOT__cla_part0__DOT__p)))) 
                                                        << 0x28U) 
                                                       | (((QData)((IData)(
                                                                           (((0xeU 
                                                                              & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__36__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                                                << 1U)) 
                                                                             | (1U 
                                                                                & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__32__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                                                >> 3U))) 
                                                                            ^ (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__36__KET____DOT__cla_part0__DOT__p)))) 
                                                           << 0x24U) 
                                                          | (((QData)((IData)(
                                                                              (((0xeU 
                                                                                & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__32__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__28__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                                                >> 3U))) 
                                                                               ^ (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__32__KET____DOT__cla_part0__DOT__p)))) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               (((((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__28__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                                                << 0x1dU) 
                                                                                | (0x10000000U 
                                                                                & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__24__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                                                << 0x19U))) 
                                                                                ^ 
                                                                                ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__28__KET____DOT__cla_part0__DOT__p) 
                                                                                << 0x1cU)) 
                                                                                | ((((0xe000000U 
                                                                                & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__24__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                                                << 0x19U)) 
                                                                                | (0x1000000U 
                                                                                & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__20__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                                                << 0x15U))) 
                                                                                ^ 
                                                                                ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__24__KET____DOT__cla_part0__DOT__p) 
                                                                                << 0x18U)) 
                                                                                | ((((0xe00000U 
                                                                                & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__20__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                                                << 0x15U)) 
                                                                                | (0x100000U 
                                                                                & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__16__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                                                << 0x11U))) 
                                                                                ^ 
                                                                                ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__20__KET____DOT__cla_part0__DOT__p) 
                                                                                << 0x14U)) 
                                                                                | ((((0xe0000U 
                                                                                & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__16__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                                                << 0x11U)) 
                                                                                | (0x10000U 
                                                                                & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__12__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                                                << 0xdU))) 
                                                                                ^ 
                                                                                ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__16__KET____DOT__cla_part0__DOT__p) 
                                                                                << 0x10U)) 
                                                                                | ((((0xe000U 
                                                                                & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__12__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                                                << 0xdU)) 
                                                                                | (0x1000U 
                                                                                & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__8__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                                                << 9U))) 
                                                                                ^ 
                                                                                ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__12__KET____DOT__cla_part0__DOT__p) 
                                                                                << 0xcU)) 
                                                                                | ((((0xe00U 
                                                                                & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__8__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                                                << 9U)) 
                                                                                | (0x100U 
                                                                                & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__4__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                                                << 5U))) 
                                                                                ^ 
                                                                                ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__8__KET____DOT__cla_part0__DOT__p) 
                                                                                << 8U)) 
                                                                                | ((((0xe0U 
                                                                                & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__4__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                                                << 5U)) 
                                                                                | (0x10U 
                                                                                & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__0__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                                                << 1U))) 
                                                                                ^ 
                                                                                ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__4__KET____DOT__cla_part0__DOT__p) 
                                                                                << 4U)) 
                                                                                | (0xfU 
                                                                                & (((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__0__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                                                << 1U) 
                                                                                ^ (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__0__KET____DOT__cla_part0__DOT__p)))))))))))))))))))) 
                                       >> ((IData)(vlSelf->div__DOT__shift_y) 
                                           - (IData)(1U)))
                                    : 0ULL) : ((0x3fU 
                                                >= 
                                                ((IData)(vlSelf->div__DOT__shift_y) 
                                                 - (IData)(1U)))
                                                ? (vlSelf->div__DOT__dividend 
                                                   >> 
                                                   ((IData)(vlSelf->div__DOT__shift_y) 
                                                    - (IData)(1U)))
                                                : 0ULL));
}

VL_INLINE_OPT void Vdiv___024root___act_comb__TOP__6(Vdiv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdiv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdiv___024root___act_comb__TOP__6\n"); );
    // Init
    SData/*11:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelf->div__DOT__shift = (((IData)(vlSelf->div__DOT__shift_x_tmp) 
                                > (IData)(vlSelf->div__DOT__shift_y))
                                ? 0U : (0x3fU & (((IData)(vlSelf->div__DOT__shift_y) 
                                                  - 
                                                  ((IData)(vlSelf->div__DOT__shift_x_tmp) 
                                                   - (IData)(2U))) 
                                                 - (IData)(1U))));
    __Vtableidx1 = (((IData)(vlSelf->valid) << 0xbU) 
                    | (((IData)(vlSelf->rst_n) << 0xaU) 
                       | (((((IData)(vlSelf->div__DOT__cout) 
                             == (0x3fU & ((IData)(vlSelf->div__DOT__shift) 
                                          - (IData)(1U))))
                             ? 8U : 4U) << 5U) | (IData)(vlSelf->div__DOT__current_state))));
    vlSelf->div__DOT__next_state = Vdiv__ConstPool__TABLE_hc49d9719_0
        [__Vtableidx1];
}

void Vdiv___024root___eval_act(Vdiv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdiv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdiv___024root___eval_act\n"); );
    // Body
    if (vlSelf->__VactTriggered.at(6U)) {
        Vdiv___024root___act_sequent__TOP__0(vlSelf);
    }
    if (vlSelf->__VactTriggered.at(4U)) {
        Vdiv___024root___act_sequent__TOP__1(vlSelf);
    }
    if (vlSelf->__VactTriggered.at(7U)) {
        Vdiv___024root___act_sequent__TOP__2(vlSelf);
    }
    if (vlSelf->__VactTriggered.at(2U)) {
        Vdiv___024root___act_sequent__TOP__3(vlSelf);
    }
    if (vlSelf->__VactTriggered.at(5U)) {
        Vdiv___024root___act_sequent__TOP__4(vlSelf);
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        Vdiv___024root___act_sequent__TOP__5(vlSelf);
    }
    if (vlSelf->__VactTriggered.at(3U)) {
        Vdiv___024root___act_sequent__TOP__6(vlSelf);
    }
    if (vlSelf->__VactTriggered.at(1U)) {
        Vdiv___024root___act_sequent__TOP__7(vlSelf);
    }
    if ((vlSelf->__VactTriggered.at(6U) | vlSelf->__VactTriggered.at(7U))) {
        Vdiv___024root___act_comb__TOP__0(vlSelf);
    }
    if ((vlSelf->__VactTriggered.at(4U) | vlSelf->__VactTriggered.at(5U))) {
        Vdiv___024root___act_comb__TOP__1(vlSelf);
    }
    if ((((vlSelf->__VactTriggered.at(4U) | vlSelf->__VactTriggered.at(5U)) 
          | vlSelf->__VactTriggered.at(6U)) | vlSelf->__VactTriggered.at(7U))) {
        Vdiv___024root___act_comb__TOP__2(vlSelf);
    }
    if ((vlSelf->__VactTriggered.at(2U) | vlSelf->__VactTriggered.at(3U))) {
        Vdiv___024root___act_comb__TOP__3(vlSelf);
    }
    if ((vlSelf->__VactTriggered.at(0U) | vlSelf->__VactTriggered.at(1U))) {
        Vdiv___024root___act_comb__TOP__4(vlSelf);
    }
    if ((((vlSelf->__VactTriggered.at(0U) | vlSelf->__VactTriggered.at(1U)) 
          | vlSelf->__VactTriggered.at(2U)) | vlSelf->__VactTriggered.at(3U))) {
        Vdiv___024root___act_comb__TOP__5(vlSelf);
    }
    if ((((((((vlSelf->__VactTriggered.at(0U) | vlSelf->__VactTriggered.at(1U)) 
              | vlSelf->__VactTriggered.at(2U)) | vlSelf->__VactTriggered.at(3U)) 
            | vlSelf->__VactTriggered.at(4U)) | vlSelf->__VactTriggered.at(5U)) 
          | vlSelf->__VactTriggered.at(6U)) | vlSelf->__VactTriggered.at(7U))) {
        Vdiv___024root___act_comb__TOP__6(vlSelf);
    }
}

VL_INLINE_OPT void Vdiv___024root___nba_sequent__TOP__0(Vdiv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdiv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdiv___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*5:0*/ __Vdly__div__DOT__cout;
    __Vdly__div__DOT__cout = 0;
    QData/*63:0*/ __Vdly__div__DOT__fix_a;
    __Vdly__div__DOT__fix_a = 0;
    QData/*63:0*/ __Vdly__div__DOT__fix_b;
    __Vdly__div__DOT__fix_b = 0;
    // Body
    __Vdly__div__DOT__cout = vlSelf->div__DOT__cout;
    __Vdly__div__DOT__fix_b = vlSelf->div__DOT__fix_b;
    __Vdly__div__DOT__fix_a = vlSelf->div__DOT__fix_a;
    if ((1U & ((~ (IData)(vlSelf->rst_n)) | (IData)(vlSelf->div__DOT__current_state)))) {
        __Vdly__div__DOT__cout = 0U;
        __Vdly__div__DOT__fix_b = 0ULL;
        __Vdly__div__DOT__fix_a = 0ULL;
        vlSelf->div__DOT__r_abs_reg = 0ULL;
    } else {
        if ((4U & (IData)(vlSelf->div__DOT__current_state))) {
            __Vdly__div__DOT__cout = (0x3fU & ((IData)(1U) 
                                               + (IData)(vlSelf->div__DOT__cout)));
        }
        __Vdly__div__DOT__fix_b = ((IData)((1U == (IData)(vlSelf->div__DOT__q)))
                                    ? (vlSelf->div__DOT__fix_a 
                                       << 1U) : ((vlSelf->div__DOT__fix_b 
                                                  << 1U) 
                                                 | (QData)((IData)(
                                                                   (1U 
                                                                    & (~ (IData)(vlSelf->div__DOT__q)))))));
        __Vdly__div__DOT__fix_a = ((2U & (IData)(vlSelf->div__DOT__q))
                                    ? (1ULL | (vlSelf->div__DOT__fix_b 
                                               << 1U))
                                    : ((vlSelf->div__DOT__fix_a 
                                        << 1U) | (QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(vlSelf->div__DOT__q))))));
    }
    vlSelf->div__DOT__r_abs_reg = ((0U == (IData)(vlSelf->div__DOT__shift))
                                    ? vlSelf->div__DOT__x_abs_reg
                                    : vlSelf->div__DOT__r_abs);
    vlSelf->div__DOT__cout = __Vdly__div__DOT__cout;
    if ((1U & ((~ (IData)(vlSelf->rst_n)) | (IData)(vlSelf->div__DOT__current_state)))) {
        vlSelf->div__DOT__divisor_n = 0ULL;
        vlSelf->div__DOT__divisor = 0ULL;
        vlSelf->div__DOT__s_abs_reg = 0ULL;
    } else {
        if ((2U & (IData)(vlSelf->div__DOT__current_state))) {
            if ((0x3fU >= ((IData)(vlSelf->div__DOT__shift_y) 
                           - (IData)(1U)))) {
                vlSelf->div__DOT__divisor_n = ((1ULL 
                                                + (~ vlSelf->div__DOT__y_abs_reg)) 
                                               << ((IData)(vlSelf->div__DOT__shift_y) 
                                                   - (IData)(1U)));
                vlSelf->div__DOT__divisor = (vlSelf->div__DOT__y_abs_reg 
                                             << ((IData)(vlSelf->div__DOT__shift_y) 
                                                 - (IData)(1U)));
            } else {
                vlSelf->div__DOT__divisor_n = 0ULL;
                vlSelf->div__DOT__divisor = 0ULL;
            }
        }
        if ((8U & (IData)(vlSelf->div__DOT__current_state))) {
            vlSelf->div__DOT__s_abs_reg = ((0U == (IData)(vlSelf->div__DOT__shift))
                                            ? 0ULL : 
                                           ((1U & (IData)(
                                                          (vlSelf->div__DOT__dividend 
                                                           >> 0x3fU)))
                                             ? vlSelf->div__DOT__fix_b
                                             : vlSelf->div__DOT__fix_a));
        }
    }
    vlSelf->div__DOT__fix_b = __Vdly__div__DOT__fix_b;
    vlSelf->div__DOT__fix_a = __Vdly__div__DOT__fix_a;
    if (vlSelf->rst_n) {
        if (((IData)(vlSelf->div__DOT__current_state) 
             & (IData)(vlSelf->valid))) {
            vlSelf->div__DOT__y_abs_reg = ((vlSelf->y 
                                            ^ (- (QData)((IData)(vlSelf->div__DOT____Vcellinp__oppo1____pinNumber2)))) 
                                           + (QData)((IData)(vlSelf->div__DOT____Vcellinp__oppo1____pinNumber2)));
        }
    } else {
        vlSelf->div__DOT__y_abs_reg = 0ULL;
    }
    if ((1U & ((~ (IData)(vlSelf->rst_n)) | (IData)(vlSelf->div__DOT__current_state)))) {
        vlSelf->div__DOT__dividend = 0ULL;
    } else if ((2U & (IData)(vlSelf->div__DOT__current_state))) {
        vlSelf->div__DOT__dividend = (vlSelf->div__DOT__x_abs_reg 
                                      << (0x3fU & ((IData)(vlSelf->div__DOT__shift_x_tmp) 
                                                   - (IData)(2U))));
    } else if ((4U & (IData)(vlSelf->div__DOT__current_state))) {
        vlSelf->div__DOT__dividend = (((QData)((IData)(
                                                       (((0xeU 
                                                          & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__60__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__56__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                               >> 3U))) 
                                                        ^ (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__60__KET____DOT__cla_part0__DOT__p)))) 
                                       << 0x3cU) | 
                                      (((QData)((IData)(
                                                        (((0xeU 
                                                           & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__56__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                              << 1U)) 
                                                          | (1U 
                                                             & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__52__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                                >> 3U))) 
                                                         ^ (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__56__KET____DOT__cla_part0__DOT__p)))) 
                                        << 0x38U) | 
                                       (((QData)((IData)(
                                                         (((0xeU 
                                                            & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__52__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                               << 1U)) 
                                                           | (1U 
                                                              & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__48__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                                 >> 3U))) 
                                                          ^ (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__52__KET____DOT__cla_part0__DOT__p)))) 
                                         << 0x34U) 
                                        | (((QData)((IData)(
                                                            (((0xeU 
                                                               & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__48__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                                  << 1U)) 
                                                              | (1U 
                                                                 & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__44__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                                    >> 3U))) 
                                                             ^ (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__48__KET____DOT__cla_part0__DOT__p)))) 
                                            << 0x30U) 
                                           | (((QData)((IData)(
                                                               (((0xeU 
                                                                  & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__44__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                                     << 1U)) 
                                                                 | (1U 
                                                                    & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__40__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                                       >> 3U))) 
                                                                ^ (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__44__KET____DOT__cla_part0__DOT__p)))) 
                                               << 0x2cU) 
                                              | (((QData)((IData)(
                                                                  (((0xeU 
                                                                     & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__40__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                                        << 1U)) 
                                                                    | (1U 
                                                                       & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__36__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                                          >> 3U))) 
                                                                   ^ (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__40__KET____DOT__cla_part0__DOT__p)))) 
                                                  << 0x28U) 
                                                 | (((QData)((IData)(
                                                                     (((0xeU 
                                                                        & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__36__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                                           << 1U)) 
                                                                       | (1U 
                                                                          & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__32__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                                             >> 3U))) 
                                                                      ^ (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__36__KET____DOT__cla_part0__DOT__p)))) 
                                                     << 0x24U) 
                                                    | (((QData)((IData)(
                                                                        (((0xeU 
                                                                           & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__32__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                                              << 1U)) 
                                                                          | (1U 
                                                                             & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__28__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                                                >> 3U))) 
                                                                         ^ (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__32__KET____DOT__cla_part0__DOT__p)))) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         (((((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__28__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                                             << 0x1dU) 
                                                                            | (0x10000000U 
                                                                               & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__24__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                                                << 0x19U))) 
                                                                           ^ 
                                                                           ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__28__KET____DOT__cla_part0__DOT__p) 
                                                                            << 0x1cU)) 
                                                                          | ((((0xe000000U 
                                                                                & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__24__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                                                << 0x19U)) 
                                                                               | (0x1000000U 
                                                                                & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__20__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                                                << 0x15U))) 
                                                                              ^ 
                                                                              ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__24__KET____DOT__cla_part0__DOT__p) 
                                                                               << 0x18U)) 
                                                                             | ((((0xe00000U 
                                                                                & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__20__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                                                << 0x15U)) 
                                                                                | (0x100000U 
                                                                                & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__16__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                                                << 0x11U))) 
                                                                                ^ 
                                                                                ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__20__KET____DOT__cla_part0__DOT__p) 
                                                                                << 0x14U)) 
                                                                                | ((((0xe0000U 
                                                                                & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__16__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                                                << 0x11U)) 
                                                                                | (0x10000U 
                                                                                & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__12__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                                                << 0xdU))) 
                                                                                ^ 
                                                                                ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__16__KET____DOT__cla_part0__DOT__p) 
                                                                                << 0x10U)) 
                                                                                | ((((0xe000U 
                                                                                & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__12__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                                                << 0xdU)) 
                                                                                | (0x1000U 
                                                                                & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__8__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                                                << 9U))) 
                                                                                ^ 
                                                                                ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__12__KET____DOT__cla_part0__DOT__p) 
                                                                                << 0xcU)) 
                                                                                | ((((0xe00U 
                                                                                & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__8__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                                                << 9U)) 
                                                                                | (0x100U 
                                                                                & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__4__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                                                << 5U))) 
                                                                                ^ 
                                                                                ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__8__KET____DOT__cla_part0__DOT__p) 
                                                                                << 8U)) 
                                                                                | ((((0xe0U 
                                                                                & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__4__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                                                << 5U)) 
                                                                                | (0x10U 
                                                                                & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__0__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                                                << 1U))) 
                                                                                ^ 
                                                                                ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__4__KET____DOT__cla_part0__DOT__p) 
                                                                                << 4U)) 
                                                                                | (0xfU 
                                                                                & (((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__0__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                                                << 1U) 
                                                                                ^ (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__0__KET____DOT__cla_part0__DOT__p))))))))))))))))))));
    }
    if (vlSelf->rst_n) {
        if (((IData)(vlSelf->div__DOT__current_state) 
             & (IData)(vlSelf->valid))) {
            vlSelf->div__DOT__x_abs_reg = ((vlSelf->x 
                                            ^ (- (QData)((IData)(vlSelf->div__DOT____Vcellinp__oppo0____pinNumber2)))) 
                                           + (QData)((IData)(vlSelf->div__DOT____Vcellinp__oppo0____pinNumber2)));
        }
        vlSelf->div__DOT__current_state = vlSelf->div__DOT__next_state;
    } else {
        vlSelf->div__DOT__x_abs_reg = 0ULL;
        vlSelf->div__DOT__current_state = 1U;
    }
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
    vlSelf->div__DOT__cla1__DOT__genblk1__BRA__60__KET____DOT__cla_part0__DOT__g 
        = (0xfU & ((IData)((vlSelf->div__DOT__dividend 
                            >> 0x3cU)) & (IData)((vlSelf->div__DOT__divisor 
                                                  >> 0x3cU))));
    vlSelf->div__DOT__cla1__DOT__genblk1__BRA__60__KET____DOT__cla_part0__DOT__p 
        = (0xfU & ((IData)((vlSelf->div__DOT__dividend 
                            >> 0x3cU)) ^ (IData)((vlSelf->div__DOT__divisor 
                                                  >> 0x3cU))));
    vlSelf->div__DOT__cla1__DOT__genblk1__BRA__56__KET____DOT__cla_part0__DOT__g 
        = (0xfU & ((IData)((vlSelf->div__DOT__dividend 
                            >> 0x38U)) & (IData)((vlSelf->div__DOT__divisor 
                                                  >> 0x38U))));
    vlSelf->div__DOT__cla1__DOT__genblk1__BRA__56__KET____DOT__cla_part0__DOT__p 
        = (0xfU & ((IData)((vlSelf->div__DOT__dividend 
                            >> 0x38U)) ^ (IData)((vlSelf->div__DOT__divisor 
                                                  >> 0x38U))));
    vlSelf->div__DOT__cla1__DOT__genblk1__BRA__52__KET____DOT__cla_part0__DOT__g 
        = (0xfU & ((IData)((vlSelf->div__DOT__dividend 
                            >> 0x34U)) & (IData)((vlSelf->div__DOT__divisor 
                                                  >> 0x34U))));
    vlSelf->div__DOT__cla1__DOT__genblk1__BRA__52__KET____DOT__cla_part0__DOT__p 
        = (0xfU & ((IData)((vlSelf->div__DOT__dividend 
                            >> 0x34U)) ^ (IData)((vlSelf->div__DOT__divisor 
                                                  >> 0x34U))));
    vlSelf->div__DOT__cla1__DOT__genblk1__BRA__48__KET____DOT__cla_part0__DOT__g 
        = (0xfU & ((IData)((vlSelf->div__DOT__dividend 
                            >> 0x30U)) & (IData)((vlSelf->div__DOT__divisor 
                                                  >> 0x30U))));
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
    vlSelf->div__DOT__lzd1__DOT____Vcellout__lzd_32_0____pinNumber3 
        = ((0xfU == (IData)(vlSelf->div__DOT__lzd1__DOT__lzd_32_0__DOT__lzd_16_0__DOT__z)) 
           & (0xfU == (IData)(vlSelf->div__DOT__lzd1__DOT__lzd_32_0__DOT__lzd_16_1__DOT__z)));
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
    vlSelf->finish = (1U & ((IData)(vlSelf->div__DOT__current_state) 
                            >> 4U));
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
    vlSelf->div__DOT__add_B = (((- (QData)((IData)(
                                                   (3U 
                                                    == (IData)(vlSelf->div__DOT__q))))) 
                                & vlSelf->div__DOT__divisor) 
                               | ((- (QData)((IData)(
                                                     (1U 
                                                      == (IData)(vlSelf->div__DOT__q))))) 
                                  & vlSelf->div__DOT__divisor_n));
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

VL_INLINE_OPT void Vdiv___024root___nba_sequent__TOP__1(Vdiv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdiv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdiv___024root___nba_sequent__TOP__1\n"); );
    // Body
    vlSelf->result = ((vlSelf->div__DOT__s_abs_reg 
                       ^ (- (QData)((IData)(vlSelf->div__DOT____Vcellinp__oppo2____pinNumber2)))) 
                      + (QData)((IData)(vlSelf->div__DOT____Vcellinp__oppo2____pinNumber2)));
    vlSelf->rem = ((vlSelf->div__DOT__r_abs_reg ^ (- (QData)((IData)(vlSelf->div__DOT____Vcellinp__oppo0____pinNumber2)))) 
                   + (QData)((IData)(vlSelf->div__DOT____Vcellinp__oppo0____pinNumber2)));
}

void Vdiv___024root___eval_nba(Vdiv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdiv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdiv___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(8U)) {
        Vdiv___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if ((vlSelf->__VnbaTriggered.at(2U) | vlSelf->__VnbaTriggered.at(8U))) {
        Vdiv___024root___act_sequent__TOP__3(vlSelf);
    }
    if ((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(8U))) {
        Vdiv___024root___act_sequent__TOP__5(vlSelf);
    }
    if ((vlSelf->__VnbaTriggered.at(3U) | vlSelf->__VnbaTriggered.at(8U))) {
        Vdiv___024root___act_sequent__TOP__6(vlSelf);
    }
    if ((vlSelf->__VnbaTriggered.at(1U) | vlSelf->__VnbaTriggered.at(8U))) {
        Vdiv___024root___act_sequent__TOP__7(vlSelf);
    }
    if ((vlSelf->__VnbaTriggered.at(6U) | vlSelf->__VnbaTriggered.at(8U))) {
        Vdiv___024root___act_sequent__TOP__0(vlSelf);
    }
    if ((vlSelf->__VnbaTriggered.at(4U) | vlSelf->__VnbaTriggered.at(8U))) {
        Vdiv___024root___act_sequent__TOP__1(vlSelf);
    }
    if ((vlSelf->__VnbaTriggered.at(7U) | vlSelf->__VnbaTriggered.at(8U))) {
        Vdiv___024root___act_sequent__TOP__2(vlSelf);
    }
    if ((vlSelf->__VnbaTriggered.at(5U) | vlSelf->__VnbaTriggered.at(8U))) {
        Vdiv___024root___act_sequent__TOP__4(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(8U)) {
        Vdiv___024root___nba_sequent__TOP__1(vlSelf);
    }
    if (((vlSelf->__VnbaTriggered.at(2U) | vlSelf->__VnbaTriggered.at(3U)) 
         | vlSelf->__VnbaTriggered.at(8U))) {
        Vdiv___024root___act_comb__TOP__3(vlSelf);
    }
    if (((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(1U)) 
         | vlSelf->__VnbaTriggered.at(8U))) {
        Vdiv___024root___act_comb__TOP__4(vlSelf);
    }
    if (((((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(1U)) 
           | vlSelf->__VnbaTriggered.at(2U)) | vlSelf->__VnbaTriggered.at(3U)) 
         | vlSelf->__VnbaTriggered.at(8U))) {
        Vdiv___024root___act_comb__TOP__5(vlSelf);
    }
    if (((vlSelf->__VnbaTriggered.at(6U) | vlSelf->__VnbaTriggered.at(7U)) 
         | vlSelf->__VnbaTriggered.at(8U))) {
        Vdiv___024root___act_comb__TOP__0(vlSelf);
    }
    if (((vlSelf->__VnbaTriggered.at(4U) | vlSelf->__VnbaTriggered.at(5U)) 
         | vlSelf->__VnbaTriggered.at(8U))) {
        Vdiv___024root___act_comb__TOP__1(vlSelf);
    }
    if (((((vlSelf->__VnbaTriggered.at(4U) | vlSelf->__VnbaTriggered.at(5U)) 
           | vlSelf->__VnbaTriggered.at(6U)) | vlSelf->__VnbaTriggered.at(7U)) 
         | vlSelf->__VnbaTriggered.at(8U))) {
        Vdiv___024root___act_comb__TOP__2(vlSelf);
    }
    if (((((((((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(1U)) 
               | vlSelf->__VnbaTriggered.at(2U)) | vlSelf->__VnbaTriggered.at(3U)) 
             | vlSelf->__VnbaTriggered.at(4U)) | vlSelf->__VnbaTriggered.at(5U)) 
           | vlSelf->__VnbaTriggered.at(6U)) | vlSelf->__VnbaTriggered.at(7U)) 
         | vlSelf->__VnbaTriggered.at(8U))) {
        Vdiv___024root___act_comb__TOP__6(vlSelf);
    }
}

void Vdiv___024root___eval_triggers__ico(Vdiv___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vdiv___024root___dump_triggers__ico(Vdiv___024root* vlSelf);
#endif  // VL_DEBUG
void Vdiv___024root___eval_triggers__act(Vdiv___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vdiv___024root___dump_triggers__act(Vdiv___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vdiv___024root___dump_triggers__nba(Vdiv___024root* vlSelf);
#endif  // VL_DEBUG

void Vdiv___024root___eval(Vdiv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdiv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdiv___024root___eval\n"); );
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
        Vdiv___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Vdiv___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("/home/chelsea/cpu/div_64/vsrc/div.v", 1, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Vdiv___024root___eval_ico(vlSelf);
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
            Vdiv___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vdiv___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("/home/chelsea/cpu/div_64/vsrc/div.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vdiv___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vdiv___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("/home/chelsea/cpu/div_64/vsrc/div.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vdiv___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vdiv___024root___eval_debug_assertions(Vdiv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdiv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdiv___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst_n & 0xfeU))) {
        Verilated::overWidthError("rst_n");}
    if (VL_UNLIKELY((vlSelf->valid & 0xfeU))) {
        Verilated::overWidthError("valid");}
    if (VL_UNLIKELY((vlSelf->sign & 0xfeU))) {
        Verilated::overWidthError("sign");}
}
#endif  // VL_DEBUG
