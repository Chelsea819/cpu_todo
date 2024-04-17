// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VBrent_Kung_Adder__Syms.h"


void VBrent_Kung_Adder___024root__trace_chg_sub_0(VBrent_Kung_Adder___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VBrent_Kung_Adder___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBrent_Kung_Adder___024root__trace_chg_top_0\n"); );
    // Init
    VBrent_Kung_Adder___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VBrent_Kung_Adder___024root*>(voidSelf);
    VBrent_Kung_Adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VBrent_Kung_Adder___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void VBrent_Kung_Adder___024root__trace_chg_sub_0(VBrent_Kung_Adder___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VBrent_Kung_Adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBrent_Kung_Adder___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    VlWide<3>/*95:0*/ __Vtemp_hacfc60eb__0;
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[0xcU]))) {
        bufp->chgBit(oldp+0,(vlSelf->Brent_Kung_Adder__DOT____Vcellout__cin_generation__BRA__0__KET____DOT__f__cin));
        bufp->chgBit(oldp+1,(vlSelf->Brent_Kung_Adder__DOT____Vcellout__cin_generation__BRA__1__KET____DOT__f__cin));
        bufp->chgBit(oldp+2,(vlSelf->Brent_Kung_Adder__DOT____Vcellout__cin_generation__BRA__2__KET____DOT__f__cin));
        bufp->chgBit(oldp+3,(vlSelf->Brent_Kung_Adder__DOT____Vcellout__cin_generation__BRA__3__KET____DOT__f__cin));
        bufp->chgBit(oldp+4,(vlSelf->Brent_Kung_Adder__DOT____Vcellout__cin_generation__BRA__4__KET____DOT__f__cin));
        bufp->chgBit(oldp+5,(vlSelf->Brent_Kung_Adder__DOT____Vcellout__cin_generation__BRA__5__KET____DOT__f__cin));
        bufp->chgBit(oldp+6,(vlSelf->Brent_Kung_Adder__DOT____Vcellout__cin_generation__BRA__6__KET____DOT__f__cin));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgSData(oldp+7,(((((((IData)(vlSelf->Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__parallel_stitch_up__BRA__14__KET____DOT__parallel_stitch_up_produce__DOT__f__DOT____VdfgTmp_hef005df1__0) 
                                    & (IData)(vlSelf->__VdfgTmp_h02636d51__0)) 
                                   | (IData)(vlSelf->__VdfgTmp_h21f0d06f__0)) 
                                  << 0xfU) | (((IData)(vlSelf->Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__parallel_stitch_up__BRA__14__KET____DOT__parallel_stitch_up_produce__DOT__f__DOT____VdfgTmp_hef005df1__0) 
                                               & (IData)(vlSelf->__VdfgTmp_h08445fd0__0)) 
                                              << 0xeU)) 
                                | (((IData)(vlSelf->__VdfgTmp_h1f5a1e66__0) 
                                    << 8U) | (IData)(vlSelf->Brent_Kung_Adder__DOT__t1__DOT____Vcellout__recursive_case__DOT__recursion_lsbh__r)))),16);
        bufp->chgSData(oldp+8,((((((IData)(vlSelf->__VdfgTmp_h5f43e680__0) 
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
                                                                          & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT____VdfgTmp_h8a1e19e7__0))))))))))))))) 
                                  << 0xfU) | ((IData)(vlSelf->Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__recursion_msbh__DOT__recursive_case__DOT__recursion_msbh__DOT__trival_case__DOT__f__DOT____VdfgTmp_hef005df1__0) 
                                              << 0xeU)) 
                                | (((IData)(vlSelf->Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__recursion_msbh__DOT__recursive_case__DOT__recursion_msbh__DOT____Vcellinp__trival_case__DOT__f__ql) 
                                    << 0xcU) | (((((IData)(vlSelf->__VdfgTmp_h8c84fcd4__0) 
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
                                                                                & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT____VdfgTmp_h8a1e19e7__0))))))))))))))) 
                                                  << 0xbU) 
                                                 | ((IData)(vlSelf->Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__recursion_msbh__DOT__recursive_case__DOT__recursion_lsbh__DOT__trival_case__DOT__f__DOT____VdfgTmp_hef005df1__0) 
                                                    << 0xaU)) 
                                                | ((((IData)(vlSelf->__VdfgTmp_h0d9cf317__0) 
                                                     << 9U) 
                                                    | ((IData)(vlSelf->__VdfgTmp_ha2d76e15__0) 
                                                       << 8U)) 
                                                   | (((((IData)(vlSelf->__VdfgTmp_hbe741e55__0) 
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
                                                                                & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT____VdfgTmp_h8a1e19e7__0))))))))))))))) 
                                                        << 7U) 
                                                       | ((IData)(vlSelf->Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__recursion_lsbh__DOT__recursive_case__DOT__recursion_msbh__DOT__trival_case__DOT__f__DOT____VdfgTmp_hef005df1__0) 
                                                          << 6U)) 
                                                      | (((IData)(vlSelf->Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__recursion_lsbh__DOT__recursive_case__DOT__recursion_msbh__DOT____Vcellinp__trival_case__DOT__f__ql) 
                                                          << 4U) 
                                                         | (((((IData)(vlSelf->__VdfgTmp_he0cc5aca__0) 
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
                                                                                & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT____VdfgTmp_h8a1e19e7__0))))))))))))))) 
                                                              << 3U) 
                                                             | ((IData)(vlSelf->Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__recursion_lsbh__DOT__recursive_case__DOT__recursion_lsbh__DOT__trival_case__DOT__f__DOT____VdfgTmp_hef005df1__0) 
                                                                << 2U)) 
                                                            | (((IData)(vlSelf->__VdfgTmp_hf48b56b2__0) 
                                                                << 1U) 
                                                               | (IData)(vlSelf->__VdfgTmp_hb04d5094__0)))))))))),16);
        bufp->chgCData(oldp+9,((((IData)(vlSelf->__VdfgTmp_hf48b56b2__0) 
                                 << 1U) | (IData)(vlSelf->__VdfgTmp_hb04d5094__0))),2);
        bufp->chgSData(oldp+10,(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT__q),16);
        bufp->chgCData(oldp+11,((((IData)(vlSelf->__VdfgTmp_h935bb1ff__0) 
                                  << 1U) | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0))),2);
        bufp->chgCData(oldp+12,((((IData)(vlSelf->__VdfgTmp_h9eea7908__0) 
                                  << 1U) | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h8a1e19e7__0))),2);
        bufp->chgCData(oldp+13,((((IData)(vlSelf->__VdfgTmp_hebc854fa__0) 
                                  << 1U) | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_hbf2851e6__0))),2);
        bufp->chgCData(oldp+14,((((IData)(vlSelf->__VdfgTmp_heb1783bd__0) 
                                  << 1U) | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h352e0dcb__0))),2);
        bufp->chgCData(oldp+15,((((IData)(vlSelf->__VdfgTmp_he1be218e__0) 
                                  << 1U) | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h984bded2__0))),2);
        bufp->chgCData(oldp+16,((((IData)(vlSelf->__VdfgTmp_hb8898269__0) 
                                  << 1U) | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_hc905584f__0))),2);
        bufp->chgCData(oldp+17,((((IData)(vlSelf->__VdfgTmp_hbbf91651__0) 
                                  << 1U) | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h1ce9aeec__0))),2);
        bufp->chgCData(oldp+18,((((IData)(vlSelf->__VdfgTmp_hbb175292__0) 
                                  << 1U) | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h166b2609__0))),2);
        bufp->chgCData(oldp+19,(((((IData)(vlSelf->__VdfgTmp_he0cc5aca__0) 
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
                                                                          & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT____VdfgTmp_h8a1e19e7__0))))))))))))))) 
                                  << 1U) | (IData)(vlSelf->Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__recursion_lsbh__DOT__recursive_case__DOT__recursion_lsbh__DOT__trival_case__DOT__f__DOT____VdfgTmp_hef005df1__0))),2);
        bufp->chgSData(oldp+20,(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT__q),16);
        bufp->chgCData(oldp+21,((((IData)(vlSelf->__VdfgTmp_hbe21faac__0) 
                                  << 1U) | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0))),2);
        bufp->chgCData(oldp+22,((((IData)(vlSelf->__VdfgTmp_ha5396d5d__0) 
                                  << 1U) | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT____VdfgTmp_h8a1e19e7__0))),2);
        bufp->chgCData(oldp+23,((((IData)(vlSelf->__VdfgTmp_h9319e32f__0) 
                                  << 1U) | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT____VdfgTmp_hbf2851e6__0))),2);
        bufp->chgCData(oldp+24,((((IData)(vlSelf->__VdfgTmp_h9402bd92__0) 
                                  << 1U) | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT____VdfgTmp_h352e0dcb__0))),2);
        bufp->chgCData(oldp+25,((((IData)(vlSelf->__VdfgTmp_he9e0d610__0) 
                                  << 1U) | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT____VdfgTmp_h984bded2__0))),2);
        bufp->chgCData(oldp+26,((((IData)(vlSelf->__VdfgTmp_he2d7c735__0) 
                                  << 1U) | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT____VdfgTmp_hc905584f__0))),2);
        bufp->chgCData(oldp+27,((((IData)(vlSelf->__VdfgTmp_hfe3177f3__0) 
                                  << 1U) | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT____VdfgTmp_h1ce9aeec__0))),2);
        bufp->chgCData(oldp+28,((((IData)(vlSelf->__VdfgTmp_he0cc5aca__0) 
                                  << 1U) | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT____VdfgTmp_h166b2609__0))),2);
        bufp->chgCData(oldp+29,(vlSelf->Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__recursion_lsbh__DOT__recursive_case__DOT__recursion_msbh__DOT____Vcellinp__trival_case__DOT__f__ql),2);
        bufp->chgSData(oldp+30,(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT__q),16);
        bufp->chgCData(oldp+31,((((IData)(vlSelf->__VdfgTmp_he57fb158__0) 
                                  << 1U) | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0))),2);
        bufp->chgCData(oldp+32,((((IData)(vlSelf->__VdfgTmp_heea9cdcf__0) 
                                  << 1U) | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT____VdfgTmp_h8a1e19e7__0))),2);
        bufp->chgCData(oldp+33,((((IData)(vlSelf->__VdfgTmp_hbf6abe2d__0) 
                                  << 1U) | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT____VdfgTmp_hbf2851e6__0))),2);
        bufp->chgCData(oldp+34,((((IData)(vlSelf->__VdfgTmp_hbdb296aa__0) 
                                  << 1U) | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT____VdfgTmp_h352e0dcb__0))),2);
        bufp->chgCData(oldp+35,((((IData)(vlSelf->__VdfgTmp_hb17ff5d1__0) 
                                  << 1U) | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT____VdfgTmp_h984bded2__0))),2);
        bufp->chgCData(oldp+36,((((IData)(vlSelf->__VdfgTmp_h8b49bf26__0) 
                                  << 1U) | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT____VdfgTmp_hc905584f__0))),2);
        bufp->chgCData(oldp+37,((((IData)(vlSelf->__VdfgTmp_h8a10462a__0) 
                                  << 1U) | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT____VdfgTmp_h1ce9aeec__0))),2);
        bufp->chgCData(oldp+38,((((IData)(vlSelf->__VdfgTmp_ha7143469__0) 
                                  << 1U) | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT____VdfgTmp_h166b2609__0))),2);
        bufp->chgCData(oldp+39,(((((IData)(vlSelf->__VdfgTmp_hbe741e55__0) 
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
                                                                          & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT____VdfgTmp_h8a1e19e7__0))))))))))))))) 
                                  << 1U) | (IData)(vlSelf->Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__recursion_lsbh__DOT__recursive_case__DOT__recursion_msbh__DOT__trival_case__DOT__f__DOT____VdfgTmp_hef005df1__0))),2);
        bufp->chgSData(oldp+40,(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT__q),16);
        bufp->chgCData(oldp+41,((((IData)(vlSelf->__VdfgTmp_ha00b13da__0) 
                                  << 1U) | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0))),2);
        bufp->chgCData(oldp+42,((((IData)(vlSelf->__VdfgTmp_ha4cc58c3__0) 
                                  << 1U) | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT____VdfgTmp_h8a1e19e7__0))),2);
        bufp->chgCData(oldp+43,((((IData)(vlSelf->__VdfgTmp_h8da57233__0) 
                                  << 1U) | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT____VdfgTmp_hbf2851e6__0))),2);
        bufp->chgCData(oldp+44,((((IData)(vlSelf->__VdfgTmp_h8920b836__0) 
                                  << 1U) | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT____VdfgTmp_h352e0dcb__0))),2);
        bufp->chgCData(oldp+45,((((IData)(vlSelf->__VdfgTmp_h8783b4a3__0) 
                                  << 1U) | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT____VdfgTmp_h984bded2__0))),2);
        bufp->chgCData(oldp+46,((((IData)(vlSelf->__VdfgTmp_h8aa24c3a__0) 
                                  << 1U) | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT____VdfgTmp_hc905584f__0))),2);
        bufp->chgCData(oldp+47,((((IData)(vlSelf->__VdfgTmp_hb16c50d0__0) 
                                  << 1U) | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT____VdfgTmp_h1ce9aeec__0))),2);
        bufp->chgCData(oldp+48,((((IData)(vlSelf->__VdfgTmp_hbe741e55__0) 
                                  << 1U) | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT____VdfgTmp_h166b2609__0))),2);
        bufp->chgCData(oldp+49,((((IData)(vlSelf->__VdfgTmp_h0d9cf317__0) 
                                  << 1U) | (IData)(vlSelf->__VdfgTmp_ha2d76e15__0))),2);
        bufp->chgSData(oldp+50,(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT__q),16);
        bufp->chgCData(oldp+51,((((IData)(vlSelf->__VdfgTmp_hbfca6490__0) 
                                  << 1U) | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0))),2);
        bufp->chgCData(oldp+52,((((IData)(vlSelf->__VdfgTmp_h8e8a8ef3__0) 
                                  << 1U) | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT____VdfgTmp_h8a1e19e7__0))),2);
        bufp->chgCData(oldp+53,((((IData)(vlSelf->__VdfgTmp_h8004c929__0) 
                                  << 1U) | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT____VdfgTmp_hbf2851e6__0))),2);
        bufp->chgCData(oldp+54,((((IData)(vlSelf->__VdfgTmp_h81447f02__0) 
                                  << 1U) | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT____VdfgTmp_h352e0dcb__0))),2);
        bufp->chgCData(oldp+55,((((IData)(vlSelf->__VdfgTmp_h9fbf3785__0) 
                                  << 1U) | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT____VdfgTmp_h984bded2__0))),2);
        bufp->chgCData(oldp+56,((((IData)(vlSelf->__VdfgTmp_h82a6176a__0) 
                                  << 1U) | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT____VdfgTmp_hc905584f__0))),2);
        bufp->chgCData(oldp+57,((((IData)(vlSelf->__VdfgTmp_hb6858702__0) 
                                  << 1U) | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT____VdfgTmp_h1ce9aeec__0))),2);
        bufp->chgCData(oldp+58,((((IData)(vlSelf->__VdfgTmp_hb6975029__0) 
                                  << 1U) | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT____VdfgTmp_h166b2609__0))),2);
        bufp->chgCData(oldp+59,(((((IData)(vlSelf->__VdfgTmp_h8c84fcd4__0) 
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
                                                                          & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT____VdfgTmp_h8a1e19e7__0))))))))))))))) 
                                  << 1U) | (IData)(vlSelf->Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__recursion_msbh__DOT__recursive_case__DOT__recursion_lsbh__DOT__trival_case__DOT__f__DOT____VdfgTmp_hef005df1__0))),2);
        bufp->chgSData(oldp+60,(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT__q),16);
        bufp->chgCData(oldp+61,((((IData)(vlSelf->__VdfgTmp_hb693cd38__0) 
                                  << 1U) | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0))),2);
        bufp->chgCData(oldp+62,((((IData)(vlSelf->__VdfgTmp_h4437eafd__0) 
                                  << 1U) | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT____VdfgTmp_h8a1e19e7__0))),2);
        bufp->chgCData(oldp+63,((((IData)(vlSelf->__VdfgTmp_h5d5c3be5__0) 
                                  << 1U) | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT____VdfgTmp_hbf2851e6__0))),2);
        bufp->chgCData(oldp+64,((((IData)(vlSelf->__VdfgTmp_h5bd66994__0) 
                                  << 1U) | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT____VdfgTmp_h352e0dcb__0))),2);
        bufp->chgCData(oldp+65,((((IData)(vlSelf->__VdfgTmp_h5bbf9d18__0) 
                                  << 1U) | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT____VdfgTmp_h984bded2__0))),2);
        bufp->chgCData(oldp+66,((((IData)(vlSelf->__VdfgTmp_h58b5f4dd__0) 
                                  << 1U) | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT____VdfgTmp_hc905584f__0))),2);
        bufp->chgCData(oldp+67,((((IData)(vlSelf->__VdfgTmp_h81acfa95__0) 
                                  << 1U) | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT____VdfgTmp_h1ce9aeec__0))),2);
        bufp->chgCData(oldp+68,((((IData)(vlSelf->__VdfgTmp_h8c84fcd4__0) 
                                  << 1U) | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT____VdfgTmp_h166b2609__0))),2);
        bufp->chgCData(oldp+69,(vlSelf->Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__recursion_msbh__DOT__recursive_case__DOT__recursion_msbh__DOT____Vcellinp__trival_case__DOT__f__ql),2);
        bufp->chgSData(oldp+70,(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT__q),16);
        bufp->chgCData(oldp+71,((((IData)(vlSelf->__VdfgTmp_h8bcd436b__0) 
                                  << 1U) | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0))),2);
        bufp->chgCData(oldp+72,((((IData)(vlSelf->__VdfgTmp_h5c44dec4__0) 
                                  << 1U) | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT____VdfgTmp_h8a1e19e7__0))),2);
        bufp->chgCData(oldp+73,((((IData)(vlSelf->__VdfgTmp_h5592c408__0) 
                                  << 1U) | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT____VdfgTmp_hbf2851e6__0))),2);
        bufp->chgCData(oldp+74,((((IData)(vlSelf->__VdfgTmp_h53056e9b__0) 
                                  << 1U) | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT____VdfgTmp_h352e0dcb__0))),2);
        bufp->chgCData(oldp+75,((((IData)(vlSelf->__VdfgTmp_h533cc427__0) 
                                  << 1U) | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT____VdfgTmp_h984bded2__0))),2);
        bufp->chgCData(oldp+76,((((IData)(vlSelf->__VdfgTmp_h5adb9448__0) 
                                  << 1U) | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT____VdfgTmp_hc905584f__0))),2);
        bufp->chgCData(oldp+77,((((IData)(vlSelf->__VdfgTmp_h4643dc14__0) 
                                  << 1U) | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT____VdfgTmp_h1ce9aeec__0))),2);
        bufp->chgCData(oldp+78,((((IData)(vlSelf->__VdfgTmp_h4614327f__0) 
                                  << 1U) | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT____VdfgTmp_h166b2609__0))),2);
        bufp->chgCData(oldp+79,(((((IData)(vlSelf->__VdfgTmp_h5f43e680__0) 
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
                                                                          & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT____VdfgTmp_h8a1e19e7__0))))))))))))))) 
                                  << 1U) | (IData)(vlSelf->Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__recursion_msbh__DOT__recursive_case__DOT__recursion_msbh__DOT__trival_case__DOT__f__DOT____VdfgTmp_hef005df1__0))),2);
        bufp->chgSData(oldp+80,(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT__q),16);
        bufp->chgCData(oldp+81,((((IData)(vlSelf->__VdfgTmp_h44787b03__0) 
                                  << 1U) | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0))),2);
        bufp->chgCData(oldp+82,((((IData)(vlSelf->__VdfgTmp_had190e44__0) 
                                  << 1U) | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT____VdfgTmp_h8a1e19e7__0))),2);
        bufp->chgCData(oldp+83,((((IData)(vlSelf->__VdfgTmp_haa51df4a__0) 
                                  << 1U) | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT____VdfgTmp_hbf2851e6__0))),2);
        bufp->chgCData(oldp+84,((((IData)(vlSelf->__VdfgTmp_hab53db2d__0) 
                                  << 1U) | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT____VdfgTmp_h352e0dcb__0))),2);
        bufp->chgCData(oldp+85,((((IData)(vlSelf->__VdfgTmp_ha829c5d0__0) 
                                  << 1U) | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT____VdfgTmp_h984bded2__0))),2);
        bufp->chgCData(oldp+86,((((IData)(vlSelf->__VdfgTmp_h516934af__0) 
                                  << 1U) | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT____VdfgTmp_hc905584f__0))),2);
        bufp->chgCData(oldp+87,((((IData)(vlSelf->__VdfgTmp_h5e42ada3__0) 
                                  << 1U) | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT____VdfgTmp_h1ce9aeec__0))),2);
        bufp->chgCData(oldp+88,((((IData)(vlSelf->__VdfgTmp_h5f43e680__0) 
                                  << 1U) | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT____VdfgTmp_h166b2609__0))),2);
        bufp->chgSData(oldp+89,((((IData)(vlSelf->__VdfgTmp_h21f0d06f__0) 
                                  << 0xfU) | (((IData)(vlSelf->Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__parallel_stitch_up__BRA__14__KET____DOT__parallel_stitch_up_produce__DOT__f__DOT____VdfgTmp_hef005df1__0) 
                                               << 0xeU) 
                                              | (((IData)(vlSelf->__VdfgTmp_h1f5a1e66__0) 
                                                  << 8U) 
                                                 | (IData)(vlSelf->Brent_Kung_Adder__DOT__t1__DOT____Vcellout__recursive_case__DOT__recursion_lsbh__r))))),16);
        bufp->chgCData(oldp+90,((((IData)(vlSelf->__VdfgTmp_h02636d51__0) 
                                  << 1U) | (IData)(vlSelf->__VdfgTmp_h08445fd0__0))),2);
        bufp->chgCData(oldp+91,((((IData)(vlSelf->__VdfgTmp_h21f0d06f__0) 
                                  << 1U) | (IData)(vlSelf->Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__parallel_stitch_up__BRA__14__KET____DOT__parallel_stitch_up_produce__DOT__f__DOT____VdfgTmp_hef005df1__0))),2);
        bufp->chgCData(oldp+92,((((((IData)(vlSelf->Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__parallel_stitch_up__BRA__14__KET____DOT__parallel_stitch_up_produce__DOT__f__DOT____VdfgTmp_hef005df1__0) 
                                    & (IData)(vlSelf->__VdfgTmp_h02636d51__0)) 
                                   | (IData)(vlSelf->__VdfgTmp_h21f0d06f__0)) 
                                  << 1U) | ((IData)(vlSelf->Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__parallel_stitch_up__BRA__14__KET____DOT__parallel_stitch_up_produce__DOT__f__DOT____VdfgTmp_hef005df1__0) 
                                            & (IData)(vlSelf->__VdfgTmp_h08445fd0__0)))),2);
        bufp->chgCData(oldp+93,((((((IData)(vlSelf->__VdfgTmp_hbe741e55__0) 
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
                                                                           & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT____VdfgTmp_h8a1e19e7__0))))))))))))))) 
                                   << 7U) | ((IData)(vlSelf->Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__recursion_lsbh__DOT__recursive_case__DOT__recursion_msbh__DOT__trival_case__DOT__f__DOT____VdfgTmp_hef005df1__0) 
                                             << 6U)) 
                                 | (((IData)(vlSelf->Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__recursion_lsbh__DOT__recursive_case__DOT__recursion_msbh__DOT____Vcellinp__trival_case__DOT__f__ql) 
                                     << 4U) | (((((IData)(vlSelf->__VdfgTmp_he0cc5aca__0) 
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
                                                                                & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT____VdfgTmp_h8a1e19e7__0))))))))))))))) 
                                                 << 3U) 
                                                | ((IData)(vlSelf->Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__recursion_lsbh__DOT__recursive_case__DOT__recursion_lsbh__DOT__trival_case__DOT__f__DOT____VdfgTmp_hef005df1__0) 
                                                   << 2U)) 
                                               | (((IData)(vlSelf->__VdfgTmp_hf48b56b2__0) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__VdfgTmp_hb04d5094__0)))))),8);
        bufp->chgCData(oldp+94,(vlSelf->Brent_Kung_Adder__DOT__t1__DOT____Vcellout__recursive_case__DOT__recursion_lsbh__r),8);
        bufp->chgCData(oldp+95,((((((IData)(vlSelf->Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__recursion_lsbh__DOT__recursive_case__DOT__recursion_msbh__DOT__trival_case__DOT__f__DOT____VdfgTmp_hef005df1__0) 
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
                                                                             & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT____VdfgTmp_h8a1e19e7__0)))))))))))))))) 
                                  << 7U) | (((IData)(vlSelf->Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__recursion_lsbh__DOT__recursive_case__DOT__parallel_stitch_up__BRA__6__KET____DOT__parallel_stitch_up_produce__DOT__f__DOT____VdfgTmp_hef005df1__0) 
                                             << 6U) 
                                            | (((IData)(vlSelf->Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__recursion_lsbh__DOT__recursive_case__DOT__recursion_msbh__DOT____Vcellinp__trival_case__DOT__f__ql) 
                                                << 4U) 
                                               | (IData)(vlSelf->Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__recursion_lsbh__DOT____Vcellout__recursive_case__DOT__recursion_lsbh__r))))),8);
        bufp->chgCData(oldp+96,((((IData)(vlSelf->__VdfgTmp_ha94b5c3c__0) 
                                  << 1U) | (IData)(vlSelf->__VdfgTmp_hce8acf83__0))),2);
        bufp->chgCData(oldp+97,((((((IData)(vlSelf->Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__recursion_lsbh__DOT__recursive_case__DOT__recursion_msbh__DOT__trival_case__DOT__f__DOT____VdfgTmp_hef005df1__0) 
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
                                                                             & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT____VdfgTmp_h8a1e19e7__0)))))))))))))))) 
                                  << 1U) | (IData)(vlSelf->Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__recursion_lsbh__DOT__recursive_case__DOT__parallel_stitch_up__BRA__6__KET____DOT__parallel_stitch_up_produce__DOT__f__DOT____VdfgTmp_hef005df1__0))),2);
        bufp->chgCData(oldp+98,((((((IData)(vlSelf->__VdfgTmp_he0cc5aca__0) 
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
                                                                           & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT____VdfgTmp_h8a1e19e7__0))))))))))))))) 
                                   << 3U) | ((IData)(vlSelf->Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__recursion_lsbh__DOT__recursive_case__DOT__recursion_lsbh__DOT__trival_case__DOT__f__DOT____VdfgTmp_hef005df1__0) 
                                             << 2U)) 
                                 | (((IData)(vlSelf->__VdfgTmp_hf48b56b2__0) 
                                     << 1U) | (IData)(vlSelf->__VdfgTmp_hb04d5094__0)))),4);
        bufp->chgCData(oldp+99,(vlSelf->Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__recursion_lsbh__DOT____Vcellout__recursive_case__DOT__recursion_lsbh__r),4);
        bufp->chgCData(oldp+100,(((((IData)(vlSelf->__VdfgTmp_hbe741e55__0) 
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
                                                                           & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT____VdfgTmp_h8a1e19e7__0))))))))))))))) 
                                   << 3U) | (((IData)(vlSelf->Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__recursion_lsbh__DOT__recursive_case__DOT__recursion_msbh__DOT__trival_case__DOT__f__DOT____VdfgTmp_hef005df1__0) 
                                              << 2U) 
                                             | (IData)(vlSelf->Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__recursion_lsbh__DOT__recursive_case__DOT__recursion_msbh__DOT____Vcellinp__trival_case__DOT__f__ql)))),4);
        bufp->chgCData(oldp+101,((((((IData)(vlSelf->Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__recursion_lsbh__DOT__recursive_case__DOT__recursion_msbh__DOT__trival_case__DOT__f__DOT____VdfgTmp_hef005df1__0) 
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
                                                                              & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT____VdfgTmp_h8a1e19e7__0)))))))))))))))) 
                                   << 3U) | (((IData)(vlSelf->Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__recursion_lsbh__DOT__recursive_case__DOT__parallel_stitch_up__BRA__6__KET____DOT__parallel_stitch_up_produce__DOT__f__DOT____VdfgTmp_hef005df1__0) 
                                              << 2U) 
                                             | (IData)(vlSelf->Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__recursion_lsbh__DOT__recursive_case__DOT__recursion_msbh__DOT____Vcellinp__trival_case__DOT__f__ql)))),4);
        bufp->chgCData(oldp+102,((((((IData)(vlSelf->__VdfgTmp_h5f43e680__0) 
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
                                                                            & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT____VdfgTmp_h8a1e19e7__0))))))))))))))) 
                                    << 7U) | ((IData)(vlSelf->Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__recursion_msbh__DOT__recursive_case__DOT__recursion_msbh__DOT__trival_case__DOT__f__DOT____VdfgTmp_hef005df1__0) 
                                              << 6U)) 
                                  | (((IData)(vlSelf->Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__recursion_msbh__DOT__recursive_case__DOT__recursion_msbh__DOT____Vcellinp__trival_case__DOT__f__ql) 
                                      << 4U) | (((((IData)(vlSelf->__VdfgTmp_h8c84fcd4__0) 
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
                                                                                & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT____VdfgTmp_h8a1e19e7__0))))))))))))))) 
                                                  << 3U) 
                                                 | ((IData)(vlSelf->Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__recursion_msbh__DOT__recursive_case__DOT__recursion_lsbh__DOT__trival_case__DOT__f__DOT____VdfgTmp_hef005df1__0) 
                                                    << 2U)) 
                                                | (((IData)(vlSelf->__VdfgTmp_h0d9cf317__0) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->__VdfgTmp_ha2d76e15__0)))))),8);
        bufp->chgCData(oldp+103,((((IData)(vlSelf->__VdfgTmp_h21f0d06f__0) 
                                   << 7U) | (((IData)(vlSelf->Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__parallel_stitch_up__BRA__14__KET____DOT__parallel_stitch_up_produce__DOT__f__DOT____VdfgTmp_hef005df1__0) 
                                              << 6U) 
                                             | (IData)(vlSelf->__VdfgTmp_h1f5a1e66__0)))),8);
        bufp->chgCData(oldp+104,((((((IData)(vlSelf->Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__recursion_msbh__DOT__recursive_case__DOT__recursion_msbh__DOT__trival_case__DOT__f__DOT____VdfgTmp_hef005df1__0) 
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
                                                                              & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT____VdfgTmp_h8a1e19e7__0)))))))))))))))) 
                                   << 7U) | (((IData)(vlSelf->Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__recursion_msbh__DOT__recursive_case__DOT__parallel_stitch_up__BRA__6__KET____DOT__parallel_stitch_up_produce__DOT__f__DOT____VdfgTmp_hef005df1__0) 
                                              << 6U) 
                                             | (((IData)(vlSelf->Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__recursion_msbh__DOT__recursive_case__DOT__recursion_msbh__DOT____Vcellinp__trival_case__DOT__f__ql) 
                                                 << 4U) 
                                                | (IData)(vlSelf->Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__recursion_msbh__DOT____Vcellout__recursive_case__DOT__recursion_lsbh__r))))),8);
        bufp->chgCData(oldp+105,((((IData)(vlSelf->__VdfgTmp_hf945ba23__0) 
                                   << 1U) | (IData)(vlSelf->__VdfgTmp_h2bcc32ae__0))),2);
        bufp->chgCData(oldp+106,((((((IData)(vlSelf->Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__recursion_msbh__DOT__recursive_case__DOT__recursion_msbh__DOT__trival_case__DOT__f__DOT____VdfgTmp_hef005df1__0) 
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
                                                                              & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT____VdfgTmp_h8a1e19e7__0)))))))))))))))) 
                                   << 1U) | (IData)(vlSelf->Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__recursion_msbh__DOT__recursive_case__DOT__parallel_stitch_up__BRA__6__KET____DOT__parallel_stitch_up_produce__DOT__f__DOT____VdfgTmp_hef005df1__0))),2);
        bufp->chgCData(oldp+107,((((((IData)(vlSelf->__VdfgTmp_h8c84fcd4__0) 
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
                                                                            & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT____VdfgTmp_h8a1e19e7__0))))))))))))))) 
                                    << 3U) | ((IData)(vlSelf->Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__recursion_msbh__DOT__recursive_case__DOT__recursion_lsbh__DOT__trival_case__DOT__f__DOT____VdfgTmp_hef005df1__0) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->__VdfgTmp_h0d9cf317__0) 
                                      << 1U) | (IData)(vlSelf->__VdfgTmp_ha2d76e15__0)))),4);
        bufp->chgCData(oldp+108,(vlSelf->Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__recursion_msbh__DOT____Vcellout__recursive_case__DOT__recursion_lsbh__r),4);
        bufp->chgCData(oldp+109,(((((IData)(vlSelf->__VdfgTmp_h5f43e680__0) 
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
                                                                           & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT____VdfgTmp_h8a1e19e7__0))))))))))))))) 
                                   << 3U) | (((IData)(vlSelf->Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__recursion_msbh__DOT__recursive_case__DOT__recursion_msbh__DOT__trival_case__DOT__f__DOT____VdfgTmp_hef005df1__0) 
                                              << 2U) 
                                             | (IData)(vlSelf->Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__recursion_msbh__DOT__recursive_case__DOT__recursion_msbh__DOT____Vcellinp__trival_case__DOT__f__ql)))),4);
        bufp->chgCData(oldp+110,((((((IData)(vlSelf->Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__recursion_msbh__DOT__recursive_case__DOT__recursion_msbh__DOT__trival_case__DOT__f__DOT____VdfgTmp_hef005df1__0) 
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
                                                                              & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT____VdfgTmp_h8a1e19e7__0)))))))))))))))) 
                                   << 3U) | (((IData)(vlSelf->Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__recursion_msbh__DOT__recursive_case__DOT__parallel_stitch_up__BRA__6__KET____DOT__parallel_stitch_up_produce__DOT__f__DOT____VdfgTmp_hef005df1__0) 
                                              << 2U) 
                                             | (IData)(vlSelf->Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__recursion_msbh__DOT__recursive_case__DOT__recursion_msbh__DOT____Vcellinp__trival_case__DOT__f__ql)))),4);
    }
    if (VL_UNLIKELY(((vlSelf->__Vm_traceActivity[2U] 
                      | vlSelf->__Vm_traceActivity[3U]) 
                     | vlSelf->__Vm_traceActivity[0xdU]))) {
        bufp->chgCData(oldp+111,(((((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT____VdfgTmp_h166b2609__0) 
                                    ^ ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT__c) 
                                       >> 7U)) << 7U) 
                                  | ((0x40U & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT____VdfgTmp_h1ce9aeec__0) 
                                                << 6U) 
                                               ^ (0xffffffc0U 
                                                  & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT__c)))) 
                                     | ((0x20U & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT____VdfgTmp_hc905584f__0) 
                                                   << 5U) 
                                                  ^ 
                                                  (0xffffffe0U 
                                                   & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT__c)))) 
                                        | ((0x10U & 
                                            (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT____VdfgTmp_h984bded2__0) 
                                              << 4U) 
                                             ^ (0xfffffff0U 
                                                & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT__c)))) 
                                           | ((8U & 
                                               (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT____VdfgTmp_h352e0dcb__0) 
                                                 << 3U) 
                                                ^ (0xfffffff8U 
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
                                                          ^ (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT__c))))))))))),8);
        bufp->chgBit(oldp+112,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0) 
                                      ^ (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT__c)))));
        bufp->chgBit(oldp+113,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT____VdfgTmp_h8a1e19e7__0) 
                                      ^ ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT__c) 
                                         >> 1U)))));
        bufp->chgBit(oldp+114,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT____VdfgTmp_hbf2851e6__0) 
                                      ^ ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT__c) 
                                         >> 2U)))));
        bufp->chgBit(oldp+115,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT____VdfgTmp_h352e0dcb__0) 
                                      ^ ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT__c) 
                                         >> 3U)))));
        bufp->chgBit(oldp+116,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT____VdfgTmp_h984bded2__0) 
                                      ^ ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT__c) 
                                         >> 4U)))));
        bufp->chgBit(oldp+117,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT____VdfgTmp_hc905584f__0) 
                                      ^ ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT__c) 
                                         >> 5U)))));
        bufp->chgBit(oldp+118,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT____VdfgTmp_h1ce9aeec__0) 
                                      ^ ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT__c) 
                                         >> 6U)))));
        bufp->chgBit(oldp+119,(((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT____VdfgTmp_h166b2609__0) 
                                ^ ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT__c) 
                                   >> 7U))));
    }
    if (VL_UNLIKELY(((vlSelf->__Vm_traceActivity[2U] 
                      | vlSelf->__Vm_traceActivity[4U]) 
                     | vlSelf->__Vm_traceActivity[0xeU]))) {
        bufp->chgCData(oldp+120,(((((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT____VdfgTmp_h166b2609__0) 
                                    ^ ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT__c) 
                                       >> 7U)) << 7U) 
                                  | ((0x40U & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT____VdfgTmp_h1ce9aeec__0) 
                                                << 6U) 
                                               ^ (0xffffffc0U 
                                                  & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT__c)))) 
                                     | ((0x20U & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT____VdfgTmp_hc905584f__0) 
                                                   << 5U) 
                                                  ^ 
                                                  (0xffffffe0U 
                                                   & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT__c)))) 
                                        | ((0x10U & 
                                            (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT____VdfgTmp_h984bded2__0) 
                                              << 4U) 
                                             ^ (0xfffffff0U 
                                                & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT__c)))) 
                                           | ((8U & 
                                               (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT____VdfgTmp_h352e0dcb__0) 
                                                 << 3U) 
                                                ^ (0xfffffff8U 
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
                                                          ^ (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT__c))))))))))),8);
        bufp->chgBit(oldp+121,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0) 
                                      ^ (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT__c)))));
        bufp->chgBit(oldp+122,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT____VdfgTmp_h8a1e19e7__0) 
                                      ^ ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT__c) 
                                         >> 1U)))));
        bufp->chgBit(oldp+123,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT____VdfgTmp_hbf2851e6__0) 
                                      ^ ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT__c) 
                                         >> 2U)))));
        bufp->chgBit(oldp+124,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT____VdfgTmp_h352e0dcb__0) 
                                      ^ ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT__c) 
                                         >> 3U)))));
        bufp->chgBit(oldp+125,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT____VdfgTmp_h984bded2__0) 
                                      ^ ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT__c) 
                                         >> 4U)))));
        bufp->chgBit(oldp+126,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT____VdfgTmp_hc905584f__0) 
                                      ^ ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT__c) 
                                         >> 5U)))));
        bufp->chgBit(oldp+127,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT____VdfgTmp_h1ce9aeec__0) 
                                      ^ ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT__c) 
                                         >> 6U)))));
        bufp->chgBit(oldp+128,(((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT____VdfgTmp_h166b2609__0) 
                                ^ ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT__c) 
                                   >> 7U))));
    }
    if (VL_UNLIKELY(((vlSelf->__Vm_traceActivity[2U] 
                      | vlSelf->__Vm_traceActivity[5U]) 
                     | vlSelf->__Vm_traceActivity[0xfU]))) {
        bufp->chgCData(oldp+129,(((((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT____VdfgTmp_h166b2609__0) 
                                    ^ ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT__c) 
                                       >> 7U)) << 7U) 
                                  | ((0x40U & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT____VdfgTmp_h1ce9aeec__0) 
                                                << 6U) 
                                               ^ (0xffffffc0U 
                                                  & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT__c)))) 
                                     | ((0x20U & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT____VdfgTmp_hc905584f__0) 
                                                   << 5U) 
                                                  ^ 
                                                  (0xffffffe0U 
                                                   & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT__c)))) 
                                        | ((0x10U & 
                                            (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT____VdfgTmp_h984bded2__0) 
                                              << 4U) 
                                             ^ (0xfffffff0U 
                                                & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT__c)))) 
                                           | ((8U & 
                                               (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT____VdfgTmp_h352e0dcb__0) 
                                                 << 3U) 
                                                ^ (0xfffffff8U 
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
                                                          ^ (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT__c))))))))))),8);
        bufp->chgBit(oldp+130,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0) 
                                      ^ (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT__c)))));
        bufp->chgBit(oldp+131,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT____VdfgTmp_h8a1e19e7__0) 
                                      ^ ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT__c) 
                                         >> 1U)))));
        bufp->chgBit(oldp+132,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT____VdfgTmp_hbf2851e6__0) 
                                      ^ ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT__c) 
                                         >> 2U)))));
        bufp->chgBit(oldp+133,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT____VdfgTmp_h352e0dcb__0) 
                                      ^ ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT__c) 
                                         >> 3U)))));
        bufp->chgBit(oldp+134,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT____VdfgTmp_h984bded2__0) 
                                      ^ ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT__c) 
                                         >> 4U)))));
        bufp->chgBit(oldp+135,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT____VdfgTmp_hc905584f__0) 
                                      ^ ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT__c) 
                                         >> 5U)))));
        bufp->chgBit(oldp+136,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT____VdfgTmp_h1ce9aeec__0) 
                                      ^ ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT__c) 
                                         >> 6U)))));
        bufp->chgBit(oldp+137,(((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT____VdfgTmp_h166b2609__0) 
                                ^ ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT__c) 
                                   >> 7U))));
    }
    if (VL_UNLIKELY(((vlSelf->__Vm_traceActivity[2U] 
                      | vlSelf->__Vm_traceActivity[6U]) 
                     | vlSelf->__Vm_traceActivity[0x10U]))) {
        bufp->chgCData(oldp+138,(((((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT____VdfgTmp_h166b2609__0) 
                                    ^ ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT__c) 
                                       >> 7U)) << 7U) 
                                  | ((0x40U & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT____VdfgTmp_h1ce9aeec__0) 
                                                << 6U) 
                                               ^ (0xffffffc0U 
                                                  & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT__c)))) 
                                     | ((0x20U & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT____VdfgTmp_hc905584f__0) 
                                                   << 5U) 
                                                  ^ 
                                                  (0xffffffe0U 
                                                   & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT__c)))) 
                                        | ((0x10U & 
                                            (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT____VdfgTmp_h984bded2__0) 
                                              << 4U) 
                                             ^ (0xfffffff0U 
                                                & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT__c)))) 
                                           | ((8U & 
                                               (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT____VdfgTmp_h352e0dcb__0) 
                                                 << 3U) 
                                                ^ (0xfffffff8U 
                                                   & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT__c)))) 
                                              | ((4U 
                                                  & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT____VdfgTmp_hbf2851e6__0) 
                                                      << 2U) 
                                                     ^ 
                                                     (0xfffffffcU 
                                                      & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT__c)))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT____VdfgTmp_h8a1e19e7__0) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xfffffffeU 
                                                         & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT__c)))) 
                                                    | (1U 
                                                       & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0) 
                                                          ^ (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT__c))))))))))),8);
        bufp->chgBit(oldp+139,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0) 
                                      ^ (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT__c)))));
        bufp->chgBit(oldp+140,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT____VdfgTmp_h8a1e19e7__0) 
                                      ^ ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT__c) 
                                         >> 1U)))));
        bufp->chgBit(oldp+141,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT____VdfgTmp_hbf2851e6__0) 
                                      ^ ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT__c) 
                                         >> 2U)))));
        bufp->chgBit(oldp+142,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT____VdfgTmp_h352e0dcb__0) 
                                      ^ ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT__c) 
                                         >> 3U)))));
        bufp->chgBit(oldp+143,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT____VdfgTmp_h984bded2__0) 
                                      ^ ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT__c) 
                                         >> 4U)))));
        bufp->chgBit(oldp+144,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT____VdfgTmp_hc905584f__0) 
                                      ^ ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT__c) 
                                         >> 5U)))));
        bufp->chgBit(oldp+145,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT____VdfgTmp_h1ce9aeec__0) 
                                      ^ ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT__c) 
                                         >> 6U)))));
        bufp->chgBit(oldp+146,(((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT____VdfgTmp_h166b2609__0) 
                                ^ ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT__c) 
                                   >> 7U))));
    }
    if (VL_UNLIKELY(((vlSelf->__Vm_traceActivity[2U] 
                      | vlSelf->__Vm_traceActivity[7U]) 
                     | vlSelf->__Vm_traceActivity[0x11U]))) {
        bufp->chgCData(oldp+147,((((IData)(vlSelf->Brent_Kung_Adder__DOT____VdfgTmp_h5b5c6a0f__0) 
                                   << 7U) | ((0x40U 
                                              & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT____VdfgTmp_h1ce9aeec__0) 
                                                  << 6U) 
                                                 ^ 
                                                 (0xffffffc0U 
                                                  & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT__c)))) 
                                             | ((0x20U 
                                                 & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT____VdfgTmp_hc905584f__0) 
                                                     << 5U) 
                                                    ^ 
                                                    (0xffffffe0U 
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
                                                                  ^ (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT__c))))))))))),8);
        bufp->chgBit(oldp+148,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0) 
                                      ^ (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT__c)))));
        bufp->chgBit(oldp+149,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT____VdfgTmp_h8a1e19e7__0) 
                                      ^ ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT__c) 
                                         >> 1U)))));
        bufp->chgBit(oldp+150,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT____VdfgTmp_hbf2851e6__0) 
                                      ^ ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT__c) 
                                         >> 2U)))));
        bufp->chgBit(oldp+151,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT____VdfgTmp_h352e0dcb__0) 
                                      ^ ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT__c) 
                                         >> 3U)))));
        bufp->chgBit(oldp+152,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT____VdfgTmp_h984bded2__0) 
                                      ^ ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT__c) 
                                         >> 4U)))));
        bufp->chgBit(oldp+153,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT____VdfgTmp_hc905584f__0) 
                                      ^ ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT__c) 
                                         >> 5U)))));
        bufp->chgBit(oldp+154,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT____VdfgTmp_h1ce9aeec__0) 
                                      ^ ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT__c) 
                                         >> 6U)))));
    }
    if (VL_UNLIKELY(((vlSelf->__Vm_traceActivity[2U] 
                      | vlSelf->__Vm_traceActivity[8U]) 
                     | vlSelf->__Vm_traceActivity[0x12U]))) {
        bufp->chgCData(oldp+155,(((((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT____VdfgTmp_h166b2609__0) 
                                    ^ ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT__c) 
                                       >> 7U)) << 7U) 
                                  | ((0x40U & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT____VdfgTmp_h1ce9aeec__0) 
                                                << 6U) 
                                               ^ (0xffffffc0U 
                                                  & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT__c)))) 
                                     | ((0x20U & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT____VdfgTmp_hc905584f__0) 
                                                   << 5U) 
                                                  ^ 
                                                  (0xffffffe0U 
                                                   & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT__c)))) 
                                        | ((0x10U & 
                                            (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT____VdfgTmp_h984bded2__0) 
                                              << 4U) 
                                             ^ (0xfffffff0U 
                                                & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT__c)))) 
                                           | ((8U & 
                                               (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT____VdfgTmp_h352e0dcb__0) 
                                                 << 3U) 
                                                ^ (0xfffffff8U 
                                                   & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT__c)))) 
                                              | ((4U 
                                                  & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT____VdfgTmp_hbf2851e6__0) 
                                                      << 2U) 
                                                     ^ 
                                                     (0xfffffffcU 
                                                      & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT__c)))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT____VdfgTmp_h8a1e19e7__0) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xfffffffeU 
                                                         & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT__c)))) 
                                                    | (1U 
                                                       & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0) 
                                                          ^ (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT__c))))))))))),8);
        bufp->chgBit(oldp+156,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0) 
                                      ^ (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT__c)))));
        bufp->chgBit(oldp+157,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT____VdfgTmp_h8a1e19e7__0) 
                                      ^ ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT__c) 
                                         >> 1U)))));
        bufp->chgBit(oldp+158,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT____VdfgTmp_hbf2851e6__0) 
                                      ^ ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT__c) 
                                         >> 2U)))));
        bufp->chgBit(oldp+159,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT____VdfgTmp_h352e0dcb__0) 
                                      ^ ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT__c) 
                                         >> 3U)))));
        bufp->chgBit(oldp+160,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT____VdfgTmp_h984bded2__0) 
                                      ^ ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT__c) 
                                         >> 4U)))));
        bufp->chgBit(oldp+161,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT____VdfgTmp_hc905584f__0) 
                                      ^ ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT__c) 
                                         >> 5U)))));
        bufp->chgBit(oldp+162,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT____VdfgTmp_h1ce9aeec__0) 
                                      ^ ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT__c) 
                                         >> 6U)))));
        bufp->chgBit(oldp+163,(((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT____VdfgTmp_h166b2609__0) 
                                ^ ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT__c) 
                                   >> 7U))));
    }
    if (VL_UNLIKELY(((vlSelf->__Vm_traceActivity[2U] 
                      | vlSelf->__Vm_traceActivity[9U]) 
                     | vlSelf->__Vm_traceActivity[0x13U]))) {
        bufp->chgCData(oldp+164,(((((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT____VdfgTmp_h166b2609__0) 
                                    ^ ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT__c) 
                                       >> 7U)) << 7U) 
                                  | ((0x40U & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT____VdfgTmp_h1ce9aeec__0) 
                                                << 6U) 
                                               ^ (0xffffffc0U 
                                                  & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT__c)))) 
                                     | ((0x20U & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT____VdfgTmp_hc905584f__0) 
                                                   << 5U) 
                                                  ^ 
                                                  (0xffffffe0U 
                                                   & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT__c)))) 
                                        | ((0x10U & 
                                            (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT____VdfgTmp_h984bded2__0) 
                                              << 4U) 
                                             ^ (0xfffffff0U 
                                                & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT__c)))) 
                                           | ((8U & 
                                               (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT____VdfgTmp_h352e0dcb__0) 
                                                 << 3U) 
                                                ^ (0xfffffff8U 
                                                   & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT__c)))) 
                                              | ((4U 
                                                  & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT____VdfgTmp_hbf2851e6__0) 
                                                      << 2U) 
                                                     ^ 
                                                     (0xfffffffcU 
                                                      & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT__c)))) 
                                                 | ((2U 
                                                     & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT____VdfgTmp_h8a1e19e7__0) 
                                                         << 1U) 
                                                        ^ 
                                                        (0xfffffffeU 
                                                         & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT__c)))) 
                                                    | (1U 
                                                       & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0) 
                                                          ^ (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT__c))))))))))),8);
        bufp->chgBit(oldp+165,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0) 
                                      ^ (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT__c)))));
        bufp->chgBit(oldp+166,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT____VdfgTmp_h8a1e19e7__0) 
                                      ^ ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT__c) 
                                         >> 1U)))));
        bufp->chgBit(oldp+167,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT____VdfgTmp_hbf2851e6__0) 
                                      ^ ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT__c) 
                                         >> 2U)))));
        bufp->chgBit(oldp+168,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT____VdfgTmp_h352e0dcb__0) 
                                      ^ ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT__c) 
                                         >> 3U)))));
        bufp->chgBit(oldp+169,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT____VdfgTmp_h984bded2__0) 
                                      ^ ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT__c) 
                                         >> 4U)))));
        bufp->chgBit(oldp+170,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT____VdfgTmp_hc905584f__0) 
                                      ^ ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT__c) 
                                         >> 5U)))));
        bufp->chgBit(oldp+171,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT____VdfgTmp_h1ce9aeec__0) 
                                      ^ ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT__c) 
                                         >> 6U)))));
        bufp->chgBit(oldp+172,(((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT____VdfgTmp_h166b2609__0) 
                                ^ ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT__c) 
                                   >> 7U))));
    }
    if (VL_UNLIKELY(((vlSelf->__Vm_traceActivity[2U] 
                      | vlSelf->__Vm_traceActivity[0xaU]) 
                     | vlSelf->__Vm_traceActivity[0x14U]))) {
        bufp->chgCData(oldp+173,(((((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h166b2609__0) 
                                    ^ ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT__c) 
                                       >> 7U)) << 7U) 
                                  | ((0x40U & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h1ce9aeec__0) 
                                                << 6U) 
                                               ^ (0xffffffc0U 
                                                  & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT__c)))) 
                                     | ((0x20U & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_hc905584f__0) 
                                                   << 5U) 
                                                  ^ 
                                                  (0xffffffe0U 
                                                   & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT__c)))) 
                                        | ((0x10U & 
                                            (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h984bded2__0) 
                                              << 4U) 
                                             ^ (0xfffffff0U 
                                                & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT__c)))) 
                                           | ((8U & 
                                               (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h352e0dcb__0) 
                                                 << 3U) 
                                                ^ (0xfffffff8U 
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
                                                    | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____Vcellout__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__s))))))))),8);
        bufp->chgBit(oldp+174,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h8a1e19e7__0) 
                                      ^ ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT__c) 
                                         >> 1U)))));
        bufp->chgBit(oldp+175,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_hbf2851e6__0) 
                                      ^ ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT__c) 
                                         >> 2U)))));
        bufp->chgBit(oldp+176,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h352e0dcb__0) 
                                      ^ ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT__c) 
                                         >> 3U)))));
        bufp->chgBit(oldp+177,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h984bded2__0) 
                                      ^ ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT__c) 
                                         >> 4U)))));
        bufp->chgBit(oldp+178,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_hc905584f__0) 
                                      ^ ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT__c) 
                                         >> 5U)))));
        bufp->chgBit(oldp+179,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h1ce9aeec__0) 
                                      ^ ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT__c) 
                                         >> 6U)))));
        bufp->chgBit(oldp+180,(((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h166b2609__0) 
                                ^ ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT__c) 
                                   >> 7U))));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[0xdU]))) {
        bufp->chgCData(oldp+181,(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT__c),8);
        bufp->chgBit(oldp+182,((1U & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT__c))));
        bufp->chgBit(oldp+183,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT__c) 
                                      >> 1U))));
        bufp->chgBit(oldp+184,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT__c) 
                                      >> 2U))));
        bufp->chgBit(oldp+185,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT__c) 
                                      >> 3U))));
        bufp->chgBit(oldp+186,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT__c) 
                                      >> 4U))));
        bufp->chgBit(oldp+187,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT__c) 
                                      >> 5U))));
        bufp->chgBit(oldp+188,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT__c) 
                                      >> 6U))));
        bufp->chgBit(oldp+189,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT__c) 
                                      >> 7U))));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[4U] 
                     | vlSelf->__Vm_traceActivity[0xeU]))) {
        bufp->chgCData(oldp+190,(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT__c),8);
        bufp->chgBit(oldp+191,((1U & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT__c))));
        bufp->chgBit(oldp+192,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT__c) 
                                      >> 1U))));
        bufp->chgBit(oldp+193,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT__c) 
                                      >> 2U))));
        bufp->chgBit(oldp+194,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT__c) 
                                      >> 3U))));
        bufp->chgBit(oldp+195,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT__c) 
                                      >> 4U))));
        bufp->chgBit(oldp+196,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT__c) 
                                      >> 5U))));
        bufp->chgBit(oldp+197,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT__c) 
                                      >> 6U))));
        bufp->chgBit(oldp+198,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT__c) 
                                      >> 7U))));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[5U] 
                     | vlSelf->__Vm_traceActivity[0xfU]))) {
        bufp->chgCData(oldp+199,(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT__c),8);
        bufp->chgBit(oldp+200,((1U & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT__c))));
        bufp->chgBit(oldp+201,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT__c) 
                                      >> 1U))));
        bufp->chgBit(oldp+202,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT__c) 
                                      >> 2U))));
        bufp->chgBit(oldp+203,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT__c) 
                                      >> 3U))));
        bufp->chgBit(oldp+204,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT__c) 
                                      >> 4U))));
        bufp->chgBit(oldp+205,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT__c) 
                                      >> 5U))));
        bufp->chgBit(oldp+206,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT__c) 
                                      >> 6U))));
        bufp->chgBit(oldp+207,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT__c) 
                                      >> 7U))));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[6U] 
                     | vlSelf->__Vm_traceActivity[0x10U]))) {
        bufp->chgCData(oldp+208,(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT__c),8);
        bufp->chgBit(oldp+209,((1U & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT__c))));
        bufp->chgBit(oldp+210,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT__c) 
                                      >> 1U))));
        bufp->chgBit(oldp+211,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT__c) 
                                      >> 2U))));
        bufp->chgBit(oldp+212,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT__c) 
                                      >> 3U))));
        bufp->chgBit(oldp+213,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT__c) 
                                      >> 4U))));
        bufp->chgBit(oldp+214,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT__c) 
                                      >> 5U))));
        bufp->chgBit(oldp+215,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT__c) 
                                      >> 6U))));
        bufp->chgBit(oldp+216,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT__c) 
                                      >> 7U))));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[7U] 
                     | vlSelf->__Vm_traceActivity[0x11U]))) {
        bufp->chgCData(oldp+217,(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT__c),8);
        bufp->chgBit(oldp+218,((1U & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT__c))));
        bufp->chgBit(oldp+219,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT__c) 
                                      >> 1U))));
        bufp->chgBit(oldp+220,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT__c) 
                                      >> 2U))));
        bufp->chgBit(oldp+221,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT__c) 
                                      >> 3U))));
        bufp->chgBit(oldp+222,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT__c) 
                                      >> 4U))));
        bufp->chgBit(oldp+223,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT__c) 
                                      >> 5U))));
        bufp->chgBit(oldp+224,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT__c) 
                                      >> 6U))));
        bufp->chgBit(oldp+225,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT__c) 
                                      >> 7U))));
        bufp->chgBit(oldp+226,(vlSelf->Brent_Kung_Adder__DOT____VdfgTmp_h5b5c6a0f__0));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[8U] 
                     | vlSelf->__Vm_traceActivity[0x12U]))) {
        bufp->chgCData(oldp+227,(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT__c),8);
        bufp->chgBit(oldp+228,((1U & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT__c))));
        bufp->chgBit(oldp+229,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT__c) 
                                      >> 1U))));
        bufp->chgBit(oldp+230,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT__c) 
                                      >> 2U))));
        bufp->chgBit(oldp+231,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT__c) 
                                      >> 3U))));
        bufp->chgBit(oldp+232,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT__c) 
                                      >> 4U))));
        bufp->chgBit(oldp+233,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT__c) 
                                      >> 5U))));
        bufp->chgBit(oldp+234,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT__c) 
                                      >> 6U))));
        bufp->chgBit(oldp+235,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT__c) 
                                      >> 7U))));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[9U] 
                     | vlSelf->__Vm_traceActivity[0x13U]))) {
        bufp->chgCData(oldp+236,(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT__c),8);
        bufp->chgBit(oldp+237,((1U & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT__c))));
        bufp->chgBit(oldp+238,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT__c) 
                                      >> 1U))));
        bufp->chgBit(oldp+239,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT__c) 
                                      >> 2U))));
        bufp->chgBit(oldp+240,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT__c) 
                                      >> 3U))));
        bufp->chgBit(oldp+241,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT__c) 
                                      >> 4U))));
        bufp->chgBit(oldp+242,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT__c) 
                                      >> 5U))));
        bufp->chgBit(oldp+243,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT__c) 
                                      >> 6U))));
        bufp->chgBit(oldp+244,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT__c) 
                                      >> 7U))));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[0xaU] 
                     | vlSelf->__Vm_traceActivity[0x14U]))) {
        bufp->chgCData(oldp+245,(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT__c),8);
        bufp->chgBit(oldp+246,((1U & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT__c))));
        bufp->chgBit(oldp+247,(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____Vcellout__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__s));
        bufp->chgBit(oldp+248,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT__c) 
                                      >> 1U))));
        bufp->chgBit(oldp+249,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT__c) 
                                      >> 2U))));
        bufp->chgBit(oldp+250,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT__c) 
                                      >> 3U))));
        bufp->chgBit(oldp+251,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT__c) 
                                      >> 4U))));
        bufp->chgBit(oldp+252,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT__c) 
                                      >> 5U))));
        bufp->chgBit(oldp+253,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT__c) 
                                      >> 6U))));
        bufp->chgBit(oldp+254,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT__c) 
                                      >> 7U))));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[0xbU] 
                     | vlSelf->__Vm_traceActivity[0x15U]))) {
        bufp->chgSData(oldp+255,(((0xc000U & (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp 
                                              >> 0x10U)) 
                                  | (((0x2000U & (((IData)(
                                                           (0x18000000U 
                                                            == 
                                                            (0x18000000U 
                                                             & vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp))) 
                                                   << 0xdU) 
                                                  | (0xe000U 
                                                     & (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp 
                                                        >> 0x10U)))) 
                                      | ((IData)((0x14000000U 
                                                  == 
                                                  (0x14000000U 
                                                   & vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp))) 
                                         << 0xcU)) 
                                     | ((0xc00U & (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp 
                                                   >> 0x10U)) 
                                        | (((0x200U 
                                             & (((IData)(
                                                         (0x1800000U 
                                                          == 
                                                          (0x1800000U 
                                                           & vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp))) 
                                                 << 9U) 
                                                | (0xfe00U 
                                                   & (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp 
                                                      >> 0x10U)))) 
                                            | ((IData)(
                                                       (0x1400000U 
                                                        == 
                                                        (0x1400000U 
                                                         & vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp))) 
                                               << 8U)) 
                                           | ((0xc0U 
                                               & (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp 
                                                  >> 0x10U)) 
                                              | ((0x20U 
                                                  & (((IData)(
                                                              (0x180000U 
                                                               == 
                                                               (0x180000U 
                                                                & vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp))) 
                                                      << 5U) 
                                                     | (0xffe0U 
                                                        & (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp 
                                                           >> 0x10U)))) 
                                                 | (((IData)(
                                                             (0x140000U 
                                                              == 
                                                              (0x140000U 
                                                               & vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp))) 
                                                     << 4U) 
                                                    | (0xfU 
                                                       & (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp 
                                                          >> 0x10U)))))))))),16);
        bufp->chgCData(oldp+256,((3U & (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp 
                                        >> 0x10U))),2);
        bufp->chgCData(oldp+257,((3U & (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp 
                                        >> 0x12U))),2);
        bufp->chgCData(oldp+258,(((2U & (((IData)((0x180000U 
                                                   == 
                                                   (0x180000U 
                                                    & vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp))) 
                                          << 1U) | 
                                         (0xffeU & 
                                          (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp 
                                           >> 0x14U)))) 
                                  | (IData)((0x140000U 
                                             == (0x140000U 
                                                 & vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp))))),2);
        bufp->chgCData(oldp+259,((3U & (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp 
                                        >> 0x16U))),2);
        bufp->chgCData(oldp+260,(((2U & (((IData)((0x1800000U 
                                                   == 
                                                   (0x1800000U 
                                                    & vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp))) 
                                          << 1U) | 
                                         (0xfeU & (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp 
                                                   >> 0x18U)))) 
                                  | (IData)((0x1400000U 
                                             == (0x1400000U 
                                                 & vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp))))),2);
        bufp->chgCData(oldp+261,((3U & (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp 
                                        >> 0x1aU))),2);
        bufp->chgCData(oldp+262,(((2U & (((IData)((0x18000000U 
                                                   == 
                                                   (0x18000000U 
                                                    & vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp))) 
                                          << 1U) | 
                                         (0xeU & (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp 
                                                  >> 0x1cU)))) 
                                  | (IData)((0x14000000U 
                                             == (0x14000000U 
                                                 & vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp))))),2);
        bufp->chgCData(oldp+263,((vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp 
                                  >> 0x1eU)),2);
        bufp->chgBit(oldp+264,(vlSelf->Brent_Kung_Adder__DOT____Vcellout__cin_generation__BRA__7__KET____DOT__f__cin));
        bufp->chgIData(oldp+265,(vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp),32);
        bufp->chgCData(oldp+266,((3U & (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp 
                                        >> 0x14U))),2);
        bufp->chgCData(oldp+267,((3U & (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp 
                                        >> 0x18U))),2);
        bufp->chgCData(oldp+268,((3U & (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp 
                                        >> 0x1cU))),2);
        bufp->chgCData(oldp+269,((3U & (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp 
                                        >> 6U))),2);
        bufp->chgCData(oldp+270,((3U & (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp 
                                        >> 0xaU))),2);
        bufp->chgCData(oldp+271,(((2U & (((IData)((0x480U 
                                                   == 
                                                   (0x480U 
                                                    & vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp))) 
                                          << 1U) | 
                                         (0x3ffffeU 
                                          & (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp 
                                             >> 0xaU)))) 
                                  | (IData)((0x440U 
                                             == (0x440U 
                                                 & vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp))))),2);
    }
    bufp->chgQData(oldp+272,(vlSelf->A),64);
    bufp->chgQData(oldp+274,(vlSelf->B),64);
    bufp->chgBit(oldp+276,(vlSelf->c0));
    bufp->chgWData(oldp+277,(vlSelf->S),65);
    __Vtemp_hacfc60eb__0[0U] = (IData)(vlSelf->Brent_Kung_Adder__DOT____VdfgTmp_h335431e1__0);
    __Vtemp_hacfc60eb__0[1U] = (IData)((vlSelf->Brent_Kung_Adder__DOT____VdfgTmp_h335431e1__0 
                                        >> 0x20U));
    __Vtemp_hacfc60eb__0[2U] = vlSelf->Brent_Kung_Adder__DOT____Vcellout__cin_generation__BRA__7__KET____DOT__f__cin;
    bufp->chgWData(oldp+280,(__Vtemp_hacfc60eb__0),65);
    bufp->chgSData(oldp+283,((((IData)(vlSelf->Brent_Kung_Adder__DOT____Vcellout__cin_generation__BRA__7__KET____DOT__f__cin) 
                               << 8U) | (((IData)(vlSelf->Brent_Kung_Adder__DOT____Vcellout__cin_generation__BRA__6__KET____DOT__f__cin) 
                                          << 7U) | 
                                         (((IData)(vlSelf->Brent_Kung_Adder__DOT____Vcellout__cin_generation__BRA__5__KET____DOT__f__cin) 
                                           << 6U) | 
                                          (((IData)(vlSelf->Brent_Kung_Adder__DOT____Vcellout__cin_generation__BRA__4__KET____DOT__f__cin) 
                                            << 5U) 
                                           | (((IData)(vlSelf->Brent_Kung_Adder__DOT____Vcellout__cin_generation__BRA__3__KET____DOT__f__cin) 
                                               << 4U) 
                                              | (((IData)(vlSelf->Brent_Kung_Adder__DOT____Vcellout__cin_generation__BRA__2__KET____DOT__f__cin) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->Brent_Kung_Adder__DOT____Vcellout__cin_generation__BRA__1__KET____DOT__f__cin) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->Brent_Kung_Adder__DOT____Vcellout__cin_generation__BRA__0__KET____DOT__f__cin) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->c0)))))))))),9);
    bufp->chgCData(oldp+284,((0xffU & (IData)(vlSelf->A))),8);
    bufp->chgCData(oldp+285,((0xffU & (IData)(vlSelf->B))),8);
    bufp->chgBit(oldp+286,((1U & (IData)(vlSelf->A))));
    bufp->chgBit(oldp+287,((1U & (IData)(vlSelf->B))));
    bufp->chgBit(oldp+288,((1U & (IData)((vlSelf->A 
                                          >> 1U)))));
    bufp->chgBit(oldp+289,((1U & (IData)((vlSelf->B 
                                          >> 1U)))));
    bufp->chgBit(oldp+290,((1U & (IData)((vlSelf->A 
                                          >> 2U)))));
    bufp->chgBit(oldp+291,((1U & (IData)((vlSelf->B 
                                          >> 2U)))));
    bufp->chgBit(oldp+292,((1U & (IData)((vlSelf->A 
                                          >> 3U)))));
    bufp->chgBit(oldp+293,((1U & (IData)((vlSelf->B 
                                          >> 3U)))));
    bufp->chgBit(oldp+294,((1U & (IData)((vlSelf->A 
                                          >> 4U)))));
    bufp->chgBit(oldp+295,((1U & (IData)((vlSelf->B 
                                          >> 4U)))));
    bufp->chgBit(oldp+296,((1U & (IData)((vlSelf->A 
                                          >> 5U)))));
    bufp->chgBit(oldp+297,((1U & (IData)((vlSelf->B 
                                          >> 5U)))));
    bufp->chgBit(oldp+298,((1U & (IData)((vlSelf->A 
                                          >> 6U)))));
    bufp->chgBit(oldp+299,((1U & (IData)((vlSelf->B 
                                          >> 6U)))));
    bufp->chgBit(oldp+300,((1U & (IData)((vlSelf->A 
                                          >> 7U)))));
    bufp->chgBit(oldp+301,((1U & (IData)((vlSelf->B 
                                          >> 7U)))));
    bufp->chgCData(oldp+302,((0xffU & (IData)((vlSelf->A 
                                               >> 8U)))),8);
    bufp->chgCData(oldp+303,((0xffU & (IData)((vlSelf->B 
                                               >> 8U)))),8);
    bufp->chgBit(oldp+304,((1U & (IData)((vlSelf->A 
                                          >> 8U)))));
    bufp->chgBit(oldp+305,((1U & (IData)((vlSelf->B 
                                          >> 8U)))));
    bufp->chgBit(oldp+306,((1U & (IData)((vlSelf->A 
                                          >> 9U)))));
    bufp->chgBit(oldp+307,((1U & (IData)((vlSelf->B 
                                          >> 9U)))));
    bufp->chgBit(oldp+308,((1U & (IData)((vlSelf->A 
                                          >> 0xaU)))));
    bufp->chgBit(oldp+309,((1U & (IData)((vlSelf->B 
                                          >> 0xaU)))));
    bufp->chgBit(oldp+310,((1U & (IData)((vlSelf->A 
                                          >> 0xbU)))));
    bufp->chgBit(oldp+311,((1U & (IData)((vlSelf->B 
                                          >> 0xbU)))));
    bufp->chgBit(oldp+312,((1U & (IData)((vlSelf->A 
                                          >> 0xcU)))));
    bufp->chgBit(oldp+313,((1U & (IData)((vlSelf->B 
                                          >> 0xcU)))));
    bufp->chgBit(oldp+314,((1U & (IData)((vlSelf->A 
                                          >> 0xdU)))));
    bufp->chgBit(oldp+315,((1U & (IData)((vlSelf->B 
                                          >> 0xdU)))));
    bufp->chgBit(oldp+316,((1U & (IData)((vlSelf->A 
                                          >> 0xeU)))));
    bufp->chgBit(oldp+317,((1U & (IData)((vlSelf->B 
                                          >> 0xeU)))));
    bufp->chgBit(oldp+318,((1U & (IData)((vlSelf->A 
                                          >> 0xfU)))));
    bufp->chgBit(oldp+319,((1U & (IData)((vlSelf->B 
                                          >> 0xfU)))));
    bufp->chgCData(oldp+320,((0xffU & (IData)((vlSelf->A 
                                               >> 0x10U)))),8);
    bufp->chgCData(oldp+321,((0xffU & (IData)((vlSelf->B 
                                               >> 0x10U)))),8);
    bufp->chgBit(oldp+322,((1U & (IData)((vlSelf->A 
                                          >> 0x10U)))));
    bufp->chgBit(oldp+323,((1U & (IData)((vlSelf->B 
                                          >> 0x10U)))));
    bufp->chgBit(oldp+324,((1U & (IData)((vlSelf->A 
                                          >> 0x11U)))));
    bufp->chgBit(oldp+325,((1U & (IData)((vlSelf->B 
                                          >> 0x11U)))));
    bufp->chgBit(oldp+326,((1U & (IData)((vlSelf->A 
                                          >> 0x12U)))));
    bufp->chgBit(oldp+327,((1U & (IData)((vlSelf->B 
                                          >> 0x12U)))));
    bufp->chgBit(oldp+328,((1U & (IData)((vlSelf->A 
                                          >> 0x13U)))));
    bufp->chgBit(oldp+329,((1U & (IData)((vlSelf->B 
                                          >> 0x13U)))));
    bufp->chgBit(oldp+330,((1U & (IData)((vlSelf->A 
                                          >> 0x14U)))));
    bufp->chgBit(oldp+331,((1U & (IData)((vlSelf->B 
                                          >> 0x14U)))));
    bufp->chgBit(oldp+332,((1U & (IData)((vlSelf->A 
                                          >> 0x15U)))));
    bufp->chgBit(oldp+333,((1U & (IData)((vlSelf->B 
                                          >> 0x15U)))));
    bufp->chgBit(oldp+334,((1U & (IData)((vlSelf->A 
                                          >> 0x16U)))));
    bufp->chgBit(oldp+335,((1U & (IData)((vlSelf->B 
                                          >> 0x16U)))));
    bufp->chgBit(oldp+336,((1U & (IData)((vlSelf->A 
                                          >> 0x17U)))));
    bufp->chgBit(oldp+337,((1U & (IData)((vlSelf->B 
                                          >> 0x17U)))));
    bufp->chgCData(oldp+338,((0xffU & (IData)((vlSelf->A 
                                               >> 0x18U)))),8);
    bufp->chgCData(oldp+339,((0xffU & (IData)((vlSelf->B 
                                               >> 0x18U)))),8);
    bufp->chgBit(oldp+340,((1U & (IData)((vlSelf->A 
                                          >> 0x18U)))));
    bufp->chgBit(oldp+341,((1U & (IData)((vlSelf->B 
                                          >> 0x18U)))));
    bufp->chgBit(oldp+342,((1U & (IData)((vlSelf->A 
                                          >> 0x19U)))));
    bufp->chgBit(oldp+343,((1U & (IData)((vlSelf->B 
                                          >> 0x19U)))));
    bufp->chgBit(oldp+344,((1U & (IData)((vlSelf->A 
                                          >> 0x1aU)))));
    bufp->chgBit(oldp+345,((1U & (IData)((vlSelf->B 
                                          >> 0x1aU)))));
    bufp->chgBit(oldp+346,((1U & (IData)((vlSelf->A 
                                          >> 0x1bU)))));
    bufp->chgBit(oldp+347,((1U & (IData)((vlSelf->B 
                                          >> 0x1bU)))));
    bufp->chgBit(oldp+348,((1U & (IData)((vlSelf->A 
                                          >> 0x1cU)))));
    bufp->chgBit(oldp+349,((1U & (IData)((vlSelf->B 
                                          >> 0x1cU)))));
    bufp->chgBit(oldp+350,((1U & (IData)((vlSelf->A 
                                          >> 0x1dU)))));
    bufp->chgBit(oldp+351,((1U & (IData)((vlSelf->B 
                                          >> 0x1dU)))));
    bufp->chgBit(oldp+352,((1U & (IData)((vlSelf->A 
                                          >> 0x1eU)))));
    bufp->chgBit(oldp+353,((1U & (IData)((vlSelf->B 
                                          >> 0x1eU)))));
    bufp->chgBit(oldp+354,((1U & (IData)((vlSelf->A 
                                          >> 0x1fU)))));
    bufp->chgBit(oldp+355,((1U & (IData)((vlSelf->B 
                                          >> 0x1fU)))));
    bufp->chgCData(oldp+356,((0xffU & (IData)((vlSelf->A 
                                               >> 0x20U)))),8);
    bufp->chgCData(oldp+357,((0xffU & (IData)((vlSelf->B 
                                               >> 0x20U)))),8);
    bufp->chgBit(oldp+358,((1U & (IData)((vlSelf->A 
                                          >> 0x20U)))));
    bufp->chgBit(oldp+359,((1U & (IData)((vlSelf->B 
                                          >> 0x20U)))));
    bufp->chgBit(oldp+360,((1U & (IData)((vlSelf->A 
                                          >> 0x21U)))));
    bufp->chgBit(oldp+361,((1U & (IData)((vlSelf->B 
                                          >> 0x21U)))));
    bufp->chgBit(oldp+362,((1U & (IData)((vlSelf->A 
                                          >> 0x22U)))));
    bufp->chgBit(oldp+363,((1U & (IData)((vlSelf->B 
                                          >> 0x22U)))));
    bufp->chgBit(oldp+364,((1U & (IData)((vlSelf->A 
                                          >> 0x23U)))));
    bufp->chgBit(oldp+365,((1U & (IData)((vlSelf->B 
                                          >> 0x23U)))));
    bufp->chgBit(oldp+366,((1U & (IData)((vlSelf->A 
                                          >> 0x24U)))));
    bufp->chgBit(oldp+367,((1U & (IData)((vlSelf->B 
                                          >> 0x24U)))));
    bufp->chgBit(oldp+368,((1U & (IData)((vlSelf->A 
                                          >> 0x25U)))));
    bufp->chgBit(oldp+369,((1U & (IData)((vlSelf->B 
                                          >> 0x25U)))));
    bufp->chgBit(oldp+370,((1U & (IData)((vlSelf->A 
                                          >> 0x26U)))));
    bufp->chgBit(oldp+371,((1U & (IData)((vlSelf->B 
                                          >> 0x26U)))));
    bufp->chgBit(oldp+372,((1U & (IData)((vlSelf->A 
                                          >> 0x27U)))));
    bufp->chgBit(oldp+373,((1U & (IData)((vlSelf->B 
                                          >> 0x27U)))));
    bufp->chgCData(oldp+374,((0xffU & (IData)((vlSelf->A 
                                               >> 0x28U)))),8);
    bufp->chgCData(oldp+375,((0xffU & (IData)((vlSelf->B 
                                               >> 0x28U)))),8);
    bufp->chgBit(oldp+376,((1U & (IData)((vlSelf->A 
                                          >> 0x28U)))));
    bufp->chgBit(oldp+377,((1U & (IData)((vlSelf->B 
                                          >> 0x28U)))));
    bufp->chgBit(oldp+378,((1U & (IData)((vlSelf->A 
                                          >> 0x29U)))));
    bufp->chgBit(oldp+379,((1U & (IData)((vlSelf->B 
                                          >> 0x29U)))));
    bufp->chgBit(oldp+380,((1U & (IData)((vlSelf->A 
                                          >> 0x2aU)))));
    bufp->chgBit(oldp+381,((1U & (IData)((vlSelf->B 
                                          >> 0x2aU)))));
    bufp->chgBit(oldp+382,((1U & (IData)((vlSelf->A 
                                          >> 0x2bU)))));
    bufp->chgBit(oldp+383,((1U & (IData)((vlSelf->B 
                                          >> 0x2bU)))));
    bufp->chgBit(oldp+384,((1U & (IData)((vlSelf->A 
                                          >> 0x2cU)))));
    bufp->chgBit(oldp+385,((1U & (IData)((vlSelf->B 
                                          >> 0x2cU)))));
    bufp->chgBit(oldp+386,((1U & (IData)((vlSelf->A 
                                          >> 0x2dU)))));
    bufp->chgBit(oldp+387,((1U & (IData)((vlSelf->B 
                                          >> 0x2dU)))));
    bufp->chgBit(oldp+388,((1U & (IData)((vlSelf->A 
                                          >> 0x2eU)))));
    bufp->chgBit(oldp+389,((1U & (IData)((vlSelf->B 
                                          >> 0x2eU)))));
    bufp->chgBit(oldp+390,((1U & (IData)((vlSelf->A 
                                          >> 0x2fU)))));
    bufp->chgBit(oldp+391,((1U & (IData)((vlSelf->B 
                                          >> 0x2fU)))));
    bufp->chgCData(oldp+392,((0xffU & (IData)((vlSelf->A 
                                               >> 0x30U)))),8);
    bufp->chgCData(oldp+393,((0xffU & (IData)((vlSelf->B 
                                               >> 0x30U)))),8);
    bufp->chgBit(oldp+394,((1U & (IData)((vlSelf->A 
                                          >> 0x30U)))));
    bufp->chgBit(oldp+395,((1U & (IData)((vlSelf->B 
                                          >> 0x30U)))));
    bufp->chgBit(oldp+396,((1U & (IData)((vlSelf->A 
                                          >> 0x31U)))));
    bufp->chgBit(oldp+397,((1U & (IData)((vlSelf->B 
                                          >> 0x31U)))));
    bufp->chgBit(oldp+398,((1U & (IData)((vlSelf->A 
                                          >> 0x32U)))));
    bufp->chgBit(oldp+399,((1U & (IData)((vlSelf->B 
                                          >> 0x32U)))));
    bufp->chgBit(oldp+400,((1U & (IData)((vlSelf->A 
                                          >> 0x33U)))));
    bufp->chgBit(oldp+401,((1U & (IData)((vlSelf->B 
                                          >> 0x33U)))));
    bufp->chgBit(oldp+402,((1U & (IData)((vlSelf->A 
                                          >> 0x34U)))));
    bufp->chgBit(oldp+403,((1U & (IData)((vlSelf->B 
                                          >> 0x34U)))));
    bufp->chgBit(oldp+404,((1U & (IData)((vlSelf->A 
                                          >> 0x35U)))));
    bufp->chgBit(oldp+405,((1U & (IData)((vlSelf->B 
                                          >> 0x35U)))));
    bufp->chgBit(oldp+406,((1U & (IData)((vlSelf->A 
                                          >> 0x36U)))));
    bufp->chgBit(oldp+407,((1U & (IData)((vlSelf->B 
                                          >> 0x36U)))));
    bufp->chgBit(oldp+408,((1U & (IData)((vlSelf->A 
                                          >> 0x37U)))));
    bufp->chgBit(oldp+409,((1U & (IData)((vlSelf->B 
                                          >> 0x37U)))));
    bufp->chgCData(oldp+410,((0xffU & (IData)((vlSelf->A 
                                               >> 0x38U)))),8);
    bufp->chgCData(oldp+411,((0xffU & (IData)((vlSelf->B 
                                               >> 0x38U)))),8);
    bufp->chgBit(oldp+412,((1U & (IData)((vlSelf->A 
                                          >> 0x38U)))));
    bufp->chgBit(oldp+413,((1U & (IData)((vlSelf->B 
                                          >> 0x38U)))));
    bufp->chgBit(oldp+414,((1U & (IData)((vlSelf->A 
                                          >> 0x39U)))));
    bufp->chgBit(oldp+415,((1U & (IData)((vlSelf->B 
                                          >> 0x39U)))));
    bufp->chgBit(oldp+416,((1U & (IData)((vlSelf->A 
                                          >> 0x3aU)))));
    bufp->chgBit(oldp+417,((1U & (IData)((vlSelf->B 
                                          >> 0x3aU)))));
    bufp->chgBit(oldp+418,((1U & (IData)((vlSelf->A 
                                          >> 0x3bU)))));
    bufp->chgBit(oldp+419,((1U & (IData)((vlSelf->B 
                                          >> 0x3bU)))));
    bufp->chgBit(oldp+420,((1U & (IData)((vlSelf->A 
                                          >> 0x3cU)))));
    bufp->chgBit(oldp+421,((1U & (IData)((vlSelf->B 
                                          >> 0x3cU)))));
    bufp->chgBit(oldp+422,((1U & (IData)((vlSelf->A 
                                          >> 0x3dU)))));
    bufp->chgBit(oldp+423,((1U & (IData)((vlSelf->B 
                                          >> 0x3dU)))));
    bufp->chgBit(oldp+424,((1U & (IData)((vlSelf->A 
                                          >> 0x3eU)))));
    bufp->chgBit(oldp+425,((1U & (IData)((vlSelf->B 
                                          >> 0x3eU)))));
    bufp->chgBit(oldp+426,((1U & (IData)((vlSelf->A 
                                          >> 0x3fU)))));
    bufp->chgBit(oldp+427,((1U & (IData)((vlSelf->B 
                                          >> 0x3fU)))));
}

void VBrent_Kung_Adder___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBrent_Kung_Adder___024root__trace_cleanup\n"); );
    // Init
    VBrent_Kung_Adder___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VBrent_Kung_Adder___024root*>(voidSelf);
    VBrent_Kung_Adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[7U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[8U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[9U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xaU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xbU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xcU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xdU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xeU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xfU] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x10U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x11U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x12U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x13U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x14U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0x15U] = 0U;
}
