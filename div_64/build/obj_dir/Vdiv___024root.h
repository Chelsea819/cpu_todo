// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdiv.h for the primary calling header

#ifndef VERILATED_VDIV___024ROOT_H_
#define VERILATED_VDIV___024ROOT_H_  // guard

#include "verilated.h"

class Vdiv__Syms;

class Vdiv___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst_n,0,0);
        VL_IN8(valid,0,0);
        VL_IN8(sign,0,0);
        VL_OUT8(finish,0,0);
        CData/*4:0*/ div__DOT__current_state;
        CData/*4:0*/ div__DOT__next_state;
        CData/*0:0*/ div__DOT____Vcellinp__oppo0____pinNumber2;
        CData/*0:0*/ div__DOT____Vcellinp__oppo1____pinNumber2;
        CData/*5:0*/ div__DOT__shift_y;
        CData/*5:0*/ div__DOT__shift_x_tmp;
        CData/*5:0*/ div__DOT__shift;
        CData/*1:0*/ div__DOT__q;
        CData/*5:0*/ div__DOT__cout;
        CData/*0:0*/ div__DOT____Vcellinp__oppo2____pinNumber2;
        CData/*0:0*/ div__DOT__lzd0__DOT____Vcellout__lzd_32_0____pinNumber3;
        CData/*3:0*/ div__DOT__lzd0__DOT__lzd_32_0__DOT____Vcellout__lzd_16_0____pinNumber2;
        CData/*3:0*/ div__DOT__lzd0__DOT__lzd_32_0__DOT____Vcellout__lzd_16_1____pinNumber2;
        CData/*3:0*/ div__DOT__lzd0__DOT__lzd_32_0__DOT__lzd_16_0__DOT__z;
        CData/*3:0*/ div__DOT__lzd0__DOT__lzd_32_0__DOT__lzd_16_1__DOT__z;
        CData/*3:0*/ div__DOT__lzd0__DOT__lzd_32_1__DOT____Vcellout__lzd_16_0____pinNumber2;
        CData/*3:0*/ div__DOT__lzd0__DOT__lzd_32_1__DOT____Vcellout__lzd_16_1____pinNumber2;
        CData/*3:0*/ div__DOT__lzd0__DOT__lzd_32_1__DOT__lzd_16_0__DOT__z;
        CData/*3:0*/ div__DOT__lzd0__DOT__lzd_32_1__DOT__lzd_16_1__DOT__z;
        CData/*0:0*/ div__DOT__lzd1__DOT____Vcellout__lzd_32_0____pinNumber3;
        CData/*3:0*/ div__DOT__lzd1__DOT__lzd_32_0__DOT____Vcellout__lzd_16_0____pinNumber2;
        CData/*3:0*/ div__DOT__lzd1__DOT__lzd_32_0__DOT____Vcellout__lzd_16_1____pinNumber2;
        CData/*3:0*/ div__DOT__lzd1__DOT__lzd_32_0__DOT__lzd_16_0__DOT__z;
        CData/*3:0*/ div__DOT__lzd1__DOT__lzd_32_0__DOT__lzd_16_1__DOT__z;
        CData/*3:0*/ div__DOT__lzd1__DOT__lzd_32_1__DOT____Vcellout__lzd_16_0____pinNumber2;
        CData/*3:0*/ div__DOT__lzd1__DOT__lzd_32_1__DOT____Vcellout__lzd_16_1____pinNumber2;
        CData/*3:0*/ div__DOT__lzd1__DOT__lzd_32_1__DOT__lzd_16_0__DOT__z;
        CData/*3:0*/ div__DOT__lzd1__DOT__lzd_32_1__DOT__lzd_16_1__DOT__z;
        CData/*3:0*/ div__DOT__cla0__DOT__genblk1__BRA__0__KET____DOT__cla_part0__DOT__p;
        CData/*3:0*/ div__DOT__cla0__DOT__genblk1__BRA__0__KET____DOT__cla_part0__DOT__g;
        CData/*3:0*/ div__DOT__cla0__DOT__genblk1__BRA__0__KET____DOT__cla_part0__DOT____Vcellout__carry0__c;
        CData/*3:0*/ div__DOT__cla0__DOT__genblk1__BRA__4__KET____DOT__cla_part0__DOT__p;
        CData/*3:0*/ div__DOT__cla0__DOT__genblk1__BRA__4__KET____DOT__cla_part0__DOT__g;
        CData/*3:0*/ div__DOT__cla0__DOT__genblk1__BRA__4__KET____DOT__cla_part0__DOT____Vcellout__carry0__c;
        CData/*3:0*/ div__DOT__cla0__DOT__genblk1__BRA__8__KET____DOT__cla_part0__DOT__p;
        CData/*3:0*/ div__DOT__cla0__DOT__genblk1__BRA__8__KET____DOT__cla_part0__DOT__g;
        CData/*3:0*/ div__DOT__cla0__DOT__genblk1__BRA__8__KET____DOT__cla_part0__DOT____Vcellout__carry0__c;
        CData/*3:0*/ div__DOT__cla0__DOT__genblk1__BRA__12__KET____DOT__cla_part0__DOT__p;
        CData/*3:0*/ div__DOT__cla0__DOT__genblk1__BRA__12__KET____DOT__cla_part0__DOT__g;
        CData/*3:0*/ div__DOT__cla0__DOT__genblk1__BRA__12__KET____DOT__cla_part0__DOT____Vcellout__carry0__c;
        CData/*3:0*/ div__DOT__cla0__DOT__genblk1__BRA__16__KET____DOT__cla_part0__DOT__p;
        CData/*3:0*/ div__DOT__cla0__DOT__genblk1__BRA__16__KET____DOT__cla_part0__DOT__g;
        CData/*3:0*/ div__DOT__cla0__DOT__genblk1__BRA__16__KET____DOT__cla_part0__DOT____Vcellout__carry0__c;
        CData/*3:0*/ div__DOT__cla0__DOT__genblk1__BRA__20__KET____DOT__cla_part0__DOT__p;
        CData/*3:0*/ div__DOT__cla0__DOT__genblk1__BRA__20__KET____DOT__cla_part0__DOT__g;
        CData/*3:0*/ div__DOT__cla0__DOT__genblk1__BRA__20__KET____DOT__cla_part0__DOT____Vcellout__carry0__c;
        CData/*3:0*/ div__DOT__cla0__DOT__genblk1__BRA__24__KET____DOT__cla_part0__DOT__p;
        CData/*3:0*/ div__DOT__cla0__DOT__genblk1__BRA__24__KET____DOT__cla_part0__DOT__g;
        CData/*3:0*/ div__DOT__cla0__DOT__genblk1__BRA__24__KET____DOT__cla_part0__DOT____Vcellout__carry0__c;
        CData/*3:0*/ div__DOT__cla0__DOT__genblk1__BRA__28__KET____DOT__cla_part0__DOT__p;
        CData/*3:0*/ div__DOT__cla0__DOT__genblk1__BRA__28__KET____DOT__cla_part0__DOT__g;
        CData/*3:0*/ div__DOT__cla0__DOT__genblk1__BRA__28__KET____DOT__cla_part0__DOT____Vcellout__carry0__c;
        CData/*3:0*/ div__DOT__cla0__DOT__genblk1__BRA__32__KET____DOT__cla_part0__DOT__p;
        CData/*3:0*/ div__DOT__cla0__DOT__genblk1__BRA__32__KET____DOT__cla_part0__DOT__g;
        CData/*3:0*/ div__DOT__cla0__DOT__genblk1__BRA__32__KET____DOT__cla_part0__DOT____Vcellout__carry0__c;
        CData/*3:0*/ div__DOT__cla0__DOT__genblk1__BRA__36__KET____DOT__cla_part0__DOT__p;
        CData/*3:0*/ div__DOT__cla0__DOT__genblk1__BRA__36__KET____DOT__cla_part0__DOT__g;
        CData/*3:0*/ div__DOT__cla0__DOT__genblk1__BRA__36__KET____DOT__cla_part0__DOT____Vcellout__carry0__c;
        CData/*3:0*/ div__DOT__cla0__DOT__genblk1__BRA__40__KET____DOT__cla_part0__DOT__p;
    };
    struct {
        CData/*3:0*/ div__DOT__cla0__DOT__genblk1__BRA__40__KET____DOT__cla_part0__DOT__g;
        CData/*3:0*/ div__DOT__cla0__DOT__genblk1__BRA__40__KET____DOT__cla_part0__DOT____Vcellout__carry0__c;
        CData/*3:0*/ div__DOT__cla0__DOT__genblk1__BRA__44__KET____DOT__cla_part0__DOT__p;
        CData/*3:0*/ div__DOT__cla0__DOT__genblk1__BRA__44__KET____DOT__cla_part0__DOT__g;
        CData/*3:0*/ div__DOT__cla0__DOT__genblk1__BRA__44__KET____DOT__cla_part0__DOT____Vcellout__carry0__c;
        CData/*3:0*/ div__DOT__cla0__DOT__genblk1__BRA__48__KET____DOT__cla_part0__DOT__p;
        CData/*3:0*/ div__DOT__cla0__DOT__genblk1__BRA__48__KET____DOT__cla_part0__DOT__g;
        CData/*3:0*/ div__DOT__cla0__DOT__genblk1__BRA__48__KET____DOT__cla_part0__DOT____Vcellout__carry0__c;
        CData/*3:0*/ div__DOT__cla0__DOT__genblk1__BRA__52__KET____DOT__cla_part0__DOT__p;
        CData/*3:0*/ div__DOT__cla0__DOT__genblk1__BRA__52__KET____DOT__cla_part0__DOT__g;
        CData/*3:0*/ div__DOT__cla0__DOT__genblk1__BRA__52__KET____DOT__cla_part0__DOT____Vcellout__carry0__c;
        CData/*3:0*/ div__DOT__cla0__DOT__genblk1__BRA__56__KET____DOT__cla_part0__DOT__p;
        CData/*3:0*/ div__DOT__cla0__DOT__genblk1__BRA__56__KET____DOT__cla_part0__DOT__g;
        CData/*3:0*/ div__DOT__cla0__DOT__genblk1__BRA__56__KET____DOT__cla_part0__DOT____Vcellout__carry0__c;
        CData/*3:0*/ div__DOT__cla0__DOT__genblk1__BRA__60__KET____DOT__cla_part0__DOT__p;
        CData/*3:0*/ div__DOT__cla0__DOT__genblk1__BRA__60__KET____DOT__cla_part0__DOT__g;
        CData/*3:0*/ div__DOT__cla0__DOT__genblk1__BRA__60__KET____DOT__cla_part0__DOT____Vcellout__carry0__c;
        CData/*3:0*/ div__DOT__cla1__DOT__genblk1__BRA__0__KET____DOT__cla_part0__DOT__p;
        CData/*3:0*/ div__DOT__cla1__DOT__genblk1__BRA__0__KET____DOT__cla_part0__DOT__g;
        CData/*3:0*/ div__DOT__cla1__DOT__genblk1__BRA__0__KET____DOT__cla_part0__DOT____Vcellout__carry0__c;
        CData/*3:0*/ div__DOT__cla1__DOT__genblk1__BRA__4__KET____DOT__cla_part0__DOT__p;
        CData/*3:0*/ div__DOT__cla1__DOT__genblk1__BRA__4__KET____DOT__cla_part0__DOT__g;
        CData/*3:0*/ div__DOT__cla1__DOT__genblk1__BRA__4__KET____DOT__cla_part0__DOT____Vcellout__carry0__c;
        CData/*3:0*/ div__DOT__cla1__DOT__genblk1__BRA__8__KET____DOT__cla_part0__DOT__p;
        CData/*3:0*/ div__DOT__cla1__DOT__genblk1__BRA__8__KET____DOT__cla_part0__DOT__g;
        CData/*3:0*/ div__DOT__cla1__DOT__genblk1__BRA__8__KET____DOT__cla_part0__DOT____Vcellout__carry0__c;
        CData/*3:0*/ div__DOT__cla1__DOT__genblk1__BRA__12__KET____DOT__cla_part0__DOT__p;
        CData/*3:0*/ div__DOT__cla1__DOT__genblk1__BRA__12__KET____DOT__cla_part0__DOT__g;
        CData/*3:0*/ div__DOT__cla1__DOT__genblk1__BRA__12__KET____DOT__cla_part0__DOT____Vcellout__carry0__c;
        CData/*3:0*/ div__DOT__cla1__DOT__genblk1__BRA__16__KET____DOT__cla_part0__DOT__p;
        CData/*3:0*/ div__DOT__cla1__DOT__genblk1__BRA__16__KET____DOT__cla_part0__DOT__g;
        CData/*3:0*/ div__DOT__cla1__DOT__genblk1__BRA__16__KET____DOT__cla_part0__DOT____Vcellout__carry0__c;
        CData/*3:0*/ div__DOT__cla1__DOT__genblk1__BRA__20__KET____DOT__cla_part0__DOT__p;
        CData/*3:0*/ div__DOT__cla1__DOT__genblk1__BRA__20__KET____DOT__cla_part0__DOT__g;
        CData/*3:0*/ div__DOT__cla1__DOT__genblk1__BRA__20__KET____DOT__cla_part0__DOT____Vcellout__carry0__c;
        CData/*3:0*/ div__DOT__cla1__DOT__genblk1__BRA__24__KET____DOT__cla_part0__DOT__p;
        CData/*3:0*/ div__DOT__cla1__DOT__genblk1__BRA__24__KET____DOT__cla_part0__DOT__g;
        CData/*3:0*/ div__DOT__cla1__DOT__genblk1__BRA__24__KET____DOT__cla_part0__DOT____Vcellout__carry0__c;
        CData/*3:0*/ div__DOT__cla1__DOT__genblk1__BRA__28__KET____DOT__cla_part0__DOT__p;
        CData/*3:0*/ div__DOT__cla1__DOT__genblk1__BRA__28__KET____DOT__cla_part0__DOT__g;
        CData/*3:0*/ div__DOT__cla1__DOT__genblk1__BRA__28__KET____DOT__cla_part0__DOT____Vcellout__carry0__c;
        CData/*3:0*/ div__DOT__cla1__DOT__genblk1__BRA__32__KET____DOT__cla_part0__DOT__p;
        CData/*3:0*/ div__DOT__cla1__DOT__genblk1__BRA__32__KET____DOT__cla_part0__DOT__g;
        CData/*3:0*/ div__DOT__cla1__DOT__genblk1__BRA__32__KET____DOT__cla_part0__DOT____Vcellout__carry0__c;
        CData/*3:0*/ div__DOT__cla1__DOT__genblk1__BRA__36__KET____DOT__cla_part0__DOT__p;
        CData/*3:0*/ div__DOT__cla1__DOT__genblk1__BRA__36__KET____DOT__cla_part0__DOT__g;
        CData/*3:0*/ div__DOT__cla1__DOT__genblk1__BRA__36__KET____DOT__cla_part0__DOT____Vcellout__carry0__c;
        CData/*3:0*/ div__DOT__cla1__DOT__genblk1__BRA__40__KET____DOT__cla_part0__DOT__p;
        CData/*3:0*/ div__DOT__cla1__DOT__genblk1__BRA__40__KET____DOT__cla_part0__DOT__g;
        CData/*3:0*/ div__DOT__cla1__DOT__genblk1__BRA__40__KET____DOT__cla_part0__DOT____Vcellout__carry0__c;
        CData/*3:0*/ div__DOT__cla1__DOT__genblk1__BRA__44__KET____DOT__cla_part0__DOT__p;
        CData/*3:0*/ div__DOT__cla1__DOT__genblk1__BRA__44__KET____DOT__cla_part0__DOT__g;
        CData/*3:0*/ div__DOT__cla1__DOT__genblk1__BRA__44__KET____DOT__cla_part0__DOT____Vcellout__carry0__c;
        CData/*3:0*/ div__DOT__cla1__DOT__genblk1__BRA__48__KET____DOT__cla_part0__DOT__p;
        CData/*3:0*/ div__DOT__cla1__DOT__genblk1__BRA__48__KET____DOT__cla_part0__DOT__g;
        CData/*3:0*/ div__DOT__cla1__DOT__genblk1__BRA__48__KET____DOT__cla_part0__DOT____Vcellout__carry0__c;
        CData/*3:0*/ div__DOT__cla1__DOT__genblk1__BRA__52__KET____DOT__cla_part0__DOT__p;
        CData/*3:0*/ div__DOT__cla1__DOT__genblk1__BRA__52__KET____DOT__cla_part0__DOT__g;
        CData/*3:0*/ div__DOT__cla1__DOT__genblk1__BRA__52__KET____DOT__cla_part0__DOT____Vcellout__carry0__c;
        CData/*3:0*/ div__DOT__cla1__DOT__genblk1__BRA__56__KET____DOT__cla_part0__DOT__p;
        CData/*3:0*/ div__DOT__cla1__DOT__genblk1__BRA__56__KET____DOT__cla_part0__DOT__g;
        CData/*3:0*/ div__DOT__cla1__DOT__genblk1__BRA__56__KET____DOT__cla_part0__DOT____Vcellout__carry0__c;
        CData/*3:0*/ div__DOT__cla1__DOT__genblk1__BRA__60__KET____DOT__cla_part0__DOT__p;
        CData/*3:0*/ div__DOT__cla1__DOT__genblk1__BRA__60__KET____DOT__cla_part0__DOT__g;
    };
    struct {
        CData/*3:0*/ div__DOT__cla1__DOT__genblk1__BRA__60__KET____DOT__cla_part0__DOT____Vcellout__carry0__c;
        CData/*3:0*/ __Vtrigrprev__TOP__div__DOT__lzd0__DOT__lzd_32_0__DOT____Vcellout__lzd_16_1____pinNumber2;
        CData/*3:0*/ __Vtrigrprev__TOP__div__DOT__lzd0__DOT__lzd_32_0__DOT____Vcellout__lzd_16_0____pinNumber2;
        CData/*3:0*/ __Vtrigrprev__TOP__div__DOT__lzd0__DOT__lzd_32_1__DOT____Vcellout__lzd_16_1____pinNumber2;
        CData/*3:0*/ __Vtrigrprev__TOP__div__DOT__lzd0__DOT__lzd_32_1__DOT____Vcellout__lzd_16_0____pinNumber2;
        CData/*3:0*/ __Vtrigrprev__TOP__div__DOT__lzd1__DOT__lzd_32_0__DOT____Vcellout__lzd_16_1____pinNumber2;
        CData/*3:0*/ __Vtrigrprev__TOP__div__DOT__lzd1__DOT__lzd_32_0__DOT____Vcellout__lzd_16_0____pinNumber2;
        CData/*3:0*/ __Vtrigrprev__TOP__div__DOT__lzd1__DOT__lzd_32_1__DOT____Vcellout__lzd_16_1____pinNumber2;
        CData/*3:0*/ __Vtrigrprev__TOP__div__DOT__lzd1__DOT__lzd_32_1__DOT____Vcellout__lzd_16_0____pinNumber2;
        CData/*0:0*/ __VstlDidInit;
        CData/*0:0*/ __Vtrigrprev__TOP__clk;
        CData/*0:0*/ __VactDidInit;
        CData/*0:0*/ __VactContinue;
        IData/*31:0*/ div__DOT__i;
        IData/*31:0*/ __VstlIterCount;
        IData/*31:0*/ __VicoIterCount;
        IData/*31:0*/ __VactIterCount;
        VL_IN64(x,63,0);
        VL_IN64(y,63,0);
        VL_OUT64(result,63,0);
        VL_OUT64(rem,63,0);
        QData/*63:0*/ div__DOT__x_abs_reg;
        QData/*63:0*/ div__DOT__y_abs_reg;
        QData/*63:0*/ div__DOT__divisor_n;
        QData/*63:0*/ div__DOT__divisor;
        QData/*63:0*/ div__DOT__dividend;
        QData/*63:0*/ div__DOT__add_B;
        QData/*63:0*/ div__DOT__fix_a;
        QData/*63:0*/ div__DOT__fix_b;
        QData/*63:0*/ div__DOT__s_abs_reg;
        QData/*63:0*/ div__DOT__r_abs_reg;
        QData/*63:0*/ div__DOT__r_abs;
        VlUnpacked<CData/*4:0*/, 2> div__DOT__lzd0__DOT__out_3_0;
        VlUnpacked<CData/*3:0*/, 2> div__DOT__lzd0__DOT__lzd_32_0__DOT__out_3_0;
        VlUnpacked<CData/*1:0*/, 4> div__DOT__lzd0__DOT__lzd_32_0__DOT__lzd_16_0__DOT__out_2;
        VlUnpacked<CData/*1:0*/, 4> div__DOT__lzd0__DOT__lzd_32_0__DOT__lzd_16_1__DOT__out_2;
        VlUnpacked<CData/*3:0*/, 2> div__DOT__lzd0__DOT__lzd_32_1__DOT__out_3_0;
        VlUnpacked<CData/*1:0*/, 4> div__DOT__lzd0__DOT__lzd_32_1__DOT__lzd_16_0__DOT__out_2;
        VlUnpacked<CData/*1:0*/, 4> div__DOT__lzd0__DOT__lzd_32_1__DOT__lzd_16_1__DOT__out_2;
        VlUnpacked<CData/*4:0*/, 2> div__DOT__lzd1__DOT__out_3_0;
        VlUnpacked<CData/*3:0*/, 2> div__DOT__lzd1__DOT__lzd_32_0__DOT__out_3_0;
        VlUnpacked<CData/*1:0*/, 4> div__DOT__lzd1__DOT__lzd_32_0__DOT__lzd_16_0__DOT__out_2;
        VlUnpacked<CData/*1:0*/, 4> div__DOT__lzd1__DOT__lzd_32_0__DOT__lzd_16_1__DOT__out_2;
        VlUnpacked<CData/*3:0*/, 2> div__DOT__lzd1__DOT__lzd_32_1__DOT__out_3_0;
        VlUnpacked<CData/*1:0*/, 4> div__DOT__lzd1__DOT__lzd_32_1__DOT__lzd_16_0__DOT__out_2;
        VlUnpacked<CData/*1:0*/, 4> div__DOT__lzd1__DOT__lzd_32_1__DOT__lzd_16_1__DOT__out_2;
        VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    };
    VlTriggerVec<9> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<9> __VactTriggered;
    VlTriggerVec<9> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vdiv__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vdiv___024root(Vdiv__Syms* symsp, const char* v__name);
    ~Vdiv___024root();
    VL_UNCOPYABLE(Vdiv___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
