// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VBrent_Kung_Adder.h"
#include "VBrent_Kung_Adder__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VBrent_Kung_Adder::VBrent_Kung_Adder(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VBrent_Kung_Adder__Syms(contextp(), _vcname__, this)}
    , c0{vlSymsp->TOP.c0}
    , S{vlSymsp->TOP.S}
    , A{vlSymsp->TOP.A}
    , B{vlSymsp->TOP.B}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VBrent_Kung_Adder::VBrent_Kung_Adder(const char* _vcname__)
    : VBrent_Kung_Adder(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VBrent_Kung_Adder::~VBrent_Kung_Adder() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VBrent_Kung_Adder___024root___eval_debug_assertions(VBrent_Kung_Adder___024root* vlSelf);
#endif  // VL_DEBUG
void VBrent_Kung_Adder___024root___eval_static(VBrent_Kung_Adder___024root* vlSelf);
void VBrent_Kung_Adder___024root___eval_initial(VBrent_Kung_Adder___024root* vlSelf);
void VBrent_Kung_Adder___024root___eval_settle(VBrent_Kung_Adder___024root* vlSelf);
void VBrent_Kung_Adder___024root___eval(VBrent_Kung_Adder___024root* vlSelf);

void VBrent_Kung_Adder::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VBrent_Kung_Adder::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VBrent_Kung_Adder___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VBrent_Kung_Adder___024root___eval_static(&(vlSymsp->TOP));
        VBrent_Kung_Adder___024root___eval_initial(&(vlSymsp->TOP));
        VBrent_Kung_Adder___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VBrent_Kung_Adder___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VBrent_Kung_Adder::eventsPending() { return false; }

uint64_t VBrent_Kung_Adder::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VBrent_Kung_Adder::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VBrent_Kung_Adder___024root___eval_final(VBrent_Kung_Adder___024root* vlSelf);

VL_ATTR_COLD void VBrent_Kung_Adder::final() {
    VBrent_Kung_Adder___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VBrent_Kung_Adder::hierName() const { return vlSymsp->name(); }
const char* VBrent_Kung_Adder::modelName() const { return "VBrent_Kung_Adder"; }
unsigned VBrent_Kung_Adder::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> VBrent_Kung_Adder::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VBrent_Kung_Adder___024root__trace_init_top(VBrent_Kung_Adder___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VBrent_Kung_Adder___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VBrent_Kung_Adder___024root*>(voidSelf);
    VBrent_Kung_Adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VBrent_Kung_Adder___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VBrent_Kung_Adder___024root__trace_register(VBrent_Kung_Adder___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VBrent_Kung_Adder::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VBrent_Kung_Adder::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VBrent_Kung_Adder___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
