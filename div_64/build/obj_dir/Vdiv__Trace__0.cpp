// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vdiv__Syms.h"


void Vdiv___024root__trace_chg_sub_0(Vdiv___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vdiv___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdiv___024root__trace_chg_top_0\n"); );
    // Init
    Vdiv___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdiv___024root*>(voidSelf);
    Vdiv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vdiv___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vdiv___024root__trace_chg_sub_0(Vdiv___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vdiv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdiv___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,(vlSelf->div__DOT____Vcellinp__oppo0____pinNumber2));
        bufp->chgBit(oldp+1,(vlSelf->div__DOT____Vcellinp__oppo1____pinNumber2));
        bufp->chgBit(oldp+2,(vlSelf->div__DOT____Vcellinp__oppo2____pinNumber2));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgQData(oldp+3,((((QData)((IData)(((
                                                   (0xeU 
                                                    & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__60__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__56__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                         >> 3U))) 
                                                  ^ (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__60__KET____DOT__cla_part0__DOT__p)))) 
                                 << 0x3cU) | (((QData)((IData)(
                                                               (((0xeU 
                                                                  & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__56__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                                     << 1U)) 
                                                                 | (1U 
                                                                    & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__52__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                                       >> 3U))) 
                                                                ^ (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__56__KET____DOT__cla_part0__DOT__p)))) 
                                               << 0x38U) 
                                              | (((QData)((IData)(
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
                                                                                ^ (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__0__KET____DOT__cla_part0__DOT__p))))))))))))))))))))),64);
        bufp->chgCData(oldp+5,(vlSelf->div__DOT__q),2);
        bufp->chgQData(oldp+6,(vlSelf->div__DOT__add_B),64);
        bufp->chgBit(oldp+8,((1U & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__60__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                    >> 3U))));
        bufp->chgIData(oldp+9,(((0x10000U & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__60__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                             << 0xdU)) 
                                | ((0x8000U & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__56__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                               << 0xcU)) 
                                   | ((0x4000U & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__52__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                  << 0xbU)) 
                                      | ((0x2000U & 
                                          ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__48__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                           << 0xaU)) 
                                         | ((0x1000U 
                                             & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__44__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                << 9U)) 
                                            | ((0x800U 
                                                & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__40__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                   << 8U)) 
                                               | ((0x400U 
                                                   & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__36__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                      << 7U)) 
                                                  | ((0x200U 
                                                      & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__32__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                         << 6U)) 
                                                     | ((0x100U 
                                                         & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__28__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                            << 5U)) 
                                                        | ((0x80U 
                                                            & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__24__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                               << 4U)) 
                                                           | ((0x40U 
                                                               & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__20__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                                  << 3U)) 
                                                              | ((0x20U 
                                                                  & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__16__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                                     << 2U)) 
                                                                 | ((0x10U 
                                                                     & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__12__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                                        << 1U)) 
                                                                    | ((8U 
                                                                        & (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__8__KET____DOT__cla_part0__DOT____Vcellout__carry0__c)) 
                                                                       | ((4U 
                                                                           & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__4__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                                              >> 1U)) 
                                                                          | (2U 
                                                                             & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__0__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                                                >> 2U)))))))))))))))))),17);
        bufp->chgCData(oldp+10,((0xfU & (IData)(vlSelf->div__DOT__add_B))),4);
        bufp->chgCData(oldp+11,((0xfU & (((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__0__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                          << 1U) ^ (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__0__KET____DOT__cla_part0__DOT__p)))),4);
        bufp->chgBit(oldp+12,((1U & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__0__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                     >> 3U))));
        bufp->chgCData(oldp+13,(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__0__KET____DOT__cla_part0__DOT__p),4);
        bufp->chgCData(oldp+14,(((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__0__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                 << 1U)),5);
        bufp->chgCData(oldp+15,(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__0__KET____DOT__cla_part0__DOT__g),4);
        bufp->chgCData(oldp+16,(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__0__KET____DOT__cla_part0__DOT____Vcellout__carry0__c),4);
        bufp->chgBit(oldp+17,((1U & (IData)(vlSelf->div__DOT__add_B))));
        bufp->chgBit(oldp+18,((1U & (IData)((vlSelf->div__DOT__add_B 
                                             >> 1U)))));
        bufp->chgBit(oldp+19,((1U & ((IData)((0x7fffffffffffffffULL 
                                              & vlSelf->div__DOT__dividend)) 
                                     ^ (IData)((vlSelf->div__DOT__add_B 
                                                >> 1U))))));
        bufp->chgBit(oldp+20,((1U & ((IData)((0x7fffffffffffffffULL 
                                              & vlSelf->div__DOT__dividend)) 
                                     & (IData)((vlSelf->div__DOT__add_B 
                                                >> 1U))))));
        bufp->chgBit(oldp+21,((1U & (IData)((vlSelf->div__DOT__add_B 
                                             >> 2U)))));
        bufp->chgBit(oldp+22,((1U & ((IData)((0x3fffffffffffffffULL 
                                              & (vlSelf->div__DOT__dividend 
                                                 >> 1U))) 
                                     ^ (IData)((vlSelf->div__DOT__add_B 
                                                >> 2U))))));
        bufp->chgBit(oldp+23,((1U & ((IData)((0x3fffffffffffffffULL 
                                              & (vlSelf->div__DOT__dividend 
                                                 >> 1U))) 
                                     & (IData)((vlSelf->div__DOT__add_B 
                                                >> 2U))))));
        bufp->chgBit(oldp+24,((1U & (IData)((vlSelf->div__DOT__add_B 
                                             >> 3U)))));
        bufp->chgBit(oldp+25,((1U & ((IData)((0x1fffffffffffffffULL 
                                              & (vlSelf->div__DOT__dividend 
                                                 >> 2U))) 
                                     ^ (IData)((vlSelf->div__DOT__add_B 
                                                >> 3U))))));
        bufp->chgBit(oldp+26,((1U & ((IData)((0x1fffffffffffffffULL 
                                              & (vlSelf->div__DOT__dividend 
                                                 >> 2U))) 
                                     & (IData)((vlSelf->div__DOT__add_B 
                                                >> 3U))))));
        bufp->chgCData(oldp+27,((0xfU & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__0__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                         << 1U))),4);
        bufp->chgCData(oldp+28,((0xfU & (IData)((vlSelf->div__DOT__add_B 
                                                 >> 0xcU)))),4);
        bufp->chgBit(oldp+29,((1U & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__8__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                     >> 3U))));
        bufp->chgCData(oldp+30,((((0xeU & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__12__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                           << 1U)) 
                                  | (1U & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__8__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                           >> 3U))) 
                                 ^ (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__12__KET____DOT__cla_part0__DOT__p))),4);
        bufp->chgBit(oldp+31,((1U & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__12__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                     >> 3U))));
        bufp->chgCData(oldp+32,(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__12__KET____DOT__cla_part0__DOT__p),4);
        bufp->chgCData(oldp+33,((((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__12__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                  << 1U) | (1U & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__8__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                  >> 3U)))),5);
        bufp->chgCData(oldp+34,(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__12__KET____DOT__cla_part0__DOT__g),4);
        bufp->chgCData(oldp+35,(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__12__KET____DOT__cla_part0__DOT____Vcellout__carry0__c),4);
        bufp->chgBit(oldp+36,((1U & (IData)((vlSelf->div__DOT__add_B 
                                             >> 0xcU)))));
        bufp->chgBit(oldp+37,((1U & ((IData)((0xfffffffffffffULL 
                                              & (vlSelf->div__DOT__dividend 
                                                 >> 0xbU))) 
                                     ^ (IData)((vlSelf->div__DOT__add_B 
                                                >> 0xcU))))));
        bufp->chgBit(oldp+38,((1U & ((IData)((0xfffffffffffffULL 
                                              & (vlSelf->div__DOT__dividend 
                                                 >> 0xbU))) 
                                     & (IData)((vlSelf->div__DOT__add_B 
                                                >> 0xcU))))));
        bufp->chgBit(oldp+39,((1U & (IData)((vlSelf->div__DOT__add_B 
                                             >> 0xdU)))));
        bufp->chgBit(oldp+40,((1U & ((IData)((0x7ffffffffffffULL 
                                              & (vlSelf->div__DOT__dividend 
                                                 >> 0xcU))) 
                                     ^ (IData)((vlSelf->div__DOT__add_B 
                                                >> 0xdU))))));
        bufp->chgBit(oldp+41,((1U & ((IData)((0x7ffffffffffffULL 
                                              & (vlSelf->div__DOT__dividend 
                                                 >> 0xcU))) 
                                     & (IData)((vlSelf->div__DOT__add_B 
                                                >> 0xdU))))));
        bufp->chgBit(oldp+42,((1U & (IData)((vlSelf->div__DOT__add_B 
                                             >> 0xeU)))));
        bufp->chgBit(oldp+43,((1U & ((IData)((0x3ffffffffffffULL 
                                              & (vlSelf->div__DOT__dividend 
                                                 >> 0xdU))) 
                                     ^ (IData)((vlSelf->div__DOT__add_B 
                                                >> 0xeU))))));
        bufp->chgBit(oldp+44,((1U & ((IData)((0x3ffffffffffffULL 
                                              & (vlSelf->div__DOT__dividend 
                                                 >> 0xdU))) 
                                     & (IData)((vlSelf->div__DOT__add_B 
                                                >> 0xeU))))));
        bufp->chgBit(oldp+45,((1U & (IData)((vlSelf->div__DOT__add_B 
                                             >> 0xfU)))));
        bufp->chgBit(oldp+46,((1U & ((IData)((0x1ffffffffffffULL 
                                              & (vlSelf->div__DOT__dividend 
                                                 >> 0xeU))) 
                                     ^ (IData)((vlSelf->div__DOT__add_B 
                                                >> 0xfU))))));
        bufp->chgBit(oldp+47,((1U & ((IData)((0x1ffffffffffffULL 
                                              & (vlSelf->div__DOT__dividend 
                                                 >> 0xeU))) 
                                     & (IData)((vlSelf->div__DOT__add_B 
                                                >> 0xfU))))));
        bufp->chgCData(oldp+48,(((0xeU & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__12__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                          << 1U)) | 
                                 (1U & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__8__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                        >> 3U)))),4);
        bufp->chgCData(oldp+49,((0xfU & (IData)((vlSelf->div__DOT__add_B 
                                                 >> 0x10U)))),4);
        bufp->chgCData(oldp+50,((((0xeU & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__16__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                           << 1U)) 
                                  | (1U & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__12__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                           >> 3U))) 
                                 ^ (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__16__KET____DOT__cla_part0__DOT__p))),4);
        bufp->chgBit(oldp+51,((1U & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__16__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                     >> 3U))));
        bufp->chgCData(oldp+52,(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__16__KET____DOT__cla_part0__DOT__p),4);
        bufp->chgCData(oldp+53,((((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__16__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                  << 1U) | (1U & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__12__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                  >> 3U)))),5);
        bufp->chgCData(oldp+54,(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__16__KET____DOT__cla_part0__DOT__g),4);
        bufp->chgCData(oldp+55,(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__16__KET____DOT__cla_part0__DOT____Vcellout__carry0__c),4);
        bufp->chgBit(oldp+56,((1U & (IData)((vlSelf->div__DOT__add_B 
                                             >> 0x10U)))));
        bufp->chgBit(oldp+57,((1U & ((IData)((0xffffffffffffULL 
                                              & (vlSelf->div__DOT__dividend 
                                                 >> 0xfU))) 
                                     ^ (IData)((vlSelf->div__DOT__add_B 
                                                >> 0x10U))))));
        bufp->chgBit(oldp+58,((1U & ((IData)((0xffffffffffffULL 
                                              & (vlSelf->div__DOT__dividend 
                                                 >> 0xfU))) 
                                     & (IData)((vlSelf->div__DOT__add_B 
                                                >> 0x10U))))));
        bufp->chgBit(oldp+59,((1U & (IData)((vlSelf->div__DOT__add_B 
                                             >> 0x11U)))));
        bufp->chgBit(oldp+60,((1U & ((IData)((0x7fffffffffffULL 
                                              & (vlSelf->div__DOT__dividend 
                                                 >> 0x10U))) 
                                     ^ (IData)((vlSelf->div__DOT__add_B 
                                                >> 0x11U))))));
        bufp->chgBit(oldp+61,((1U & ((IData)((0x7fffffffffffULL 
                                              & (vlSelf->div__DOT__dividend 
                                                 >> 0x10U))) 
                                     & (IData)((vlSelf->div__DOT__add_B 
                                                >> 0x11U))))));
        bufp->chgBit(oldp+62,((1U & (IData)((vlSelf->div__DOT__add_B 
                                             >> 0x12U)))));
        bufp->chgBit(oldp+63,((1U & ((IData)((0x3fffffffffffULL 
                                              & (vlSelf->div__DOT__dividend 
                                                 >> 0x11U))) 
                                     ^ (IData)((vlSelf->div__DOT__add_B 
                                                >> 0x12U))))));
        bufp->chgBit(oldp+64,((1U & ((IData)((0x3fffffffffffULL 
                                              & (vlSelf->div__DOT__dividend 
                                                 >> 0x11U))) 
                                     & (IData)((vlSelf->div__DOT__add_B 
                                                >> 0x12U))))));
        bufp->chgBit(oldp+65,((1U & (IData)((vlSelf->div__DOT__add_B 
                                             >> 0x13U)))));
        bufp->chgBit(oldp+66,((1U & ((IData)((0x1fffffffffffULL 
                                              & (vlSelf->div__DOT__dividend 
                                                 >> 0x12U))) 
                                     ^ (IData)((vlSelf->div__DOT__add_B 
                                                >> 0x13U))))));
        bufp->chgBit(oldp+67,((1U & ((IData)((0x1fffffffffffULL 
                                              & (vlSelf->div__DOT__dividend 
                                                 >> 0x12U))) 
                                     & (IData)((vlSelf->div__DOT__add_B 
                                                >> 0x13U))))));
        bufp->chgCData(oldp+68,(((0xeU & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__16__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                          << 1U)) | 
                                 (1U & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__12__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                        >> 3U)))),4);
        bufp->chgCData(oldp+69,((0xfU & (IData)((vlSelf->div__DOT__add_B 
                                                 >> 0x14U)))),4);
        bufp->chgCData(oldp+70,((((0xeU & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__20__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                           << 1U)) 
                                  | (1U & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__16__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                           >> 3U))) 
                                 ^ (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__20__KET____DOT__cla_part0__DOT__p))),4);
        bufp->chgBit(oldp+71,((1U & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__20__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                     >> 3U))));
        bufp->chgCData(oldp+72,(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__20__KET____DOT__cla_part0__DOT__p),4);
        bufp->chgCData(oldp+73,((((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__20__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                  << 1U) | (1U & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__16__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                  >> 3U)))),5);
        bufp->chgCData(oldp+74,(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__20__KET____DOT__cla_part0__DOT__g),4);
        bufp->chgCData(oldp+75,(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__20__KET____DOT__cla_part0__DOT____Vcellout__carry0__c),4);
        bufp->chgBit(oldp+76,((1U & (IData)((vlSelf->div__DOT__add_B 
                                             >> 0x14U)))));
        bufp->chgBit(oldp+77,((1U & ((IData)((0xfffffffffffULL 
                                              & (vlSelf->div__DOT__dividend 
                                                 >> 0x13U))) 
                                     ^ (IData)((vlSelf->div__DOT__add_B 
                                                >> 0x14U))))));
        bufp->chgBit(oldp+78,((1U & ((IData)((0xfffffffffffULL 
                                              & (vlSelf->div__DOT__dividend 
                                                 >> 0x13U))) 
                                     & (IData)((vlSelf->div__DOT__add_B 
                                                >> 0x14U))))));
        bufp->chgBit(oldp+79,((1U & (IData)((vlSelf->div__DOT__add_B 
                                             >> 0x15U)))));
        bufp->chgBit(oldp+80,((1U & ((IData)((0x7ffffffffffULL 
                                              & (vlSelf->div__DOT__dividend 
                                                 >> 0x14U))) 
                                     ^ (IData)((vlSelf->div__DOT__add_B 
                                                >> 0x15U))))));
        bufp->chgBit(oldp+81,((1U & ((IData)((0x7ffffffffffULL 
                                              & (vlSelf->div__DOT__dividend 
                                                 >> 0x14U))) 
                                     & (IData)((vlSelf->div__DOT__add_B 
                                                >> 0x15U))))));
        bufp->chgBit(oldp+82,((1U & (IData)((vlSelf->div__DOT__add_B 
                                             >> 0x16U)))));
        bufp->chgBit(oldp+83,((1U & ((IData)((0x3ffffffffffULL 
                                              & (vlSelf->div__DOT__dividend 
                                                 >> 0x15U))) 
                                     ^ (IData)((vlSelf->div__DOT__add_B 
                                                >> 0x16U))))));
        bufp->chgBit(oldp+84,((1U & ((IData)((0x3ffffffffffULL 
                                              & (vlSelf->div__DOT__dividend 
                                                 >> 0x15U))) 
                                     & (IData)((vlSelf->div__DOT__add_B 
                                                >> 0x16U))))));
        bufp->chgBit(oldp+85,((1U & (IData)((vlSelf->div__DOT__add_B 
                                             >> 0x17U)))));
        bufp->chgBit(oldp+86,((1U & ((IData)((0x1ffffffffffULL 
                                              & (vlSelf->div__DOT__dividend 
                                                 >> 0x16U))) 
                                     ^ (IData)((vlSelf->div__DOT__add_B 
                                                >> 0x17U))))));
        bufp->chgBit(oldp+87,((1U & ((IData)((0x1ffffffffffULL 
                                              & (vlSelf->div__DOT__dividend 
                                                 >> 0x16U))) 
                                     & (IData)((vlSelf->div__DOT__add_B 
                                                >> 0x17U))))));
        bufp->chgCData(oldp+88,(((0xeU & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__20__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                          << 1U)) | 
                                 (1U & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__16__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                        >> 3U)))),4);
        bufp->chgCData(oldp+89,((0xfU & (IData)((vlSelf->div__DOT__add_B 
                                                 >> 0x18U)))),4);
        bufp->chgCData(oldp+90,((((0xeU & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__24__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                           << 1U)) 
                                  | (1U & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__20__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                           >> 3U))) 
                                 ^ (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__24__KET____DOT__cla_part0__DOT__p))),4);
        bufp->chgBit(oldp+91,((1U & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__24__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                     >> 3U))));
        bufp->chgCData(oldp+92,(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__24__KET____DOT__cla_part0__DOT__p),4);
        bufp->chgCData(oldp+93,((((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__24__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                  << 1U) | (1U & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__20__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                  >> 3U)))),5);
        bufp->chgCData(oldp+94,(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__24__KET____DOT__cla_part0__DOT__g),4);
        bufp->chgCData(oldp+95,(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__24__KET____DOT__cla_part0__DOT____Vcellout__carry0__c),4);
        bufp->chgBit(oldp+96,((1U & (IData)((vlSelf->div__DOT__add_B 
                                             >> 0x18U)))));
        bufp->chgBit(oldp+97,((1U & ((IData)((0xffffffffffULL 
                                              & (vlSelf->div__DOT__dividend 
                                                 >> 0x17U))) 
                                     ^ (IData)((vlSelf->div__DOT__add_B 
                                                >> 0x18U))))));
        bufp->chgBit(oldp+98,((1U & ((IData)((0xffffffffffULL 
                                              & (vlSelf->div__DOT__dividend 
                                                 >> 0x17U))) 
                                     & (IData)((vlSelf->div__DOT__add_B 
                                                >> 0x18U))))));
        bufp->chgBit(oldp+99,((1U & (IData)((vlSelf->div__DOT__add_B 
                                             >> 0x19U)))));
        bufp->chgBit(oldp+100,((1U & ((IData)((0x7fffffffffULL 
                                               & (vlSelf->div__DOT__dividend 
                                                  >> 0x18U))) 
                                      ^ (IData)((vlSelf->div__DOT__add_B 
                                                 >> 0x19U))))));
        bufp->chgBit(oldp+101,((1U & ((IData)((0x7fffffffffULL 
                                               & (vlSelf->div__DOT__dividend 
                                                  >> 0x18U))) 
                                      & (IData)((vlSelf->div__DOT__add_B 
                                                 >> 0x19U))))));
        bufp->chgBit(oldp+102,((1U & (IData)((vlSelf->div__DOT__add_B 
                                              >> 0x1aU)))));
        bufp->chgBit(oldp+103,((1U & ((IData)((0x3fffffffffULL 
                                               & (vlSelf->div__DOT__dividend 
                                                  >> 0x19U))) 
                                      ^ (IData)((vlSelf->div__DOT__add_B 
                                                 >> 0x1aU))))));
        bufp->chgBit(oldp+104,((1U & ((IData)((0x3fffffffffULL 
                                               & (vlSelf->div__DOT__dividend 
                                                  >> 0x19U))) 
                                      & (IData)((vlSelf->div__DOT__add_B 
                                                 >> 0x1aU))))));
        bufp->chgBit(oldp+105,((1U & (IData)((vlSelf->div__DOT__add_B 
                                              >> 0x1bU)))));
        bufp->chgBit(oldp+106,((1U & ((IData)((0x1fffffffffULL 
                                               & (vlSelf->div__DOT__dividend 
                                                  >> 0x1aU))) 
                                      ^ (IData)((vlSelf->div__DOT__add_B 
                                                 >> 0x1bU))))));
        bufp->chgBit(oldp+107,((1U & ((IData)((0x1fffffffffULL 
                                               & (vlSelf->div__DOT__dividend 
                                                  >> 0x1aU))) 
                                      & (IData)((vlSelf->div__DOT__add_B 
                                                 >> 0x1bU))))));
        bufp->chgCData(oldp+108,(((0xeU & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__24__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                           << 1U)) 
                                  | (1U & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__20__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                           >> 3U)))),4);
        bufp->chgCData(oldp+109,((0xfU & (IData)((vlSelf->div__DOT__add_B 
                                                  >> 0x1cU)))),4);
        bufp->chgCData(oldp+110,((((0xeU & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__28__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                            << 1U)) 
                                   | (1U & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__24__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                            >> 3U))) 
                                  ^ (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__28__KET____DOT__cla_part0__DOT__p))),4);
        bufp->chgBit(oldp+111,((1U & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__28__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                      >> 3U))));
        bufp->chgCData(oldp+112,(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__28__KET____DOT__cla_part0__DOT__p),4);
        bufp->chgCData(oldp+113,((((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__28__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                   << 1U) | (1U & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__24__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                   >> 3U)))),5);
        bufp->chgCData(oldp+114,(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__28__KET____DOT__cla_part0__DOT__g),4);
        bufp->chgCData(oldp+115,(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__28__KET____DOT__cla_part0__DOT____Vcellout__carry0__c),4);
        bufp->chgBit(oldp+116,((1U & (IData)((vlSelf->div__DOT__add_B 
                                              >> 0x1cU)))));
        bufp->chgBit(oldp+117,((1U & ((IData)((0xfffffffffULL 
                                               & (vlSelf->div__DOT__dividend 
                                                  >> 0x1bU))) 
                                      ^ (IData)((vlSelf->div__DOT__add_B 
                                                 >> 0x1cU))))));
        bufp->chgBit(oldp+118,((1U & ((IData)((0xfffffffffULL 
                                               & (vlSelf->div__DOT__dividend 
                                                  >> 0x1bU))) 
                                      & (IData)((vlSelf->div__DOT__add_B 
                                                 >> 0x1cU))))));
        bufp->chgBit(oldp+119,((1U & (IData)((vlSelf->div__DOT__add_B 
                                              >> 0x1dU)))));
        bufp->chgBit(oldp+120,((1U & ((IData)((0x7ffffffffULL 
                                               & (vlSelf->div__DOT__dividend 
                                                  >> 0x1cU))) 
                                      ^ (IData)((vlSelf->div__DOT__add_B 
                                                 >> 0x1dU))))));
        bufp->chgBit(oldp+121,((1U & ((IData)((0x7ffffffffULL 
                                               & (vlSelf->div__DOT__dividend 
                                                  >> 0x1cU))) 
                                      & (IData)((vlSelf->div__DOT__add_B 
                                                 >> 0x1dU))))));
        bufp->chgBit(oldp+122,((1U & (IData)((vlSelf->div__DOT__add_B 
                                              >> 0x1eU)))));
        bufp->chgBit(oldp+123,((1U & ((IData)((0x3ffffffffULL 
                                               & (vlSelf->div__DOT__dividend 
                                                  >> 0x1dU))) 
                                      ^ (IData)((vlSelf->div__DOT__add_B 
                                                 >> 0x1eU))))));
        bufp->chgBit(oldp+124,((1U & ((IData)((0x3ffffffffULL 
                                               & (vlSelf->div__DOT__dividend 
                                                  >> 0x1dU))) 
                                      & (IData)((vlSelf->div__DOT__add_B 
                                                 >> 0x1eU))))));
        bufp->chgBit(oldp+125,((1U & (IData)((vlSelf->div__DOT__add_B 
                                              >> 0x1fU)))));
        bufp->chgBit(oldp+126,((1U & ((IData)((0x1ffffffffULL 
                                               & (vlSelf->div__DOT__dividend 
                                                  >> 0x1eU))) 
                                      ^ (IData)((vlSelf->div__DOT__add_B 
                                                 >> 0x1fU))))));
        bufp->chgBit(oldp+127,((1U & ((IData)((0x1ffffffffULL 
                                               & (vlSelf->div__DOT__dividend 
                                                  >> 0x1eU))) 
                                      & (IData)((vlSelf->div__DOT__add_B 
                                                 >> 0x1fU))))));
        bufp->chgCData(oldp+128,(((0xeU & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__28__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                           << 1U)) 
                                  | (1U & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__24__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                           >> 3U)))),4);
        bufp->chgCData(oldp+129,((0xfU & (IData)((vlSelf->div__DOT__add_B 
                                                  >> 0x20U)))),4);
        bufp->chgCData(oldp+130,((((0xeU & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__32__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                            << 1U)) 
                                   | (1U & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__28__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                            >> 3U))) 
                                  ^ (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__32__KET____DOT__cla_part0__DOT__p))),4);
        bufp->chgBit(oldp+131,((1U & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__32__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                      >> 3U))));
        bufp->chgCData(oldp+132,(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__32__KET____DOT__cla_part0__DOT__p),4);
        bufp->chgCData(oldp+133,((((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__32__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                   << 1U) | (1U & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__28__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                   >> 3U)))),5);
        bufp->chgCData(oldp+134,(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__32__KET____DOT__cla_part0__DOT__g),4);
        bufp->chgCData(oldp+135,(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__32__KET____DOT__cla_part0__DOT____Vcellout__carry0__c),4);
        bufp->chgBit(oldp+136,((1U & (IData)((vlSelf->div__DOT__add_B 
                                              >> 0x20U)))));
        bufp->chgBit(oldp+137,((1U & ((IData)((0xffffffffULL 
                                               & (vlSelf->div__DOT__dividend 
                                                  >> 0x1fU))) 
                                      ^ (IData)((vlSelf->div__DOT__add_B 
                                                 >> 0x20U))))));
        bufp->chgBit(oldp+138,((1U & ((IData)((0xffffffffULL 
                                               & (vlSelf->div__DOT__dividend 
                                                  >> 0x1fU))) 
                                      & (IData)((vlSelf->div__DOT__add_B 
                                                 >> 0x20U))))));
        bufp->chgBit(oldp+139,((1U & (IData)((vlSelf->div__DOT__add_B 
                                              >> 0x21U)))));
        bufp->chgBit(oldp+140,((1U & ((IData)((0x7fffffffULL 
                                               & (vlSelf->div__DOT__dividend 
                                                  >> 0x20U))) 
                                      ^ (IData)((vlSelf->div__DOT__add_B 
                                                 >> 0x21U))))));
        bufp->chgBit(oldp+141,((1U & ((IData)((0x7fffffffULL 
                                               & (vlSelf->div__DOT__dividend 
                                                  >> 0x20U))) 
                                      & (IData)((vlSelf->div__DOT__add_B 
                                                 >> 0x21U))))));
        bufp->chgBit(oldp+142,((1U & (IData)((vlSelf->div__DOT__add_B 
                                              >> 0x22U)))));
        bufp->chgBit(oldp+143,((1U & ((IData)((0x3fffffffULL 
                                               & (vlSelf->div__DOT__dividend 
                                                  >> 0x21U))) 
                                      ^ (IData)((vlSelf->div__DOT__add_B 
                                                 >> 0x22U))))));
        bufp->chgBit(oldp+144,((1U & ((IData)((0x3fffffffULL 
                                               & (vlSelf->div__DOT__dividend 
                                                  >> 0x21U))) 
                                      & (IData)((vlSelf->div__DOT__add_B 
                                                 >> 0x22U))))));
        bufp->chgBit(oldp+145,((1U & (IData)((vlSelf->div__DOT__add_B 
                                              >> 0x23U)))));
        bufp->chgBit(oldp+146,((1U & ((IData)((0x1fffffffULL 
                                               & (vlSelf->div__DOT__dividend 
                                                  >> 0x22U))) 
                                      ^ (IData)((vlSelf->div__DOT__add_B 
                                                 >> 0x23U))))));
        bufp->chgBit(oldp+147,((1U & ((IData)((0x1fffffffULL 
                                               & (vlSelf->div__DOT__dividend 
                                                  >> 0x22U))) 
                                      & (IData)((vlSelf->div__DOT__add_B 
                                                 >> 0x23U))))));
        bufp->chgCData(oldp+148,(((0xeU & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__32__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                           << 1U)) 
                                  | (1U & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__28__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                           >> 3U)))),4);
        bufp->chgCData(oldp+149,((0xfU & (IData)((vlSelf->div__DOT__add_B 
                                                  >> 0x24U)))),4);
        bufp->chgCData(oldp+150,((((0xeU & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__36__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                            << 1U)) 
                                   | (1U & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__32__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                            >> 3U))) 
                                  ^ (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__36__KET____DOT__cla_part0__DOT__p))),4);
        bufp->chgBit(oldp+151,((1U & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__36__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                      >> 3U))));
        bufp->chgCData(oldp+152,(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__36__KET____DOT__cla_part0__DOT__p),4);
        bufp->chgCData(oldp+153,((((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__36__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                   << 1U) | (1U & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__32__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                   >> 3U)))),5);
        bufp->chgCData(oldp+154,(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__36__KET____DOT__cla_part0__DOT__g),4);
        bufp->chgCData(oldp+155,(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__36__KET____DOT__cla_part0__DOT____Vcellout__carry0__c),4);
        bufp->chgBit(oldp+156,((1U & (IData)((vlSelf->div__DOT__add_B 
                                              >> 0x24U)))));
        bufp->chgBit(oldp+157,((1U & ((IData)((0xfffffffULL 
                                               & (vlSelf->div__DOT__dividend 
                                                  >> 0x23U))) 
                                      ^ (IData)((vlSelf->div__DOT__add_B 
                                                 >> 0x24U))))));
        bufp->chgBit(oldp+158,((1U & ((IData)((0xfffffffULL 
                                               & (vlSelf->div__DOT__dividend 
                                                  >> 0x23U))) 
                                      & (IData)((vlSelf->div__DOT__add_B 
                                                 >> 0x24U))))));
        bufp->chgBit(oldp+159,((1U & (IData)((vlSelf->div__DOT__add_B 
                                              >> 0x25U)))));
        bufp->chgBit(oldp+160,((1U & ((IData)((0x7ffffffULL 
                                               & (vlSelf->div__DOT__dividend 
                                                  >> 0x24U))) 
                                      ^ (IData)((vlSelf->div__DOT__add_B 
                                                 >> 0x25U))))));
        bufp->chgBit(oldp+161,((1U & ((IData)((0x7ffffffULL 
                                               & (vlSelf->div__DOT__dividend 
                                                  >> 0x24U))) 
                                      & (IData)((vlSelf->div__DOT__add_B 
                                                 >> 0x25U))))));
        bufp->chgBit(oldp+162,((1U & (IData)((vlSelf->div__DOT__add_B 
                                              >> 0x26U)))));
        bufp->chgBit(oldp+163,((1U & ((IData)((0x3ffffffULL 
                                               & (vlSelf->div__DOT__dividend 
                                                  >> 0x25U))) 
                                      ^ (IData)((vlSelf->div__DOT__add_B 
                                                 >> 0x26U))))));
        bufp->chgBit(oldp+164,((1U & ((IData)((0x3ffffffULL 
                                               & (vlSelf->div__DOT__dividend 
                                                  >> 0x25U))) 
                                      & (IData)((vlSelf->div__DOT__add_B 
                                                 >> 0x26U))))));
        bufp->chgBit(oldp+165,((1U & (IData)((vlSelf->div__DOT__add_B 
                                              >> 0x27U)))));
        bufp->chgBit(oldp+166,((1U & ((IData)((0x1ffffffULL 
                                               & (vlSelf->div__DOT__dividend 
                                                  >> 0x26U))) 
                                      ^ (IData)((vlSelf->div__DOT__add_B 
                                                 >> 0x27U))))));
        bufp->chgBit(oldp+167,((1U & ((IData)((0x1ffffffULL 
                                               & (vlSelf->div__DOT__dividend 
                                                  >> 0x26U))) 
                                      & (IData)((vlSelf->div__DOT__add_B 
                                                 >> 0x27U))))));
        bufp->chgCData(oldp+168,(((0xeU & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__36__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                           << 1U)) 
                                  | (1U & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__32__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                           >> 3U)))),4);
        bufp->chgCData(oldp+169,((0xfU & (IData)((vlSelf->div__DOT__add_B 
                                                  >> 0x28U)))),4);
        bufp->chgCData(oldp+170,((((0xeU & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__40__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                            << 1U)) 
                                   | (1U & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__36__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                            >> 3U))) 
                                  ^ (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__40__KET____DOT__cla_part0__DOT__p))),4);
        bufp->chgBit(oldp+171,((1U & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__40__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                      >> 3U))));
        bufp->chgCData(oldp+172,(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__40__KET____DOT__cla_part0__DOT__p),4);
        bufp->chgCData(oldp+173,((((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__40__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                   << 1U) | (1U & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__36__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                   >> 3U)))),5);
        bufp->chgCData(oldp+174,(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__40__KET____DOT__cla_part0__DOT__g),4);
        bufp->chgCData(oldp+175,(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__40__KET____DOT__cla_part0__DOT____Vcellout__carry0__c),4);
        bufp->chgBit(oldp+176,((1U & (IData)((vlSelf->div__DOT__add_B 
                                              >> 0x28U)))));
        bufp->chgBit(oldp+177,((1U & ((IData)((0xffffffULL 
                                               & (vlSelf->div__DOT__dividend 
                                                  >> 0x27U))) 
                                      ^ (IData)((vlSelf->div__DOT__add_B 
                                                 >> 0x28U))))));
        bufp->chgBit(oldp+178,((1U & ((IData)((0xffffffULL 
                                               & (vlSelf->div__DOT__dividend 
                                                  >> 0x27U))) 
                                      & (IData)((vlSelf->div__DOT__add_B 
                                                 >> 0x28U))))));
        bufp->chgBit(oldp+179,((1U & (IData)((vlSelf->div__DOT__add_B 
                                              >> 0x29U)))));
        bufp->chgBit(oldp+180,((1U & ((IData)((0x7fffffULL 
                                               & (vlSelf->div__DOT__dividend 
                                                  >> 0x28U))) 
                                      ^ (IData)((vlSelf->div__DOT__add_B 
                                                 >> 0x29U))))));
        bufp->chgBit(oldp+181,((1U & ((IData)((0x7fffffULL 
                                               & (vlSelf->div__DOT__dividend 
                                                  >> 0x28U))) 
                                      & (IData)((vlSelf->div__DOT__add_B 
                                                 >> 0x29U))))));
        bufp->chgBit(oldp+182,((1U & (IData)((vlSelf->div__DOT__add_B 
                                              >> 0x2aU)))));
        bufp->chgBit(oldp+183,((1U & ((IData)((0x3fffffULL 
                                               & (vlSelf->div__DOT__dividend 
                                                  >> 0x29U))) 
                                      ^ (IData)((vlSelf->div__DOT__add_B 
                                                 >> 0x2aU))))));
        bufp->chgBit(oldp+184,((1U & ((IData)((0x3fffffULL 
                                               & (vlSelf->div__DOT__dividend 
                                                  >> 0x29U))) 
                                      & (IData)((vlSelf->div__DOT__add_B 
                                                 >> 0x2aU))))));
        bufp->chgBit(oldp+185,((1U & (IData)((vlSelf->div__DOT__add_B 
                                              >> 0x2bU)))));
        bufp->chgBit(oldp+186,((1U & ((IData)((0x1fffffULL 
                                               & (vlSelf->div__DOT__dividend 
                                                  >> 0x2aU))) 
                                      ^ (IData)((vlSelf->div__DOT__add_B 
                                                 >> 0x2bU))))));
        bufp->chgBit(oldp+187,((1U & ((IData)((0x1fffffULL 
                                               & (vlSelf->div__DOT__dividend 
                                                  >> 0x2aU))) 
                                      & (IData)((vlSelf->div__DOT__add_B 
                                                 >> 0x2bU))))));
        bufp->chgCData(oldp+188,(((0xeU & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__40__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                           << 1U)) 
                                  | (1U & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__36__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                           >> 3U)))),4);
        bufp->chgCData(oldp+189,((0xfU & (IData)((vlSelf->div__DOT__add_B 
                                                  >> 0x2cU)))),4);
        bufp->chgCData(oldp+190,((((0xeU & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__44__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                            << 1U)) 
                                   | (1U & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__40__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                            >> 3U))) 
                                  ^ (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__44__KET____DOT__cla_part0__DOT__p))),4);
        bufp->chgBit(oldp+191,((1U & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__44__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                      >> 3U))));
        bufp->chgCData(oldp+192,(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__44__KET____DOT__cla_part0__DOT__p),4);
        bufp->chgCData(oldp+193,((((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__44__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                   << 1U) | (1U & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__40__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                   >> 3U)))),5);
        bufp->chgCData(oldp+194,(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__44__KET____DOT__cla_part0__DOT__g),4);
        bufp->chgCData(oldp+195,(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__44__KET____DOT__cla_part0__DOT____Vcellout__carry0__c),4);
        bufp->chgBit(oldp+196,((1U & (IData)((vlSelf->div__DOT__add_B 
                                              >> 0x2cU)))));
        bufp->chgBit(oldp+197,((1U & ((IData)((0xfffffULL 
                                               & (vlSelf->div__DOT__dividend 
                                                  >> 0x2bU))) 
                                      ^ (IData)((vlSelf->div__DOT__add_B 
                                                 >> 0x2cU))))));
        bufp->chgBit(oldp+198,((1U & ((IData)((0xfffffULL 
                                               & (vlSelf->div__DOT__dividend 
                                                  >> 0x2bU))) 
                                      & (IData)((vlSelf->div__DOT__add_B 
                                                 >> 0x2cU))))));
        bufp->chgBit(oldp+199,((1U & (IData)((vlSelf->div__DOT__add_B 
                                              >> 0x2dU)))));
        bufp->chgBit(oldp+200,((1U & ((IData)((0x7ffffULL 
                                               & (vlSelf->div__DOT__dividend 
                                                  >> 0x2cU))) 
                                      ^ (IData)((vlSelf->div__DOT__add_B 
                                                 >> 0x2dU))))));
        bufp->chgBit(oldp+201,((1U & ((IData)((0x7ffffULL 
                                               & (vlSelf->div__DOT__dividend 
                                                  >> 0x2cU))) 
                                      & (IData)((vlSelf->div__DOT__add_B 
                                                 >> 0x2dU))))));
        bufp->chgBit(oldp+202,((1U & (IData)((vlSelf->div__DOT__add_B 
                                              >> 0x2eU)))));
        bufp->chgBit(oldp+203,((1U & ((IData)((0x3ffffULL 
                                               & (vlSelf->div__DOT__dividend 
                                                  >> 0x2dU))) 
                                      ^ (IData)((vlSelf->div__DOT__add_B 
                                                 >> 0x2eU))))));
        bufp->chgBit(oldp+204,((1U & ((IData)((0x3ffffULL 
                                               & (vlSelf->div__DOT__dividend 
                                                  >> 0x2dU))) 
                                      & (IData)((vlSelf->div__DOT__add_B 
                                                 >> 0x2eU))))));
        bufp->chgBit(oldp+205,((1U & (IData)((vlSelf->div__DOT__add_B 
                                              >> 0x2fU)))));
        bufp->chgBit(oldp+206,((1U & ((IData)((0x1ffffULL 
                                               & (vlSelf->div__DOT__dividend 
                                                  >> 0x2eU))) 
                                      ^ (IData)((vlSelf->div__DOT__add_B 
                                                 >> 0x2fU))))));
        bufp->chgBit(oldp+207,((1U & ((IData)((0x1ffffULL 
                                               & (vlSelf->div__DOT__dividend 
                                                  >> 0x2eU))) 
                                      & (IData)((vlSelf->div__DOT__add_B 
                                                 >> 0x2fU))))));
        bufp->chgCData(oldp+208,(((0xeU & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__44__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                           << 1U)) 
                                  | (1U & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__40__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                           >> 3U)))),4);
        bufp->chgCData(oldp+209,((0xfU & (IData)((vlSelf->div__DOT__add_B 
                                                  >> 0x30U)))),4);
        bufp->chgCData(oldp+210,((((0xeU & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__48__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                            << 1U)) 
                                   | (1U & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__44__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                            >> 3U))) 
                                  ^ (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__48__KET____DOT__cla_part0__DOT__p))),4);
        bufp->chgBit(oldp+211,((1U & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__48__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                      >> 3U))));
        bufp->chgCData(oldp+212,(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__48__KET____DOT__cla_part0__DOT__p),4);
        bufp->chgCData(oldp+213,((((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__48__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                   << 1U) | (1U & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__44__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                   >> 3U)))),5);
        bufp->chgCData(oldp+214,(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__48__KET____DOT__cla_part0__DOT__g),4);
        bufp->chgCData(oldp+215,(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__48__KET____DOT__cla_part0__DOT____Vcellout__carry0__c),4);
        bufp->chgBit(oldp+216,((1U & (IData)((vlSelf->div__DOT__add_B 
                                              >> 0x30U)))));
        bufp->chgBit(oldp+217,((1U & ((IData)((0xffffULL 
                                               & (vlSelf->div__DOT__dividend 
                                                  >> 0x2fU))) 
                                      ^ (IData)((vlSelf->div__DOT__add_B 
                                                 >> 0x30U))))));
        bufp->chgBit(oldp+218,((1U & ((IData)((0xffffULL 
                                               & (vlSelf->div__DOT__dividend 
                                                  >> 0x2fU))) 
                                      & (IData)((vlSelf->div__DOT__add_B 
                                                 >> 0x30U))))));
        bufp->chgBit(oldp+219,((1U & (IData)((vlSelf->div__DOT__add_B 
                                              >> 0x31U)))));
        bufp->chgBit(oldp+220,((1U & ((IData)((0x7fffULL 
                                               & (vlSelf->div__DOT__dividend 
                                                  >> 0x30U))) 
                                      ^ (IData)((vlSelf->div__DOT__add_B 
                                                 >> 0x31U))))));
        bufp->chgBit(oldp+221,((1U & ((IData)((0x7fffULL 
                                               & (vlSelf->div__DOT__dividend 
                                                  >> 0x30U))) 
                                      & (IData)((vlSelf->div__DOT__add_B 
                                                 >> 0x31U))))));
        bufp->chgBit(oldp+222,((1U & (IData)((vlSelf->div__DOT__add_B 
                                              >> 0x32U)))));
        bufp->chgBit(oldp+223,((1U & ((IData)((0x3fffULL 
                                               & (vlSelf->div__DOT__dividend 
                                                  >> 0x31U))) 
                                      ^ (IData)((vlSelf->div__DOT__add_B 
                                                 >> 0x32U))))));
        bufp->chgBit(oldp+224,((1U & ((IData)((0x3fffULL 
                                               & (vlSelf->div__DOT__dividend 
                                                  >> 0x31U))) 
                                      & (IData)((vlSelf->div__DOT__add_B 
                                                 >> 0x32U))))));
        bufp->chgBit(oldp+225,((1U & (IData)((vlSelf->div__DOT__add_B 
                                              >> 0x33U)))));
        bufp->chgBit(oldp+226,((1U & ((IData)((0x1fffULL 
                                               & (vlSelf->div__DOT__dividend 
                                                  >> 0x32U))) 
                                      ^ (IData)((vlSelf->div__DOT__add_B 
                                                 >> 0x33U))))));
        bufp->chgBit(oldp+227,((1U & ((IData)((0x1fffULL 
                                               & (vlSelf->div__DOT__dividend 
                                                  >> 0x32U))) 
                                      & (IData)((vlSelf->div__DOT__add_B 
                                                 >> 0x33U))))));
        bufp->chgCData(oldp+228,(((0xeU & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__48__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                           << 1U)) 
                                  | (1U & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__44__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                           >> 3U)))),4);
        bufp->chgCData(oldp+229,((0xfU & (IData)((vlSelf->div__DOT__add_B 
                                                  >> 4U)))),4);
        bufp->chgCData(oldp+230,((((0xeU & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__4__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                            << 1U)) 
                                   | (1U & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__0__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                            >> 3U))) 
                                  ^ (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__4__KET____DOT__cla_part0__DOT__p))),4);
        bufp->chgBit(oldp+231,((1U & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__4__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                      >> 3U))));
        bufp->chgCData(oldp+232,(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__4__KET____DOT__cla_part0__DOT__p),4);
        bufp->chgCData(oldp+233,((((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__4__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                   << 1U) | (1U & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__0__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                   >> 3U)))),5);
        bufp->chgCData(oldp+234,(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__4__KET____DOT__cla_part0__DOT__g),4);
        bufp->chgCData(oldp+235,(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__4__KET____DOT__cla_part0__DOT____Vcellout__carry0__c),4);
        bufp->chgBit(oldp+236,((1U & (IData)((vlSelf->div__DOT__add_B 
                                              >> 4U)))));
        bufp->chgBit(oldp+237,((1U & ((IData)((0xfffffffffffffffULL 
                                               & (vlSelf->div__DOT__dividend 
                                                  >> 3U))) 
                                      ^ (IData)((vlSelf->div__DOT__add_B 
                                                 >> 4U))))));
        bufp->chgBit(oldp+238,((1U & ((IData)((0xfffffffffffffffULL 
                                               & (vlSelf->div__DOT__dividend 
                                                  >> 3U))) 
                                      & (IData)((vlSelf->div__DOT__add_B 
                                                 >> 4U))))));
        bufp->chgBit(oldp+239,((1U & (IData)((vlSelf->div__DOT__add_B 
                                              >> 5U)))));
        bufp->chgBit(oldp+240,((1U & ((IData)((0x7ffffffffffffffULL 
                                               & (vlSelf->div__DOT__dividend 
                                                  >> 4U))) 
                                      ^ (IData)((vlSelf->div__DOT__add_B 
                                                 >> 5U))))));
        bufp->chgBit(oldp+241,((1U & ((IData)((0x7ffffffffffffffULL 
                                               & (vlSelf->div__DOT__dividend 
                                                  >> 4U))) 
                                      & (IData)((vlSelf->div__DOT__add_B 
                                                 >> 5U))))));
        bufp->chgBit(oldp+242,((1U & (IData)((vlSelf->div__DOT__add_B 
                                              >> 6U)))));
        bufp->chgBit(oldp+243,((1U & ((IData)((0x3ffffffffffffffULL 
                                               & (vlSelf->div__DOT__dividend 
                                                  >> 5U))) 
                                      ^ (IData)((vlSelf->div__DOT__add_B 
                                                 >> 6U))))));
        bufp->chgBit(oldp+244,((1U & ((IData)((0x3ffffffffffffffULL 
                                               & (vlSelf->div__DOT__dividend 
                                                  >> 5U))) 
                                      & (IData)((vlSelf->div__DOT__add_B 
                                                 >> 6U))))));
        bufp->chgBit(oldp+245,((1U & (IData)((vlSelf->div__DOT__add_B 
                                              >> 7U)))));
        bufp->chgBit(oldp+246,((1U & ((IData)((0x1ffffffffffffffULL 
                                               & (vlSelf->div__DOT__dividend 
                                                  >> 6U))) 
                                      ^ (IData)((vlSelf->div__DOT__add_B 
                                                 >> 7U))))));
        bufp->chgBit(oldp+247,((1U & ((IData)((0x1ffffffffffffffULL 
                                               & (vlSelf->div__DOT__dividend 
                                                  >> 6U))) 
                                      & (IData)((vlSelf->div__DOT__add_B 
                                                 >> 7U))))));
        bufp->chgCData(oldp+248,(((0xeU & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__4__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                           << 1U)) 
                                  | (1U & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__0__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                           >> 3U)))),4);
        bufp->chgCData(oldp+249,((0xfU & (IData)((vlSelf->div__DOT__add_B 
                                                  >> 0x34U)))),4);
        bufp->chgCData(oldp+250,((((0xeU & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__52__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                            << 1U)) 
                                   | (1U & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__48__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                            >> 3U))) 
                                  ^ (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__52__KET____DOT__cla_part0__DOT__p))),4);
        bufp->chgBit(oldp+251,((1U & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__52__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                      >> 3U))));
        bufp->chgCData(oldp+252,(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__52__KET____DOT__cla_part0__DOT__p),4);
        bufp->chgCData(oldp+253,((((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__52__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                   << 1U) | (1U & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__48__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                   >> 3U)))),5);
        bufp->chgCData(oldp+254,(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__52__KET____DOT__cla_part0__DOT__g),4);
        bufp->chgCData(oldp+255,(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__52__KET____DOT__cla_part0__DOT____Vcellout__carry0__c),4);
        bufp->chgBit(oldp+256,((1U & (IData)((vlSelf->div__DOT__add_B 
                                              >> 0x34U)))));
        bufp->chgBit(oldp+257,((1U & ((IData)((0xfffULL 
                                               & (vlSelf->div__DOT__dividend 
                                                  >> 0x33U))) 
                                      ^ (IData)((vlSelf->div__DOT__add_B 
                                                 >> 0x34U))))));
        bufp->chgBit(oldp+258,((1U & ((IData)((0xfffULL 
                                               & (vlSelf->div__DOT__dividend 
                                                  >> 0x33U))) 
                                      & (IData)((vlSelf->div__DOT__add_B 
                                                 >> 0x34U))))));
        bufp->chgBit(oldp+259,((1U & (IData)((vlSelf->div__DOT__add_B 
                                              >> 0x35U)))));
        bufp->chgBit(oldp+260,((1U & ((IData)((0x7ffULL 
                                               & (vlSelf->div__DOT__dividend 
                                                  >> 0x34U))) 
                                      ^ (IData)((vlSelf->div__DOT__add_B 
                                                 >> 0x35U))))));
        bufp->chgBit(oldp+261,((1U & ((IData)((0x7ffULL 
                                               & (vlSelf->div__DOT__dividend 
                                                  >> 0x34U))) 
                                      & (IData)((vlSelf->div__DOT__add_B 
                                                 >> 0x35U))))));
        bufp->chgBit(oldp+262,((1U & (IData)((vlSelf->div__DOT__add_B 
                                              >> 0x36U)))));
        bufp->chgBit(oldp+263,((1U & ((IData)((0x3ffULL 
                                               & (vlSelf->div__DOT__dividend 
                                                  >> 0x35U))) 
                                      ^ (IData)((vlSelf->div__DOT__add_B 
                                                 >> 0x36U))))));
        bufp->chgBit(oldp+264,((1U & ((IData)((0x3ffULL 
                                               & (vlSelf->div__DOT__dividend 
                                                  >> 0x35U))) 
                                      & (IData)((vlSelf->div__DOT__add_B 
                                                 >> 0x36U))))));
        bufp->chgBit(oldp+265,((1U & (IData)((vlSelf->div__DOT__add_B 
                                              >> 0x37U)))));
        bufp->chgBit(oldp+266,((1U & ((IData)((0x1ffULL 
                                               & (vlSelf->div__DOT__dividend 
                                                  >> 0x36U))) 
                                      ^ (IData)((vlSelf->div__DOT__add_B 
                                                 >> 0x37U))))));
        bufp->chgBit(oldp+267,((1U & ((IData)((0x1ffULL 
                                               & (vlSelf->div__DOT__dividend 
                                                  >> 0x36U))) 
                                      & (IData)((vlSelf->div__DOT__add_B 
                                                 >> 0x37U))))));
        bufp->chgCData(oldp+268,(((0xeU & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__52__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                           << 1U)) 
                                  | (1U & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__48__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                           >> 3U)))),4);
        bufp->chgCData(oldp+269,((0xfU & (IData)((vlSelf->div__DOT__add_B 
                                                  >> 0x38U)))),4);
        bufp->chgCData(oldp+270,((((0xeU & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__56__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                            << 1U)) 
                                   | (1U & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__52__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                            >> 3U))) 
                                  ^ (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__56__KET____DOT__cla_part0__DOT__p))),4);
        bufp->chgBit(oldp+271,((1U & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__56__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                      >> 3U))));
        bufp->chgCData(oldp+272,(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__56__KET____DOT__cla_part0__DOT__p),4);
        bufp->chgCData(oldp+273,((((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__56__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                   << 1U) | (1U & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__52__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                   >> 3U)))),5);
        bufp->chgCData(oldp+274,(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__56__KET____DOT__cla_part0__DOT__g),4);
        bufp->chgCData(oldp+275,(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__56__KET____DOT__cla_part0__DOT____Vcellout__carry0__c),4);
        bufp->chgBit(oldp+276,((1U & (IData)((vlSelf->div__DOT__add_B 
                                              >> 0x38U)))));
        bufp->chgBit(oldp+277,((1U & ((IData)((0xffULL 
                                               & (vlSelf->div__DOT__dividend 
                                                  >> 0x37U))) 
                                      ^ (IData)((vlSelf->div__DOT__add_B 
                                                 >> 0x38U))))));
        bufp->chgBit(oldp+278,((1U & ((IData)((0xffULL 
                                               & (vlSelf->div__DOT__dividend 
                                                  >> 0x37U))) 
                                      & (IData)((vlSelf->div__DOT__add_B 
                                                 >> 0x38U))))));
        bufp->chgBit(oldp+279,((1U & (IData)((vlSelf->div__DOT__add_B 
                                              >> 0x39U)))));
        bufp->chgBit(oldp+280,((1U & ((IData)((0x7fULL 
                                               & (vlSelf->div__DOT__dividend 
                                                  >> 0x38U))) 
                                      ^ (IData)((vlSelf->div__DOT__add_B 
                                                 >> 0x39U))))));
        bufp->chgBit(oldp+281,((1U & ((IData)((0x7fULL 
                                               & (vlSelf->div__DOT__dividend 
                                                  >> 0x38U))) 
                                      & (IData)((vlSelf->div__DOT__add_B 
                                                 >> 0x39U))))));
        bufp->chgBit(oldp+282,((1U & (IData)((vlSelf->div__DOT__add_B 
                                              >> 0x3aU)))));
        bufp->chgBit(oldp+283,((1U & ((IData)((0x3fULL 
                                               & (vlSelf->div__DOT__dividend 
                                                  >> 0x39U))) 
                                      ^ (IData)((vlSelf->div__DOT__add_B 
                                                 >> 0x3aU))))));
        bufp->chgBit(oldp+284,((1U & ((IData)((0x3fULL 
                                               & (vlSelf->div__DOT__dividend 
                                                  >> 0x39U))) 
                                      & (IData)((vlSelf->div__DOT__add_B 
                                                 >> 0x3aU))))));
        bufp->chgBit(oldp+285,((1U & (IData)((vlSelf->div__DOT__add_B 
                                              >> 0x3bU)))));
        bufp->chgBit(oldp+286,((1U & ((IData)((0x1fULL 
                                               & (vlSelf->div__DOT__dividend 
                                                  >> 0x3aU))) 
                                      ^ (IData)((vlSelf->div__DOT__add_B 
                                                 >> 0x3bU))))));
        bufp->chgBit(oldp+287,((1U & ((IData)((0x1fULL 
                                               & (vlSelf->div__DOT__dividend 
                                                  >> 0x3aU))) 
                                      & (IData)((vlSelf->div__DOT__add_B 
                                                 >> 0x3bU))))));
        bufp->chgCData(oldp+288,(((0xeU & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__56__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                           << 1U)) 
                                  | (1U & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__52__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                           >> 3U)))),4);
        bufp->chgCData(oldp+289,((0xfU & (IData)((vlSelf->div__DOT__add_B 
                                                  >> 0x3cU)))),4);
        bufp->chgCData(oldp+290,((((0xeU & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__60__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                            << 1U)) 
                                   | (1U & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__56__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                            >> 3U))) 
                                  ^ (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__60__KET____DOT__cla_part0__DOT__p))),4);
        bufp->chgCData(oldp+291,(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__60__KET____DOT__cla_part0__DOT__p),4);
        bufp->chgCData(oldp+292,((((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__60__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                   << 1U) | (1U & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__56__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                   >> 3U)))),5);
        bufp->chgCData(oldp+293,(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__60__KET____DOT__cla_part0__DOT__g),4);
        bufp->chgCData(oldp+294,(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__60__KET____DOT__cla_part0__DOT____Vcellout__carry0__c),4);
        bufp->chgBit(oldp+295,((1U & (IData)((vlSelf->div__DOT__add_B 
                                              >> 0x3cU)))));
        bufp->chgBit(oldp+296,((1U & ((IData)((0xfULL 
                                               & (vlSelf->div__DOT__dividend 
                                                  >> 0x3bU))) 
                                      ^ (IData)((vlSelf->div__DOT__add_B 
                                                 >> 0x3cU))))));
        bufp->chgBit(oldp+297,((1U & ((IData)((0xfULL 
                                               & (vlSelf->div__DOT__dividend 
                                                  >> 0x3bU))) 
                                      & (IData)((vlSelf->div__DOT__add_B 
                                                 >> 0x3cU))))));
        bufp->chgBit(oldp+298,((1U & (IData)((vlSelf->div__DOT__add_B 
                                              >> 0x3dU)))));
        bufp->chgBit(oldp+299,((1U & ((IData)((7ULL 
                                               & (vlSelf->div__DOT__dividend 
                                                  >> 0x3cU))) 
                                      ^ (IData)((vlSelf->div__DOT__add_B 
                                                 >> 0x3dU))))));
        bufp->chgBit(oldp+300,((1U & ((IData)((7ULL 
                                               & (vlSelf->div__DOT__dividend 
                                                  >> 0x3cU))) 
                                      & (IData)((vlSelf->div__DOT__add_B 
                                                 >> 0x3dU))))));
        bufp->chgBit(oldp+301,((1U & (IData)((vlSelf->div__DOT__add_B 
                                              >> 0x3eU)))));
        bufp->chgBit(oldp+302,((1U & ((IData)((3ULL 
                                               & (vlSelf->div__DOT__dividend 
                                                  >> 0x3dU))) 
                                      ^ (IData)((vlSelf->div__DOT__add_B 
                                                 >> 0x3eU))))));
        bufp->chgBit(oldp+303,((1U & ((IData)((3ULL 
                                               & (vlSelf->div__DOT__dividend 
                                                  >> 0x3dU))) 
                                      & (IData)((vlSelf->div__DOT__add_B 
                                                 >> 0x3eU))))));
        bufp->chgBit(oldp+304,((1U & (IData)((vlSelf->div__DOT__add_B 
                                              >> 0x3fU)))));
        bufp->chgBit(oldp+305,((1U & ((vlSelf->div__DOT__dividend 
                                       >> 0x3eU) ^ 
                                      (vlSelf->div__DOT__add_B 
                                       >> 0x3fU)))));
        bufp->chgBit(oldp+306,((1U & (IData)(((vlSelf->div__DOT__dividend 
                                               >> 0x3eU) 
                                              & (vlSelf->div__DOT__add_B 
                                                 >> 0x3fU))))));
        bufp->chgCData(oldp+307,(((0xeU & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__60__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                           << 1U)) 
                                  | (1U & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__56__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                           >> 3U)))),4);
        bufp->chgCData(oldp+308,((0xfU & (IData)((vlSelf->div__DOT__add_B 
                                                  >> 8U)))),4);
        bufp->chgCData(oldp+309,((((0xeU & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__8__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                            << 1U)) 
                                   | (1U & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__4__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                            >> 3U))) 
                                  ^ (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__8__KET____DOT__cla_part0__DOT__p))),4);
        bufp->chgCData(oldp+310,(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__8__KET____DOT__cla_part0__DOT__p),4);
        bufp->chgCData(oldp+311,((((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__8__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                   << 1U) | (1U & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__4__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                   >> 3U)))),5);
        bufp->chgCData(oldp+312,(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__8__KET____DOT__cla_part0__DOT__g),4);
        bufp->chgCData(oldp+313,(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__8__KET____DOT__cla_part0__DOT____Vcellout__carry0__c),4);
        bufp->chgBit(oldp+314,((1U & (IData)((vlSelf->div__DOT__add_B 
                                              >> 8U)))));
        bufp->chgBit(oldp+315,((1U & ((IData)((0xffffffffffffffULL 
                                               & (vlSelf->div__DOT__dividend 
                                                  >> 7U))) 
                                      ^ (IData)((vlSelf->div__DOT__add_B 
                                                 >> 8U))))));
        bufp->chgBit(oldp+316,((1U & ((IData)((0xffffffffffffffULL 
                                               & (vlSelf->div__DOT__dividend 
                                                  >> 7U))) 
                                      & (IData)((vlSelf->div__DOT__add_B 
                                                 >> 8U))))));
        bufp->chgBit(oldp+317,((1U & (IData)((vlSelf->div__DOT__add_B 
                                              >> 9U)))));
        bufp->chgBit(oldp+318,((1U & ((IData)((0x7fffffffffffffULL 
                                               & (vlSelf->div__DOT__dividend 
                                                  >> 8U))) 
                                      ^ (IData)((vlSelf->div__DOT__add_B 
                                                 >> 9U))))));
        bufp->chgBit(oldp+319,((1U & ((IData)((0x7fffffffffffffULL 
                                               & (vlSelf->div__DOT__dividend 
                                                  >> 8U))) 
                                      & (IData)((vlSelf->div__DOT__add_B 
                                                 >> 9U))))));
        bufp->chgBit(oldp+320,((1U & (IData)((vlSelf->div__DOT__add_B 
                                              >> 0xaU)))));
        bufp->chgBit(oldp+321,((1U & ((IData)((0x3fffffffffffffULL 
                                               & (vlSelf->div__DOT__dividend 
                                                  >> 9U))) 
                                      ^ (IData)((vlSelf->div__DOT__add_B 
                                                 >> 0xaU))))));
        bufp->chgBit(oldp+322,((1U & ((IData)((0x3fffffffffffffULL 
                                               & (vlSelf->div__DOT__dividend 
                                                  >> 9U))) 
                                      & (IData)((vlSelf->div__DOT__add_B 
                                                 >> 0xaU))))));
        bufp->chgBit(oldp+323,((1U & (IData)((vlSelf->div__DOT__add_B 
                                              >> 0xbU)))));
        bufp->chgBit(oldp+324,((1U & ((IData)((0x1fffffffffffffULL 
                                               & (vlSelf->div__DOT__dividend 
                                                  >> 0xaU))) 
                                      ^ (IData)((vlSelf->div__DOT__add_B 
                                                 >> 0xbU))))));
        bufp->chgBit(oldp+325,((1U & ((IData)((0x1fffffffffffffULL 
                                               & (vlSelf->div__DOT__dividend 
                                                  >> 0xaU))) 
                                      & (IData)((vlSelf->div__DOT__add_B 
                                                 >> 0xbU))))));
        bufp->chgCData(oldp+326,(((0xeU & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__8__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                           << 1U)) 
                                  | (1U & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__4__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                           >> 3U)))),4);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgCData(oldp+327,(vlSelf->div__DOT__current_state),5);
        bufp->chgQData(oldp+328,(vlSelf->div__DOT__x_abs_reg),64);
        bufp->chgQData(oldp+330,(vlSelf->div__DOT__y_abs_reg),64);
        bufp->chgQData(oldp+332,(vlSelf->div__DOT__divisor_n),64);
        bufp->chgQData(oldp+334,(vlSelf->div__DOT__divisor),64);
        bufp->chgQData(oldp+336,(vlSelf->div__DOT__dividend),64);
        bufp->chgBit(oldp+338,(((IData)(vlSelf->div__DOT__lzd1__DOT____Vcellout__lzd_32_0____pinNumber3) 
                                & ((0xfU == (IData)(vlSelf->div__DOT__lzd1__DOT__lzd_32_1__DOT__lzd_16_0__DOT__z)) 
                                   & (0xfU == (IData)(vlSelf->div__DOT__lzd1__DOT__lzd_32_1__DOT__lzd_16_1__DOT__z))))));
        bufp->chgBit(oldp+339,(((IData)(vlSelf->div__DOT__lzd0__DOT____Vcellout__lzd_32_0____pinNumber3) 
                                & ((0xfU == (IData)(vlSelf->div__DOT__lzd0__DOT__lzd_32_1__DOT__lzd_16_0__DOT__z)) 
                                   & (0xfU == (IData)(vlSelf->div__DOT__lzd0__DOT__lzd_32_1__DOT__lzd_16_1__DOT__z))))));
        bufp->chgCData(oldp+340,(vlSelf->div__DOT__cout),6);
        bufp->chgQData(oldp+341,((((QData)((IData)(
                                                   (((0xeU 
                                                      & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__60__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__56__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                           >> 3U))) 
                                                    ^ (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__60__KET____DOT__cla_part0__DOT__p)))) 
                                   << 0x3cU) | (((QData)((IData)(
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
                                                                                ^ (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__0__KET____DOT__cla_part0__DOT__p))))))))))))))))))))),64);
        bufp->chgQData(oldp+343,(vlSelf->div__DOT__fix_a),64);
        bufp->chgQData(oldp+345,(vlSelf->div__DOT__fix_b),64);
        bufp->chgQData(oldp+347,(vlSelf->div__DOT__s_abs_reg),64);
        bufp->chgQData(oldp+349,(vlSelf->div__DOT__r_abs_reg),64);
        bufp->chgQData(oldp+351,(((1U & (IData)((vlSelf->div__DOT__dividend 
                                                 >> 0x3fU)))
                                   ? vlSelf->div__DOT__fix_b
                                   : vlSelf->div__DOT__fix_a)),64);
        bufp->chgQData(oldp+353,((vlSelf->div__DOT__dividend 
                                  << 1U)),64);
        bufp->chgCData(oldp+355,((0xfU & ((IData)(vlSelf->div__DOT__dividend) 
                                          << 1U))),4);
        bufp->chgBit(oldp+356,((1U & (IData)((0x7fffffffffffffffULL 
                                              & vlSelf->div__DOT__dividend)))));
        bufp->chgBit(oldp+357,((1U & (IData)((0x3fffffffffffffffULL 
                                              & (vlSelf->div__DOT__dividend 
                                                 >> 1U))))));
        bufp->chgBit(oldp+358,((1U & (IData)((0x1fffffffffffffffULL 
                                              & (vlSelf->div__DOT__dividend 
                                                 >> 2U))))));
        bufp->chgCData(oldp+359,((0xfU & (IData)((0xfffffffffffffULL 
                                                  & (vlSelf->div__DOT__dividend 
                                                     >> 0xbU))))),4);
        bufp->chgBit(oldp+360,((1U & (IData)((0xfffffffffffffULL 
                                              & (vlSelf->div__DOT__dividend 
                                                 >> 0xbU))))));
        bufp->chgBit(oldp+361,((1U & (IData)((0x7ffffffffffffULL 
                                              & (vlSelf->div__DOT__dividend 
                                                 >> 0xcU))))));
        bufp->chgBit(oldp+362,((1U & (IData)((0x3ffffffffffffULL 
                                              & (vlSelf->div__DOT__dividend 
                                                 >> 0xdU))))));
        bufp->chgBit(oldp+363,((1U & (IData)((0x1ffffffffffffULL 
                                              & (vlSelf->div__DOT__dividend 
                                                 >> 0xeU))))));
        bufp->chgCData(oldp+364,((0xfU & (IData)((0xffffffffffffULL 
                                                  & (vlSelf->div__DOT__dividend 
                                                     >> 0xfU))))),4);
        bufp->chgBit(oldp+365,((1U & (IData)((0xffffffffffffULL 
                                              & (vlSelf->div__DOT__dividend 
                                                 >> 0xfU))))));
        bufp->chgBit(oldp+366,((1U & (IData)((0x7fffffffffffULL 
                                              & (vlSelf->div__DOT__dividend 
                                                 >> 0x10U))))));
        bufp->chgBit(oldp+367,((1U & (IData)((0x3fffffffffffULL 
                                              & (vlSelf->div__DOT__dividend 
                                                 >> 0x11U))))));
        bufp->chgBit(oldp+368,((1U & (IData)((0x1fffffffffffULL 
                                              & (vlSelf->div__DOT__dividend 
                                                 >> 0x12U))))));
        bufp->chgCData(oldp+369,((0xfU & (IData)((0xfffffffffffULL 
                                                  & (vlSelf->div__DOT__dividend 
                                                     >> 0x13U))))),4);
        bufp->chgBit(oldp+370,((1U & (IData)((0xfffffffffffULL 
                                              & (vlSelf->div__DOT__dividend 
                                                 >> 0x13U))))));
        bufp->chgBit(oldp+371,((1U & (IData)((0x7ffffffffffULL 
                                              & (vlSelf->div__DOT__dividend 
                                                 >> 0x14U))))));
        bufp->chgBit(oldp+372,((1U & (IData)((0x3ffffffffffULL 
                                              & (vlSelf->div__DOT__dividend 
                                                 >> 0x15U))))));
        bufp->chgBit(oldp+373,((1U & (IData)((0x1ffffffffffULL 
                                              & (vlSelf->div__DOT__dividend 
                                                 >> 0x16U))))));
        bufp->chgCData(oldp+374,((0xfU & (IData)((0xffffffffffULL 
                                                  & (vlSelf->div__DOT__dividend 
                                                     >> 0x17U))))),4);
        bufp->chgBit(oldp+375,((1U & (IData)((0xffffffffffULL 
                                              & (vlSelf->div__DOT__dividend 
                                                 >> 0x17U))))));
        bufp->chgBit(oldp+376,((1U & (IData)((0x7fffffffffULL 
                                              & (vlSelf->div__DOT__dividend 
                                                 >> 0x18U))))));
        bufp->chgBit(oldp+377,((1U & (IData)((0x3fffffffffULL 
                                              & (vlSelf->div__DOT__dividend 
                                                 >> 0x19U))))));
        bufp->chgBit(oldp+378,((1U & (IData)((0x1fffffffffULL 
                                              & (vlSelf->div__DOT__dividend 
                                                 >> 0x1aU))))));
        bufp->chgCData(oldp+379,((0xfU & (IData)((0xfffffffffULL 
                                                  & (vlSelf->div__DOT__dividend 
                                                     >> 0x1bU))))),4);
        bufp->chgBit(oldp+380,((1U & (IData)((0xfffffffffULL 
                                              & (vlSelf->div__DOT__dividend 
                                                 >> 0x1bU))))));
        bufp->chgBit(oldp+381,((1U & (IData)((0x7ffffffffULL 
                                              & (vlSelf->div__DOT__dividend 
                                                 >> 0x1cU))))));
        bufp->chgBit(oldp+382,((1U & (IData)((0x3ffffffffULL 
                                              & (vlSelf->div__DOT__dividend 
                                                 >> 0x1dU))))));
        bufp->chgBit(oldp+383,((1U & (IData)((0x1ffffffffULL 
                                              & (vlSelf->div__DOT__dividend 
                                                 >> 0x1eU))))));
        bufp->chgCData(oldp+384,((0xfU & (IData)((0xffffffffULL 
                                                  & (vlSelf->div__DOT__dividend 
                                                     >> 0x1fU))))),4);
        bufp->chgBit(oldp+385,((1U & (IData)((0xffffffffULL 
                                              & (vlSelf->div__DOT__dividend 
                                                 >> 0x1fU))))));
        bufp->chgBit(oldp+386,((1U & (IData)((0x7fffffffULL 
                                              & (vlSelf->div__DOT__dividend 
                                                 >> 0x20U))))));
        bufp->chgBit(oldp+387,((1U & (IData)((0x3fffffffULL 
                                              & (vlSelf->div__DOT__dividend 
                                                 >> 0x21U))))));
        bufp->chgBit(oldp+388,((1U & (IData)((0x1fffffffULL 
                                              & (vlSelf->div__DOT__dividend 
                                                 >> 0x22U))))));
        bufp->chgCData(oldp+389,((0xfU & (IData)((0xfffffffULL 
                                                  & (vlSelf->div__DOT__dividend 
                                                     >> 0x23U))))),4);
        bufp->chgBit(oldp+390,((1U & (IData)((0xfffffffULL 
                                              & (vlSelf->div__DOT__dividend 
                                                 >> 0x23U))))));
        bufp->chgBit(oldp+391,((1U & (IData)((0x7ffffffULL 
                                              & (vlSelf->div__DOT__dividend 
                                                 >> 0x24U))))));
        bufp->chgBit(oldp+392,((1U & (IData)((0x3ffffffULL 
                                              & (vlSelf->div__DOT__dividend 
                                                 >> 0x25U))))));
        bufp->chgBit(oldp+393,((1U & (IData)((0x1ffffffULL 
                                              & (vlSelf->div__DOT__dividend 
                                                 >> 0x26U))))));
        bufp->chgCData(oldp+394,((0xfU & (IData)((0xffffffULL 
                                                  & (vlSelf->div__DOT__dividend 
                                                     >> 0x27U))))),4);
        bufp->chgBit(oldp+395,((1U & (IData)((0xffffffULL 
                                              & (vlSelf->div__DOT__dividend 
                                                 >> 0x27U))))));
        bufp->chgBit(oldp+396,((1U & (IData)((0x7fffffULL 
                                              & (vlSelf->div__DOT__dividend 
                                                 >> 0x28U))))));
        bufp->chgBit(oldp+397,((1U & (IData)((0x3fffffULL 
                                              & (vlSelf->div__DOT__dividend 
                                                 >> 0x29U))))));
        bufp->chgBit(oldp+398,((1U & (IData)((0x1fffffULL 
                                              & (vlSelf->div__DOT__dividend 
                                                 >> 0x2aU))))));
        bufp->chgCData(oldp+399,((0xfU & (IData)((0xfffffULL 
                                                  & (vlSelf->div__DOT__dividend 
                                                     >> 0x2bU))))),4);
        bufp->chgBit(oldp+400,((1U & (IData)((0xfffffULL 
                                              & (vlSelf->div__DOT__dividend 
                                                 >> 0x2bU))))));
        bufp->chgBit(oldp+401,((1U & (IData)((0x7ffffULL 
                                              & (vlSelf->div__DOT__dividend 
                                                 >> 0x2cU))))));
        bufp->chgBit(oldp+402,((1U & (IData)((0x3ffffULL 
                                              & (vlSelf->div__DOT__dividend 
                                                 >> 0x2dU))))));
        bufp->chgBit(oldp+403,((1U & (IData)((0x1ffffULL 
                                              & (vlSelf->div__DOT__dividend 
                                                 >> 0x2eU))))));
        bufp->chgCData(oldp+404,((0xfU & (IData)((0xffffULL 
                                                  & (vlSelf->div__DOT__dividend 
                                                     >> 0x2fU))))),4);
        bufp->chgBit(oldp+405,((1U & (IData)((0xffffULL 
                                              & (vlSelf->div__DOT__dividend 
                                                 >> 0x2fU))))));
        bufp->chgBit(oldp+406,((1U & (IData)((0x7fffULL 
                                              & (vlSelf->div__DOT__dividend 
                                                 >> 0x30U))))));
        bufp->chgBit(oldp+407,((1U & (IData)((0x3fffULL 
                                              & (vlSelf->div__DOT__dividend 
                                                 >> 0x31U))))));
        bufp->chgBit(oldp+408,((1U & (IData)((0x1fffULL 
                                              & (vlSelf->div__DOT__dividend 
                                                 >> 0x32U))))));
        bufp->chgCData(oldp+409,((0xfU & (IData)((0xfffffffffffffffULL 
                                                  & (vlSelf->div__DOT__dividend 
                                                     >> 3U))))),4);
        bufp->chgBit(oldp+410,((1U & (IData)((0xfffffffffffffffULL 
                                              & (vlSelf->div__DOT__dividend 
                                                 >> 3U))))));
        bufp->chgBit(oldp+411,((1U & (IData)((0x7ffffffffffffffULL 
                                              & (vlSelf->div__DOT__dividend 
                                                 >> 4U))))));
        bufp->chgBit(oldp+412,((1U & (IData)((0x3ffffffffffffffULL 
                                              & (vlSelf->div__DOT__dividend 
                                                 >> 5U))))));
        bufp->chgBit(oldp+413,((1U & (IData)((0x1ffffffffffffffULL 
                                              & (vlSelf->div__DOT__dividend 
                                                 >> 6U))))));
        bufp->chgCData(oldp+414,((0xfU & (IData)((0xfffULL 
                                                  & (vlSelf->div__DOT__dividend 
                                                     >> 0x33U))))),4);
        bufp->chgBit(oldp+415,((1U & (IData)((0xfffULL 
                                              & (vlSelf->div__DOT__dividend 
                                                 >> 0x33U))))));
        bufp->chgBit(oldp+416,((1U & (IData)((0x7ffULL 
                                              & (vlSelf->div__DOT__dividend 
                                                 >> 0x34U))))));
        bufp->chgBit(oldp+417,((1U & (IData)((0x3ffULL 
                                              & (vlSelf->div__DOT__dividend 
                                                 >> 0x35U))))));
        bufp->chgBit(oldp+418,((1U & (IData)((0x1ffULL 
                                              & (vlSelf->div__DOT__dividend 
                                                 >> 0x36U))))));
        bufp->chgCData(oldp+419,((0xfU & (IData)((0xffULL 
                                                  & (vlSelf->div__DOT__dividend 
                                                     >> 0x37U))))),4);
        bufp->chgBit(oldp+420,((1U & (IData)((0xffULL 
                                              & (vlSelf->div__DOT__dividend 
                                                 >> 0x37U))))));
        bufp->chgBit(oldp+421,((1U & (IData)((0x7fULL 
                                              & (vlSelf->div__DOT__dividend 
                                                 >> 0x38U))))));
        bufp->chgBit(oldp+422,((1U & (IData)((0x3fULL 
                                              & (vlSelf->div__DOT__dividend 
                                                 >> 0x39U))))));
        bufp->chgBit(oldp+423,((1U & (IData)((0x1fULL 
                                              & (vlSelf->div__DOT__dividend 
                                                 >> 0x3aU))))));
        bufp->chgCData(oldp+424,((0xfU & (IData)((0xfULL 
                                                  & (vlSelf->div__DOT__dividend 
                                                     >> 0x3bU))))),4);
        bufp->chgBit(oldp+425,((1U & (IData)((0xfULL 
                                              & (vlSelf->div__DOT__dividend 
                                                 >> 0x3bU))))));
        bufp->chgBit(oldp+426,((1U & (IData)((7ULL 
                                              & (vlSelf->div__DOT__dividend 
                                                 >> 0x3cU))))));
        bufp->chgBit(oldp+427,((1U & (IData)((3ULL 
                                              & (vlSelf->div__DOT__dividend 
                                                 >> 0x3dU))))));
        bufp->chgBit(oldp+428,((1U & (IData)((1ULL 
                                              & (vlSelf->div__DOT__dividend 
                                                 >> 0x3eU))))));
        bufp->chgCData(oldp+429,((0xfU & (IData)((0xffffffffffffffULL 
                                                  & (vlSelf->div__DOT__dividend 
                                                     >> 7U))))),4);
        bufp->chgBit(oldp+430,((1U & (IData)((0xffffffffffffffULL 
                                              & (vlSelf->div__DOT__dividend 
                                                 >> 7U))))));
        bufp->chgBit(oldp+431,((1U & (IData)((0x7fffffffffffffULL 
                                              & (vlSelf->div__DOT__dividend 
                                                 >> 8U))))));
        bufp->chgBit(oldp+432,((1U & (IData)((0x3fffffffffffffULL 
                                              & (vlSelf->div__DOT__dividend 
                                                 >> 9U))))));
        bufp->chgBit(oldp+433,((1U & (IData)((0x1fffffffffffffULL 
                                              & (vlSelf->div__DOT__dividend 
                                                 >> 0xaU))))));
        bufp->chgBit(oldp+434,((1U & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__60__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                      >> 3U))));
        bufp->chgIData(oldp+435,(((0x10000U & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__60__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                               << 0xdU)) 
                                  | ((0x8000U & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__56__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                 << 0xcU)) 
                                     | ((0x4000U & 
                                         ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__52__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                          << 0xbU)) 
                                        | ((0x2000U 
                                            & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__48__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                               << 0xaU)) 
                                           | ((0x1000U 
                                               & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__44__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                  << 9U)) 
                                              | ((0x800U 
                                                  & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__40__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                     << 8U)) 
                                                 | ((0x400U 
                                                     & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__36__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                        << 7U)) 
                                                    | ((0x200U 
                                                        & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__32__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                           << 6U)) 
                                                       | ((0x100U 
                                                           & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__28__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                              << 5U)) 
                                                          | ((0x80U 
                                                              & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__24__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                                 << 4U)) 
                                                             | ((0x40U 
                                                                 & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__20__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                                    << 3U)) 
                                                                | ((0x20U 
                                                                    & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__16__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                                       << 2U)) 
                                                                   | ((0x10U 
                                                                       & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__12__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                                          << 1U)) 
                                                                      | ((8U 
                                                                          & (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__8__KET____DOT__cla_part0__DOT____Vcellout__carry0__c)) 
                                                                         | ((4U 
                                                                             & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__4__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                                                >> 1U)) 
                                                                            | (2U 
                                                                               & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__0__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                                                >> 2U)))))))))))))))))),17);
        bufp->chgCData(oldp+436,((0xfU & (IData)(vlSelf->div__DOT__dividend))),4);
        bufp->chgCData(oldp+437,((0xfU & (IData)(vlSelf->div__DOT__divisor))),4);
        bufp->chgCData(oldp+438,((0xfU & (((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__0__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                           << 1U) ^ (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__0__KET____DOT__cla_part0__DOT__p)))),4);
        bufp->chgBit(oldp+439,((1U & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__0__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                      >> 3U))));
        bufp->chgCData(oldp+440,(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__0__KET____DOT__cla_part0__DOT__p),4);
        bufp->chgCData(oldp+441,(((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__0__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                  << 1U)),5);
        bufp->chgCData(oldp+442,(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__0__KET____DOT__cla_part0__DOT__g),4);
        bufp->chgCData(oldp+443,(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__0__KET____DOT__cla_part0__DOT____Vcellout__carry0__c),4);
        bufp->chgBit(oldp+444,((1U & (IData)(vlSelf->div__DOT__dividend))));
        bufp->chgBit(oldp+445,((1U & (IData)(vlSelf->div__DOT__divisor))));
        bufp->chgBit(oldp+446,((1U & ((IData)(vlSelf->div__DOT__dividend) 
                                      ^ (IData)(vlSelf->div__DOT__divisor)))));
        bufp->chgBit(oldp+447,((1U & ((IData)(vlSelf->div__DOT__dividend) 
                                      & (IData)(vlSelf->div__DOT__divisor)))));
        bufp->chgBit(oldp+448,((1U & (IData)((vlSelf->div__DOT__dividend 
                                              >> 1U)))));
        bufp->chgBit(oldp+449,((1U & (IData)((vlSelf->div__DOT__divisor 
                                              >> 1U)))));
        bufp->chgBit(oldp+450,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                               >> 1U)) 
                                      ^ (IData)((vlSelf->div__DOT__divisor 
                                                 >> 1U))))));
        bufp->chgBit(oldp+451,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                               >> 1U)) 
                                      & (IData)((vlSelf->div__DOT__divisor 
                                                 >> 1U))))));
        bufp->chgBit(oldp+452,((1U & (IData)((vlSelf->div__DOT__dividend 
                                              >> 2U)))));
        bufp->chgBit(oldp+453,((1U & (IData)((vlSelf->div__DOT__divisor 
                                              >> 2U)))));
        bufp->chgBit(oldp+454,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                               >> 2U)) 
                                      ^ (IData)((vlSelf->div__DOT__divisor 
                                                 >> 2U))))));
        bufp->chgBit(oldp+455,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                               >> 2U)) 
                                      & (IData)((vlSelf->div__DOT__divisor 
                                                 >> 2U))))));
        bufp->chgBit(oldp+456,((1U & (IData)((vlSelf->div__DOT__dividend 
                                              >> 3U)))));
        bufp->chgBit(oldp+457,((1U & (IData)((vlSelf->div__DOT__divisor 
                                              >> 3U)))));
        bufp->chgBit(oldp+458,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                               >> 3U)) 
                                      ^ (IData)((vlSelf->div__DOT__divisor 
                                                 >> 3U))))));
        bufp->chgBit(oldp+459,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                               >> 3U)) 
                                      & (IData)((vlSelf->div__DOT__divisor 
                                                 >> 3U))))));
        bufp->chgCData(oldp+460,((0xfU & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__0__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                          << 1U))),4);
        bufp->chgCData(oldp+461,((0xfU & (IData)((vlSelf->div__DOT__dividend 
                                                  >> 0xcU)))),4);
        bufp->chgCData(oldp+462,((0xfU & (IData)((vlSelf->div__DOT__divisor 
                                                  >> 0xcU)))),4);
        bufp->chgBit(oldp+463,((1U & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__8__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                      >> 3U))));
        bufp->chgCData(oldp+464,((((0xeU & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__12__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                            << 1U)) 
                                   | (1U & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__8__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                            >> 3U))) 
                                  ^ (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__12__KET____DOT__cla_part0__DOT__p))),4);
        bufp->chgBit(oldp+465,((1U & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__12__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                      >> 3U))));
        bufp->chgCData(oldp+466,(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__12__KET____DOT__cla_part0__DOT__p),4);
        bufp->chgCData(oldp+467,((((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__12__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                   << 1U) | (1U & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__8__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                   >> 3U)))),5);
        bufp->chgCData(oldp+468,(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__12__KET____DOT__cla_part0__DOT__g),4);
        bufp->chgCData(oldp+469,(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__12__KET____DOT__cla_part0__DOT____Vcellout__carry0__c),4);
        bufp->chgBit(oldp+470,((1U & (IData)((vlSelf->div__DOT__dividend 
                                              >> 0xcU)))));
        bufp->chgBit(oldp+471,((1U & (IData)((vlSelf->div__DOT__divisor 
                                              >> 0xcU)))));
        bufp->chgBit(oldp+472,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                               >> 0xcU)) 
                                      ^ (IData)((vlSelf->div__DOT__divisor 
                                                 >> 0xcU))))));
        bufp->chgBit(oldp+473,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                               >> 0xcU)) 
                                      & (IData)((vlSelf->div__DOT__divisor 
                                                 >> 0xcU))))));
        bufp->chgBit(oldp+474,((1U & (IData)((vlSelf->div__DOT__dividend 
                                              >> 0xdU)))));
        bufp->chgBit(oldp+475,((1U & (IData)((vlSelf->div__DOT__divisor 
                                              >> 0xdU)))));
        bufp->chgBit(oldp+476,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                               >> 0xdU)) 
                                      ^ (IData)((vlSelf->div__DOT__divisor 
                                                 >> 0xdU))))));
        bufp->chgBit(oldp+477,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                               >> 0xdU)) 
                                      & (IData)((vlSelf->div__DOT__divisor 
                                                 >> 0xdU))))));
        bufp->chgBit(oldp+478,((1U & (IData)((vlSelf->div__DOT__dividend 
                                              >> 0xeU)))));
        bufp->chgBit(oldp+479,((1U & (IData)((vlSelf->div__DOT__divisor 
                                              >> 0xeU)))));
        bufp->chgBit(oldp+480,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                               >> 0xeU)) 
                                      ^ (IData)((vlSelf->div__DOT__divisor 
                                                 >> 0xeU))))));
        bufp->chgBit(oldp+481,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                               >> 0xeU)) 
                                      & (IData)((vlSelf->div__DOT__divisor 
                                                 >> 0xeU))))));
        bufp->chgBit(oldp+482,((1U & (IData)((vlSelf->div__DOT__dividend 
                                              >> 0xfU)))));
        bufp->chgBit(oldp+483,((1U & (IData)((vlSelf->div__DOT__divisor 
                                              >> 0xfU)))));
        bufp->chgBit(oldp+484,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                               >> 0xfU)) 
                                      ^ (IData)((vlSelf->div__DOT__divisor 
                                                 >> 0xfU))))));
        bufp->chgBit(oldp+485,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                               >> 0xfU)) 
                                      & (IData)((vlSelf->div__DOT__divisor 
                                                 >> 0xfU))))));
        bufp->chgCData(oldp+486,(((0xeU & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__12__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                           << 1U)) 
                                  | (1U & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__8__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                           >> 3U)))),4);
        bufp->chgCData(oldp+487,((0xfU & (IData)((vlSelf->div__DOT__dividend 
                                                  >> 0x10U)))),4);
        bufp->chgCData(oldp+488,((0xfU & (IData)((vlSelf->div__DOT__divisor 
                                                  >> 0x10U)))),4);
        bufp->chgCData(oldp+489,((((0xeU & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__16__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                            << 1U)) 
                                   | (1U & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__12__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                            >> 3U))) 
                                  ^ (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__16__KET____DOT__cla_part0__DOT__p))),4);
        bufp->chgBit(oldp+490,((1U & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__16__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                      >> 3U))));
        bufp->chgCData(oldp+491,(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__16__KET____DOT__cla_part0__DOT__p),4);
        bufp->chgCData(oldp+492,((((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__16__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                   << 1U) | (1U & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__12__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                   >> 3U)))),5);
        bufp->chgCData(oldp+493,(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__16__KET____DOT__cla_part0__DOT__g),4);
        bufp->chgCData(oldp+494,(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__16__KET____DOT__cla_part0__DOT____Vcellout__carry0__c),4);
        bufp->chgBit(oldp+495,((1U & (IData)((vlSelf->div__DOT__dividend 
                                              >> 0x10U)))));
        bufp->chgBit(oldp+496,((1U & (IData)((vlSelf->div__DOT__divisor 
                                              >> 0x10U)))));
        bufp->chgBit(oldp+497,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                               >> 0x10U)) 
                                      ^ (IData)((vlSelf->div__DOT__divisor 
                                                 >> 0x10U))))));
        bufp->chgBit(oldp+498,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                               >> 0x10U)) 
                                      & (IData)((vlSelf->div__DOT__divisor 
                                                 >> 0x10U))))));
        bufp->chgBit(oldp+499,((1U & (IData)((vlSelf->div__DOT__dividend 
                                              >> 0x11U)))));
        bufp->chgBit(oldp+500,((1U & (IData)((vlSelf->div__DOT__divisor 
                                              >> 0x11U)))));
        bufp->chgBit(oldp+501,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                               >> 0x11U)) 
                                      ^ (IData)((vlSelf->div__DOT__divisor 
                                                 >> 0x11U))))));
        bufp->chgBit(oldp+502,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                               >> 0x11U)) 
                                      & (IData)((vlSelf->div__DOT__divisor 
                                                 >> 0x11U))))));
        bufp->chgBit(oldp+503,((1U & (IData)((vlSelf->div__DOT__dividend 
                                              >> 0x12U)))));
        bufp->chgBit(oldp+504,((1U & (IData)((vlSelf->div__DOT__divisor 
                                              >> 0x12U)))));
        bufp->chgBit(oldp+505,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                               >> 0x12U)) 
                                      ^ (IData)((vlSelf->div__DOT__divisor 
                                                 >> 0x12U))))));
        bufp->chgBit(oldp+506,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                               >> 0x12U)) 
                                      & (IData)((vlSelf->div__DOT__divisor 
                                                 >> 0x12U))))));
        bufp->chgBit(oldp+507,((1U & (IData)((vlSelf->div__DOT__dividend 
                                              >> 0x13U)))));
        bufp->chgBit(oldp+508,((1U & (IData)((vlSelf->div__DOT__divisor 
                                              >> 0x13U)))));
        bufp->chgBit(oldp+509,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                               >> 0x13U)) 
                                      ^ (IData)((vlSelf->div__DOT__divisor 
                                                 >> 0x13U))))));
        bufp->chgBit(oldp+510,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                               >> 0x13U)) 
                                      & (IData)((vlSelf->div__DOT__divisor 
                                                 >> 0x13U))))));
        bufp->chgCData(oldp+511,(((0xeU & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__16__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                           << 1U)) 
                                  | (1U & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__12__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                           >> 3U)))),4);
        bufp->chgCData(oldp+512,((0xfU & (IData)((vlSelf->div__DOT__dividend 
                                                  >> 0x14U)))),4);
        bufp->chgCData(oldp+513,((0xfU & (IData)((vlSelf->div__DOT__divisor 
                                                  >> 0x14U)))),4);
        bufp->chgCData(oldp+514,((((0xeU & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__20__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                            << 1U)) 
                                   | (1U & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__16__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                            >> 3U))) 
                                  ^ (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__20__KET____DOT__cla_part0__DOT__p))),4);
        bufp->chgBit(oldp+515,((1U & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__20__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                      >> 3U))));
        bufp->chgCData(oldp+516,(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__20__KET____DOT__cla_part0__DOT__p),4);
        bufp->chgCData(oldp+517,((((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__20__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                   << 1U) | (1U & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__16__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                   >> 3U)))),5);
        bufp->chgCData(oldp+518,(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__20__KET____DOT__cla_part0__DOT__g),4);
        bufp->chgCData(oldp+519,(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__20__KET____DOT__cla_part0__DOT____Vcellout__carry0__c),4);
        bufp->chgBit(oldp+520,((1U & (IData)((vlSelf->div__DOT__dividend 
                                              >> 0x14U)))));
        bufp->chgBit(oldp+521,((1U & (IData)((vlSelf->div__DOT__divisor 
                                              >> 0x14U)))));
        bufp->chgBit(oldp+522,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                               >> 0x14U)) 
                                      ^ (IData)((vlSelf->div__DOT__divisor 
                                                 >> 0x14U))))));
        bufp->chgBit(oldp+523,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                               >> 0x14U)) 
                                      & (IData)((vlSelf->div__DOT__divisor 
                                                 >> 0x14U))))));
        bufp->chgBit(oldp+524,((1U & (IData)((vlSelf->div__DOT__dividend 
                                              >> 0x15U)))));
        bufp->chgBit(oldp+525,((1U & (IData)((vlSelf->div__DOT__divisor 
                                              >> 0x15U)))));
        bufp->chgBit(oldp+526,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                               >> 0x15U)) 
                                      ^ (IData)((vlSelf->div__DOT__divisor 
                                                 >> 0x15U))))));
        bufp->chgBit(oldp+527,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                               >> 0x15U)) 
                                      & (IData)((vlSelf->div__DOT__divisor 
                                                 >> 0x15U))))));
        bufp->chgBit(oldp+528,((1U & (IData)((vlSelf->div__DOT__dividend 
                                              >> 0x16U)))));
        bufp->chgBit(oldp+529,((1U & (IData)((vlSelf->div__DOT__divisor 
                                              >> 0x16U)))));
        bufp->chgBit(oldp+530,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                               >> 0x16U)) 
                                      ^ (IData)((vlSelf->div__DOT__divisor 
                                                 >> 0x16U))))));
        bufp->chgBit(oldp+531,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                               >> 0x16U)) 
                                      & (IData)((vlSelf->div__DOT__divisor 
                                                 >> 0x16U))))));
        bufp->chgBit(oldp+532,((1U & (IData)((vlSelf->div__DOT__dividend 
                                              >> 0x17U)))));
        bufp->chgBit(oldp+533,((1U & (IData)((vlSelf->div__DOT__divisor 
                                              >> 0x17U)))));
        bufp->chgBit(oldp+534,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                               >> 0x17U)) 
                                      ^ (IData)((vlSelf->div__DOT__divisor 
                                                 >> 0x17U))))));
        bufp->chgBit(oldp+535,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                               >> 0x17U)) 
                                      & (IData)((vlSelf->div__DOT__divisor 
                                                 >> 0x17U))))));
        bufp->chgCData(oldp+536,(((0xeU & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__20__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                           << 1U)) 
                                  | (1U & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__16__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                           >> 3U)))),4);
        bufp->chgCData(oldp+537,((0xfU & (IData)((vlSelf->div__DOT__dividend 
                                                  >> 0x18U)))),4);
        bufp->chgCData(oldp+538,((0xfU & (IData)((vlSelf->div__DOT__divisor 
                                                  >> 0x18U)))),4);
        bufp->chgCData(oldp+539,((((0xeU & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__24__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                            << 1U)) 
                                   | (1U & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__20__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                            >> 3U))) 
                                  ^ (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__24__KET____DOT__cla_part0__DOT__p))),4);
        bufp->chgBit(oldp+540,((1U & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__24__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                      >> 3U))));
        bufp->chgCData(oldp+541,(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__24__KET____DOT__cla_part0__DOT__p),4);
        bufp->chgCData(oldp+542,((((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__24__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                   << 1U) | (1U & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__20__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                   >> 3U)))),5);
        bufp->chgCData(oldp+543,(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__24__KET____DOT__cla_part0__DOT__g),4);
        bufp->chgCData(oldp+544,(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__24__KET____DOT__cla_part0__DOT____Vcellout__carry0__c),4);
        bufp->chgBit(oldp+545,((1U & (IData)((vlSelf->div__DOT__dividend 
                                              >> 0x18U)))));
        bufp->chgBit(oldp+546,((1U & (IData)((vlSelf->div__DOT__divisor 
                                              >> 0x18U)))));
        bufp->chgBit(oldp+547,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                               >> 0x18U)) 
                                      ^ (IData)((vlSelf->div__DOT__divisor 
                                                 >> 0x18U))))));
        bufp->chgBit(oldp+548,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                               >> 0x18U)) 
                                      & (IData)((vlSelf->div__DOT__divisor 
                                                 >> 0x18U))))));
        bufp->chgBit(oldp+549,((1U & (IData)((vlSelf->div__DOT__dividend 
                                              >> 0x19U)))));
        bufp->chgBit(oldp+550,((1U & (IData)((vlSelf->div__DOT__divisor 
                                              >> 0x19U)))));
        bufp->chgBit(oldp+551,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                               >> 0x19U)) 
                                      ^ (IData)((vlSelf->div__DOT__divisor 
                                                 >> 0x19U))))));
        bufp->chgBit(oldp+552,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                               >> 0x19U)) 
                                      & (IData)((vlSelf->div__DOT__divisor 
                                                 >> 0x19U))))));
        bufp->chgBit(oldp+553,((1U & (IData)((vlSelf->div__DOT__dividend 
                                              >> 0x1aU)))));
        bufp->chgBit(oldp+554,((1U & (IData)((vlSelf->div__DOT__divisor 
                                              >> 0x1aU)))));
        bufp->chgBit(oldp+555,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                               >> 0x1aU)) 
                                      ^ (IData)((vlSelf->div__DOT__divisor 
                                                 >> 0x1aU))))));
        bufp->chgBit(oldp+556,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                               >> 0x1aU)) 
                                      & (IData)((vlSelf->div__DOT__divisor 
                                                 >> 0x1aU))))));
        bufp->chgBit(oldp+557,((1U & (IData)((vlSelf->div__DOT__dividend 
                                              >> 0x1bU)))));
        bufp->chgBit(oldp+558,((1U & (IData)((vlSelf->div__DOT__divisor 
                                              >> 0x1bU)))));
        bufp->chgBit(oldp+559,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                               >> 0x1bU)) 
                                      ^ (IData)((vlSelf->div__DOT__divisor 
                                                 >> 0x1bU))))));
        bufp->chgBit(oldp+560,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                               >> 0x1bU)) 
                                      & (IData)((vlSelf->div__DOT__divisor 
                                                 >> 0x1bU))))));
        bufp->chgCData(oldp+561,(((0xeU & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__24__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                           << 1U)) 
                                  | (1U & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__20__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                           >> 3U)))),4);
        bufp->chgCData(oldp+562,((0xfU & (IData)((vlSelf->div__DOT__dividend 
                                                  >> 0x1cU)))),4);
        bufp->chgCData(oldp+563,((0xfU & (IData)((vlSelf->div__DOT__divisor 
                                                  >> 0x1cU)))),4);
        bufp->chgCData(oldp+564,((((0xeU & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__28__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                            << 1U)) 
                                   | (1U & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__24__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                            >> 3U))) 
                                  ^ (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__28__KET____DOT__cla_part0__DOT__p))),4);
        bufp->chgBit(oldp+565,((1U & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__28__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                      >> 3U))));
        bufp->chgCData(oldp+566,(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__28__KET____DOT__cla_part0__DOT__p),4);
        bufp->chgCData(oldp+567,((((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__28__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                   << 1U) | (1U & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__24__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                   >> 3U)))),5);
        bufp->chgCData(oldp+568,(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__28__KET____DOT__cla_part0__DOT__g),4);
        bufp->chgCData(oldp+569,(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__28__KET____DOT__cla_part0__DOT____Vcellout__carry0__c),4);
        bufp->chgBit(oldp+570,((1U & (IData)((vlSelf->div__DOT__dividend 
                                              >> 0x1cU)))));
        bufp->chgBit(oldp+571,((1U & (IData)((vlSelf->div__DOT__divisor 
                                              >> 0x1cU)))));
        bufp->chgBit(oldp+572,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                               >> 0x1cU)) 
                                      ^ (IData)((vlSelf->div__DOT__divisor 
                                                 >> 0x1cU))))));
        bufp->chgBit(oldp+573,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                               >> 0x1cU)) 
                                      & (IData)((vlSelf->div__DOT__divisor 
                                                 >> 0x1cU))))));
        bufp->chgBit(oldp+574,((1U & (IData)((vlSelf->div__DOT__dividend 
                                              >> 0x1dU)))));
        bufp->chgBit(oldp+575,((1U & (IData)((vlSelf->div__DOT__divisor 
                                              >> 0x1dU)))));
        bufp->chgBit(oldp+576,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                               >> 0x1dU)) 
                                      ^ (IData)((vlSelf->div__DOT__divisor 
                                                 >> 0x1dU))))));
        bufp->chgBit(oldp+577,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                               >> 0x1dU)) 
                                      & (IData)((vlSelf->div__DOT__divisor 
                                                 >> 0x1dU))))));
        bufp->chgBit(oldp+578,((1U & (IData)((vlSelf->div__DOT__dividend 
                                              >> 0x1eU)))));
        bufp->chgBit(oldp+579,((1U & (IData)((vlSelf->div__DOT__divisor 
                                              >> 0x1eU)))));
        bufp->chgBit(oldp+580,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                               >> 0x1eU)) 
                                      ^ (IData)((vlSelf->div__DOT__divisor 
                                                 >> 0x1eU))))));
        bufp->chgBit(oldp+581,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                               >> 0x1eU)) 
                                      & (IData)((vlSelf->div__DOT__divisor 
                                                 >> 0x1eU))))));
        bufp->chgBit(oldp+582,((1U & (IData)((vlSelf->div__DOT__dividend 
                                              >> 0x1fU)))));
        bufp->chgBit(oldp+583,((1U & (IData)((vlSelf->div__DOT__divisor 
                                              >> 0x1fU)))));
        bufp->chgBit(oldp+584,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                               >> 0x1fU)) 
                                      ^ (IData)((vlSelf->div__DOT__divisor 
                                                 >> 0x1fU))))));
        bufp->chgBit(oldp+585,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                               >> 0x1fU)) 
                                      & (IData)((vlSelf->div__DOT__divisor 
                                                 >> 0x1fU))))));
        bufp->chgCData(oldp+586,(((0xeU & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__28__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                           << 1U)) 
                                  | (1U & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__24__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                           >> 3U)))),4);
        bufp->chgCData(oldp+587,((0xfU & (IData)((vlSelf->div__DOT__dividend 
                                                  >> 0x20U)))),4);
        bufp->chgCData(oldp+588,((0xfU & (IData)((vlSelf->div__DOT__divisor 
                                                  >> 0x20U)))),4);
        bufp->chgCData(oldp+589,((((0xeU & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__32__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                            << 1U)) 
                                   | (1U & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__28__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                            >> 3U))) 
                                  ^ (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__32__KET____DOT__cla_part0__DOT__p))),4);
        bufp->chgBit(oldp+590,((1U & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__32__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                      >> 3U))));
        bufp->chgCData(oldp+591,(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__32__KET____DOT__cla_part0__DOT__p),4);
        bufp->chgCData(oldp+592,((((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__32__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                   << 1U) | (1U & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__28__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                   >> 3U)))),5);
        bufp->chgCData(oldp+593,(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__32__KET____DOT__cla_part0__DOT__g),4);
        bufp->chgCData(oldp+594,(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__32__KET____DOT__cla_part0__DOT____Vcellout__carry0__c),4);
        bufp->chgBit(oldp+595,((1U & (IData)((vlSelf->div__DOT__dividend 
                                              >> 0x20U)))));
        bufp->chgBit(oldp+596,((1U & (IData)((vlSelf->div__DOT__divisor 
                                              >> 0x20U)))));
        bufp->chgBit(oldp+597,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                               >> 0x20U)) 
                                      ^ (IData)((vlSelf->div__DOT__divisor 
                                                 >> 0x20U))))));
        bufp->chgBit(oldp+598,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                               >> 0x20U)) 
                                      & (IData)((vlSelf->div__DOT__divisor 
                                                 >> 0x20U))))));
        bufp->chgBit(oldp+599,((1U & (IData)((vlSelf->div__DOT__dividend 
                                              >> 0x21U)))));
        bufp->chgBit(oldp+600,((1U & (IData)((vlSelf->div__DOT__divisor 
                                              >> 0x21U)))));
        bufp->chgBit(oldp+601,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                               >> 0x21U)) 
                                      ^ (IData)((vlSelf->div__DOT__divisor 
                                                 >> 0x21U))))));
        bufp->chgBit(oldp+602,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                               >> 0x21U)) 
                                      & (IData)((vlSelf->div__DOT__divisor 
                                                 >> 0x21U))))));
        bufp->chgBit(oldp+603,((1U & (IData)((vlSelf->div__DOT__dividend 
                                              >> 0x22U)))));
        bufp->chgBit(oldp+604,((1U & (IData)((vlSelf->div__DOT__divisor 
                                              >> 0x22U)))));
        bufp->chgBit(oldp+605,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                               >> 0x22U)) 
                                      ^ (IData)((vlSelf->div__DOT__divisor 
                                                 >> 0x22U))))));
        bufp->chgBit(oldp+606,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                               >> 0x22U)) 
                                      & (IData)((vlSelf->div__DOT__divisor 
                                                 >> 0x22U))))));
        bufp->chgBit(oldp+607,((1U & (IData)((vlSelf->div__DOT__dividend 
                                              >> 0x23U)))));
        bufp->chgBit(oldp+608,((1U & (IData)((vlSelf->div__DOT__divisor 
                                              >> 0x23U)))));
        bufp->chgBit(oldp+609,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                               >> 0x23U)) 
                                      ^ (IData)((vlSelf->div__DOT__divisor 
                                                 >> 0x23U))))));
        bufp->chgBit(oldp+610,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                               >> 0x23U)) 
                                      & (IData)((vlSelf->div__DOT__divisor 
                                                 >> 0x23U))))));
        bufp->chgCData(oldp+611,(((0xeU & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__32__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                           << 1U)) 
                                  | (1U & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__28__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                           >> 3U)))),4);
        bufp->chgCData(oldp+612,((0xfU & (IData)((vlSelf->div__DOT__dividend 
                                                  >> 0x24U)))),4);
        bufp->chgCData(oldp+613,((0xfU & (IData)((vlSelf->div__DOT__divisor 
                                                  >> 0x24U)))),4);
        bufp->chgCData(oldp+614,((((0xeU & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__36__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                            << 1U)) 
                                   | (1U & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__32__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                            >> 3U))) 
                                  ^ (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__36__KET____DOT__cla_part0__DOT__p))),4);
        bufp->chgBit(oldp+615,((1U & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__36__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                      >> 3U))));
        bufp->chgCData(oldp+616,(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__36__KET____DOT__cla_part0__DOT__p),4);
        bufp->chgCData(oldp+617,((((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__36__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                   << 1U) | (1U & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__32__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                   >> 3U)))),5);
        bufp->chgCData(oldp+618,(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__36__KET____DOT__cla_part0__DOT__g),4);
        bufp->chgCData(oldp+619,(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__36__KET____DOT__cla_part0__DOT____Vcellout__carry0__c),4);
        bufp->chgBit(oldp+620,((1U & (IData)((vlSelf->div__DOT__dividend 
                                              >> 0x24U)))));
        bufp->chgBit(oldp+621,((1U & (IData)((vlSelf->div__DOT__divisor 
                                              >> 0x24U)))));
        bufp->chgBit(oldp+622,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                               >> 0x24U)) 
                                      ^ (IData)((vlSelf->div__DOT__divisor 
                                                 >> 0x24U))))));
        bufp->chgBit(oldp+623,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                               >> 0x24U)) 
                                      & (IData)((vlSelf->div__DOT__divisor 
                                                 >> 0x24U))))));
        bufp->chgBit(oldp+624,((1U & (IData)((vlSelf->div__DOT__dividend 
                                              >> 0x25U)))));
        bufp->chgBit(oldp+625,((1U & (IData)((vlSelf->div__DOT__divisor 
                                              >> 0x25U)))));
        bufp->chgBit(oldp+626,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                               >> 0x25U)) 
                                      ^ (IData)((vlSelf->div__DOT__divisor 
                                                 >> 0x25U))))));
        bufp->chgBit(oldp+627,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                               >> 0x25U)) 
                                      & (IData)((vlSelf->div__DOT__divisor 
                                                 >> 0x25U))))));
        bufp->chgBit(oldp+628,((1U & (IData)((vlSelf->div__DOT__dividend 
                                              >> 0x26U)))));
        bufp->chgBit(oldp+629,((1U & (IData)((vlSelf->div__DOT__divisor 
                                              >> 0x26U)))));
        bufp->chgBit(oldp+630,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                               >> 0x26U)) 
                                      ^ (IData)((vlSelf->div__DOT__divisor 
                                                 >> 0x26U))))));
        bufp->chgBit(oldp+631,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                               >> 0x26U)) 
                                      & (IData)((vlSelf->div__DOT__divisor 
                                                 >> 0x26U))))));
        bufp->chgBit(oldp+632,((1U & (IData)((vlSelf->div__DOT__dividend 
                                              >> 0x27U)))));
        bufp->chgBit(oldp+633,((1U & (IData)((vlSelf->div__DOT__divisor 
                                              >> 0x27U)))));
        bufp->chgBit(oldp+634,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                               >> 0x27U)) 
                                      ^ (IData)((vlSelf->div__DOT__divisor 
                                                 >> 0x27U))))));
        bufp->chgBit(oldp+635,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                               >> 0x27U)) 
                                      & (IData)((vlSelf->div__DOT__divisor 
                                                 >> 0x27U))))));
        bufp->chgCData(oldp+636,(((0xeU & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__36__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                           << 1U)) 
                                  | (1U & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__32__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                           >> 3U)))),4);
        bufp->chgCData(oldp+637,((0xfU & (IData)((vlSelf->div__DOT__dividend 
                                                  >> 0x28U)))),4);
        bufp->chgCData(oldp+638,((0xfU & (IData)((vlSelf->div__DOT__divisor 
                                                  >> 0x28U)))),4);
        bufp->chgCData(oldp+639,((((0xeU & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__40__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                            << 1U)) 
                                   | (1U & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__36__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                            >> 3U))) 
                                  ^ (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__40__KET____DOT__cla_part0__DOT__p))),4);
        bufp->chgBit(oldp+640,((1U & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__40__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                      >> 3U))));
        bufp->chgCData(oldp+641,(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__40__KET____DOT__cla_part0__DOT__p),4);
        bufp->chgCData(oldp+642,((((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__40__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                   << 1U) | (1U & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__36__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                   >> 3U)))),5);
        bufp->chgCData(oldp+643,(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__40__KET____DOT__cla_part0__DOT__g),4);
        bufp->chgCData(oldp+644,(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__40__KET____DOT__cla_part0__DOT____Vcellout__carry0__c),4);
        bufp->chgBit(oldp+645,((1U & (IData)((vlSelf->div__DOT__dividend 
                                              >> 0x28U)))));
        bufp->chgBit(oldp+646,((1U & (IData)((vlSelf->div__DOT__divisor 
                                              >> 0x28U)))));
        bufp->chgBit(oldp+647,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                               >> 0x28U)) 
                                      ^ (IData)((vlSelf->div__DOT__divisor 
                                                 >> 0x28U))))));
        bufp->chgBit(oldp+648,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                               >> 0x28U)) 
                                      & (IData)((vlSelf->div__DOT__divisor 
                                                 >> 0x28U))))));
        bufp->chgBit(oldp+649,((1U & (IData)((vlSelf->div__DOT__dividend 
                                              >> 0x29U)))));
        bufp->chgBit(oldp+650,((1U & (IData)((vlSelf->div__DOT__divisor 
                                              >> 0x29U)))));
        bufp->chgBit(oldp+651,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                               >> 0x29U)) 
                                      ^ (IData)((vlSelf->div__DOT__divisor 
                                                 >> 0x29U))))));
        bufp->chgBit(oldp+652,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                               >> 0x29U)) 
                                      & (IData)((vlSelf->div__DOT__divisor 
                                                 >> 0x29U))))));
        bufp->chgBit(oldp+653,((1U & (IData)((vlSelf->div__DOT__dividend 
                                              >> 0x2aU)))));
        bufp->chgBit(oldp+654,((1U & (IData)((vlSelf->div__DOT__divisor 
                                              >> 0x2aU)))));
        bufp->chgBit(oldp+655,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                               >> 0x2aU)) 
                                      ^ (IData)((vlSelf->div__DOT__divisor 
                                                 >> 0x2aU))))));
        bufp->chgBit(oldp+656,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                               >> 0x2aU)) 
                                      & (IData)((vlSelf->div__DOT__divisor 
                                                 >> 0x2aU))))));
        bufp->chgBit(oldp+657,((1U & (IData)((vlSelf->div__DOT__dividend 
                                              >> 0x2bU)))));
        bufp->chgBit(oldp+658,((1U & (IData)((vlSelf->div__DOT__divisor 
                                              >> 0x2bU)))));
        bufp->chgBit(oldp+659,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                               >> 0x2bU)) 
                                      ^ (IData)((vlSelf->div__DOT__divisor 
                                                 >> 0x2bU))))));
        bufp->chgBit(oldp+660,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                               >> 0x2bU)) 
                                      & (IData)((vlSelf->div__DOT__divisor 
                                                 >> 0x2bU))))));
        bufp->chgCData(oldp+661,(((0xeU & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__40__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                           << 1U)) 
                                  | (1U & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__36__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                           >> 3U)))),4);
        bufp->chgCData(oldp+662,((0xfU & (IData)((vlSelf->div__DOT__dividend 
                                                  >> 0x2cU)))),4);
        bufp->chgCData(oldp+663,((0xfU & (IData)((vlSelf->div__DOT__divisor 
                                                  >> 0x2cU)))),4);
        bufp->chgCData(oldp+664,((((0xeU & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__44__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                            << 1U)) 
                                   | (1U & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__40__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                            >> 3U))) 
                                  ^ (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__44__KET____DOT__cla_part0__DOT__p))),4);
        bufp->chgBit(oldp+665,((1U & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__44__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                      >> 3U))));
        bufp->chgCData(oldp+666,(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__44__KET____DOT__cla_part0__DOT__p),4);
        bufp->chgCData(oldp+667,((((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__44__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                   << 1U) | (1U & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__40__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                   >> 3U)))),5);
        bufp->chgCData(oldp+668,(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__44__KET____DOT__cla_part0__DOT__g),4);
        bufp->chgCData(oldp+669,(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__44__KET____DOT__cla_part0__DOT____Vcellout__carry0__c),4);
        bufp->chgBit(oldp+670,((1U & (IData)((vlSelf->div__DOT__dividend 
                                              >> 0x2cU)))));
        bufp->chgBit(oldp+671,((1U & (IData)((vlSelf->div__DOT__divisor 
                                              >> 0x2cU)))));
        bufp->chgBit(oldp+672,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                               >> 0x2cU)) 
                                      ^ (IData)((vlSelf->div__DOT__divisor 
                                                 >> 0x2cU))))));
        bufp->chgBit(oldp+673,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                               >> 0x2cU)) 
                                      & (IData)((vlSelf->div__DOT__divisor 
                                                 >> 0x2cU))))));
        bufp->chgBit(oldp+674,((1U & (IData)((vlSelf->div__DOT__dividend 
                                              >> 0x2dU)))));
        bufp->chgBit(oldp+675,((1U & (IData)((vlSelf->div__DOT__divisor 
                                              >> 0x2dU)))));
        bufp->chgBit(oldp+676,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                               >> 0x2dU)) 
                                      ^ (IData)((vlSelf->div__DOT__divisor 
                                                 >> 0x2dU))))));
        bufp->chgBit(oldp+677,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                               >> 0x2dU)) 
                                      & (IData)((vlSelf->div__DOT__divisor 
                                                 >> 0x2dU))))));
        bufp->chgBit(oldp+678,((1U & (IData)((vlSelf->div__DOT__dividend 
                                              >> 0x2eU)))));
        bufp->chgBit(oldp+679,((1U & (IData)((vlSelf->div__DOT__divisor 
                                              >> 0x2eU)))));
        bufp->chgBit(oldp+680,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                               >> 0x2eU)) 
                                      ^ (IData)((vlSelf->div__DOT__divisor 
                                                 >> 0x2eU))))));
        bufp->chgBit(oldp+681,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                               >> 0x2eU)) 
                                      & (IData)((vlSelf->div__DOT__divisor 
                                                 >> 0x2eU))))));
        bufp->chgBit(oldp+682,((1U & (IData)((vlSelf->div__DOT__dividend 
                                              >> 0x2fU)))));
        bufp->chgBit(oldp+683,((1U & (IData)((vlSelf->div__DOT__divisor 
                                              >> 0x2fU)))));
        bufp->chgBit(oldp+684,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                               >> 0x2fU)) 
                                      ^ (IData)((vlSelf->div__DOT__divisor 
                                                 >> 0x2fU))))));
        bufp->chgBit(oldp+685,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                               >> 0x2fU)) 
                                      & (IData)((vlSelf->div__DOT__divisor 
                                                 >> 0x2fU))))));
        bufp->chgCData(oldp+686,(((0xeU & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__44__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                           << 1U)) 
                                  | (1U & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__40__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                           >> 3U)))),4);
        bufp->chgCData(oldp+687,((0xfU & (IData)((vlSelf->div__DOT__dividend 
                                                  >> 0x30U)))),4);
        bufp->chgCData(oldp+688,((0xfU & (IData)((vlSelf->div__DOT__divisor 
                                                  >> 0x30U)))),4);
        bufp->chgCData(oldp+689,((((0xeU & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__48__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                            << 1U)) 
                                   | (1U & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__44__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                            >> 3U))) 
                                  ^ (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__48__KET____DOT__cla_part0__DOT__p))),4);
        bufp->chgBit(oldp+690,((1U & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__48__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                      >> 3U))));
        bufp->chgCData(oldp+691,(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__48__KET____DOT__cla_part0__DOT__p),4);
        bufp->chgCData(oldp+692,((((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__48__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                   << 1U) | (1U & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__44__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                   >> 3U)))),5);
        bufp->chgCData(oldp+693,(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__48__KET____DOT__cla_part0__DOT__g),4);
        bufp->chgCData(oldp+694,(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__48__KET____DOT__cla_part0__DOT____Vcellout__carry0__c),4);
        bufp->chgBit(oldp+695,((1U & (IData)((vlSelf->div__DOT__dividend 
                                              >> 0x30U)))));
        bufp->chgBit(oldp+696,((1U & (IData)((vlSelf->div__DOT__divisor 
                                              >> 0x30U)))));
        bufp->chgBit(oldp+697,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                               >> 0x30U)) 
                                      ^ (IData)((vlSelf->div__DOT__divisor 
                                                 >> 0x30U))))));
        bufp->chgBit(oldp+698,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                               >> 0x30U)) 
                                      & (IData)((vlSelf->div__DOT__divisor 
                                                 >> 0x30U))))));
        bufp->chgBit(oldp+699,((1U & (IData)((vlSelf->div__DOT__dividend 
                                              >> 0x31U)))));
        bufp->chgBit(oldp+700,((1U & (IData)((vlSelf->div__DOT__divisor 
                                              >> 0x31U)))));
        bufp->chgBit(oldp+701,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                               >> 0x31U)) 
                                      ^ (IData)((vlSelf->div__DOT__divisor 
                                                 >> 0x31U))))));
        bufp->chgBit(oldp+702,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                               >> 0x31U)) 
                                      & (IData)((vlSelf->div__DOT__divisor 
                                                 >> 0x31U))))));
        bufp->chgBit(oldp+703,((1U & (IData)((vlSelf->div__DOT__dividend 
                                              >> 0x32U)))));
        bufp->chgBit(oldp+704,((1U & (IData)((vlSelf->div__DOT__divisor 
                                              >> 0x32U)))));
        bufp->chgBit(oldp+705,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                               >> 0x32U)) 
                                      ^ (IData)((vlSelf->div__DOT__divisor 
                                                 >> 0x32U))))));
        bufp->chgBit(oldp+706,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                               >> 0x32U)) 
                                      & (IData)((vlSelf->div__DOT__divisor 
                                                 >> 0x32U))))));
        bufp->chgBit(oldp+707,((1U & (IData)((vlSelf->div__DOT__dividend 
                                              >> 0x33U)))));
        bufp->chgBit(oldp+708,((1U & (IData)((vlSelf->div__DOT__divisor 
                                              >> 0x33U)))));
        bufp->chgBit(oldp+709,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                               >> 0x33U)) 
                                      ^ (IData)((vlSelf->div__DOT__divisor 
                                                 >> 0x33U))))));
        bufp->chgBit(oldp+710,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                               >> 0x33U)) 
                                      & (IData)((vlSelf->div__DOT__divisor 
                                                 >> 0x33U))))));
        bufp->chgCData(oldp+711,(((0xeU & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__48__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                           << 1U)) 
                                  | (1U & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__44__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                           >> 3U)))),4);
        bufp->chgCData(oldp+712,((0xfU & (IData)((vlSelf->div__DOT__dividend 
                                                  >> 4U)))),4);
        bufp->chgCData(oldp+713,((0xfU & (IData)((vlSelf->div__DOT__divisor 
                                                  >> 4U)))),4);
        bufp->chgCData(oldp+714,((((0xeU & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__4__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                            << 1U)) 
                                   | (1U & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__0__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                            >> 3U))) 
                                  ^ (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__4__KET____DOT__cla_part0__DOT__p))),4);
        bufp->chgBit(oldp+715,((1U & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__4__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                      >> 3U))));
        bufp->chgCData(oldp+716,(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__4__KET____DOT__cla_part0__DOT__p),4);
        bufp->chgCData(oldp+717,((((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__4__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                   << 1U) | (1U & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__0__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                   >> 3U)))),5);
        bufp->chgCData(oldp+718,(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__4__KET____DOT__cla_part0__DOT__g),4);
        bufp->chgCData(oldp+719,(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__4__KET____DOT__cla_part0__DOT____Vcellout__carry0__c),4);
        bufp->chgBit(oldp+720,((1U & (IData)((vlSelf->div__DOT__dividend 
                                              >> 4U)))));
        bufp->chgBit(oldp+721,((1U & (IData)((vlSelf->div__DOT__divisor 
                                              >> 4U)))));
        bufp->chgBit(oldp+722,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                               >> 4U)) 
                                      ^ (IData)((vlSelf->div__DOT__divisor 
                                                 >> 4U))))));
        bufp->chgBit(oldp+723,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                               >> 4U)) 
                                      & (IData)((vlSelf->div__DOT__divisor 
                                                 >> 4U))))));
        bufp->chgBit(oldp+724,((1U & (IData)((vlSelf->div__DOT__dividend 
                                              >> 5U)))));
        bufp->chgBit(oldp+725,((1U & (IData)((vlSelf->div__DOT__divisor 
                                              >> 5U)))));
        bufp->chgBit(oldp+726,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                               >> 5U)) 
                                      ^ (IData)((vlSelf->div__DOT__divisor 
                                                 >> 5U))))));
        bufp->chgBit(oldp+727,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                               >> 5U)) 
                                      & (IData)((vlSelf->div__DOT__divisor 
                                                 >> 5U))))));
        bufp->chgBit(oldp+728,((1U & (IData)((vlSelf->div__DOT__dividend 
                                              >> 6U)))));
        bufp->chgBit(oldp+729,((1U & (IData)((vlSelf->div__DOT__divisor 
                                              >> 6U)))));
        bufp->chgBit(oldp+730,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                               >> 6U)) 
                                      ^ (IData)((vlSelf->div__DOT__divisor 
                                                 >> 6U))))));
        bufp->chgBit(oldp+731,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                               >> 6U)) 
                                      & (IData)((vlSelf->div__DOT__divisor 
                                                 >> 6U))))));
        bufp->chgBit(oldp+732,((1U & (IData)((vlSelf->div__DOT__dividend 
                                              >> 7U)))));
        bufp->chgBit(oldp+733,((1U & (IData)((vlSelf->div__DOT__divisor 
                                              >> 7U)))));
        bufp->chgBit(oldp+734,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                               >> 7U)) 
                                      ^ (IData)((vlSelf->div__DOT__divisor 
                                                 >> 7U))))));
        bufp->chgBit(oldp+735,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                               >> 7U)) 
                                      & (IData)((vlSelf->div__DOT__divisor 
                                                 >> 7U))))));
        bufp->chgCData(oldp+736,(((0xeU & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__4__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                           << 1U)) 
                                  | (1U & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__0__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                           >> 3U)))),4);
        bufp->chgCData(oldp+737,((0xfU & (IData)((vlSelf->div__DOT__dividend 
                                                  >> 0x34U)))),4);
        bufp->chgCData(oldp+738,((0xfU & (IData)((vlSelf->div__DOT__divisor 
                                                  >> 0x34U)))),4);
        bufp->chgCData(oldp+739,((((0xeU & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__52__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                            << 1U)) 
                                   | (1U & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__48__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                            >> 3U))) 
                                  ^ (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__52__KET____DOT__cla_part0__DOT__p))),4);
        bufp->chgBit(oldp+740,((1U & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__52__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                      >> 3U))));
        bufp->chgCData(oldp+741,(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__52__KET____DOT__cla_part0__DOT__p),4);
        bufp->chgCData(oldp+742,((((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__52__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                   << 1U) | (1U & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__48__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                   >> 3U)))),5);
        bufp->chgCData(oldp+743,(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__52__KET____DOT__cla_part0__DOT__g),4);
        bufp->chgCData(oldp+744,(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__52__KET____DOT__cla_part0__DOT____Vcellout__carry0__c),4);
        bufp->chgBit(oldp+745,((1U & (IData)((vlSelf->div__DOT__dividend 
                                              >> 0x34U)))));
        bufp->chgBit(oldp+746,((1U & (IData)((vlSelf->div__DOT__divisor 
                                              >> 0x34U)))));
        bufp->chgBit(oldp+747,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                               >> 0x34U)) 
                                      ^ (IData)((vlSelf->div__DOT__divisor 
                                                 >> 0x34U))))));
        bufp->chgBit(oldp+748,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                               >> 0x34U)) 
                                      & (IData)((vlSelf->div__DOT__divisor 
                                                 >> 0x34U))))));
        bufp->chgBit(oldp+749,((1U & (IData)((vlSelf->div__DOT__dividend 
                                              >> 0x35U)))));
        bufp->chgBit(oldp+750,((1U & (IData)((vlSelf->div__DOT__divisor 
                                              >> 0x35U)))));
        bufp->chgBit(oldp+751,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                               >> 0x35U)) 
                                      ^ (IData)((vlSelf->div__DOT__divisor 
                                                 >> 0x35U))))));
        bufp->chgBit(oldp+752,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                               >> 0x35U)) 
                                      & (IData)((vlSelf->div__DOT__divisor 
                                                 >> 0x35U))))));
        bufp->chgBit(oldp+753,((1U & (IData)((vlSelf->div__DOT__dividend 
                                              >> 0x36U)))));
        bufp->chgBit(oldp+754,((1U & (IData)((vlSelf->div__DOT__divisor 
                                              >> 0x36U)))));
        bufp->chgBit(oldp+755,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                               >> 0x36U)) 
                                      ^ (IData)((vlSelf->div__DOT__divisor 
                                                 >> 0x36U))))));
        bufp->chgBit(oldp+756,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                               >> 0x36U)) 
                                      & (IData)((vlSelf->div__DOT__divisor 
                                                 >> 0x36U))))));
        bufp->chgBit(oldp+757,((1U & (IData)((vlSelf->div__DOT__dividend 
                                              >> 0x37U)))));
        bufp->chgBit(oldp+758,((1U & (IData)((vlSelf->div__DOT__divisor 
                                              >> 0x37U)))));
        bufp->chgBit(oldp+759,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                               >> 0x37U)) 
                                      ^ (IData)((vlSelf->div__DOT__divisor 
                                                 >> 0x37U))))));
        bufp->chgBit(oldp+760,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                               >> 0x37U)) 
                                      & (IData)((vlSelf->div__DOT__divisor 
                                                 >> 0x37U))))));
        bufp->chgCData(oldp+761,(((0xeU & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__52__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                           << 1U)) 
                                  | (1U & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__48__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                           >> 3U)))),4);
        bufp->chgCData(oldp+762,((0xfU & (IData)((vlSelf->div__DOT__dividend 
                                                  >> 0x38U)))),4);
        bufp->chgCData(oldp+763,((0xfU & (IData)((vlSelf->div__DOT__divisor 
                                                  >> 0x38U)))),4);
        bufp->chgCData(oldp+764,((((0xeU & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__56__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                            << 1U)) 
                                   | (1U & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__52__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                            >> 3U))) 
                                  ^ (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__56__KET____DOT__cla_part0__DOT__p))),4);
        bufp->chgBit(oldp+765,((1U & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__56__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                      >> 3U))));
        bufp->chgCData(oldp+766,(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__56__KET____DOT__cla_part0__DOT__p),4);
        bufp->chgCData(oldp+767,((((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__56__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                   << 1U) | (1U & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__52__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                   >> 3U)))),5);
        bufp->chgCData(oldp+768,(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__56__KET____DOT__cla_part0__DOT__g),4);
        bufp->chgCData(oldp+769,(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__56__KET____DOT__cla_part0__DOT____Vcellout__carry0__c),4);
        bufp->chgBit(oldp+770,((1U & (IData)((vlSelf->div__DOT__dividend 
                                              >> 0x38U)))));
        bufp->chgBit(oldp+771,((1U & (IData)((vlSelf->div__DOT__divisor 
                                              >> 0x38U)))));
        bufp->chgBit(oldp+772,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                               >> 0x38U)) 
                                      ^ (IData)((vlSelf->div__DOT__divisor 
                                                 >> 0x38U))))));
        bufp->chgBit(oldp+773,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                               >> 0x38U)) 
                                      & (IData)((vlSelf->div__DOT__divisor 
                                                 >> 0x38U))))));
        bufp->chgBit(oldp+774,((1U & (IData)((vlSelf->div__DOT__dividend 
                                              >> 0x39U)))));
        bufp->chgBit(oldp+775,((1U & (IData)((vlSelf->div__DOT__divisor 
                                              >> 0x39U)))));
        bufp->chgBit(oldp+776,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                               >> 0x39U)) 
                                      ^ (IData)((vlSelf->div__DOT__divisor 
                                                 >> 0x39U))))));
        bufp->chgBit(oldp+777,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                               >> 0x39U)) 
                                      & (IData)((vlSelf->div__DOT__divisor 
                                                 >> 0x39U))))));
        bufp->chgBit(oldp+778,((1U & (IData)((vlSelf->div__DOT__dividend 
                                              >> 0x3aU)))));
        bufp->chgBit(oldp+779,((1U & (IData)((vlSelf->div__DOT__divisor 
                                              >> 0x3aU)))));
        bufp->chgBit(oldp+780,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                               >> 0x3aU)) 
                                      ^ (IData)((vlSelf->div__DOT__divisor 
                                                 >> 0x3aU))))));
        bufp->chgBit(oldp+781,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                               >> 0x3aU)) 
                                      & (IData)((vlSelf->div__DOT__divisor 
                                                 >> 0x3aU))))));
        bufp->chgBit(oldp+782,((1U & (IData)((vlSelf->div__DOT__dividend 
                                              >> 0x3bU)))));
        bufp->chgBit(oldp+783,((1U & (IData)((vlSelf->div__DOT__divisor 
                                              >> 0x3bU)))));
        bufp->chgBit(oldp+784,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                               >> 0x3bU)) 
                                      ^ (IData)((vlSelf->div__DOT__divisor 
                                                 >> 0x3bU))))));
        bufp->chgBit(oldp+785,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                               >> 0x3bU)) 
                                      & (IData)((vlSelf->div__DOT__divisor 
                                                 >> 0x3bU))))));
        bufp->chgCData(oldp+786,(((0xeU & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__56__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                           << 1U)) 
                                  | (1U & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__52__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                           >> 3U)))),4);
        bufp->chgCData(oldp+787,((0xfU & (IData)((vlSelf->div__DOT__dividend 
                                                  >> 0x3cU)))),4);
        bufp->chgCData(oldp+788,((0xfU & (IData)((vlSelf->div__DOT__divisor 
                                                  >> 0x3cU)))),4);
        bufp->chgCData(oldp+789,((((0xeU & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__60__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                            << 1U)) 
                                   | (1U & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__56__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                            >> 3U))) 
                                  ^ (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__60__KET____DOT__cla_part0__DOT__p))),4);
        bufp->chgCData(oldp+790,(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__60__KET____DOT__cla_part0__DOT__p),4);
        bufp->chgCData(oldp+791,((((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__60__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                   << 1U) | (1U & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__56__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                   >> 3U)))),5);
        bufp->chgCData(oldp+792,(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__60__KET____DOT__cla_part0__DOT__g),4);
        bufp->chgCData(oldp+793,(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__60__KET____DOT__cla_part0__DOT____Vcellout__carry0__c),4);
        bufp->chgBit(oldp+794,((1U & (IData)((vlSelf->div__DOT__dividend 
                                              >> 0x3cU)))));
        bufp->chgBit(oldp+795,((1U & (IData)((vlSelf->div__DOT__divisor 
                                              >> 0x3cU)))));
        bufp->chgBit(oldp+796,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                               >> 0x3cU)) 
                                      ^ (IData)((vlSelf->div__DOT__divisor 
                                                 >> 0x3cU))))));
        bufp->chgBit(oldp+797,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                               >> 0x3cU)) 
                                      & (IData)((vlSelf->div__DOT__divisor 
                                                 >> 0x3cU))))));
        bufp->chgBit(oldp+798,((1U & (IData)((vlSelf->div__DOT__dividend 
                                              >> 0x3dU)))));
        bufp->chgBit(oldp+799,((1U & (IData)((vlSelf->div__DOT__divisor 
                                              >> 0x3dU)))));
        bufp->chgBit(oldp+800,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                               >> 0x3dU)) 
                                      ^ (IData)((vlSelf->div__DOT__divisor 
                                                 >> 0x3dU))))));
        bufp->chgBit(oldp+801,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                               >> 0x3dU)) 
                                      & (IData)((vlSelf->div__DOT__divisor 
                                                 >> 0x3dU))))));
        bufp->chgBit(oldp+802,((1U & (IData)((vlSelf->div__DOT__dividend 
                                              >> 0x3eU)))));
        bufp->chgBit(oldp+803,((1U & (IData)((vlSelf->div__DOT__divisor 
                                              >> 0x3eU)))));
        bufp->chgBit(oldp+804,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                               >> 0x3eU)) 
                                      ^ (IData)((vlSelf->div__DOT__divisor 
                                                 >> 0x3eU))))));
        bufp->chgBit(oldp+805,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                               >> 0x3eU)) 
                                      & (IData)((vlSelf->div__DOT__divisor 
                                                 >> 0x3eU))))));
        bufp->chgBit(oldp+806,((1U & (IData)((vlSelf->div__DOT__dividend 
                                              >> 0x3fU)))));
        bufp->chgBit(oldp+807,((1U & (IData)((vlSelf->div__DOT__divisor 
                                              >> 0x3fU)))));
        bufp->chgBit(oldp+808,((IData)(((vlSelf->div__DOT__dividend 
                                         ^ vlSelf->div__DOT__divisor) 
                                        >> 0x3fU))));
        bufp->chgBit(oldp+809,((IData)(((vlSelf->div__DOT__dividend 
                                         & vlSelf->div__DOT__divisor) 
                                        >> 0x3fU))));
        bufp->chgCData(oldp+810,(((0xeU & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__60__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                           << 1U)) 
                                  | (1U & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__56__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                           >> 3U)))),4);
        bufp->chgCData(oldp+811,((0xfU & (IData)((vlSelf->div__DOT__dividend 
                                                  >> 8U)))),4);
        bufp->chgCData(oldp+812,((0xfU & (IData)((vlSelf->div__DOT__divisor 
                                                  >> 8U)))),4);
        bufp->chgCData(oldp+813,((((0xeU & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__8__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                            << 1U)) 
                                   | (1U & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__4__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                            >> 3U))) 
                                  ^ (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__8__KET____DOT__cla_part0__DOT__p))),4);
        bufp->chgCData(oldp+814,(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__8__KET____DOT__cla_part0__DOT__p),4);
        bufp->chgCData(oldp+815,((((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__8__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                   << 1U) | (1U & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__4__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                   >> 3U)))),5);
        bufp->chgCData(oldp+816,(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__8__KET____DOT__cla_part0__DOT__g),4);
        bufp->chgCData(oldp+817,(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__8__KET____DOT__cla_part0__DOT____Vcellout__carry0__c),4);
        bufp->chgBit(oldp+818,((1U & (IData)((vlSelf->div__DOT__dividend 
                                              >> 8U)))));
        bufp->chgBit(oldp+819,((1U & (IData)((vlSelf->div__DOT__divisor 
                                              >> 8U)))));
        bufp->chgBit(oldp+820,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                               >> 8U)) 
                                      ^ (IData)((vlSelf->div__DOT__divisor 
                                                 >> 8U))))));
        bufp->chgBit(oldp+821,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                               >> 8U)) 
                                      & (IData)((vlSelf->div__DOT__divisor 
                                                 >> 8U))))));
        bufp->chgBit(oldp+822,((1U & (IData)((vlSelf->div__DOT__dividend 
                                              >> 9U)))));
        bufp->chgBit(oldp+823,((1U & (IData)((vlSelf->div__DOT__divisor 
                                              >> 9U)))));
        bufp->chgBit(oldp+824,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                               >> 9U)) 
                                      ^ (IData)((vlSelf->div__DOT__divisor 
                                                 >> 9U))))));
        bufp->chgBit(oldp+825,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                               >> 9U)) 
                                      & (IData)((vlSelf->div__DOT__divisor 
                                                 >> 9U))))));
        bufp->chgBit(oldp+826,((1U & (IData)((vlSelf->div__DOT__dividend 
                                              >> 0xaU)))));
        bufp->chgBit(oldp+827,((1U & (IData)((vlSelf->div__DOT__divisor 
                                              >> 0xaU)))));
        bufp->chgBit(oldp+828,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                               >> 0xaU)) 
                                      ^ (IData)((vlSelf->div__DOT__divisor 
                                                 >> 0xaU))))));
        bufp->chgBit(oldp+829,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                               >> 0xaU)) 
                                      & (IData)((vlSelf->div__DOT__divisor 
                                                 >> 0xaU))))));
        bufp->chgBit(oldp+830,((1U & (IData)((vlSelf->div__DOT__dividend 
                                              >> 0xbU)))));
        bufp->chgBit(oldp+831,((1U & (IData)((vlSelf->div__DOT__divisor 
                                              >> 0xbU)))));
        bufp->chgBit(oldp+832,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                               >> 0xbU)) 
                                      ^ (IData)((vlSelf->div__DOT__divisor 
                                                 >> 0xbU))))));
        bufp->chgBit(oldp+833,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                               >> 0xbU)) 
                                      & (IData)((vlSelf->div__DOT__divisor 
                                                 >> 0xbU))))));
        bufp->chgCData(oldp+834,(((0xeU & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__8__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                           << 1U)) 
                                  | (1U & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__4__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                           >> 3U)))),4);
        bufp->chgCData(oldp+835,(((((0xfU == (IData)(vlSelf->div__DOT__lzd0__DOT__lzd_32_1__DOT__lzd_16_0__DOT__z)) 
                                    & (0xfU == (IData)(vlSelf->div__DOT__lzd0__DOT__lzd_32_1__DOT__lzd_16_1__DOT__z))) 
                                   << 1U) | (IData)(vlSelf->div__DOT__lzd0__DOT____Vcellout__lzd_32_0____pinNumber3))),2);
        bufp->chgIData(oldp+836,((IData)((vlSelf->div__DOT__y_abs_reg 
                                          >> 0x20U))),32);
        bufp->chgBit(oldp+837,(vlSelf->div__DOT__lzd0__DOT____Vcellout__lzd_32_0____pinNumber3));
        bufp->chgCData(oldp+838,((((IData)((0xfU == (IData)(vlSelf->div__DOT__lzd0__DOT__lzd_32_0__DOT__lzd_16_1__DOT__z))) 
                                   << 1U) | (0xfU == (IData)(vlSelf->div__DOT__lzd0__DOT__lzd_32_0__DOT__lzd_16_0__DOT__z)))),2);
        bufp->chgSData(oldp+839,((0xffffU & (IData)(
                                                    (vlSelf->div__DOT__y_abs_reg 
                                                     >> 0x30U)))),16);
        bufp->chgBit(oldp+840,((0xfU == (IData)(vlSelf->div__DOT__lzd0__DOT__lzd_32_0__DOT__lzd_16_0__DOT__z))));
        bufp->chgCData(oldp+841,(vlSelf->div__DOT__lzd0__DOT__lzd_32_0__DOT__lzd_16_0__DOT__z),4);
        bufp->chgCData(oldp+842,(vlSelf->div__DOT__lzd0__DOT__lzd_32_0__DOT__lzd_16_0__DOT__out_2[0]),2);
        bufp->chgCData(oldp+843,(vlSelf->div__DOT__lzd0__DOT__lzd_32_0__DOT__lzd_16_0__DOT__out_2[1]),2);
        bufp->chgCData(oldp+844,(vlSelf->div__DOT__lzd0__DOT__lzd_32_0__DOT__lzd_16_0__DOT__out_2[2]),2);
        bufp->chgCData(oldp+845,(vlSelf->div__DOT__lzd0__DOT__lzd_32_0__DOT__lzd_16_0__DOT__out_2[3]),2);
        bufp->chgCData(oldp+846,((0xfU & (IData)((vlSelf->div__DOT__y_abs_reg 
                                                  >> 0x3cU)))),4);
        bufp->chgCData(oldp+847,(((2U & ((~ (IData)(
                                                    (0ULL 
                                                     != 
                                                     (0xc000000000000000ULL 
                                                      & vlSelf->div__DOT__y_abs_reg)))) 
                                         << 1U)) | (IData)(
                                                           ((~ 
                                                             (vlSelf->div__DOT__y_abs_reg 
                                                              >> 0x3fU)) 
                                                            & (0x2000000000000000ULL 
                                                               != 
                                                               (0x6000000000000000ULL 
                                                                & vlSelf->div__DOT__y_abs_reg)))))),2);
        bufp->chgBit(oldp+848,((1U & (~ (IData)((0U 
                                                 != 
                                                 (0xfU 
                                                  & (IData)(
                                                            (vlSelf->div__DOT__y_abs_reg 
                                                             >> 0x3cU)))))))));
        bufp->chgCData(oldp+849,((0xfU & (IData)((vlSelf->div__DOT__y_abs_reg 
                                                  >> 0x38U)))),4);
        bufp->chgCData(oldp+850,(((2U & ((~ (IData)(
                                                    (0ULL 
                                                     != 
                                                     (0xc00000000000000ULL 
                                                      & vlSelf->div__DOT__y_abs_reg)))) 
                                         << 1U)) | (IData)(
                                                           ((~ 
                                                             (vlSelf->div__DOT__y_abs_reg 
                                                              >> 0x3bU)) 
                                                            & (0x200000000000000ULL 
                                                               != 
                                                               (0x600000000000000ULL 
                                                                & vlSelf->div__DOT__y_abs_reg)))))),2);
        bufp->chgBit(oldp+851,((1U & (~ (IData)((0U 
                                                 != 
                                                 (0xfU 
                                                  & (IData)(
                                                            (vlSelf->div__DOT__y_abs_reg 
                                                             >> 0x38U)))))))));
        bufp->chgCData(oldp+852,((0xfU & (IData)((vlSelf->div__DOT__y_abs_reg 
                                                  >> 0x34U)))),4);
        bufp->chgCData(oldp+853,(((2U & ((~ (IData)(
                                                    (0ULL 
                                                     != 
                                                     (0xc0000000000000ULL 
                                                      & vlSelf->div__DOT__y_abs_reg)))) 
                                         << 1U)) | (IData)(
                                                           ((~ 
                                                             (vlSelf->div__DOT__y_abs_reg 
                                                              >> 0x37U)) 
                                                            & (0x20000000000000ULL 
                                                               != 
                                                               (0x60000000000000ULL 
                                                                & vlSelf->div__DOT__y_abs_reg)))))),2);
        bufp->chgBit(oldp+854,((1U & (~ (IData)((0U 
                                                 != 
                                                 (0xfU 
                                                  & (IData)(
                                                            (vlSelf->div__DOT__y_abs_reg 
                                                             >> 0x34U)))))))));
        bufp->chgCData(oldp+855,((0xfU & (IData)((vlSelf->div__DOT__y_abs_reg 
                                                  >> 0x30U)))),4);
        bufp->chgCData(oldp+856,(((2U & ((~ (IData)(
                                                    (0ULL 
                                                     != 
                                                     (0xc000000000000ULL 
                                                      & vlSelf->div__DOT__y_abs_reg)))) 
                                         << 1U)) | (IData)(
                                                           ((~ 
                                                             (vlSelf->div__DOT__y_abs_reg 
                                                              >> 0x33U)) 
                                                            & (0x2000000000000ULL 
                                                               != 
                                                               (0x6000000000000ULL 
                                                                & vlSelf->div__DOT__y_abs_reg)))))),2);
        bufp->chgBit(oldp+857,((1U & (~ (IData)((0U 
                                                 != 
                                                 (0xfU 
                                                  & (IData)(
                                                            (vlSelf->div__DOT__y_abs_reg 
                                                             >> 0x30U)))))))));
        bufp->chgSData(oldp+858,((0xffffU & (IData)(
                                                    (vlSelf->div__DOT__y_abs_reg 
                                                     >> 0x20U)))),16);
        bufp->chgBit(oldp+859,((0xfU == (IData)(vlSelf->div__DOT__lzd0__DOT__lzd_32_0__DOT__lzd_16_1__DOT__z))));
        bufp->chgCData(oldp+860,(vlSelf->div__DOT__lzd0__DOT__lzd_32_0__DOT__lzd_16_1__DOT__z),4);
        bufp->chgCData(oldp+861,(vlSelf->div__DOT__lzd0__DOT__lzd_32_0__DOT__lzd_16_1__DOT__out_2[0]),2);
        bufp->chgCData(oldp+862,(vlSelf->div__DOT__lzd0__DOT__lzd_32_0__DOT__lzd_16_1__DOT__out_2[1]),2);
        bufp->chgCData(oldp+863,(vlSelf->div__DOT__lzd0__DOT__lzd_32_0__DOT__lzd_16_1__DOT__out_2[2]),2);
        bufp->chgCData(oldp+864,(vlSelf->div__DOT__lzd0__DOT__lzd_32_0__DOT__lzd_16_1__DOT__out_2[3]),2);
        bufp->chgCData(oldp+865,((0xfU & (IData)((vlSelf->div__DOT__y_abs_reg 
                                                  >> 0x2cU)))),4);
        bufp->chgCData(oldp+866,(((2U & ((~ (IData)(
                                                    (0ULL 
                                                     != 
                                                     (0xc00000000000ULL 
                                                      & vlSelf->div__DOT__y_abs_reg)))) 
                                         << 1U)) | (IData)(
                                                           ((~ 
                                                             (vlSelf->div__DOT__y_abs_reg 
                                                              >> 0x2fU)) 
                                                            & (0x200000000000ULL 
                                                               != 
                                                               (0x600000000000ULL 
                                                                & vlSelf->div__DOT__y_abs_reg)))))),2);
        bufp->chgBit(oldp+867,((1U & (~ (IData)((0U 
                                                 != 
                                                 (0xfU 
                                                  & (IData)(
                                                            (vlSelf->div__DOT__y_abs_reg 
                                                             >> 0x2cU)))))))));
        bufp->chgCData(oldp+868,((0xfU & (IData)((vlSelf->div__DOT__y_abs_reg 
                                                  >> 0x28U)))),4);
        bufp->chgCData(oldp+869,(((2U & ((~ (IData)(
                                                    (0ULL 
                                                     != 
                                                     (0xc0000000000ULL 
                                                      & vlSelf->div__DOT__y_abs_reg)))) 
                                         << 1U)) | (IData)(
                                                           ((~ 
                                                             (vlSelf->div__DOT__y_abs_reg 
                                                              >> 0x2bU)) 
                                                            & (0x20000000000ULL 
                                                               != 
                                                               (0x60000000000ULL 
                                                                & vlSelf->div__DOT__y_abs_reg)))))),2);
        bufp->chgBit(oldp+870,((1U & (~ (IData)((0U 
                                                 != 
                                                 (0xfU 
                                                  & (IData)(
                                                            (vlSelf->div__DOT__y_abs_reg 
                                                             >> 0x28U)))))))));
        bufp->chgCData(oldp+871,((0xfU & (IData)((vlSelf->div__DOT__y_abs_reg 
                                                  >> 0x24U)))),4);
        bufp->chgCData(oldp+872,(((2U & ((~ (IData)(
                                                    (0ULL 
                                                     != 
                                                     (0xc000000000ULL 
                                                      & vlSelf->div__DOT__y_abs_reg)))) 
                                         << 1U)) | (IData)(
                                                           ((~ 
                                                             (vlSelf->div__DOT__y_abs_reg 
                                                              >> 0x27U)) 
                                                            & (0x2000000000ULL 
                                                               != 
                                                               (0x6000000000ULL 
                                                                & vlSelf->div__DOT__y_abs_reg)))))),2);
        bufp->chgBit(oldp+873,((1U & (~ (IData)((0U 
                                                 != 
                                                 (0xfU 
                                                  & (IData)(
                                                            (vlSelf->div__DOT__y_abs_reg 
                                                             >> 0x24U)))))))));
        bufp->chgCData(oldp+874,((0xfU & (IData)((vlSelf->div__DOT__y_abs_reg 
                                                  >> 0x20U)))),4);
        bufp->chgCData(oldp+875,(((2U & ((~ (IData)(
                                                    (0ULL 
                                                     != 
                                                     (0xc00000000ULL 
                                                      & vlSelf->div__DOT__y_abs_reg)))) 
                                         << 1U)) | (IData)(
                                                           ((~ 
                                                             (vlSelf->div__DOT__y_abs_reg 
                                                              >> 0x23U)) 
                                                            & (0x200000000ULL 
                                                               != 
                                                               (0x600000000ULL 
                                                                & vlSelf->div__DOT__y_abs_reg)))))),2);
        bufp->chgBit(oldp+876,((1U & (~ (IData)((0U 
                                                 != 
                                                 (0xfU 
                                                  & (IData)(
                                                            (vlSelf->div__DOT__y_abs_reg 
                                                             >> 0x20U)))))))));
        bufp->chgIData(oldp+877,((IData)(vlSelf->div__DOT__y_abs_reg)),32);
        bufp->chgBit(oldp+878,(((0xfU == (IData)(vlSelf->div__DOT__lzd0__DOT__lzd_32_1__DOT__lzd_16_0__DOT__z)) 
                                & (0xfU == (IData)(vlSelf->div__DOT__lzd0__DOT__lzd_32_1__DOT__lzd_16_1__DOT__z)))));
        bufp->chgCData(oldp+879,((((IData)((0xfU == (IData)(vlSelf->div__DOT__lzd0__DOT__lzd_32_1__DOT__lzd_16_1__DOT__z))) 
                                   << 1U) | (0xfU == (IData)(vlSelf->div__DOT__lzd0__DOT__lzd_32_1__DOT__lzd_16_0__DOT__z)))),2);
        bufp->chgSData(oldp+880,((0xffffU & (IData)(
                                                    (vlSelf->div__DOT__y_abs_reg 
                                                     >> 0x10U)))),16);
        bufp->chgBit(oldp+881,((0xfU == (IData)(vlSelf->div__DOT__lzd0__DOT__lzd_32_1__DOT__lzd_16_0__DOT__z))));
        bufp->chgCData(oldp+882,(vlSelf->div__DOT__lzd0__DOT__lzd_32_1__DOT__lzd_16_0__DOT__z),4);
        bufp->chgCData(oldp+883,(vlSelf->div__DOT__lzd0__DOT__lzd_32_1__DOT__lzd_16_0__DOT__out_2[0]),2);
        bufp->chgCData(oldp+884,(vlSelf->div__DOT__lzd0__DOT__lzd_32_1__DOT__lzd_16_0__DOT__out_2[1]),2);
        bufp->chgCData(oldp+885,(vlSelf->div__DOT__lzd0__DOT__lzd_32_1__DOT__lzd_16_0__DOT__out_2[2]),2);
        bufp->chgCData(oldp+886,(vlSelf->div__DOT__lzd0__DOT__lzd_32_1__DOT__lzd_16_0__DOT__out_2[3]),2);
        bufp->chgCData(oldp+887,((0xfU & (IData)((vlSelf->div__DOT__y_abs_reg 
                                                  >> 0x1cU)))),4);
        bufp->chgCData(oldp+888,(((2U & ((~ (IData)(
                                                    (0ULL 
                                                     != 
                                                     (0xc0000000ULL 
                                                      & vlSelf->div__DOT__y_abs_reg)))) 
                                         << 1U)) | (IData)(
                                                           ((~ 
                                                             (vlSelf->div__DOT__y_abs_reg 
                                                              >> 0x1fU)) 
                                                            & (0x20000000ULL 
                                                               != 
                                                               (0x60000000ULL 
                                                                & vlSelf->div__DOT__y_abs_reg)))))),2);
        bufp->chgBit(oldp+889,((1U & (~ (IData)((0U 
                                                 != 
                                                 (0xfU 
                                                  & (IData)(
                                                            (vlSelf->div__DOT__y_abs_reg 
                                                             >> 0x1cU)))))))));
        bufp->chgCData(oldp+890,((0xfU & (IData)((vlSelf->div__DOT__y_abs_reg 
                                                  >> 0x18U)))),4);
        bufp->chgCData(oldp+891,(((2U & ((~ (IData)(
                                                    (0ULL 
                                                     != 
                                                     (0xc000000ULL 
                                                      & vlSelf->div__DOT__y_abs_reg)))) 
                                         << 1U)) | (IData)(
                                                           ((~ 
                                                             (vlSelf->div__DOT__y_abs_reg 
                                                              >> 0x1bU)) 
                                                            & (0x2000000ULL 
                                                               != 
                                                               (0x6000000ULL 
                                                                & vlSelf->div__DOT__y_abs_reg)))))),2);
        bufp->chgBit(oldp+892,((1U & (~ (IData)((0U 
                                                 != 
                                                 (0xfU 
                                                  & (IData)(
                                                            (vlSelf->div__DOT__y_abs_reg 
                                                             >> 0x18U)))))))));
        bufp->chgCData(oldp+893,((0xfU & (IData)((vlSelf->div__DOT__y_abs_reg 
                                                  >> 0x14U)))),4);
        bufp->chgCData(oldp+894,(((2U & ((~ (IData)(
                                                    (0ULL 
                                                     != 
                                                     (0xc00000ULL 
                                                      & vlSelf->div__DOT__y_abs_reg)))) 
                                         << 1U)) | (IData)(
                                                           ((~ 
                                                             (vlSelf->div__DOT__y_abs_reg 
                                                              >> 0x17U)) 
                                                            & (0x200000ULL 
                                                               != 
                                                               (0x600000ULL 
                                                                & vlSelf->div__DOT__y_abs_reg)))))),2);
        bufp->chgBit(oldp+895,((1U & (~ (IData)((0U 
                                                 != 
                                                 (0xfU 
                                                  & (IData)(
                                                            (vlSelf->div__DOT__y_abs_reg 
                                                             >> 0x14U)))))))));
        bufp->chgCData(oldp+896,((0xfU & (IData)((vlSelf->div__DOT__y_abs_reg 
                                                  >> 0x10U)))),4);
        bufp->chgCData(oldp+897,(((2U & ((~ (IData)(
                                                    (0ULL 
                                                     != 
                                                     (0xc0000ULL 
                                                      & vlSelf->div__DOT__y_abs_reg)))) 
                                         << 1U)) | (IData)(
                                                           ((~ 
                                                             (vlSelf->div__DOT__y_abs_reg 
                                                              >> 0x13U)) 
                                                            & (0x20000ULL 
                                                               != 
                                                               (0x60000ULL 
                                                                & vlSelf->div__DOT__y_abs_reg)))))),2);
        bufp->chgBit(oldp+898,((1U & (~ (IData)((0U 
                                                 != 
                                                 (0xfU 
                                                  & (IData)(
                                                            (vlSelf->div__DOT__y_abs_reg 
                                                             >> 0x10U)))))))));
        bufp->chgSData(oldp+899,((0xffffU & (IData)(vlSelf->div__DOT__y_abs_reg))),16);
        bufp->chgBit(oldp+900,((0xfU == (IData)(vlSelf->div__DOT__lzd0__DOT__lzd_32_1__DOT__lzd_16_1__DOT__z))));
        bufp->chgCData(oldp+901,(vlSelf->div__DOT__lzd0__DOT__lzd_32_1__DOT__lzd_16_1__DOT__z),4);
        bufp->chgCData(oldp+902,(vlSelf->div__DOT__lzd0__DOT__lzd_32_1__DOT__lzd_16_1__DOT__out_2[0]),2);
        bufp->chgCData(oldp+903,(vlSelf->div__DOT__lzd0__DOT__lzd_32_1__DOT__lzd_16_1__DOT__out_2[1]),2);
        bufp->chgCData(oldp+904,(vlSelf->div__DOT__lzd0__DOT__lzd_32_1__DOT__lzd_16_1__DOT__out_2[2]),2);
        bufp->chgCData(oldp+905,(vlSelf->div__DOT__lzd0__DOT__lzd_32_1__DOT__lzd_16_1__DOT__out_2[3]),2);
        bufp->chgCData(oldp+906,((0xfU & (IData)((vlSelf->div__DOT__y_abs_reg 
                                                  >> 0xcU)))),4);
        bufp->chgCData(oldp+907,(((2U & ((~ (IData)(
                                                    (0ULL 
                                                     != 
                                                     (0xc000ULL 
                                                      & vlSelf->div__DOT__y_abs_reg)))) 
                                         << 1U)) | (IData)(
                                                           ((~ 
                                                             (vlSelf->div__DOT__y_abs_reg 
                                                              >> 0xfU)) 
                                                            & (0x2000ULL 
                                                               != 
                                                               (0x6000ULL 
                                                                & vlSelf->div__DOT__y_abs_reg)))))),2);
        bufp->chgBit(oldp+908,((1U & (~ (IData)((0U 
                                                 != 
                                                 (0xfU 
                                                  & (IData)(
                                                            (vlSelf->div__DOT__y_abs_reg 
                                                             >> 0xcU)))))))));
        bufp->chgCData(oldp+909,((0xfU & (IData)((vlSelf->div__DOT__y_abs_reg 
                                                  >> 8U)))),4);
        bufp->chgCData(oldp+910,(((2U & ((~ (IData)(
                                                    (0ULL 
                                                     != 
                                                     (0xc00ULL 
                                                      & vlSelf->div__DOT__y_abs_reg)))) 
                                         << 1U)) | (IData)(
                                                           ((~ 
                                                             (vlSelf->div__DOT__y_abs_reg 
                                                              >> 0xbU)) 
                                                            & (0x200ULL 
                                                               != 
                                                               (0x600ULL 
                                                                & vlSelf->div__DOT__y_abs_reg)))))),2);
        bufp->chgBit(oldp+911,((1U & (~ (IData)((0U 
                                                 != 
                                                 (0xfU 
                                                  & (IData)(
                                                            (vlSelf->div__DOT__y_abs_reg 
                                                             >> 8U)))))))));
        bufp->chgCData(oldp+912,((0xfU & (IData)((vlSelf->div__DOT__y_abs_reg 
                                                  >> 4U)))),4);
        bufp->chgCData(oldp+913,(((2U & ((~ (IData)(
                                                    (0ULL 
                                                     != 
                                                     (0xc0ULL 
                                                      & vlSelf->div__DOT__y_abs_reg)))) 
                                         << 1U)) | (IData)(
                                                           ((~ 
                                                             (vlSelf->div__DOT__y_abs_reg 
                                                              >> 7U)) 
                                                            & (0x20ULL 
                                                               != 
                                                               (0x60ULL 
                                                                & vlSelf->div__DOT__y_abs_reg)))))),2);
        bufp->chgBit(oldp+914,((1U & (~ (IData)((0U 
                                                 != 
                                                 (0xfU 
                                                  & (IData)(
                                                            (vlSelf->div__DOT__y_abs_reg 
                                                             >> 4U)))))))));
        bufp->chgCData(oldp+915,((0xfU & (IData)(vlSelf->div__DOT__y_abs_reg))),4);
        bufp->chgCData(oldp+916,(((2U & ((~ (IData)(
                                                    (0ULL 
                                                     != 
                                                     (0xcULL 
                                                      & vlSelf->div__DOT__y_abs_reg)))) 
                                         << 1U)) | (IData)(
                                                           ((~ 
                                                             (vlSelf->div__DOT__y_abs_reg 
                                                              >> 3U)) 
                                                            & (2ULL 
                                                               != 
                                                               (6ULL 
                                                                & vlSelf->div__DOT__y_abs_reg)))))),2);
        bufp->chgBit(oldp+917,((1U & (~ (IData)((0U 
                                                 != 
                                                 (0xfU 
                                                  & (IData)(vlSelf->div__DOT__y_abs_reg))))))));
        bufp->chgCData(oldp+918,(((((0xfU == (IData)(vlSelf->div__DOT__lzd1__DOT__lzd_32_1__DOT__lzd_16_0__DOT__z)) 
                                    & (0xfU == (IData)(vlSelf->div__DOT__lzd1__DOT__lzd_32_1__DOT__lzd_16_1__DOT__z))) 
                                   << 1U) | (IData)(vlSelf->div__DOT__lzd1__DOT____Vcellout__lzd_32_0____pinNumber3))),2);
        bufp->chgIData(oldp+919,((IData)((vlSelf->div__DOT__x_abs_reg 
                                          >> 0x20U))),32);
        bufp->chgBit(oldp+920,(vlSelf->div__DOT__lzd1__DOT____Vcellout__lzd_32_0____pinNumber3));
        bufp->chgCData(oldp+921,((((IData)((0xfU == (IData)(vlSelf->div__DOT__lzd1__DOT__lzd_32_0__DOT__lzd_16_1__DOT__z))) 
                                   << 1U) | (0xfU == (IData)(vlSelf->div__DOT__lzd1__DOT__lzd_32_0__DOT__lzd_16_0__DOT__z)))),2);
        bufp->chgSData(oldp+922,((0xffffU & (IData)(
                                                    (vlSelf->div__DOT__x_abs_reg 
                                                     >> 0x30U)))),16);
        bufp->chgBit(oldp+923,((0xfU == (IData)(vlSelf->div__DOT__lzd1__DOT__lzd_32_0__DOT__lzd_16_0__DOT__z))));
        bufp->chgCData(oldp+924,(vlSelf->div__DOT__lzd1__DOT__lzd_32_0__DOT__lzd_16_0__DOT__z),4);
        bufp->chgCData(oldp+925,(vlSelf->div__DOT__lzd1__DOT__lzd_32_0__DOT__lzd_16_0__DOT__out_2[0]),2);
        bufp->chgCData(oldp+926,(vlSelf->div__DOT__lzd1__DOT__lzd_32_0__DOT__lzd_16_0__DOT__out_2[1]),2);
        bufp->chgCData(oldp+927,(vlSelf->div__DOT__lzd1__DOT__lzd_32_0__DOT__lzd_16_0__DOT__out_2[2]),2);
        bufp->chgCData(oldp+928,(vlSelf->div__DOT__lzd1__DOT__lzd_32_0__DOT__lzd_16_0__DOT__out_2[3]),2);
        bufp->chgCData(oldp+929,((0xfU & (IData)((vlSelf->div__DOT__x_abs_reg 
                                                  >> 0x3cU)))),4);
        bufp->chgCData(oldp+930,(((2U & ((~ (IData)(
                                                    (0ULL 
                                                     != 
                                                     (0xc000000000000000ULL 
                                                      & vlSelf->div__DOT__x_abs_reg)))) 
                                         << 1U)) | (IData)(
                                                           ((~ 
                                                             (vlSelf->div__DOT__x_abs_reg 
                                                              >> 0x3fU)) 
                                                            & (0x2000000000000000ULL 
                                                               != 
                                                               (0x6000000000000000ULL 
                                                                & vlSelf->div__DOT__x_abs_reg)))))),2);
        bufp->chgBit(oldp+931,((1U & (~ (IData)((0U 
                                                 != 
                                                 (0xfU 
                                                  & (IData)(
                                                            (vlSelf->div__DOT__x_abs_reg 
                                                             >> 0x3cU)))))))));
        bufp->chgCData(oldp+932,((0xfU & (IData)((vlSelf->div__DOT__x_abs_reg 
                                                  >> 0x38U)))),4);
        bufp->chgCData(oldp+933,(((2U & ((~ (IData)(
                                                    (0ULL 
                                                     != 
                                                     (0xc00000000000000ULL 
                                                      & vlSelf->div__DOT__x_abs_reg)))) 
                                         << 1U)) | (IData)(
                                                           ((~ 
                                                             (vlSelf->div__DOT__x_abs_reg 
                                                              >> 0x3bU)) 
                                                            & (0x200000000000000ULL 
                                                               != 
                                                               (0x600000000000000ULL 
                                                                & vlSelf->div__DOT__x_abs_reg)))))),2);
        bufp->chgBit(oldp+934,((1U & (~ (IData)((0U 
                                                 != 
                                                 (0xfU 
                                                  & (IData)(
                                                            (vlSelf->div__DOT__x_abs_reg 
                                                             >> 0x38U)))))))));
        bufp->chgCData(oldp+935,((0xfU & (IData)((vlSelf->div__DOT__x_abs_reg 
                                                  >> 0x34U)))),4);
        bufp->chgCData(oldp+936,(((2U & ((~ (IData)(
                                                    (0ULL 
                                                     != 
                                                     (0xc0000000000000ULL 
                                                      & vlSelf->div__DOT__x_abs_reg)))) 
                                         << 1U)) | (IData)(
                                                           ((~ 
                                                             (vlSelf->div__DOT__x_abs_reg 
                                                              >> 0x37U)) 
                                                            & (0x20000000000000ULL 
                                                               != 
                                                               (0x60000000000000ULL 
                                                                & vlSelf->div__DOT__x_abs_reg)))))),2);
        bufp->chgBit(oldp+937,((1U & (~ (IData)((0U 
                                                 != 
                                                 (0xfU 
                                                  & (IData)(
                                                            (vlSelf->div__DOT__x_abs_reg 
                                                             >> 0x34U)))))))));
        bufp->chgCData(oldp+938,((0xfU & (IData)((vlSelf->div__DOT__x_abs_reg 
                                                  >> 0x30U)))),4);
        bufp->chgCData(oldp+939,(((2U & ((~ (IData)(
                                                    (0ULL 
                                                     != 
                                                     (0xc000000000000ULL 
                                                      & vlSelf->div__DOT__x_abs_reg)))) 
                                         << 1U)) | (IData)(
                                                           ((~ 
                                                             (vlSelf->div__DOT__x_abs_reg 
                                                              >> 0x33U)) 
                                                            & (0x2000000000000ULL 
                                                               != 
                                                               (0x6000000000000ULL 
                                                                & vlSelf->div__DOT__x_abs_reg)))))),2);
        bufp->chgBit(oldp+940,((1U & (~ (IData)((0U 
                                                 != 
                                                 (0xfU 
                                                  & (IData)(
                                                            (vlSelf->div__DOT__x_abs_reg 
                                                             >> 0x30U)))))))));
        bufp->chgSData(oldp+941,((0xffffU & (IData)(
                                                    (vlSelf->div__DOT__x_abs_reg 
                                                     >> 0x20U)))),16);
        bufp->chgBit(oldp+942,((0xfU == (IData)(vlSelf->div__DOT__lzd1__DOT__lzd_32_0__DOT__lzd_16_1__DOT__z))));
        bufp->chgCData(oldp+943,(vlSelf->div__DOT__lzd1__DOT__lzd_32_0__DOT__lzd_16_1__DOT__z),4);
        bufp->chgCData(oldp+944,(vlSelf->div__DOT__lzd1__DOT__lzd_32_0__DOT__lzd_16_1__DOT__out_2[0]),2);
        bufp->chgCData(oldp+945,(vlSelf->div__DOT__lzd1__DOT__lzd_32_0__DOT__lzd_16_1__DOT__out_2[1]),2);
        bufp->chgCData(oldp+946,(vlSelf->div__DOT__lzd1__DOT__lzd_32_0__DOT__lzd_16_1__DOT__out_2[2]),2);
        bufp->chgCData(oldp+947,(vlSelf->div__DOT__lzd1__DOT__lzd_32_0__DOT__lzd_16_1__DOT__out_2[3]),2);
        bufp->chgCData(oldp+948,((0xfU & (IData)((vlSelf->div__DOT__x_abs_reg 
                                                  >> 0x2cU)))),4);
        bufp->chgCData(oldp+949,(((2U & ((~ (IData)(
                                                    (0ULL 
                                                     != 
                                                     (0xc00000000000ULL 
                                                      & vlSelf->div__DOT__x_abs_reg)))) 
                                         << 1U)) | (IData)(
                                                           ((~ 
                                                             (vlSelf->div__DOT__x_abs_reg 
                                                              >> 0x2fU)) 
                                                            & (0x200000000000ULL 
                                                               != 
                                                               (0x600000000000ULL 
                                                                & vlSelf->div__DOT__x_abs_reg)))))),2);
        bufp->chgBit(oldp+950,((1U & (~ (IData)((0U 
                                                 != 
                                                 (0xfU 
                                                  & (IData)(
                                                            (vlSelf->div__DOT__x_abs_reg 
                                                             >> 0x2cU)))))))));
        bufp->chgCData(oldp+951,((0xfU & (IData)((vlSelf->div__DOT__x_abs_reg 
                                                  >> 0x28U)))),4);
        bufp->chgCData(oldp+952,(((2U & ((~ (IData)(
                                                    (0ULL 
                                                     != 
                                                     (0xc0000000000ULL 
                                                      & vlSelf->div__DOT__x_abs_reg)))) 
                                         << 1U)) | (IData)(
                                                           ((~ 
                                                             (vlSelf->div__DOT__x_abs_reg 
                                                              >> 0x2bU)) 
                                                            & (0x20000000000ULL 
                                                               != 
                                                               (0x60000000000ULL 
                                                                & vlSelf->div__DOT__x_abs_reg)))))),2);
        bufp->chgBit(oldp+953,((1U & (~ (IData)((0U 
                                                 != 
                                                 (0xfU 
                                                  & (IData)(
                                                            (vlSelf->div__DOT__x_abs_reg 
                                                             >> 0x28U)))))))));
        bufp->chgCData(oldp+954,((0xfU & (IData)((vlSelf->div__DOT__x_abs_reg 
                                                  >> 0x24U)))),4);
        bufp->chgCData(oldp+955,(((2U & ((~ (IData)(
                                                    (0ULL 
                                                     != 
                                                     (0xc000000000ULL 
                                                      & vlSelf->div__DOT__x_abs_reg)))) 
                                         << 1U)) | (IData)(
                                                           ((~ 
                                                             (vlSelf->div__DOT__x_abs_reg 
                                                              >> 0x27U)) 
                                                            & (0x2000000000ULL 
                                                               != 
                                                               (0x6000000000ULL 
                                                                & vlSelf->div__DOT__x_abs_reg)))))),2);
        bufp->chgBit(oldp+956,((1U & (~ (IData)((0U 
                                                 != 
                                                 (0xfU 
                                                  & (IData)(
                                                            (vlSelf->div__DOT__x_abs_reg 
                                                             >> 0x24U)))))))));
        bufp->chgCData(oldp+957,((0xfU & (IData)((vlSelf->div__DOT__x_abs_reg 
                                                  >> 0x20U)))),4);
        bufp->chgCData(oldp+958,(((2U & ((~ (IData)(
                                                    (0ULL 
                                                     != 
                                                     (0xc00000000ULL 
                                                      & vlSelf->div__DOT__x_abs_reg)))) 
                                         << 1U)) | (IData)(
                                                           ((~ 
                                                             (vlSelf->div__DOT__x_abs_reg 
                                                              >> 0x23U)) 
                                                            & (0x200000000ULL 
                                                               != 
                                                               (0x600000000ULL 
                                                                & vlSelf->div__DOT__x_abs_reg)))))),2);
        bufp->chgBit(oldp+959,((1U & (~ (IData)((0U 
                                                 != 
                                                 (0xfU 
                                                  & (IData)(
                                                            (vlSelf->div__DOT__x_abs_reg 
                                                             >> 0x20U)))))))));
        bufp->chgIData(oldp+960,((IData)(vlSelf->div__DOT__x_abs_reg)),32);
        bufp->chgBit(oldp+961,(((0xfU == (IData)(vlSelf->div__DOT__lzd1__DOT__lzd_32_1__DOT__lzd_16_0__DOT__z)) 
                                & (0xfU == (IData)(vlSelf->div__DOT__lzd1__DOT__lzd_32_1__DOT__lzd_16_1__DOT__z)))));
        bufp->chgCData(oldp+962,((((IData)((0xfU == (IData)(vlSelf->div__DOT__lzd1__DOT__lzd_32_1__DOT__lzd_16_1__DOT__z))) 
                                   << 1U) | (0xfU == (IData)(vlSelf->div__DOT__lzd1__DOT__lzd_32_1__DOT__lzd_16_0__DOT__z)))),2);
        bufp->chgSData(oldp+963,((0xffffU & (IData)(
                                                    (vlSelf->div__DOT__x_abs_reg 
                                                     >> 0x10U)))),16);
        bufp->chgBit(oldp+964,((0xfU == (IData)(vlSelf->div__DOT__lzd1__DOT__lzd_32_1__DOT__lzd_16_0__DOT__z))));
        bufp->chgCData(oldp+965,(vlSelf->div__DOT__lzd1__DOT__lzd_32_1__DOT__lzd_16_0__DOT__z),4);
        bufp->chgCData(oldp+966,(vlSelf->div__DOT__lzd1__DOT__lzd_32_1__DOT__lzd_16_0__DOT__out_2[0]),2);
        bufp->chgCData(oldp+967,(vlSelf->div__DOT__lzd1__DOT__lzd_32_1__DOT__lzd_16_0__DOT__out_2[1]),2);
        bufp->chgCData(oldp+968,(vlSelf->div__DOT__lzd1__DOT__lzd_32_1__DOT__lzd_16_0__DOT__out_2[2]),2);
        bufp->chgCData(oldp+969,(vlSelf->div__DOT__lzd1__DOT__lzd_32_1__DOT__lzd_16_0__DOT__out_2[3]),2);
        bufp->chgCData(oldp+970,((0xfU & (IData)((vlSelf->div__DOT__x_abs_reg 
                                                  >> 0x1cU)))),4);
        bufp->chgCData(oldp+971,(((2U & ((~ (IData)(
                                                    (0ULL 
                                                     != 
                                                     (0xc0000000ULL 
                                                      & vlSelf->div__DOT__x_abs_reg)))) 
                                         << 1U)) | (IData)(
                                                           ((~ 
                                                             (vlSelf->div__DOT__x_abs_reg 
                                                              >> 0x1fU)) 
                                                            & (0x20000000ULL 
                                                               != 
                                                               (0x60000000ULL 
                                                                & vlSelf->div__DOT__x_abs_reg)))))),2);
        bufp->chgBit(oldp+972,((1U & (~ (IData)((0U 
                                                 != 
                                                 (0xfU 
                                                  & (IData)(
                                                            (vlSelf->div__DOT__x_abs_reg 
                                                             >> 0x1cU)))))))));
        bufp->chgCData(oldp+973,((0xfU & (IData)((vlSelf->div__DOT__x_abs_reg 
                                                  >> 0x18U)))),4);
        bufp->chgCData(oldp+974,(((2U & ((~ (IData)(
                                                    (0ULL 
                                                     != 
                                                     (0xc000000ULL 
                                                      & vlSelf->div__DOT__x_abs_reg)))) 
                                         << 1U)) | (IData)(
                                                           ((~ 
                                                             (vlSelf->div__DOT__x_abs_reg 
                                                              >> 0x1bU)) 
                                                            & (0x2000000ULL 
                                                               != 
                                                               (0x6000000ULL 
                                                                & vlSelf->div__DOT__x_abs_reg)))))),2);
        bufp->chgBit(oldp+975,((1U & (~ (IData)((0U 
                                                 != 
                                                 (0xfU 
                                                  & (IData)(
                                                            (vlSelf->div__DOT__x_abs_reg 
                                                             >> 0x18U)))))))));
        bufp->chgCData(oldp+976,((0xfU & (IData)((vlSelf->div__DOT__x_abs_reg 
                                                  >> 0x14U)))),4);
        bufp->chgCData(oldp+977,(((2U & ((~ (IData)(
                                                    (0ULL 
                                                     != 
                                                     (0xc00000ULL 
                                                      & vlSelf->div__DOT__x_abs_reg)))) 
                                         << 1U)) | (IData)(
                                                           ((~ 
                                                             (vlSelf->div__DOT__x_abs_reg 
                                                              >> 0x17U)) 
                                                            & (0x200000ULL 
                                                               != 
                                                               (0x600000ULL 
                                                                & vlSelf->div__DOT__x_abs_reg)))))),2);
        bufp->chgBit(oldp+978,((1U & (~ (IData)((0U 
                                                 != 
                                                 (0xfU 
                                                  & (IData)(
                                                            (vlSelf->div__DOT__x_abs_reg 
                                                             >> 0x14U)))))))));
        bufp->chgCData(oldp+979,((0xfU & (IData)((vlSelf->div__DOT__x_abs_reg 
                                                  >> 0x10U)))),4);
        bufp->chgCData(oldp+980,(((2U & ((~ (IData)(
                                                    (0ULL 
                                                     != 
                                                     (0xc0000ULL 
                                                      & vlSelf->div__DOT__x_abs_reg)))) 
                                         << 1U)) | (IData)(
                                                           ((~ 
                                                             (vlSelf->div__DOT__x_abs_reg 
                                                              >> 0x13U)) 
                                                            & (0x20000ULL 
                                                               != 
                                                               (0x60000ULL 
                                                                & vlSelf->div__DOT__x_abs_reg)))))),2);
        bufp->chgBit(oldp+981,((1U & (~ (IData)((0U 
                                                 != 
                                                 (0xfU 
                                                  & (IData)(
                                                            (vlSelf->div__DOT__x_abs_reg 
                                                             >> 0x10U)))))))));
        bufp->chgSData(oldp+982,((0xffffU & (IData)(vlSelf->div__DOT__x_abs_reg))),16);
        bufp->chgBit(oldp+983,((0xfU == (IData)(vlSelf->div__DOT__lzd1__DOT__lzd_32_1__DOT__lzd_16_1__DOT__z))));
        bufp->chgCData(oldp+984,(vlSelf->div__DOT__lzd1__DOT__lzd_32_1__DOT__lzd_16_1__DOT__z),4);
        bufp->chgCData(oldp+985,(vlSelf->div__DOT__lzd1__DOT__lzd_32_1__DOT__lzd_16_1__DOT__out_2[0]),2);
        bufp->chgCData(oldp+986,(vlSelf->div__DOT__lzd1__DOT__lzd_32_1__DOT__lzd_16_1__DOT__out_2[1]),2);
        bufp->chgCData(oldp+987,(vlSelf->div__DOT__lzd1__DOT__lzd_32_1__DOT__lzd_16_1__DOT__out_2[2]),2);
        bufp->chgCData(oldp+988,(vlSelf->div__DOT__lzd1__DOT__lzd_32_1__DOT__lzd_16_1__DOT__out_2[3]),2);
        bufp->chgCData(oldp+989,((0xfU & (IData)((vlSelf->div__DOT__x_abs_reg 
                                                  >> 0xcU)))),4);
        bufp->chgCData(oldp+990,(((2U & ((~ (IData)(
                                                    (0ULL 
                                                     != 
                                                     (0xc000ULL 
                                                      & vlSelf->div__DOT__x_abs_reg)))) 
                                         << 1U)) | (IData)(
                                                           ((~ 
                                                             (vlSelf->div__DOT__x_abs_reg 
                                                              >> 0xfU)) 
                                                            & (0x2000ULL 
                                                               != 
                                                               (0x6000ULL 
                                                                & vlSelf->div__DOT__x_abs_reg)))))),2);
        bufp->chgBit(oldp+991,((1U & (~ (IData)((0U 
                                                 != 
                                                 (0xfU 
                                                  & (IData)(
                                                            (vlSelf->div__DOT__x_abs_reg 
                                                             >> 0xcU)))))))));
        bufp->chgCData(oldp+992,((0xfU & (IData)((vlSelf->div__DOT__x_abs_reg 
                                                  >> 8U)))),4);
        bufp->chgCData(oldp+993,(((2U & ((~ (IData)(
                                                    (0ULL 
                                                     != 
                                                     (0xc00ULL 
                                                      & vlSelf->div__DOT__x_abs_reg)))) 
                                         << 1U)) | (IData)(
                                                           ((~ 
                                                             (vlSelf->div__DOT__x_abs_reg 
                                                              >> 0xbU)) 
                                                            & (0x200ULL 
                                                               != 
                                                               (0x600ULL 
                                                                & vlSelf->div__DOT__x_abs_reg)))))),2);
        bufp->chgBit(oldp+994,((1U & (~ (IData)((0U 
                                                 != 
                                                 (0xfU 
                                                  & (IData)(
                                                            (vlSelf->div__DOT__x_abs_reg 
                                                             >> 8U)))))))));
        bufp->chgCData(oldp+995,((0xfU & (IData)((vlSelf->div__DOT__x_abs_reg 
                                                  >> 4U)))),4);
        bufp->chgCData(oldp+996,(((2U & ((~ (IData)(
                                                    (0ULL 
                                                     != 
                                                     (0xc0ULL 
                                                      & vlSelf->div__DOT__x_abs_reg)))) 
                                         << 1U)) | (IData)(
                                                           ((~ 
                                                             (vlSelf->div__DOT__x_abs_reg 
                                                              >> 7U)) 
                                                            & (0x20ULL 
                                                               != 
                                                               (0x60ULL 
                                                                & vlSelf->div__DOT__x_abs_reg)))))),2);
        bufp->chgBit(oldp+997,((1U & (~ (IData)((0U 
                                                 != 
                                                 (0xfU 
                                                  & (IData)(
                                                            (vlSelf->div__DOT__x_abs_reg 
                                                             >> 4U)))))))));
        bufp->chgCData(oldp+998,((0xfU & (IData)(vlSelf->div__DOT__x_abs_reg))),4);
        bufp->chgCData(oldp+999,(((2U & ((~ (IData)(
                                                    (0ULL 
                                                     != 
                                                     (0xcULL 
                                                      & vlSelf->div__DOT__x_abs_reg)))) 
                                         << 1U)) | (IData)(
                                                           ((~ 
                                                             (vlSelf->div__DOT__x_abs_reg 
                                                              >> 3U)) 
                                                            & (2ULL 
                                                               != 
                                                               (6ULL 
                                                                & vlSelf->div__DOT__x_abs_reg)))))),2);
        bufp->chgBit(oldp+1000,((1U & (~ (IData)((0U 
                                                  != 
                                                  (0xfU 
                                                   & (IData)(vlSelf->div__DOT__x_abs_reg))))))));
    }
    bufp->chgBit(oldp+1001,(vlSelf->clk));
    bufp->chgBit(oldp+1002,(vlSelf->rst_n));
    bufp->chgBit(oldp+1003,(vlSelf->valid));
    bufp->chgBit(oldp+1004,(vlSelf->sign));
    bufp->chgQData(oldp+1005,(vlSelf->x),64);
    bufp->chgQData(oldp+1007,(vlSelf->y),64);
    bufp->chgQData(oldp+1009,(vlSelf->result),64);
    bufp->chgQData(oldp+1011,(vlSelf->rem),64);
    bufp->chgBit(oldp+1013,(vlSelf->finish));
    bufp->chgQData(oldp+1014,(((vlSelf->x ^ (- (QData)((IData)(vlSelf->div__DOT____Vcellinp__oppo0____pinNumber2)))) 
                               + (QData)((IData)(vlSelf->div__DOT____Vcellinp__oppo0____pinNumber2)))),64);
    bufp->chgQData(oldp+1016,(((vlSelf->y ^ (- (QData)((IData)(vlSelf->div__DOT____Vcellinp__oppo1____pinNumber2)))) 
                               + (QData)((IData)(vlSelf->div__DOT____Vcellinp__oppo1____pinNumber2)))),64);
    bufp->chgBit(oldp+1018,((IData)(((vlSelf->x ^ vlSelf->y) 
                                     >> 0x3fU))));
    bufp->chgBit(oldp+1019,((1U & (IData)((vlSelf->x 
                                           >> 0x3fU)))));
    bufp->chgCData(oldp+1020,(vlSelf->div__DOT__next_state),5);
    bufp->chgCData(oldp+1021,((0x3fU & ((IData)(vlSelf->div__DOT__shift_x_tmp) 
                                        - (IData)(2U)))),6);
    bufp->chgCData(oldp+1022,(vlSelf->div__DOT__shift_y),6);
    bufp->chgCData(oldp+1023,(vlSelf->div__DOT__shift_x_tmp),6);
    bufp->chgCData(oldp+1024,(vlSelf->div__DOT__shift),6);
    bufp->chgBit(oldp+1025,(((IData)(vlSelf->div__DOT__cout) 
                             == (0x3fU & ((IData)(vlSelf->div__DOT__shift) 
                                          - (IData)(1U))))));
    bufp->chgQData(oldp+1026,(vlSelf->div__DOT__r_abs),64);
    bufp->chgCData(oldp+1028,(vlSelf->div__DOT__lzd0__DOT__out_3_0[0]),5);
    bufp->chgCData(oldp+1029,(vlSelf->div__DOT__lzd0__DOT__out_3_0[1]),5);
    bufp->chgCData(oldp+1030,((((IData)((0xfU == (IData)(vlSelf->div__DOT__lzd0__DOT__lzd_32_0__DOT__lzd_16_0__DOT__z))) 
                                << 4U) | (((- (IData)(
                                                      (1U 
                                                       & (~ (IData)(
                                                                    (0xfU 
                                                                     == (IData)(vlSelf->div__DOT__lzd0__DOT__lzd_32_0__DOT__lzd_16_0__DOT__z))))))) 
                                           & (IData)(vlSelf->div__DOT__lzd0__DOT__lzd_32_0__DOT____Vcellout__lzd_16_0____pinNumber2)) 
                                          | ((- (IData)(
                                                        (0xfU 
                                                         == (IData)(vlSelf->div__DOT__lzd0__DOT__lzd_32_0__DOT__lzd_16_0__DOT__z)))) 
                                             & (IData)(vlSelf->div__DOT__lzd0__DOT__lzd_32_0__DOT____Vcellout__lzd_16_1____pinNumber2))))),5);
    bufp->chgCData(oldp+1031,(vlSelf->div__DOT__lzd0__DOT__lzd_32_0__DOT__out_3_0[0]),4);
    bufp->chgCData(oldp+1032,(vlSelf->div__DOT__lzd0__DOT__lzd_32_0__DOT__out_3_0[1]),4);
    bufp->chgCData(oldp+1033,(vlSelf->div__DOT__lzd0__DOT__lzd_32_0__DOT____Vcellout__lzd_16_0____pinNumber2),4);
    bufp->chgCData(oldp+1034,(vlSelf->div__DOT__lzd0__DOT__lzd_32_0__DOT____Vcellout__lzd_16_1____pinNumber2),4);
    bufp->chgCData(oldp+1035,((((IData)((0xfU == (IData)(vlSelf->div__DOT__lzd0__DOT__lzd_32_1__DOT__lzd_16_0__DOT__z))) 
                                << 4U) | (((- (IData)(
                                                      (1U 
                                                       & (~ (IData)(
                                                                    (0xfU 
                                                                     == (IData)(vlSelf->div__DOT__lzd0__DOT__lzd_32_1__DOT__lzd_16_0__DOT__z))))))) 
                                           & (IData)(vlSelf->div__DOT__lzd0__DOT__lzd_32_1__DOT____Vcellout__lzd_16_0____pinNumber2)) 
                                          | ((- (IData)(
                                                        (0xfU 
                                                         == (IData)(vlSelf->div__DOT__lzd0__DOT__lzd_32_1__DOT__lzd_16_0__DOT__z)))) 
                                             & (IData)(vlSelf->div__DOT__lzd0__DOT__lzd_32_1__DOT____Vcellout__lzd_16_1____pinNumber2))))),5);
    bufp->chgCData(oldp+1036,(vlSelf->div__DOT__lzd0__DOT__lzd_32_1__DOT__out_3_0[0]),4);
    bufp->chgCData(oldp+1037,(vlSelf->div__DOT__lzd0__DOT__lzd_32_1__DOT__out_3_0[1]),4);
    bufp->chgCData(oldp+1038,(vlSelf->div__DOT__lzd0__DOT__lzd_32_1__DOT____Vcellout__lzd_16_0____pinNumber2),4);
    bufp->chgCData(oldp+1039,(vlSelf->div__DOT__lzd0__DOT__lzd_32_1__DOT____Vcellout__lzd_16_1____pinNumber2),4);
    bufp->chgCData(oldp+1040,(vlSelf->div__DOT__lzd1__DOT__out_3_0[0]),5);
    bufp->chgCData(oldp+1041,(vlSelf->div__DOT__lzd1__DOT__out_3_0[1]),5);
    bufp->chgCData(oldp+1042,((((IData)((0xfU == (IData)(vlSelf->div__DOT__lzd1__DOT__lzd_32_0__DOT__lzd_16_0__DOT__z))) 
                                << 4U) | (((- (IData)(
                                                      (1U 
                                                       & (~ (IData)(
                                                                    (0xfU 
                                                                     == (IData)(vlSelf->div__DOT__lzd1__DOT__lzd_32_0__DOT__lzd_16_0__DOT__z))))))) 
                                           & (IData)(vlSelf->div__DOT__lzd1__DOT__lzd_32_0__DOT____Vcellout__lzd_16_0____pinNumber2)) 
                                          | ((- (IData)(
                                                        (0xfU 
                                                         == (IData)(vlSelf->div__DOT__lzd1__DOT__lzd_32_0__DOT__lzd_16_0__DOT__z)))) 
                                             & (IData)(vlSelf->div__DOT__lzd1__DOT__lzd_32_0__DOT____Vcellout__lzd_16_1____pinNumber2))))),5);
    bufp->chgCData(oldp+1043,(vlSelf->div__DOT__lzd1__DOT__lzd_32_0__DOT__out_3_0[0]),4);
    bufp->chgCData(oldp+1044,(vlSelf->div__DOT__lzd1__DOT__lzd_32_0__DOT__out_3_0[1]),4);
    bufp->chgCData(oldp+1045,(vlSelf->div__DOT__lzd1__DOT__lzd_32_0__DOT____Vcellout__lzd_16_0____pinNumber2),4);
    bufp->chgCData(oldp+1046,(vlSelf->div__DOT__lzd1__DOT__lzd_32_0__DOT____Vcellout__lzd_16_1____pinNumber2),4);
    bufp->chgCData(oldp+1047,((((IData)((0xfU == (IData)(vlSelf->div__DOT__lzd1__DOT__lzd_32_1__DOT__lzd_16_0__DOT__z))) 
                                << 4U) | (((- (IData)(
                                                      (1U 
                                                       & (~ (IData)(
                                                                    (0xfU 
                                                                     == (IData)(vlSelf->div__DOT__lzd1__DOT__lzd_32_1__DOT__lzd_16_0__DOT__z))))))) 
                                           & (IData)(vlSelf->div__DOT__lzd1__DOT__lzd_32_1__DOT____Vcellout__lzd_16_0____pinNumber2)) 
                                          | ((- (IData)(
                                                        (0xfU 
                                                         == (IData)(vlSelf->div__DOT__lzd1__DOT__lzd_32_1__DOT__lzd_16_0__DOT__z)))) 
                                             & (IData)(vlSelf->div__DOT__lzd1__DOT__lzd_32_1__DOT____Vcellout__lzd_16_1____pinNumber2))))),5);
    bufp->chgCData(oldp+1048,(vlSelf->div__DOT__lzd1__DOT__lzd_32_1__DOT__out_3_0[0]),4);
    bufp->chgCData(oldp+1049,(vlSelf->div__DOT__lzd1__DOT__lzd_32_1__DOT__out_3_0[1]),4);
    bufp->chgCData(oldp+1050,(vlSelf->div__DOT__lzd1__DOT__lzd_32_1__DOT____Vcellout__lzd_16_0____pinNumber2),4);
    bufp->chgCData(oldp+1051,(vlSelf->div__DOT__lzd1__DOT__lzd_32_1__DOT____Vcellout__lzd_16_1____pinNumber2),4);
}

void Vdiv___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdiv___024root__trace_cleanup\n"); );
    // Init
    Vdiv___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdiv___024root*>(voidSelf);
    Vdiv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
