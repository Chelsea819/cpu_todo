// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VBrent_Kung_Adder__Syms.h"


VL_ATTR_COLD void VBrent_Kung_Adder___024root__trace_init_sub__TOP__0(VBrent_Kung_Adder___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VBrent_Kung_Adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBrent_Kung_Adder___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declQuad(c+273,"A", false,-1, 63,0);
    tracep->declQuad(c+275,"B", false,-1, 63,0);
    tracep->declBit(c+277,"c0", false,-1);
    tracep->declArray(c+278,"S", false,-1, 64,0);
    tracep->pushNamePrefix("Brent_Kung_Adder ");
    tracep->declQuad(c+273,"A", false,-1, 63,0);
    tracep->declQuad(c+275,"B", false,-1, 63,0);
    tracep->declBit(c+277,"c0", false,-1);
    tracep->declArray(c+278,"S", false,-1, 64,0);
    tracep->declArray(c+281,"S_temp", false,-1, 64,0);
    tracep->declBus(c+8,"r_temp", false,-1, 15,0);
    tracep->declBus(c+256,"r", false,-1, 15,0);
    tracep->declBus(c+284,"cin", false,-1, 8,0);
    tracep->declBus(c+9,"q", false,-1, 15,0);
    tracep->pushNamePrefix("cin_generation[0] ");
    tracep->pushNamePrefix("f ");
    tracep->declBus(c+257,"r", false,-1, 1,0);
    tracep->declBit(c+277,"c0", false,-1);
    tracep->declBit(c+1,"cin", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("cin_generation[1] ");
    tracep->pushNamePrefix("f ");
    tracep->declBus(c+258,"r", false,-1, 1,0);
    tracep->declBit(c+277,"c0", false,-1);
    tracep->declBit(c+2,"cin", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("cin_generation[2] ");
    tracep->pushNamePrefix("f ");
    tracep->declBus(c+259,"r", false,-1, 1,0);
    tracep->declBit(c+277,"c0", false,-1);
    tracep->declBit(c+3,"cin", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("cin_generation[3] ");
    tracep->pushNamePrefix("f ");
    tracep->declBus(c+260,"r", false,-1, 1,0);
    tracep->declBit(c+277,"c0", false,-1);
    tracep->declBit(c+4,"cin", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("cin_generation[4] ");
    tracep->pushNamePrefix("f ");
    tracep->declBus(c+261,"r", false,-1, 1,0);
    tracep->declBit(c+277,"c0", false,-1);
    tracep->declBit(c+5,"cin", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("cin_generation[5] ");
    tracep->pushNamePrefix("f ");
    tracep->declBus(c+262,"r", false,-1, 1,0);
    tracep->declBit(c+277,"c0", false,-1);
    tracep->declBit(c+6,"cin", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("cin_generation[6] ");
    tracep->pushNamePrefix("f ");
    tracep->declBus(c+263,"r", false,-1, 1,0);
    tracep->declBit(c+277,"c0", false,-1);
    tracep->declBit(c+7,"cin", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("cin_generation[7] ");
    tracep->pushNamePrefix("f ");
    tracep->declBus(c+264,"r", false,-1, 1,0);
    tracep->declBit(c+277,"c0", false,-1);
    tracep->declBit(c+265,"cin", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("parallel_FA_CLA_prefix[0] ");
    tracep->pushNamePrefix("f ");
    tracep->declBus(c+429,"Groupsize", false,-1, 31,0);
    tracep->declBus(c+285,"a", false,-1, 7,0);
    tracep->declBus(c+286,"b", false,-1, 7,0);
    tracep->declBit(c+277,"cin", false,-1);
    tracep->declBus(c+174,"s", false,-1, 7,0);
    tracep->declBus(c+10,"qg", false,-1, 1,0);
    tracep->declBus(c+11,"q", false,-1, 15,0);
    tracep->declBus(c+246,"c", false,-1, 7,0);
    tracep->pushNamePrefix("parallel_FA_CLA_prefix[0] ");
    tracep->pushNamePrefix("f ");
    tracep->declBit(c+287,"a", false,-1);
    tracep->declBit(c+288,"b", false,-1);
    tracep->declBit(c+247,"cin", false,-1);
    tracep->declBit(c+248,"s", false,-1);
    tracep->declBus(c+12,"q", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("parallel_FA_CLA_prefix[1] ");
    tracep->pushNamePrefix("f ");
    tracep->declBit(c+289,"a", false,-1);
    tracep->declBit(c+290,"b", false,-1);
    tracep->declBit(c+249,"cin", false,-1);
    tracep->declBit(c+175,"s", false,-1);
    tracep->declBus(c+13,"q", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("parallel_FA_CLA_prefix[2] ");
    tracep->pushNamePrefix("f ");
    tracep->declBit(c+291,"a", false,-1);
    tracep->declBit(c+292,"b", false,-1);
    tracep->declBit(c+250,"cin", false,-1);
    tracep->declBit(c+176,"s", false,-1);
    tracep->declBus(c+14,"q", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("parallel_FA_CLA_prefix[3] ");
    tracep->pushNamePrefix("f ");
    tracep->declBit(c+293,"a", false,-1);
    tracep->declBit(c+294,"b", false,-1);
    tracep->declBit(c+251,"cin", false,-1);
    tracep->declBit(c+177,"s", false,-1);
    tracep->declBus(c+15,"q", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("parallel_FA_CLA_prefix[4] ");
    tracep->pushNamePrefix("f ");
    tracep->declBit(c+295,"a", false,-1);
    tracep->declBit(c+296,"b", false,-1);
    tracep->declBit(c+252,"cin", false,-1);
    tracep->declBit(c+178,"s", false,-1);
    tracep->declBus(c+16,"q", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("parallel_FA_CLA_prefix[5] ");
    tracep->pushNamePrefix("f ");
    tracep->declBit(c+297,"a", false,-1);
    tracep->declBit(c+298,"b", false,-1);
    tracep->declBit(c+253,"cin", false,-1);
    tracep->declBit(c+179,"s", false,-1);
    tracep->declBus(c+17,"q", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("parallel_FA_CLA_prefix[6] ");
    tracep->pushNamePrefix("f ");
    tracep->declBit(c+299,"a", false,-1);
    tracep->declBit(c+300,"b", false,-1);
    tracep->declBit(c+254,"cin", false,-1);
    tracep->declBit(c+180,"s", false,-1);
    tracep->declBus(c+18,"q", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("parallel_FA_CLA_prefix[7] ");
    tracep->pushNamePrefix("f ");
    tracep->declBit(c+301,"a", false,-1);
    tracep->declBit(c+302,"b", false,-1);
    tracep->declBit(c+255,"cin", false,-1);
    tracep->declBit(c+181,"s", false,-1);
    tracep->declBus(c+19,"q", false,-1, 1,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("parallel_FA_CLA_prefix[1] ");
    tracep->pushNamePrefix("f ");
    tracep->declBus(c+429,"Groupsize", false,-1, 31,0);
    tracep->declBus(c+303,"a", false,-1, 7,0);
    tracep->declBus(c+304,"b", false,-1, 7,0);
    tracep->declBit(c+1,"cin", false,-1);
    tracep->declBus(c+165,"s", false,-1, 7,0);
    tracep->declBus(c+20,"qg", false,-1, 1,0);
    tracep->declBus(c+21,"q", false,-1, 15,0);
    tracep->declBus(c+237,"c", false,-1, 7,0);
    tracep->pushNamePrefix("parallel_FA_CLA_prefix[0] ");
    tracep->pushNamePrefix("f ");
    tracep->declBit(c+305,"a", false,-1);
    tracep->declBit(c+306,"b", false,-1);
    tracep->declBit(c+238,"cin", false,-1);
    tracep->declBit(c+166,"s", false,-1);
    tracep->declBus(c+22,"q", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("parallel_FA_CLA_prefix[1] ");
    tracep->pushNamePrefix("f ");
    tracep->declBit(c+307,"a", false,-1);
    tracep->declBit(c+308,"b", false,-1);
    tracep->declBit(c+239,"cin", false,-1);
    tracep->declBit(c+167,"s", false,-1);
    tracep->declBus(c+23,"q", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("parallel_FA_CLA_prefix[2] ");
    tracep->pushNamePrefix("f ");
    tracep->declBit(c+309,"a", false,-1);
    tracep->declBit(c+310,"b", false,-1);
    tracep->declBit(c+240,"cin", false,-1);
    tracep->declBit(c+168,"s", false,-1);
    tracep->declBus(c+24,"q", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("parallel_FA_CLA_prefix[3] ");
    tracep->pushNamePrefix("f ");
    tracep->declBit(c+311,"a", false,-1);
    tracep->declBit(c+312,"b", false,-1);
    tracep->declBit(c+241,"cin", false,-1);
    tracep->declBit(c+169,"s", false,-1);
    tracep->declBus(c+25,"q", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("parallel_FA_CLA_prefix[4] ");
    tracep->pushNamePrefix("f ");
    tracep->declBit(c+313,"a", false,-1);
    tracep->declBit(c+314,"b", false,-1);
    tracep->declBit(c+242,"cin", false,-1);
    tracep->declBit(c+170,"s", false,-1);
    tracep->declBus(c+26,"q", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("parallel_FA_CLA_prefix[5] ");
    tracep->pushNamePrefix("f ");
    tracep->declBit(c+315,"a", false,-1);
    tracep->declBit(c+316,"b", false,-1);
    tracep->declBit(c+243,"cin", false,-1);
    tracep->declBit(c+171,"s", false,-1);
    tracep->declBus(c+27,"q", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("parallel_FA_CLA_prefix[6] ");
    tracep->pushNamePrefix("f ");
    tracep->declBit(c+317,"a", false,-1);
    tracep->declBit(c+318,"b", false,-1);
    tracep->declBit(c+244,"cin", false,-1);
    tracep->declBit(c+172,"s", false,-1);
    tracep->declBus(c+28,"q", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("parallel_FA_CLA_prefix[7] ");
    tracep->pushNamePrefix("f ");
    tracep->declBit(c+319,"a", false,-1);
    tracep->declBit(c+320,"b", false,-1);
    tracep->declBit(c+245,"cin", false,-1);
    tracep->declBit(c+173,"s", false,-1);
    tracep->declBus(c+29,"q", false,-1, 1,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("parallel_FA_CLA_prefix[2] ");
    tracep->pushNamePrefix("f ");
    tracep->declBus(c+429,"Groupsize", false,-1, 31,0);
    tracep->declBus(c+321,"a", false,-1, 7,0);
    tracep->declBus(c+322,"b", false,-1, 7,0);
    tracep->declBit(c+2,"cin", false,-1);
    tracep->declBus(c+156,"s", false,-1, 7,0);
    tracep->declBus(c+30,"qg", false,-1, 1,0);
    tracep->declBus(c+31,"q", false,-1, 15,0);
    tracep->declBus(c+228,"c", false,-1, 7,0);
    tracep->pushNamePrefix("parallel_FA_CLA_prefix[0] ");
    tracep->pushNamePrefix("f ");
    tracep->declBit(c+323,"a", false,-1);
    tracep->declBit(c+324,"b", false,-1);
    tracep->declBit(c+229,"cin", false,-1);
    tracep->declBit(c+157,"s", false,-1);
    tracep->declBus(c+32,"q", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("parallel_FA_CLA_prefix[1] ");
    tracep->pushNamePrefix("f ");
    tracep->declBit(c+325,"a", false,-1);
    tracep->declBit(c+326,"b", false,-1);
    tracep->declBit(c+230,"cin", false,-1);
    tracep->declBit(c+158,"s", false,-1);
    tracep->declBus(c+33,"q", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("parallel_FA_CLA_prefix[2] ");
    tracep->pushNamePrefix("f ");
    tracep->declBit(c+327,"a", false,-1);
    tracep->declBit(c+328,"b", false,-1);
    tracep->declBit(c+231,"cin", false,-1);
    tracep->declBit(c+159,"s", false,-1);
    tracep->declBus(c+34,"q", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("parallel_FA_CLA_prefix[3] ");
    tracep->pushNamePrefix("f ");
    tracep->declBit(c+329,"a", false,-1);
    tracep->declBit(c+330,"b", false,-1);
    tracep->declBit(c+232,"cin", false,-1);
    tracep->declBit(c+160,"s", false,-1);
    tracep->declBus(c+35,"q", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("parallel_FA_CLA_prefix[4] ");
    tracep->pushNamePrefix("f ");
    tracep->declBit(c+331,"a", false,-1);
    tracep->declBit(c+332,"b", false,-1);
    tracep->declBit(c+233,"cin", false,-1);
    tracep->declBit(c+161,"s", false,-1);
    tracep->declBus(c+36,"q", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("parallel_FA_CLA_prefix[5] ");
    tracep->pushNamePrefix("f ");
    tracep->declBit(c+333,"a", false,-1);
    tracep->declBit(c+334,"b", false,-1);
    tracep->declBit(c+234,"cin", false,-1);
    tracep->declBit(c+162,"s", false,-1);
    tracep->declBus(c+37,"q", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("parallel_FA_CLA_prefix[6] ");
    tracep->pushNamePrefix("f ");
    tracep->declBit(c+335,"a", false,-1);
    tracep->declBit(c+336,"b", false,-1);
    tracep->declBit(c+235,"cin", false,-1);
    tracep->declBit(c+163,"s", false,-1);
    tracep->declBus(c+38,"q", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("parallel_FA_CLA_prefix[7] ");
    tracep->pushNamePrefix("f ");
    tracep->declBit(c+337,"a", false,-1);
    tracep->declBit(c+338,"b", false,-1);
    tracep->declBit(c+236,"cin", false,-1);
    tracep->declBit(c+164,"s", false,-1);
    tracep->declBus(c+39,"q", false,-1, 1,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("parallel_FA_CLA_prefix[3] ");
    tracep->pushNamePrefix("f ");
    tracep->declBus(c+429,"Groupsize", false,-1, 31,0);
    tracep->declBus(c+339,"a", false,-1, 7,0);
    tracep->declBus(c+340,"b", false,-1, 7,0);
    tracep->declBit(c+3,"cin", false,-1);
    tracep->declBus(c+139,"s", false,-1, 7,0);
    tracep->declBus(c+40,"qg", false,-1, 1,0);
    tracep->declBus(c+41,"q", false,-1, 15,0);
    tracep->declBus(c+209,"c", false,-1, 7,0);
    tracep->pushNamePrefix("parallel_FA_CLA_prefix[0] ");
    tracep->pushNamePrefix("f ");
    tracep->declBit(c+341,"a", false,-1);
    tracep->declBit(c+342,"b", false,-1);
    tracep->declBit(c+210,"cin", false,-1);
    tracep->declBit(c+140,"s", false,-1);
    tracep->declBus(c+42,"q", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("parallel_FA_CLA_prefix[1] ");
    tracep->pushNamePrefix("f ");
    tracep->declBit(c+343,"a", false,-1);
    tracep->declBit(c+344,"b", false,-1);
    tracep->declBit(c+211,"cin", false,-1);
    tracep->declBit(c+141,"s", false,-1);
    tracep->declBus(c+43,"q", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("parallel_FA_CLA_prefix[2] ");
    tracep->pushNamePrefix("f ");
    tracep->declBit(c+345,"a", false,-1);
    tracep->declBit(c+346,"b", false,-1);
    tracep->declBit(c+212,"cin", false,-1);
    tracep->declBit(c+142,"s", false,-1);
    tracep->declBus(c+44,"q", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("parallel_FA_CLA_prefix[3] ");
    tracep->pushNamePrefix("f ");
    tracep->declBit(c+347,"a", false,-1);
    tracep->declBit(c+348,"b", false,-1);
    tracep->declBit(c+213,"cin", false,-1);
    tracep->declBit(c+143,"s", false,-1);
    tracep->declBus(c+45,"q", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("parallel_FA_CLA_prefix[4] ");
    tracep->pushNamePrefix("f ");
    tracep->declBit(c+349,"a", false,-1);
    tracep->declBit(c+350,"b", false,-1);
    tracep->declBit(c+214,"cin", false,-1);
    tracep->declBit(c+144,"s", false,-1);
    tracep->declBus(c+46,"q", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("parallel_FA_CLA_prefix[5] ");
    tracep->pushNamePrefix("f ");
    tracep->declBit(c+351,"a", false,-1);
    tracep->declBit(c+352,"b", false,-1);
    tracep->declBit(c+215,"cin", false,-1);
    tracep->declBit(c+145,"s", false,-1);
    tracep->declBus(c+47,"q", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("parallel_FA_CLA_prefix[6] ");
    tracep->pushNamePrefix("f ");
    tracep->declBit(c+353,"a", false,-1);
    tracep->declBit(c+354,"b", false,-1);
    tracep->declBit(c+216,"cin", false,-1);
    tracep->declBit(c+146,"s", false,-1);
    tracep->declBus(c+48,"q", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("parallel_FA_CLA_prefix[7] ");
    tracep->pushNamePrefix("f ");
    tracep->declBit(c+355,"a", false,-1);
    tracep->declBit(c+356,"b", false,-1);
    tracep->declBit(c+217,"cin", false,-1);
    tracep->declBit(c+147,"s", false,-1);
    tracep->declBus(c+49,"q", false,-1, 1,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("parallel_FA_CLA_prefix[4] ");
    tracep->pushNamePrefix("f ");
    tracep->declBus(c+429,"Groupsize", false,-1, 31,0);
    tracep->declBus(c+357,"a", false,-1, 7,0);
    tracep->declBus(c+358,"b", false,-1, 7,0);
    tracep->declBit(c+4,"cin", false,-1);
    tracep->declBus(c+121,"s", false,-1, 7,0);
    tracep->declBus(c+50,"qg", false,-1, 1,0);
    tracep->declBus(c+51,"q", false,-1, 15,0);
    tracep->declBus(c+191,"c", false,-1, 7,0);
    tracep->pushNamePrefix("parallel_FA_CLA_prefix[0] ");
    tracep->pushNamePrefix("f ");
    tracep->declBit(c+359,"a", false,-1);
    tracep->declBit(c+360,"b", false,-1);
    tracep->declBit(c+192,"cin", false,-1);
    tracep->declBit(c+122,"s", false,-1);
    tracep->declBus(c+52,"q", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("parallel_FA_CLA_prefix[1] ");
    tracep->pushNamePrefix("f ");
    tracep->declBit(c+361,"a", false,-1);
    tracep->declBit(c+362,"b", false,-1);
    tracep->declBit(c+193,"cin", false,-1);
    tracep->declBit(c+123,"s", false,-1);
    tracep->declBus(c+53,"q", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("parallel_FA_CLA_prefix[2] ");
    tracep->pushNamePrefix("f ");
    tracep->declBit(c+363,"a", false,-1);
    tracep->declBit(c+364,"b", false,-1);
    tracep->declBit(c+194,"cin", false,-1);
    tracep->declBit(c+124,"s", false,-1);
    tracep->declBus(c+54,"q", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("parallel_FA_CLA_prefix[3] ");
    tracep->pushNamePrefix("f ");
    tracep->declBit(c+365,"a", false,-1);
    tracep->declBit(c+366,"b", false,-1);
    tracep->declBit(c+195,"cin", false,-1);
    tracep->declBit(c+125,"s", false,-1);
    tracep->declBus(c+55,"q", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("parallel_FA_CLA_prefix[4] ");
    tracep->pushNamePrefix("f ");
    tracep->declBit(c+367,"a", false,-1);
    tracep->declBit(c+368,"b", false,-1);
    tracep->declBit(c+196,"cin", false,-1);
    tracep->declBit(c+126,"s", false,-1);
    tracep->declBus(c+56,"q", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("parallel_FA_CLA_prefix[5] ");
    tracep->pushNamePrefix("f ");
    tracep->declBit(c+369,"a", false,-1);
    tracep->declBit(c+370,"b", false,-1);
    tracep->declBit(c+197,"cin", false,-1);
    tracep->declBit(c+127,"s", false,-1);
    tracep->declBus(c+57,"q", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("parallel_FA_CLA_prefix[6] ");
    tracep->pushNamePrefix("f ");
    tracep->declBit(c+371,"a", false,-1);
    tracep->declBit(c+372,"b", false,-1);
    tracep->declBit(c+198,"cin", false,-1);
    tracep->declBit(c+128,"s", false,-1);
    tracep->declBus(c+58,"q", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("parallel_FA_CLA_prefix[7] ");
    tracep->pushNamePrefix("f ");
    tracep->declBit(c+373,"a", false,-1);
    tracep->declBit(c+374,"b", false,-1);
    tracep->declBit(c+199,"cin", false,-1);
    tracep->declBit(c+129,"s", false,-1);
    tracep->declBus(c+59,"q", false,-1, 1,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("parallel_FA_CLA_prefix[5] ");
    tracep->pushNamePrefix("f ");
    tracep->declBus(c+429,"Groupsize", false,-1, 31,0);
    tracep->declBus(c+375,"a", false,-1, 7,0);
    tracep->declBus(c+376,"b", false,-1, 7,0);
    tracep->declBit(c+5,"cin", false,-1);
    tracep->declBus(c+130,"s", false,-1, 7,0);
    tracep->declBus(c+60,"qg", false,-1, 1,0);
    tracep->declBus(c+61,"q", false,-1, 15,0);
    tracep->declBus(c+200,"c", false,-1, 7,0);
    tracep->pushNamePrefix("parallel_FA_CLA_prefix[0] ");
    tracep->pushNamePrefix("f ");
    tracep->declBit(c+377,"a", false,-1);
    tracep->declBit(c+378,"b", false,-1);
    tracep->declBit(c+201,"cin", false,-1);
    tracep->declBit(c+131,"s", false,-1);
    tracep->declBus(c+62,"q", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("parallel_FA_CLA_prefix[1] ");
    tracep->pushNamePrefix("f ");
    tracep->declBit(c+379,"a", false,-1);
    tracep->declBit(c+380,"b", false,-1);
    tracep->declBit(c+202,"cin", false,-1);
    tracep->declBit(c+132,"s", false,-1);
    tracep->declBus(c+63,"q", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("parallel_FA_CLA_prefix[2] ");
    tracep->pushNamePrefix("f ");
    tracep->declBit(c+381,"a", false,-1);
    tracep->declBit(c+382,"b", false,-1);
    tracep->declBit(c+203,"cin", false,-1);
    tracep->declBit(c+133,"s", false,-1);
    tracep->declBus(c+64,"q", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("parallel_FA_CLA_prefix[3] ");
    tracep->pushNamePrefix("f ");
    tracep->declBit(c+383,"a", false,-1);
    tracep->declBit(c+384,"b", false,-1);
    tracep->declBit(c+204,"cin", false,-1);
    tracep->declBit(c+134,"s", false,-1);
    tracep->declBus(c+65,"q", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("parallel_FA_CLA_prefix[4] ");
    tracep->pushNamePrefix("f ");
    tracep->declBit(c+385,"a", false,-1);
    tracep->declBit(c+386,"b", false,-1);
    tracep->declBit(c+205,"cin", false,-1);
    tracep->declBit(c+135,"s", false,-1);
    tracep->declBus(c+66,"q", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("parallel_FA_CLA_prefix[5] ");
    tracep->pushNamePrefix("f ");
    tracep->declBit(c+387,"a", false,-1);
    tracep->declBit(c+388,"b", false,-1);
    tracep->declBit(c+206,"cin", false,-1);
    tracep->declBit(c+136,"s", false,-1);
    tracep->declBus(c+67,"q", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("parallel_FA_CLA_prefix[6] ");
    tracep->pushNamePrefix("f ");
    tracep->declBit(c+389,"a", false,-1);
    tracep->declBit(c+390,"b", false,-1);
    tracep->declBit(c+207,"cin", false,-1);
    tracep->declBit(c+137,"s", false,-1);
    tracep->declBus(c+68,"q", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("parallel_FA_CLA_prefix[7] ");
    tracep->pushNamePrefix("f ");
    tracep->declBit(c+391,"a", false,-1);
    tracep->declBit(c+392,"b", false,-1);
    tracep->declBit(c+208,"cin", false,-1);
    tracep->declBit(c+138,"s", false,-1);
    tracep->declBus(c+69,"q", false,-1, 1,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("parallel_FA_CLA_prefix[6] ");
    tracep->pushNamePrefix("f ");
    tracep->declBus(c+429,"Groupsize", false,-1, 31,0);
    tracep->declBus(c+393,"a", false,-1, 7,0);
    tracep->declBus(c+394,"b", false,-1, 7,0);
    tracep->declBit(c+6,"cin", false,-1);
    tracep->declBus(c+112,"s", false,-1, 7,0);
    tracep->declBus(c+70,"qg", false,-1, 1,0);
    tracep->declBus(c+71,"q", false,-1, 15,0);
    tracep->declBus(c+182,"c", false,-1, 7,0);
    tracep->pushNamePrefix("parallel_FA_CLA_prefix[0] ");
    tracep->pushNamePrefix("f ");
    tracep->declBit(c+395,"a", false,-1);
    tracep->declBit(c+396,"b", false,-1);
    tracep->declBit(c+183,"cin", false,-1);
    tracep->declBit(c+113,"s", false,-1);
    tracep->declBus(c+72,"q", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("parallel_FA_CLA_prefix[1] ");
    tracep->pushNamePrefix("f ");
    tracep->declBit(c+397,"a", false,-1);
    tracep->declBit(c+398,"b", false,-1);
    tracep->declBit(c+184,"cin", false,-1);
    tracep->declBit(c+114,"s", false,-1);
    tracep->declBus(c+73,"q", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("parallel_FA_CLA_prefix[2] ");
    tracep->pushNamePrefix("f ");
    tracep->declBit(c+399,"a", false,-1);
    tracep->declBit(c+400,"b", false,-1);
    tracep->declBit(c+185,"cin", false,-1);
    tracep->declBit(c+115,"s", false,-1);
    tracep->declBus(c+74,"q", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("parallel_FA_CLA_prefix[3] ");
    tracep->pushNamePrefix("f ");
    tracep->declBit(c+401,"a", false,-1);
    tracep->declBit(c+402,"b", false,-1);
    tracep->declBit(c+186,"cin", false,-1);
    tracep->declBit(c+116,"s", false,-1);
    tracep->declBus(c+75,"q", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("parallel_FA_CLA_prefix[4] ");
    tracep->pushNamePrefix("f ");
    tracep->declBit(c+403,"a", false,-1);
    tracep->declBit(c+404,"b", false,-1);
    tracep->declBit(c+187,"cin", false,-1);
    tracep->declBit(c+117,"s", false,-1);
    tracep->declBus(c+76,"q", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("parallel_FA_CLA_prefix[5] ");
    tracep->pushNamePrefix("f ");
    tracep->declBit(c+405,"a", false,-1);
    tracep->declBit(c+406,"b", false,-1);
    tracep->declBit(c+188,"cin", false,-1);
    tracep->declBit(c+118,"s", false,-1);
    tracep->declBus(c+77,"q", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("parallel_FA_CLA_prefix[6] ");
    tracep->pushNamePrefix("f ");
    tracep->declBit(c+407,"a", false,-1);
    tracep->declBit(c+408,"b", false,-1);
    tracep->declBit(c+189,"cin", false,-1);
    tracep->declBit(c+119,"s", false,-1);
    tracep->declBus(c+78,"q", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("parallel_FA_CLA_prefix[7] ");
    tracep->pushNamePrefix("f ");
    tracep->declBit(c+409,"a", false,-1);
    tracep->declBit(c+410,"b", false,-1);
    tracep->declBit(c+190,"cin", false,-1);
    tracep->declBit(c+120,"s", false,-1);
    tracep->declBus(c+79,"q", false,-1, 1,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("parallel_FA_CLA_prefix[7] ");
    tracep->pushNamePrefix("f ");
    tracep->declBus(c+429,"Groupsize", false,-1, 31,0);
    tracep->declBus(c+411,"a", false,-1, 7,0);
    tracep->declBus(c+412,"b", false,-1, 7,0);
    tracep->declBit(c+7,"cin", false,-1);
    tracep->declBus(c+148,"s", false,-1, 7,0);
    tracep->declBus(c+80,"qg", false,-1, 1,0);
    tracep->declBus(c+81,"q", false,-1, 15,0);
    tracep->declBus(c+218,"c", false,-1, 7,0);
    tracep->pushNamePrefix("parallel_FA_CLA_prefix[0] ");
    tracep->pushNamePrefix("f ");
    tracep->declBit(c+413,"a", false,-1);
    tracep->declBit(c+414,"b", false,-1);
    tracep->declBit(c+219,"cin", false,-1);
    tracep->declBit(c+149,"s", false,-1);
    tracep->declBus(c+82,"q", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("parallel_FA_CLA_prefix[1] ");
    tracep->pushNamePrefix("f ");
    tracep->declBit(c+415,"a", false,-1);
    tracep->declBit(c+416,"b", false,-1);
    tracep->declBit(c+220,"cin", false,-1);
    tracep->declBit(c+150,"s", false,-1);
    tracep->declBus(c+83,"q", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("parallel_FA_CLA_prefix[2] ");
    tracep->pushNamePrefix("f ");
    tracep->declBit(c+417,"a", false,-1);
    tracep->declBit(c+418,"b", false,-1);
    tracep->declBit(c+221,"cin", false,-1);
    tracep->declBit(c+151,"s", false,-1);
    tracep->declBus(c+84,"q", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("parallel_FA_CLA_prefix[3] ");
    tracep->pushNamePrefix("f ");
    tracep->declBit(c+419,"a", false,-1);
    tracep->declBit(c+420,"b", false,-1);
    tracep->declBit(c+222,"cin", false,-1);
    tracep->declBit(c+152,"s", false,-1);
    tracep->declBus(c+85,"q", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("parallel_FA_CLA_prefix[4] ");
    tracep->pushNamePrefix("f ");
    tracep->declBit(c+421,"a", false,-1);
    tracep->declBit(c+422,"b", false,-1);
    tracep->declBit(c+223,"cin", false,-1);
    tracep->declBit(c+153,"s", false,-1);
    tracep->declBus(c+86,"q", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("parallel_FA_CLA_prefix[5] ");
    tracep->pushNamePrefix("f ");
    tracep->declBit(c+423,"a", false,-1);
    tracep->declBit(c+424,"b", false,-1);
    tracep->declBit(c+224,"cin", false,-1);
    tracep->declBit(c+154,"s", false,-1);
    tracep->declBus(c+87,"q", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("parallel_FA_CLA_prefix[6] ");
    tracep->pushNamePrefix("f ");
    tracep->declBit(c+425,"a", false,-1);
    tracep->declBit(c+426,"b", false,-1);
    tracep->declBit(c+225,"cin", false,-1);
    tracep->declBit(c+155,"s", false,-1);
    tracep->declBus(c+88,"q", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("parallel_FA_CLA_prefix[7] ");
    tracep->pushNamePrefix("f ");
    tracep->declBit(c+427,"a", false,-1);
    tracep->declBit(c+428,"b", false,-1);
    tracep->declBit(c+226,"cin", false,-1);
    tracep->declBit(c+227,"s", false,-1);
    tracep->declBus(c+89,"q", false,-1, 1,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("t1 ");
    tracep->declBus(c+429,"Treesize", false,-1, 31,0);
    tracep->declBus(c+9,"q", false,-1, 15,0);
    tracep->declBus(c+8,"r", false,-1, 15,0);
    tracep->pushNamePrefix("recursive_case ");
    tracep->declBus(c+90,"r_temp", false,-1, 15,0);
    tracep->pushNamePrefix("parallel_stitch_up[14] ");
    tracep->pushNamePrefix("parallel_stitch_up_produce ");
    tracep->pushNamePrefix("f ");
    tracep->declBus(c+91,"ql", false,-1, 1,0);
    tracep->declBus(c+92,"qh", false,-1, 1,0);
    tracep->declBus(c+93,"r", false,-1, 1,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("recursion_lsbh ");
    tracep->declBus(c+430,"Treesize", false,-1, 31,0);
    tracep->declBus(c+94,"q", false,-1, 7,0);
    tracep->declBus(c+95,"r", false,-1, 7,0);
    tracep->pushNamePrefix("recursive_case ");
    tracep->declBus(c+96,"r_temp", false,-1, 7,0);
    tracep->pushNamePrefix("parallel_stitch_up[6] ");
    tracep->pushNamePrefix("parallel_stitch_up_produce ");
    tracep->pushNamePrefix("f ");
    tracep->declBus(c+97,"ql", false,-1, 1,0);
    tracep->declBus(c+98,"qh", false,-1, 1,0);
    tracep->declBus(c+91,"r", false,-1, 1,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("recursion_lsbh ");
    tracep->declBus(c+431,"Treesize", false,-1, 31,0);
    tracep->declBus(c+99,"q", false,-1, 3,0);
    tracep->declBus(c+100,"r", false,-1, 3,0);
    tracep->pushNamePrefix("trival_case ");
    tracep->pushNamePrefix("f ");
    tracep->declBus(c+10,"ql", false,-1, 1,0);
    tracep->declBus(c+20,"qh", false,-1, 1,0);
    tracep->declBus(c+97,"r", false,-1, 1,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("recursion_msbh ");
    tracep->declBus(c+431,"Treesize", false,-1, 31,0);
    tracep->declBus(c+101,"q", false,-1, 3,0);
    tracep->declBus(c+102,"r", false,-1, 3,0);
    tracep->pushNamePrefix("trival_case ");
    tracep->pushNamePrefix("f ");
    tracep->declBus(c+30,"ql", false,-1, 1,0);
    tracep->declBus(c+40,"qh", false,-1, 1,0);
    tracep->declBus(c+98,"r", false,-1, 1,0);
    tracep->popNamePrefix(5);
    tracep->pushNamePrefix("recursion_msbh ");
    tracep->declBus(c+430,"Treesize", false,-1, 31,0);
    tracep->declBus(c+103,"q", false,-1, 7,0);
    tracep->declBus(c+104,"r", false,-1, 7,0);
    tracep->pushNamePrefix("recursive_case ");
    tracep->declBus(c+105,"r_temp", false,-1, 7,0);
    tracep->pushNamePrefix("parallel_stitch_up[6] ");
    tracep->pushNamePrefix("parallel_stitch_up_produce ");
    tracep->pushNamePrefix("f ");
    tracep->declBus(c+106,"ql", false,-1, 1,0);
    tracep->declBus(c+107,"qh", false,-1, 1,0);
    tracep->declBus(c+92,"r", false,-1, 1,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("recursion_lsbh ");
    tracep->declBus(c+431,"Treesize", false,-1, 31,0);
    tracep->declBus(c+108,"q", false,-1, 3,0);
    tracep->declBus(c+109,"r", false,-1, 3,0);
    tracep->pushNamePrefix("trival_case ");
    tracep->pushNamePrefix("f ");
    tracep->declBus(c+50,"ql", false,-1, 1,0);
    tracep->declBus(c+60,"qh", false,-1, 1,0);
    tracep->declBus(c+106,"r", false,-1, 1,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("recursion_msbh ");
    tracep->declBus(c+431,"Treesize", false,-1, 31,0);
    tracep->declBus(c+110,"q", false,-1, 3,0);
    tracep->declBus(c+111,"r", false,-1, 3,0);
    tracep->pushNamePrefix("trival_case ");
    tracep->pushNamePrefix("f ");
    tracep->declBus(c+70,"ql", false,-1, 1,0);
    tracep->declBus(c+80,"qh", false,-1, 1,0);
    tracep->declBus(c+107,"r", false,-1, 1,0);
    tracep->popNamePrefix(7);
    tracep->pushNamePrefix("t2 ");
    tracep->declBus(c+429,"Treesize", false,-1, 31,0);
    tracep->declBus(c+8,"q", false,-1, 15,0);
    tracep->declBus(c+256,"r", false,-1, 15,0);
    tracep->declBus(c+266,"r_temp", false,-1, 31,0);
    tracep->pushNamePrefix("final_r_even[2] ");
    tracep->pushNamePrefix("f ");
    tracep->declBus(c+258,"ql", false,-1, 1,0);
    tracep->declBus(c+267,"qh", false,-1, 1,0);
    tracep->declBus(c+259,"r", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("final_r_even[4] ");
    tracep->pushNamePrefix("f ");
    tracep->declBus(c+260,"ql", false,-1, 1,0);
    tracep->declBus(c+268,"qh", false,-1, 1,0);
    tracep->declBus(c+261,"r", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("final_r_even[6] ");
    tracep->pushNamePrefix("f ");
    tracep->declBus(c+262,"ql", false,-1, 1,0);
    tracep->declBus(c+269,"qh", false,-1, 1,0);
    tracep->declBus(c+263,"r", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("second_half_level[0] ");
    tracep->pushNamePrefix("second_half_level_logic[5] ");
    tracep->pushNamePrefix("f ");
    tracep->declBus(c+270,"ql", false,-1, 1,0);
    tracep->declBus(c+271,"qh", false,-1, 1,0);
    tracep->declBus(c+272,"r", false,-1, 1,0);
    tracep->popNamePrefix(5);
}

VL_ATTR_COLD void VBrent_Kung_Adder___024root__trace_init_top(VBrent_Kung_Adder___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VBrent_Kung_Adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBrent_Kung_Adder___024root__trace_init_top\n"); );
    // Body
    VBrent_Kung_Adder___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VBrent_Kung_Adder___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VBrent_Kung_Adder___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VBrent_Kung_Adder___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VBrent_Kung_Adder___024root__trace_register(VBrent_Kung_Adder___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VBrent_Kung_Adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBrent_Kung_Adder___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VBrent_Kung_Adder___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VBrent_Kung_Adder___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VBrent_Kung_Adder___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VBrent_Kung_Adder___024root__trace_full_sub_0(VBrent_Kung_Adder___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VBrent_Kung_Adder___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBrent_Kung_Adder___024root__trace_full_top_0\n"); );
    // Init
    VBrent_Kung_Adder___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VBrent_Kung_Adder___024root*>(voidSelf);
    VBrent_Kung_Adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VBrent_Kung_Adder___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VBrent_Kung_Adder___024root__trace_full_sub_0(VBrent_Kung_Adder___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VBrent_Kung_Adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBrent_Kung_Adder___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<3>/*95:0*/ __Vtemp_hacfc60eb__0;
    // Body
    bufp->fullBit(oldp+1,(vlSelf->Brent_Kung_Adder__DOT____Vcellout__cin_generation__BRA__0__KET____DOT__f__cin));
    bufp->fullBit(oldp+2,(vlSelf->Brent_Kung_Adder__DOT____Vcellout__cin_generation__BRA__1__KET____DOT__f__cin));
    bufp->fullBit(oldp+3,(vlSelf->Brent_Kung_Adder__DOT____Vcellout__cin_generation__BRA__2__KET____DOT__f__cin));
    bufp->fullBit(oldp+4,(vlSelf->Brent_Kung_Adder__DOT____Vcellout__cin_generation__BRA__3__KET____DOT__f__cin));
    bufp->fullBit(oldp+5,(vlSelf->Brent_Kung_Adder__DOT____Vcellout__cin_generation__BRA__4__KET____DOT__f__cin));
    bufp->fullBit(oldp+6,(vlSelf->Brent_Kung_Adder__DOT____Vcellout__cin_generation__BRA__5__KET____DOT__f__cin));
    bufp->fullBit(oldp+7,(vlSelf->Brent_Kung_Adder__DOT____Vcellout__cin_generation__BRA__6__KET____DOT__f__cin));
    bufp->fullSData(oldp+8,(((((((IData)(vlSelf->Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__parallel_stitch_up__BRA__14__KET____DOT__parallel_stitch_up_produce__DOT__f__DOT____VdfgTmp_hef005df1__0) 
                                 & (IData)(vlSelf->__VdfgTmp_h02636d51__0)) 
                                | (IData)(vlSelf->__VdfgTmp_h21f0d06f__0)) 
                               << 0xfU) | (((IData)(vlSelf->Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__parallel_stitch_up__BRA__14__KET____DOT__parallel_stitch_up_produce__DOT__f__DOT____VdfgTmp_hef005df1__0) 
                                            & (IData)(vlSelf->__VdfgTmp_h08445fd0__0)) 
                                           << 0xeU)) 
                             | (((IData)(vlSelf->__VdfgTmp_h1f5a1e66__0) 
                                 << 8U) | (IData)(vlSelf->Brent_Kung_Adder__DOT__t1__DOT____Vcellout__recursive_case__DOT__recursion_lsbh__r)))),16);
    bufp->fullSData(oldp+9,((((((IData)(vlSelf->__VdfgTmp_h5f43e680__0) 
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
    bufp->fullCData(oldp+10,((((IData)(vlSelf->__VdfgTmp_hf48b56b2__0) 
                               << 1U) | (IData)(vlSelf->__VdfgTmp_hb04d5094__0))),2);
    bufp->fullSData(oldp+11,(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT__q),16);
    bufp->fullCData(oldp+12,((((IData)(vlSelf->__VdfgTmp_h935bb1ff__0) 
                               << 1U) | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0))),2);
    bufp->fullCData(oldp+13,((((IData)(vlSelf->__VdfgTmp_h9eea7908__0) 
                               << 1U) | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h8a1e19e7__0))),2);
    bufp->fullCData(oldp+14,((((IData)(vlSelf->__VdfgTmp_hebc854fa__0) 
                               << 1U) | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_hbf2851e6__0))),2);
    bufp->fullCData(oldp+15,((((IData)(vlSelf->__VdfgTmp_heb1783bd__0) 
                               << 1U) | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h352e0dcb__0))),2);
    bufp->fullCData(oldp+16,((((IData)(vlSelf->__VdfgTmp_he1be218e__0) 
                               << 1U) | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h984bded2__0))),2);
    bufp->fullCData(oldp+17,((((IData)(vlSelf->__VdfgTmp_hb8898269__0) 
                               << 1U) | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_hc905584f__0))),2);
    bufp->fullCData(oldp+18,((((IData)(vlSelf->__VdfgTmp_hbbf91651__0) 
                               << 1U) | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h1ce9aeec__0))),2);
    bufp->fullCData(oldp+19,((((IData)(vlSelf->__VdfgTmp_hbb175292__0) 
                               << 1U) | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h166b2609__0))),2);
    bufp->fullCData(oldp+20,(((((IData)(vlSelf->__VdfgTmp_he0cc5aca__0) 
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
    bufp->fullSData(oldp+21,(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT__q),16);
    bufp->fullCData(oldp+22,((((IData)(vlSelf->__VdfgTmp_hbe21faac__0) 
                               << 1U) | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0))),2);
    bufp->fullCData(oldp+23,((((IData)(vlSelf->__VdfgTmp_ha5396d5d__0) 
                               << 1U) | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT____VdfgTmp_h8a1e19e7__0))),2);
    bufp->fullCData(oldp+24,((((IData)(vlSelf->__VdfgTmp_h9319e32f__0) 
                               << 1U) | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT____VdfgTmp_hbf2851e6__0))),2);
    bufp->fullCData(oldp+25,((((IData)(vlSelf->__VdfgTmp_h9402bd92__0) 
                               << 1U) | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT____VdfgTmp_h352e0dcb__0))),2);
    bufp->fullCData(oldp+26,((((IData)(vlSelf->__VdfgTmp_he9e0d610__0) 
                               << 1U) | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT____VdfgTmp_h984bded2__0))),2);
    bufp->fullCData(oldp+27,((((IData)(vlSelf->__VdfgTmp_he2d7c735__0) 
                               << 1U) | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT____VdfgTmp_hc905584f__0))),2);
    bufp->fullCData(oldp+28,((((IData)(vlSelf->__VdfgTmp_hfe3177f3__0) 
                               << 1U) | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT____VdfgTmp_h1ce9aeec__0))),2);
    bufp->fullCData(oldp+29,((((IData)(vlSelf->__VdfgTmp_he0cc5aca__0) 
                               << 1U) | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT____VdfgTmp_h166b2609__0))),2);
    bufp->fullCData(oldp+30,(vlSelf->Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__recursion_lsbh__DOT__recursive_case__DOT__recursion_msbh__DOT____Vcellinp__trival_case__DOT__f__ql),2);
    bufp->fullSData(oldp+31,(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT__q),16);
    bufp->fullCData(oldp+32,((((IData)(vlSelf->__VdfgTmp_he57fb158__0) 
                               << 1U) | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0))),2);
    bufp->fullCData(oldp+33,((((IData)(vlSelf->__VdfgTmp_heea9cdcf__0) 
                               << 1U) | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT____VdfgTmp_h8a1e19e7__0))),2);
    bufp->fullCData(oldp+34,((((IData)(vlSelf->__VdfgTmp_hbf6abe2d__0) 
                               << 1U) | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT____VdfgTmp_hbf2851e6__0))),2);
    bufp->fullCData(oldp+35,((((IData)(vlSelf->__VdfgTmp_hbdb296aa__0) 
                               << 1U) | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT____VdfgTmp_h352e0dcb__0))),2);
    bufp->fullCData(oldp+36,((((IData)(vlSelf->__VdfgTmp_hb17ff5d1__0) 
                               << 1U) | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT____VdfgTmp_h984bded2__0))),2);
    bufp->fullCData(oldp+37,((((IData)(vlSelf->__VdfgTmp_h8b49bf26__0) 
                               << 1U) | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT____VdfgTmp_hc905584f__0))),2);
    bufp->fullCData(oldp+38,((((IData)(vlSelf->__VdfgTmp_h8a10462a__0) 
                               << 1U) | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT____VdfgTmp_h1ce9aeec__0))),2);
    bufp->fullCData(oldp+39,((((IData)(vlSelf->__VdfgTmp_ha7143469__0) 
                               << 1U) | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT____VdfgTmp_h166b2609__0))),2);
    bufp->fullCData(oldp+40,(((((IData)(vlSelf->__VdfgTmp_hbe741e55__0) 
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
    bufp->fullSData(oldp+41,(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT__q),16);
    bufp->fullCData(oldp+42,((((IData)(vlSelf->__VdfgTmp_ha00b13da__0) 
                               << 1U) | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0))),2);
    bufp->fullCData(oldp+43,((((IData)(vlSelf->__VdfgTmp_ha4cc58c3__0) 
                               << 1U) | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT____VdfgTmp_h8a1e19e7__0))),2);
    bufp->fullCData(oldp+44,((((IData)(vlSelf->__VdfgTmp_h8da57233__0) 
                               << 1U) | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT____VdfgTmp_hbf2851e6__0))),2);
    bufp->fullCData(oldp+45,((((IData)(vlSelf->__VdfgTmp_h8920b836__0) 
                               << 1U) | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT____VdfgTmp_h352e0dcb__0))),2);
    bufp->fullCData(oldp+46,((((IData)(vlSelf->__VdfgTmp_h8783b4a3__0) 
                               << 1U) | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT____VdfgTmp_h984bded2__0))),2);
    bufp->fullCData(oldp+47,((((IData)(vlSelf->__VdfgTmp_h8aa24c3a__0) 
                               << 1U) | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT____VdfgTmp_hc905584f__0))),2);
    bufp->fullCData(oldp+48,((((IData)(vlSelf->__VdfgTmp_hb16c50d0__0) 
                               << 1U) | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT____VdfgTmp_h1ce9aeec__0))),2);
    bufp->fullCData(oldp+49,((((IData)(vlSelf->__VdfgTmp_hbe741e55__0) 
                               << 1U) | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT____VdfgTmp_h166b2609__0))),2);
    bufp->fullCData(oldp+50,((((IData)(vlSelf->__VdfgTmp_h0d9cf317__0) 
                               << 1U) | (IData)(vlSelf->__VdfgTmp_ha2d76e15__0))),2);
    bufp->fullSData(oldp+51,(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT__q),16);
    bufp->fullCData(oldp+52,((((IData)(vlSelf->__VdfgTmp_hbfca6490__0) 
                               << 1U) | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0))),2);
    bufp->fullCData(oldp+53,((((IData)(vlSelf->__VdfgTmp_h8e8a8ef3__0) 
                               << 1U) | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT____VdfgTmp_h8a1e19e7__0))),2);
    bufp->fullCData(oldp+54,((((IData)(vlSelf->__VdfgTmp_h8004c929__0) 
                               << 1U) | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT____VdfgTmp_hbf2851e6__0))),2);
    bufp->fullCData(oldp+55,((((IData)(vlSelf->__VdfgTmp_h81447f02__0) 
                               << 1U) | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT____VdfgTmp_h352e0dcb__0))),2);
    bufp->fullCData(oldp+56,((((IData)(vlSelf->__VdfgTmp_h9fbf3785__0) 
                               << 1U) | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT____VdfgTmp_h984bded2__0))),2);
    bufp->fullCData(oldp+57,((((IData)(vlSelf->__VdfgTmp_h82a6176a__0) 
                               << 1U) | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT____VdfgTmp_hc905584f__0))),2);
    bufp->fullCData(oldp+58,((((IData)(vlSelf->__VdfgTmp_hb6858702__0) 
                               << 1U) | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT____VdfgTmp_h1ce9aeec__0))),2);
    bufp->fullCData(oldp+59,((((IData)(vlSelf->__VdfgTmp_hb6975029__0) 
                               << 1U) | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT____VdfgTmp_h166b2609__0))),2);
    bufp->fullCData(oldp+60,(((((IData)(vlSelf->__VdfgTmp_h8c84fcd4__0) 
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
    bufp->fullSData(oldp+61,(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT__q),16);
    bufp->fullCData(oldp+62,((((IData)(vlSelf->__VdfgTmp_hb693cd38__0) 
                               << 1U) | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0))),2);
    bufp->fullCData(oldp+63,((((IData)(vlSelf->__VdfgTmp_h4437eafd__0) 
                               << 1U) | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT____VdfgTmp_h8a1e19e7__0))),2);
    bufp->fullCData(oldp+64,((((IData)(vlSelf->__VdfgTmp_h5d5c3be5__0) 
                               << 1U) | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT____VdfgTmp_hbf2851e6__0))),2);
    bufp->fullCData(oldp+65,((((IData)(vlSelf->__VdfgTmp_h5bd66994__0) 
                               << 1U) | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT____VdfgTmp_h352e0dcb__0))),2);
    bufp->fullCData(oldp+66,((((IData)(vlSelf->__VdfgTmp_h5bbf9d18__0) 
                               << 1U) | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT____VdfgTmp_h984bded2__0))),2);
    bufp->fullCData(oldp+67,((((IData)(vlSelf->__VdfgTmp_h58b5f4dd__0) 
                               << 1U) | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT____VdfgTmp_hc905584f__0))),2);
    bufp->fullCData(oldp+68,((((IData)(vlSelf->__VdfgTmp_h81acfa95__0) 
                               << 1U) | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT____VdfgTmp_h1ce9aeec__0))),2);
    bufp->fullCData(oldp+69,((((IData)(vlSelf->__VdfgTmp_h8c84fcd4__0) 
                               << 1U) | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT____VdfgTmp_h166b2609__0))),2);
    bufp->fullCData(oldp+70,(vlSelf->Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__recursion_msbh__DOT__recursive_case__DOT__recursion_msbh__DOT____Vcellinp__trival_case__DOT__f__ql),2);
    bufp->fullSData(oldp+71,(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT__q),16);
    bufp->fullCData(oldp+72,((((IData)(vlSelf->__VdfgTmp_h8bcd436b__0) 
                               << 1U) | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0))),2);
    bufp->fullCData(oldp+73,((((IData)(vlSelf->__VdfgTmp_h5c44dec4__0) 
                               << 1U) | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT____VdfgTmp_h8a1e19e7__0))),2);
    bufp->fullCData(oldp+74,((((IData)(vlSelf->__VdfgTmp_h5592c408__0) 
                               << 1U) | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT____VdfgTmp_hbf2851e6__0))),2);
    bufp->fullCData(oldp+75,((((IData)(vlSelf->__VdfgTmp_h53056e9b__0) 
                               << 1U) | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT____VdfgTmp_h352e0dcb__0))),2);
    bufp->fullCData(oldp+76,((((IData)(vlSelf->__VdfgTmp_h533cc427__0) 
                               << 1U) | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT____VdfgTmp_h984bded2__0))),2);
    bufp->fullCData(oldp+77,((((IData)(vlSelf->__VdfgTmp_h5adb9448__0) 
                               << 1U) | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT____VdfgTmp_hc905584f__0))),2);
    bufp->fullCData(oldp+78,((((IData)(vlSelf->__VdfgTmp_h4643dc14__0) 
                               << 1U) | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT____VdfgTmp_h1ce9aeec__0))),2);
    bufp->fullCData(oldp+79,((((IData)(vlSelf->__VdfgTmp_h4614327f__0) 
                               << 1U) | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT____VdfgTmp_h166b2609__0))),2);
    bufp->fullCData(oldp+80,(((((IData)(vlSelf->__VdfgTmp_h5f43e680__0) 
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
    bufp->fullSData(oldp+81,(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT__q),16);
    bufp->fullCData(oldp+82,((((IData)(vlSelf->__VdfgTmp_h44787b03__0) 
                               << 1U) | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0))),2);
    bufp->fullCData(oldp+83,((((IData)(vlSelf->__VdfgTmp_had190e44__0) 
                               << 1U) | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT____VdfgTmp_h8a1e19e7__0))),2);
    bufp->fullCData(oldp+84,((((IData)(vlSelf->__VdfgTmp_haa51df4a__0) 
                               << 1U) | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT____VdfgTmp_hbf2851e6__0))),2);
    bufp->fullCData(oldp+85,((((IData)(vlSelf->__VdfgTmp_hab53db2d__0) 
                               << 1U) | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT____VdfgTmp_h352e0dcb__0))),2);
    bufp->fullCData(oldp+86,((((IData)(vlSelf->__VdfgTmp_ha829c5d0__0) 
                               << 1U) | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT____VdfgTmp_h984bded2__0))),2);
    bufp->fullCData(oldp+87,((((IData)(vlSelf->__VdfgTmp_h516934af__0) 
                               << 1U) | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT____VdfgTmp_hc905584f__0))),2);
    bufp->fullCData(oldp+88,((((IData)(vlSelf->__VdfgTmp_h5e42ada3__0) 
                               << 1U) | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT____VdfgTmp_h1ce9aeec__0))),2);
    bufp->fullCData(oldp+89,((((IData)(vlSelf->__VdfgTmp_h5f43e680__0) 
                               << 1U) | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT____VdfgTmp_h166b2609__0))),2);
    bufp->fullSData(oldp+90,((((IData)(vlSelf->__VdfgTmp_h21f0d06f__0) 
                               << 0xfU) | (((IData)(vlSelf->Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__parallel_stitch_up__BRA__14__KET____DOT__parallel_stitch_up_produce__DOT__f__DOT____VdfgTmp_hef005df1__0) 
                                            << 0xeU) 
                                           | (((IData)(vlSelf->__VdfgTmp_h1f5a1e66__0) 
                                               << 8U) 
                                              | (IData)(vlSelf->Brent_Kung_Adder__DOT__t1__DOT____Vcellout__recursive_case__DOT__recursion_lsbh__r))))),16);
    bufp->fullCData(oldp+91,((((IData)(vlSelf->__VdfgTmp_h02636d51__0) 
                               << 1U) | (IData)(vlSelf->__VdfgTmp_h08445fd0__0))),2);
    bufp->fullCData(oldp+92,((((IData)(vlSelf->__VdfgTmp_h21f0d06f__0) 
                               << 1U) | (IData)(vlSelf->Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__parallel_stitch_up__BRA__14__KET____DOT__parallel_stitch_up_produce__DOT__f__DOT____VdfgTmp_hef005df1__0))),2);
    bufp->fullCData(oldp+93,((((((IData)(vlSelf->Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__parallel_stitch_up__BRA__14__KET____DOT__parallel_stitch_up_produce__DOT__f__DOT____VdfgTmp_hef005df1__0) 
                                 & (IData)(vlSelf->__VdfgTmp_h02636d51__0)) 
                                | (IData)(vlSelf->__VdfgTmp_h21f0d06f__0)) 
                               << 1U) | ((IData)(vlSelf->Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__parallel_stitch_up__BRA__14__KET____DOT__parallel_stitch_up_produce__DOT__f__DOT____VdfgTmp_hef005df1__0) 
                                         & (IData)(vlSelf->__VdfgTmp_h08445fd0__0)))),2);
    bufp->fullCData(oldp+94,((((((IData)(vlSelf->__VdfgTmp_hbe741e55__0) 
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
                                          << 6U)) | 
                              (((IData)(vlSelf->Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__recursion_lsbh__DOT__recursive_case__DOT__recursion_msbh__DOT____Vcellinp__trival_case__DOT__f__ql) 
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
    bufp->fullCData(oldp+95,(vlSelf->Brent_Kung_Adder__DOT__t1__DOT____Vcellout__recursive_case__DOT__recursion_lsbh__r),8);
    bufp->fullCData(oldp+96,((((((IData)(vlSelf->Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__recursion_lsbh__DOT__recursive_case__DOT__recursion_msbh__DOT__trival_case__DOT__f__DOT____VdfgTmp_hef005df1__0) 
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
                                          << 6U) | 
                                         (((IData)(vlSelf->Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__recursion_lsbh__DOT__recursive_case__DOT__recursion_msbh__DOT____Vcellinp__trival_case__DOT__f__ql) 
                                           << 4U) | (IData)(vlSelf->Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__recursion_lsbh__DOT____Vcellout__recursive_case__DOT__recursion_lsbh__r))))),8);
    bufp->fullCData(oldp+97,((((IData)(vlSelf->__VdfgTmp_ha94b5c3c__0) 
                               << 1U) | (IData)(vlSelf->__VdfgTmp_hce8acf83__0))),2);
    bufp->fullCData(oldp+98,((((((IData)(vlSelf->Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__recursion_lsbh__DOT__recursive_case__DOT__recursion_msbh__DOT__trival_case__DOT__f__DOT____VdfgTmp_hef005df1__0) 
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
    bufp->fullCData(oldp+99,((((((IData)(vlSelf->__VdfgTmp_he0cc5aca__0) 
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
                                          << 2U)) | 
                              (((IData)(vlSelf->__VdfgTmp_hf48b56b2__0) 
                                << 1U) | (IData)(vlSelf->__VdfgTmp_hb04d5094__0)))),4);
    bufp->fullCData(oldp+100,(vlSelf->Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__recursion_lsbh__DOT____Vcellout__recursive_case__DOT__recursion_lsbh__r),4);
    bufp->fullCData(oldp+101,(((((IData)(vlSelf->__VdfgTmp_hbe741e55__0) 
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
                                           << 2U) | (IData)(vlSelf->Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__recursion_lsbh__DOT__recursive_case__DOT__recursion_msbh__DOT____Vcellinp__trival_case__DOT__f__ql)))),4);
    bufp->fullCData(oldp+102,((((((IData)(vlSelf->Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__recursion_lsbh__DOT__recursive_case__DOT__recursion_msbh__DOT__trival_case__DOT__f__DOT____VdfgTmp_hef005df1__0) 
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
                                           << 2U) | (IData)(vlSelf->Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__recursion_lsbh__DOT__recursive_case__DOT__recursion_msbh__DOT____Vcellinp__trival_case__DOT__f__ql)))),4);
    bufp->fullCData(oldp+103,((((((IData)(vlSelf->__VdfgTmp_h5f43e680__0) 
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
    bufp->fullCData(oldp+104,((((IData)(vlSelf->__VdfgTmp_h21f0d06f__0) 
                                << 7U) | (((IData)(vlSelf->Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__parallel_stitch_up__BRA__14__KET____DOT__parallel_stitch_up_produce__DOT__f__DOT____VdfgTmp_hef005df1__0) 
                                           << 6U) | (IData)(vlSelf->__VdfgTmp_h1f5a1e66__0)))),8);
    bufp->fullCData(oldp+105,((((((IData)(vlSelf->Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__recursion_msbh__DOT__recursive_case__DOT__recursion_msbh__DOT__trival_case__DOT__f__DOT____VdfgTmp_hef005df1__0) 
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
                                           << 6U) | 
                                          (((IData)(vlSelf->Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__recursion_msbh__DOT__recursive_case__DOT__recursion_msbh__DOT____Vcellinp__trival_case__DOT__f__ql) 
                                            << 4U) 
                                           | (IData)(vlSelf->Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__recursion_msbh__DOT____Vcellout__recursive_case__DOT__recursion_lsbh__r))))),8);
    bufp->fullCData(oldp+106,((((IData)(vlSelf->__VdfgTmp_hf945ba23__0) 
                                << 1U) | (IData)(vlSelf->__VdfgTmp_h2bcc32ae__0))),2);
    bufp->fullCData(oldp+107,((((((IData)(vlSelf->Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__recursion_msbh__DOT__recursive_case__DOT__recursion_msbh__DOT__trival_case__DOT__f__DOT____VdfgTmp_hef005df1__0) 
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
    bufp->fullCData(oldp+108,((((((IData)(vlSelf->__VdfgTmp_h8c84fcd4__0) 
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
    bufp->fullCData(oldp+109,(vlSelf->Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__recursion_msbh__DOT____Vcellout__recursive_case__DOT__recursion_lsbh__r),4);
    bufp->fullCData(oldp+110,(((((IData)(vlSelf->__VdfgTmp_h5f43e680__0) 
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
                                           << 2U) | (IData)(vlSelf->Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__recursion_msbh__DOT__recursive_case__DOT__recursion_msbh__DOT____Vcellinp__trival_case__DOT__f__ql)))),4);
    bufp->fullCData(oldp+111,((((((IData)(vlSelf->Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__recursion_msbh__DOT__recursive_case__DOT__recursion_msbh__DOT__trival_case__DOT__f__DOT____VdfgTmp_hef005df1__0) 
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
                                           << 2U) | (IData)(vlSelf->Brent_Kung_Adder__DOT__t1__DOT__recursive_case__DOT__recursion_msbh__DOT__recursive_case__DOT__recursion_msbh__DOT____Vcellinp__trival_case__DOT__f__ql)))),4);
    bufp->fullCData(oldp+112,(((((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT____VdfgTmp_h166b2609__0) 
                                 ^ ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT__c) 
                                    >> 7U)) << 7U) 
                               | ((0x40U & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT____VdfgTmp_h1ce9aeec__0) 
                                             << 6U) 
                                            ^ (0xffffffc0U 
                                               & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT__c)))) 
                                  | ((0x20U & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT____VdfgTmp_hc905584f__0) 
                                                << 5U) 
                                               ^ (0xffffffe0U 
                                                  & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT__c)))) 
                                     | ((0x10U & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT____VdfgTmp_h984bded2__0) 
                                                   << 4U) 
                                                  ^ 
                                                  (0xfffffff0U 
                                                   & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT__c)))) 
                                        | ((8U & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT____VdfgTmp_h352e0dcb__0) 
                                                   << 3U) 
                                                  ^ 
                                                  (0xfffffff8U 
                                                   & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT__c)))) 
                                           | ((4U & 
                                               (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT____VdfgTmp_hbf2851e6__0) 
                                                 << 2U) 
                                                ^ (0xfffffffcU 
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
    bufp->fullBit(oldp+113,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0) 
                                   ^ (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT__c)))));
    bufp->fullBit(oldp+114,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT____VdfgTmp_h8a1e19e7__0) 
                                   ^ ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT__c) 
                                      >> 1U)))));
    bufp->fullBit(oldp+115,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT____VdfgTmp_hbf2851e6__0) 
                                   ^ ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT__c) 
                                      >> 2U)))));
    bufp->fullBit(oldp+116,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT____VdfgTmp_h352e0dcb__0) 
                                   ^ ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT__c) 
                                      >> 3U)))));
    bufp->fullBit(oldp+117,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT____VdfgTmp_h984bded2__0) 
                                   ^ ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT__c) 
                                      >> 4U)))));
    bufp->fullBit(oldp+118,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT____VdfgTmp_hc905584f__0) 
                                   ^ ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT__c) 
                                      >> 5U)))));
    bufp->fullBit(oldp+119,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT____VdfgTmp_h1ce9aeec__0) 
                                   ^ ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT__c) 
                                      >> 6U)))));
    bufp->fullBit(oldp+120,(((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT____VdfgTmp_h166b2609__0) 
                             ^ ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT__c) 
                                >> 7U))));
    bufp->fullCData(oldp+121,(((((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT____VdfgTmp_h166b2609__0) 
                                 ^ ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT__c) 
                                    >> 7U)) << 7U) 
                               | ((0x40U & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT____VdfgTmp_h1ce9aeec__0) 
                                             << 6U) 
                                            ^ (0xffffffc0U 
                                               & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT__c)))) 
                                  | ((0x20U & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT____VdfgTmp_hc905584f__0) 
                                                << 5U) 
                                               ^ (0xffffffe0U 
                                                  & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT__c)))) 
                                     | ((0x10U & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT____VdfgTmp_h984bded2__0) 
                                                   << 4U) 
                                                  ^ 
                                                  (0xfffffff0U 
                                                   & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT__c)))) 
                                        | ((8U & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT____VdfgTmp_h352e0dcb__0) 
                                                   << 3U) 
                                                  ^ 
                                                  (0xfffffff8U 
                                                   & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT__c)))) 
                                           | ((4U & 
                                               (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT____VdfgTmp_hbf2851e6__0) 
                                                 << 2U) 
                                                ^ (0xfffffffcU 
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
    bufp->fullBit(oldp+122,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0) 
                                   ^ (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT__c)))));
    bufp->fullBit(oldp+123,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT____VdfgTmp_h8a1e19e7__0) 
                                   ^ ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT__c) 
                                      >> 1U)))));
    bufp->fullBit(oldp+124,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT____VdfgTmp_hbf2851e6__0) 
                                   ^ ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT__c) 
                                      >> 2U)))));
    bufp->fullBit(oldp+125,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT____VdfgTmp_h352e0dcb__0) 
                                   ^ ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT__c) 
                                      >> 3U)))));
    bufp->fullBit(oldp+126,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT____VdfgTmp_h984bded2__0) 
                                   ^ ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT__c) 
                                      >> 4U)))));
    bufp->fullBit(oldp+127,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT____VdfgTmp_hc905584f__0) 
                                   ^ ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT__c) 
                                      >> 5U)))));
    bufp->fullBit(oldp+128,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT____VdfgTmp_h1ce9aeec__0) 
                                   ^ ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT__c) 
                                      >> 6U)))));
    bufp->fullBit(oldp+129,(((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT____VdfgTmp_h166b2609__0) 
                             ^ ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT__c) 
                                >> 7U))));
    bufp->fullCData(oldp+130,(((((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT____VdfgTmp_h166b2609__0) 
                                 ^ ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT__c) 
                                    >> 7U)) << 7U) 
                               | ((0x40U & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT____VdfgTmp_h1ce9aeec__0) 
                                             << 6U) 
                                            ^ (0xffffffc0U 
                                               & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT__c)))) 
                                  | ((0x20U & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT____VdfgTmp_hc905584f__0) 
                                                << 5U) 
                                               ^ (0xffffffe0U 
                                                  & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT__c)))) 
                                     | ((0x10U & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT____VdfgTmp_h984bded2__0) 
                                                   << 4U) 
                                                  ^ 
                                                  (0xfffffff0U 
                                                   & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT__c)))) 
                                        | ((8U & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT____VdfgTmp_h352e0dcb__0) 
                                                   << 3U) 
                                                  ^ 
                                                  (0xfffffff8U 
                                                   & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT__c)))) 
                                           | ((4U & 
                                               (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT____VdfgTmp_hbf2851e6__0) 
                                                 << 2U) 
                                                ^ (0xfffffffcU 
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
    bufp->fullBit(oldp+131,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0) 
                                   ^ (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT__c)))));
    bufp->fullBit(oldp+132,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT____VdfgTmp_h8a1e19e7__0) 
                                   ^ ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT__c) 
                                      >> 1U)))));
    bufp->fullBit(oldp+133,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT____VdfgTmp_hbf2851e6__0) 
                                   ^ ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT__c) 
                                      >> 2U)))));
    bufp->fullBit(oldp+134,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT____VdfgTmp_h352e0dcb__0) 
                                   ^ ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT__c) 
                                      >> 3U)))));
    bufp->fullBit(oldp+135,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT____VdfgTmp_h984bded2__0) 
                                   ^ ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT__c) 
                                      >> 4U)))));
    bufp->fullBit(oldp+136,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT____VdfgTmp_hc905584f__0) 
                                   ^ ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT__c) 
                                      >> 5U)))));
    bufp->fullBit(oldp+137,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT____VdfgTmp_h1ce9aeec__0) 
                                   ^ ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT__c) 
                                      >> 6U)))));
    bufp->fullBit(oldp+138,(((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT____VdfgTmp_h166b2609__0) 
                             ^ ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT__c) 
                                >> 7U))));
    bufp->fullCData(oldp+139,(((((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT____VdfgTmp_h166b2609__0) 
                                 ^ ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT__c) 
                                    >> 7U)) << 7U) 
                               | ((0x40U & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT____VdfgTmp_h1ce9aeec__0) 
                                             << 6U) 
                                            ^ (0xffffffc0U 
                                               & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT__c)))) 
                                  | ((0x20U & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT____VdfgTmp_hc905584f__0) 
                                                << 5U) 
                                               ^ (0xffffffe0U 
                                                  & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT__c)))) 
                                     | ((0x10U & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT____VdfgTmp_h984bded2__0) 
                                                   << 4U) 
                                                  ^ 
                                                  (0xfffffff0U 
                                                   & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT__c)))) 
                                        | ((8U & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT____VdfgTmp_h352e0dcb__0) 
                                                   << 3U) 
                                                  ^ 
                                                  (0xfffffff8U 
                                                   & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT__c)))) 
                                           | ((4U & 
                                               (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT____VdfgTmp_hbf2851e6__0) 
                                                 << 2U) 
                                                ^ (0xfffffffcU 
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
    bufp->fullBit(oldp+140,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0) 
                                   ^ (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT__c)))));
    bufp->fullBit(oldp+141,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT____VdfgTmp_h8a1e19e7__0) 
                                   ^ ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT__c) 
                                      >> 1U)))));
    bufp->fullBit(oldp+142,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT____VdfgTmp_hbf2851e6__0) 
                                   ^ ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT__c) 
                                      >> 2U)))));
    bufp->fullBit(oldp+143,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT____VdfgTmp_h352e0dcb__0) 
                                   ^ ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT__c) 
                                      >> 3U)))));
    bufp->fullBit(oldp+144,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT____VdfgTmp_h984bded2__0) 
                                   ^ ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT__c) 
                                      >> 4U)))));
    bufp->fullBit(oldp+145,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT____VdfgTmp_hc905584f__0) 
                                   ^ ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT__c) 
                                      >> 5U)))));
    bufp->fullBit(oldp+146,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT____VdfgTmp_h1ce9aeec__0) 
                                   ^ ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT__c) 
                                      >> 6U)))));
    bufp->fullBit(oldp+147,(((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT____VdfgTmp_h166b2609__0) 
                             ^ ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT__c) 
                                >> 7U))));
    bufp->fullCData(oldp+148,((((IData)(vlSelf->Brent_Kung_Adder__DOT____VdfgTmp_h5b5c6a0f__0) 
                                << 7U) | ((0x40U & 
                                           (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT____VdfgTmp_h1ce9aeec__0) 
                                             << 6U) 
                                            ^ (0xffffffc0U 
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
    bufp->fullBit(oldp+149,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0) 
                                   ^ (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT__c)))));
    bufp->fullBit(oldp+150,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT____VdfgTmp_h8a1e19e7__0) 
                                   ^ ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT__c) 
                                      >> 1U)))));
    bufp->fullBit(oldp+151,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT____VdfgTmp_hbf2851e6__0) 
                                   ^ ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT__c) 
                                      >> 2U)))));
    bufp->fullBit(oldp+152,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT____VdfgTmp_h352e0dcb__0) 
                                   ^ ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT__c) 
                                      >> 3U)))));
    bufp->fullBit(oldp+153,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT____VdfgTmp_h984bded2__0) 
                                   ^ ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT__c) 
                                      >> 4U)))));
    bufp->fullBit(oldp+154,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT____VdfgTmp_hc905584f__0) 
                                   ^ ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT__c) 
                                      >> 5U)))));
    bufp->fullBit(oldp+155,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT____VdfgTmp_h1ce9aeec__0) 
                                   ^ ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT__c) 
                                      >> 6U)))));
    bufp->fullCData(oldp+156,(((((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT____VdfgTmp_h166b2609__0) 
                                 ^ ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT__c) 
                                    >> 7U)) << 7U) 
                               | ((0x40U & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT____VdfgTmp_h1ce9aeec__0) 
                                             << 6U) 
                                            ^ (0xffffffc0U 
                                               & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT__c)))) 
                                  | ((0x20U & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT____VdfgTmp_hc905584f__0) 
                                                << 5U) 
                                               ^ (0xffffffe0U 
                                                  & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT__c)))) 
                                     | ((0x10U & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT____VdfgTmp_h984bded2__0) 
                                                   << 4U) 
                                                  ^ 
                                                  (0xfffffff0U 
                                                   & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT__c)))) 
                                        | ((8U & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT____VdfgTmp_h352e0dcb__0) 
                                                   << 3U) 
                                                  ^ 
                                                  (0xfffffff8U 
                                                   & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT__c)))) 
                                           | ((4U & 
                                               (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT____VdfgTmp_hbf2851e6__0) 
                                                 << 2U) 
                                                ^ (0xfffffffcU 
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
    bufp->fullBit(oldp+157,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0) 
                                   ^ (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT__c)))));
    bufp->fullBit(oldp+158,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT____VdfgTmp_h8a1e19e7__0) 
                                   ^ ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT__c) 
                                      >> 1U)))));
    bufp->fullBit(oldp+159,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT____VdfgTmp_hbf2851e6__0) 
                                   ^ ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT__c) 
                                      >> 2U)))));
    bufp->fullBit(oldp+160,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT____VdfgTmp_h352e0dcb__0) 
                                   ^ ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT__c) 
                                      >> 3U)))));
    bufp->fullBit(oldp+161,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT____VdfgTmp_h984bded2__0) 
                                   ^ ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT__c) 
                                      >> 4U)))));
    bufp->fullBit(oldp+162,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT____VdfgTmp_hc905584f__0) 
                                   ^ ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT__c) 
                                      >> 5U)))));
    bufp->fullBit(oldp+163,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT____VdfgTmp_h1ce9aeec__0) 
                                   ^ ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT__c) 
                                      >> 6U)))));
    bufp->fullBit(oldp+164,(((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT____VdfgTmp_h166b2609__0) 
                             ^ ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT__c) 
                                >> 7U))));
    bufp->fullCData(oldp+165,(((((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT____VdfgTmp_h166b2609__0) 
                                 ^ ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT__c) 
                                    >> 7U)) << 7U) 
                               | ((0x40U & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT____VdfgTmp_h1ce9aeec__0) 
                                             << 6U) 
                                            ^ (0xffffffc0U 
                                               & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT__c)))) 
                                  | ((0x20U & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT____VdfgTmp_hc905584f__0) 
                                                << 5U) 
                                               ^ (0xffffffe0U 
                                                  & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT__c)))) 
                                     | ((0x10U & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT____VdfgTmp_h984bded2__0) 
                                                   << 4U) 
                                                  ^ 
                                                  (0xfffffff0U 
                                                   & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT__c)))) 
                                        | ((8U & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT____VdfgTmp_h352e0dcb__0) 
                                                   << 3U) 
                                                  ^ 
                                                  (0xfffffff8U 
                                                   & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT__c)))) 
                                           | ((4U & 
                                               (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT____VdfgTmp_hbf2851e6__0) 
                                                 << 2U) 
                                                ^ (0xfffffffcU 
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
    bufp->fullBit(oldp+166,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h36175ebf__0) 
                                   ^ (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT__c)))));
    bufp->fullBit(oldp+167,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT____VdfgTmp_h8a1e19e7__0) 
                                   ^ ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT__c) 
                                      >> 1U)))));
    bufp->fullBit(oldp+168,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT____VdfgTmp_hbf2851e6__0) 
                                   ^ ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT__c) 
                                      >> 2U)))));
    bufp->fullBit(oldp+169,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT____VdfgTmp_h352e0dcb__0) 
                                   ^ ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT__c) 
                                      >> 3U)))));
    bufp->fullBit(oldp+170,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT____VdfgTmp_h984bded2__0) 
                                   ^ ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT__c) 
                                      >> 4U)))));
    bufp->fullBit(oldp+171,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT____VdfgTmp_hc905584f__0) 
                                   ^ ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT__c) 
                                      >> 5U)))));
    bufp->fullBit(oldp+172,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT____VdfgTmp_h1ce9aeec__0) 
                                   ^ ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT__c) 
                                      >> 6U)))));
    bufp->fullBit(oldp+173,(((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT____VdfgTmp_h166b2609__0) 
                             ^ ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT__c) 
                                >> 7U))));
    bufp->fullCData(oldp+174,(((((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h166b2609__0) 
                                 ^ ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT__c) 
                                    >> 7U)) << 7U) 
                               | ((0x40U & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h1ce9aeec__0) 
                                             << 6U) 
                                            ^ (0xffffffc0U 
                                               & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT__c)))) 
                                  | ((0x20U & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_hc905584f__0) 
                                                << 5U) 
                                               ^ (0xffffffe0U 
                                                  & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT__c)))) 
                                     | ((0x10U & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h984bded2__0) 
                                                   << 4U) 
                                                  ^ 
                                                  (0xfffffff0U 
                                                   & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT__c)))) 
                                        | ((8U & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h352e0dcb__0) 
                                                   << 3U) 
                                                  ^ 
                                                  (0xfffffff8U 
                                                   & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT__c)))) 
                                           | ((4U & 
                                               (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_hbf2851e6__0) 
                                                 << 2U) 
                                                ^ (0xfffffffcU 
                                                   & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT__c)))) 
                                              | ((2U 
                                                  & (((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h8a1e19e7__0) 
                                                      << 1U) 
                                                     ^ 
                                                     (0xfffffffeU 
                                                      & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT__c)))) 
                                                 | (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____Vcellout__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__s))))))))),8);
    bufp->fullBit(oldp+175,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h8a1e19e7__0) 
                                   ^ ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT__c) 
                                      >> 1U)))));
    bufp->fullBit(oldp+176,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_hbf2851e6__0) 
                                   ^ ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT__c) 
                                      >> 2U)))));
    bufp->fullBit(oldp+177,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h352e0dcb__0) 
                                   ^ ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT__c) 
                                      >> 3U)))));
    bufp->fullBit(oldp+178,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h984bded2__0) 
                                   ^ ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT__c) 
                                      >> 4U)))));
    bufp->fullBit(oldp+179,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_hc905584f__0) 
                                   ^ ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT__c) 
                                      >> 5U)))));
    bufp->fullBit(oldp+180,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h1ce9aeec__0) 
                                   ^ ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT__c) 
                                      >> 6U)))));
    bufp->fullBit(oldp+181,(((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____VdfgTmp_h166b2609__0) 
                             ^ ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT__c) 
                                >> 7U))));
    bufp->fullCData(oldp+182,(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT__c),8);
    bufp->fullBit(oldp+183,((1U & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT__c))));
    bufp->fullBit(oldp+184,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT__c) 
                                   >> 1U))));
    bufp->fullBit(oldp+185,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT__c) 
                                   >> 2U))));
    bufp->fullBit(oldp+186,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT__c) 
                                   >> 3U))));
    bufp->fullBit(oldp+187,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT__c) 
                                   >> 4U))));
    bufp->fullBit(oldp+188,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT__c) 
                                   >> 5U))));
    bufp->fullBit(oldp+189,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT__c) 
                                   >> 6U))));
    bufp->fullBit(oldp+190,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__6__KET____DOT__f__DOT__c) 
                                   >> 7U))));
    bufp->fullCData(oldp+191,(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT__c),8);
    bufp->fullBit(oldp+192,((1U & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT__c))));
    bufp->fullBit(oldp+193,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT__c) 
                                   >> 1U))));
    bufp->fullBit(oldp+194,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT__c) 
                                   >> 2U))));
    bufp->fullBit(oldp+195,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT__c) 
                                   >> 3U))));
    bufp->fullBit(oldp+196,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT__c) 
                                   >> 4U))));
    bufp->fullBit(oldp+197,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT__c) 
                                   >> 5U))));
    bufp->fullBit(oldp+198,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT__c) 
                                   >> 6U))));
    bufp->fullBit(oldp+199,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__4__KET____DOT__f__DOT__c) 
                                   >> 7U))));
    bufp->fullCData(oldp+200,(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT__c),8);
    bufp->fullBit(oldp+201,((1U & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT__c))));
    bufp->fullBit(oldp+202,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT__c) 
                                   >> 1U))));
    bufp->fullBit(oldp+203,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT__c) 
                                   >> 2U))));
    bufp->fullBit(oldp+204,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT__c) 
                                   >> 3U))));
    bufp->fullBit(oldp+205,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT__c) 
                                   >> 4U))));
    bufp->fullBit(oldp+206,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT__c) 
                                   >> 5U))));
    bufp->fullBit(oldp+207,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT__c) 
                                   >> 6U))));
    bufp->fullBit(oldp+208,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__5__KET____DOT__f__DOT__c) 
                                   >> 7U))));
    bufp->fullCData(oldp+209,(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT__c),8);
    bufp->fullBit(oldp+210,((1U & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT__c))));
    bufp->fullBit(oldp+211,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT__c) 
                                   >> 1U))));
    bufp->fullBit(oldp+212,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT__c) 
                                   >> 2U))));
    bufp->fullBit(oldp+213,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT__c) 
                                   >> 3U))));
    bufp->fullBit(oldp+214,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT__c) 
                                   >> 4U))));
    bufp->fullBit(oldp+215,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT__c) 
                                   >> 5U))));
    bufp->fullBit(oldp+216,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT__c) 
                                   >> 6U))));
    bufp->fullBit(oldp+217,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__3__KET____DOT__f__DOT__c) 
                                   >> 7U))));
    bufp->fullCData(oldp+218,(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT__c),8);
    bufp->fullBit(oldp+219,((1U & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT__c))));
    bufp->fullBit(oldp+220,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT__c) 
                                   >> 1U))));
    bufp->fullBit(oldp+221,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT__c) 
                                   >> 2U))));
    bufp->fullBit(oldp+222,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT__c) 
                                   >> 3U))));
    bufp->fullBit(oldp+223,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT__c) 
                                   >> 4U))));
    bufp->fullBit(oldp+224,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT__c) 
                                   >> 5U))));
    bufp->fullBit(oldp+225,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT__c) 
                                   >> 6U))));
    bufp->fullBit(oldp+226,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__7__KET____DOT__f__DOT__c) 
                                   >> 7U))));
    bufp->fullBit(oldp+227,(vlSelf->Brent_Kung_Adder__DOT____VdfgTmp_h5b5c6a0f__0));
    bufp->fullCData(oldp+228,(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT__c),8);
    bufp->fullBit(oldp+229,((1U & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT__c))));
    bufp->fullBit(oldp+230,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT__c) 
                                   >> 1U))));
    bufp->fullBit(oldp+231,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT__c) 
                                   >> 2U))));
    bufp->fullBit(oldp+232,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT__c) 
                                   >> 3U))));
    bufp->fullBit(oldp+233,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT__c) 
                                   >> 4U))));
    bufp->fullBit(oldp+234,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT__c) 
                                   >> 5U))));
    bufp->fullBit(oldp+235,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT__c) 
                                   >> 6U))));
    bufp->fullBit(oldp+236,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__2__KET____DOT__f__DOT__c) 
                                   >> 7U))));
    bufp->fullCData(oldp+237,(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT__c),8);
    bufp->fullBit(oldp+238,((1U & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT__c))));
    bufp->fullBit(oldp+239,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT__c) 
                                   >> 1U))));
    bufp->fullBit(oldp+240,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT__c) 
                                   >> 2U))));
    bufp->fullBit(oldp+241,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT__c) 
                                   >> 3U))));
    bufp->fullBit(oldp+242,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT__c) 
                                   >> 4U))));
    bufp->fullBit(oldp+243,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT__c) 
                                   >> 5U))));
    bufp->fullBit(oldp+244,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT__c) 
                                   >> 6U))));
    bufp->fullBit(oldp+245,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__1__KET____DOT__f__DOT__c) 
                                   >> 7U))));
    bufp->fullCData(oldp+246,(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT__c),8);
    bufp->fullBit(oldp+247,((1U & (IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT__c))));
    bufp->fullBit(oldp+248,(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT____Vcellout__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__s));
    bufp->fullBit(oldp+249,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT__c) 
                                   >> 1U))));
    bufp->fullBit(oldp+250,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT__c) 
                                   >> 2U))));
    bufp->fullBit(oldp+251,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT__c) 
                                   >> 3U))));
    bufp->fullBit(oldp+252,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT__c) 
                                   >> 4U))));
    bufp->fullBit(oldp+253,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT__c) 
                                   >> 5U))));
    bufp->fullBit(oldp+254,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT__c) 
                                   >> 6U))));
    bufp->fullBit(oldp+255,((1U & ((IData)(vlSelf->Brent_Kung_Adder__DOT__parallel_FA_CLA_prefix__BRA__0__KET____DOT__f__DOT__c) 
                                   >> 7U))));
    bufp->fullSData(oldp+256,(((0xc000U & (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp 
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
                                               == (0x14000000U 
                                                   & vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp))) 
                                      << 0xcU)) | (
                                                   (0xc00U 
                                                    & (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp 
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
    bufp->fullCData(oldp+257,((3U & (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp 
                                     >> 0x10U))),2);
    bufp->fullCData(oldp+258,((3U & (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp 
                                     >> 0x12U))),2);
    bufp->fullCData(oldp+259,(((2U & (((IData)((0x180000U 
                                                == 
                                                (0x180000U 
                                                 & vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp))) 
                                       << 1U) | (0xffeU 
                                                 & (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp 
                                                    >> 0x14U)))) 
                               | (IData)((0x140000U 
                                          == (0x140000U 
                                              & vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp))))),2);
    bufp->fullCData(oldp+260,((3U & (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp 
                                     >> 0x16U))),2);
    bufp->fullCData(oldp+261,(((2U & (((IData)((0x1800000U 
                                                == 
                                                (0x1800000U 
                                                 & vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp))) 
                                       << 1U) | (0xfeU 
                                                 & (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp 
                                                    >> 0x18U)))) 
                               | (IData)((0x1400000U 
                                          == (0x1400000U 
                                              & vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp))))),2);
    bufp->fullCData(oldp+262,((3U & (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp 
                                     >> 0x1aU))),2);
    bufp->fullCData(oldp+263,(((2U & (((IData)((0x18000000U 
                                                == 
                                                (0x18000000U 
                                                 & vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp))) 
                                       << 1U) | (0xeU 
                                                 & (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp 
                                                    >> 0x1cU)))) 
                               | (IData)((0x14000000U 
                                          == (0x14000000U 
                                              & vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp))))),2);
    bufp->fullCData(oldp+264,((vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp 
                               >> 0x1eU)),2);
    bufp->fullBit(oldp+265,(vlSelf->Brent_Kung_Adder__DOT____Vcellout__cin_generation__BRA__7__KET____DOT__f__cin));
    bufp->fullIData(oldp+266,(vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp),32);
    bufp->fullCData(oldp+267,((3U & (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp 
                                     >> 0x14U))),2);
    bufp->fullCData(oldp+268,((3U & (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp 
                                     >> 0x18U))),2);
    bufp->fullCData(oldp+269,((3U & (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp 
                                     >> 0x1cU))),2);
    bufp->fullCData(oldp+270,((3U & (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp 
                                     >> 6U))),2);
    bufp->fullCData(oldp+271,((3U & (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp 
                                     >> 0xaU))),2);
    bufp->fullCData(oldp+272,(((2U & (((IData)((0x480U 
                                                == 
                                                (0x480U 
                                                 & vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp))) 
                                       << 1U) | (0x3ffffeU 
                                                 & (vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp 
                                                    >> 0xaU)))) 
                               | (IData)((0x440U == 
                                          (0x440U & vlSelf->Brent_Kung_Adder__DOT__t2__DOT__r_temp))))),2);
    bufp->fullQData(oldp+273,(vlSelf->A),64);
    bufp->fullQData(oldp+275,(vlSelf->B),64);
    bufp->fullBit(oldp+277,(vlSelf->c0));
    bufp->fullWData(oldp+278,(vlSelf->S),65);
    __Vtemp_hacfc60eb__0[0U] = (IData)(vlSelf->Brent_Kung_Adder__DOT____VdfgTmp_h335431e1__0);
    __Vtemp_hacfc60eb__0[1U] = (IData)((vlSelf->Brent_Kung_Adder__DOT____VdfgTmp_h335431e1__0 
                                        >> 0x20U));
    __Vtemp_hacfc60eb__0[2U] = vlSelf->Brent_Kung_Adder__DOT____Vcellout__cin_generation__BRA__7__KET____DOT__f__cin;
    bufp->fullWData(oldp+281,(__Vtemp_hacfc60eb__0),65);
    bufp->fullSData(oldp+284,((((IData)(vlSelf->Brent_Kung_Adder__DOT____Vcellout__cin_generation__BRA__7__KET____DOT__f__cin) 
                                << 8U) | (((IData)(vlSelf->Brent_Kung_Adder__DOT____Vcellout__cin_generation__BRA__6__KET____DOT__f__cin) 
                                           << 7U) | 
                                          (((IData)(vlSelf->Brent_Kung_Adder__DOT____Vcellout__cin_generation__BRA__5__KET____DOT__f__cin) 
                                            << 6U) 
                                           | (((IData)(vlSelf->Brent_Kung_Adder__DOT____Vcellout__cin_generation__BRA__4__KET____DOT__f__cin) 
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
    bufp->fullCData(oldp+285,((0xffU & (IData)(vlSelf->A))),8);
    bufp->fullCData(oldp+286,((0xffU & (IData)(vlSelf->B))),8);
    bufp->fullBit(oldp+287,((1U & (IData)(vlSelf->A))));
    bufp->fullBit(oldp+288,((1U & (IData)(vlSelf->B))));
    bufp->fullBit(oldp+289,((1U & (IData)((vlSelf->A 
                                           >> 1U)))));
    bufp->fullBit(oldp+290,((1U & (IData)((vlSelf->B 
                                           >> 1U)))));
    bufp->fullBit(oldp+291,((1U & (IData)((vlSelf->A 
                                           >> 2U)))));
    bufp->fullBit(oldp+292,((1U & (IData)((vlSelf->B 
                                           >> 2U)))));
    bufp->fullBit(oldp+293,((1U & (IData)((vlSelf->A 
                                           >> 3U)))));
    bufp->fullBit(oldp+294,((1U & (IData)((vlSelf->B 
                                           >> 3U)))));
    bufp->fullBit(oldp+295,((1U & (IData)((vlSelf->A 
                                           >> 4U)))));
    bufp->fullBit(oldp+296,((1U & (IData)((vlSelf->B 
                                           >> 4U)))));
    bufp->fullBit(oldp+297,((1U & (IData)((vlSelf->A 
                                           >> 5U)))));
    bufp->fullBit(oldp+298,((1U & (IData)((vlSelf->B 
                                           >> 5U)))));
    bufp->fullBit(oldp+299,((1U & (IData)((vlSelf->A 
                                           >> 6U)))));
    bufp->fullBit(oldp+300,((1U & (IData)((vlSelf->B 
                                           >> 6U)))));
    bufp->fullBit(oldp+301,((1U & (IData)((vlSelf->A 
                                           >> 7U)))));
    bufp->fullBit(oldp+302,((1U & (IData)((vlSelf->B 
                                           >> 7U)))));
    bufp->fullCData(oldp+303,((0xffU & (IData)((vlSelf->A 
                                                >> 8U)))),8);
    bufp->fullCData(oldp+304,((0xffU & (IData)((vlSelf->B 
                                                >> 8U)))),8);
    bufp->fullBit(oldp+305,((1U & (IData)((vlSelf->A 
                                           >> 8U)))));
    bufp->fullBit(oldp+306,((1U & (IData)((vlSelf->B 
                                           >> 8U)))));
    bufp->fullBit(oldp+307,((1U & (IData)((vlSelf->A 
                                           >> 9U)))));
    bufp->fullBit(oldp+308,((1U & (IData)((vlSelf->B 
                                           >> 9U)))));
    bufp->fullBit(oldp+309,((1U & (IData)((vlSelf->A 
                                           >> 0xaU)))));
    bufp->fullBit(oldp+310,((1U & (IData)((vlSelf->B 
                                           >> 0xaU)))));
    bufp->fullBit(oldp+311,((1U & (IData)((vlSelf->A 
                                           >> 0xbU)))));
    bufp->fullBit(oldp+312,((1U & (IData)((vlSelf->B 
                                           >> 0xbU)))));
    bufp->fullBit(oldp+313,((1U & (IData)((vlSelf->A 
                                           >> 0xcU)))));
    bufp->fullBit(oldp+314,((1U & (IData)((vlSelf->B 
                                           >> 0xcU)))));
    bufp->fullBit(oldp+315,((1U & (IData)((vlSelf->A 
                                           >> 0xdU)))));
    bufp->fullBit(oldp+316,((1U & (IData)((vlSelf->B 
                                           >> 0xdU)))));
    bufp->fullBit(oldp+317,((1U & (IData)((vlSelf->A 
                                           >> 0xeU)))));
    bufp->fullBit(oldp+318,((1U & (IData)((vlSelf->B 
                                           >> 0xeU)))));
    bufp->fullBit(oldp+319,((1U & (IData)((vlSelf->A 
                                           >> 0xfU)))));
    bufp->fullBit(oldp+320,((1U & (IData)((vlSelf->B 
                                           >> 0xfU)))));
    bufp->fullCData(oldp+321,((0xffU & (IData)((vlSelf->A 
                                                >> 0x10U)))),8);
    bufp->fullCData(oldp+322,((0xffU & (IData)((vlSelf->B 
                                                >> 0x10U)))),8);
    bufp->fullBit(oldp+323,((1U & (IData)((vlSelf->A 
                                           >> 0x10U)))));
    bufp->fullBit(oldp+324,((1U & (IData)((vlSelf->B 
                                           >> 0x10U)))));
    bufp->fullBit(oldp+325,((1U & (IData)((vlSelf->A 
                                           >> 0x11U)))));
    bufp->fullBit(oldp+326,((1U & (IData)((vlSelf->B 
                                           >> 0x11U)))));
    bufp->fullBit(oldp+327,((1U & (IData)((vlSelf->A 
                                           >> 0x12U)))));
    bufp->fullBit(oldp+328,((1U & (IData)((vlSelf->B 
                                           >> 0x12U)))));
    bufp->fullBit(oldp+329,((1U & (IData)((vlSelf->A 
                                           >> 0x13U)))));
    bufp->fullBit(oldp+330,((1U & (IData)((vlSelf->B 
                                           >> 0x13U)))));
    bufp->fullBit(oldp+331,((1U & (IData)((vlSelf->A 
                                           >> 0x14U)))));
    bufp->fullBit(oldp+332,((1U & (IData)((vlSelf->B 
                                           >> 0x14U)))));
    bufp->fullBit(oldp+333,((1U & (IData)((vlSelf->A 
                                           >> 0x15U)))));
    bufp->fullBit(oldp+334,((1U & (IData)((vlSelf->B 
                                           >> 0x15U)))));
    bufp->fullBit(oldp+335,((1U & (IData)((vlSelf->A 
                                           >> 0x16U)))));
    bufp->fullBit(oldp+336,((1U & (IData)((vlSelf->B 
                                           >> 0x16U)))));
    bufp->fullBit(oldp+337,((1U & (IData)((vlSelf->A 
                                           >> 0x17U)))));
    bufp->fullBit(oldp+338,((1U & (IData)((vlSelf->B 
                                           >> 0x17U)))));
    bufp->fullCData(oldp+339,((0xffU & (IData)((vlSelf->A 
                                                >> 0x18U)))),8);
    bufp->fullCData(oldp+340,((0xffU & (IData)((vlSelf->B 
                                                >> 0x18U)))),8);
    bufp->fullBit(oldp+341,((1U & (IData)((vlSelf->A 
                                           >> 0x18U)))));
    bufp->fullBit(oldp+342,((1U & (IData)((vlSelf->B 
                                           >> 0x18U)))));
    bufp->fullBit(oldp+343,((1U & (IData)((vlSelf->A 
                                           >> 0x19U)))));
    bufp->fullBit(oldp+344,((1U & (IData)((vlSelf->B 
                                           >> 0x19U)))));
    bufp->fullBit(oldp+345,((1U & (IData)((vlSelf->A 
                                           >> 0x1aU)))));
    bufp->fullBit(oldp+346,((1U & (IData)((vlSelf->B 
                                           >> 0x1aU)))));
    bufp->fullBit(oldp+347,((1U & (IData)((vlSelf->A 
                                           >> 0x1bU)))));
    bufp->fullBit(oldp+348,((1U & (IData)((vlSelf->B 
                                           >> 0x1bU)))));
    bufp->fullBit(oldp+349,((1U & (IData)((vlSelf->A 
                                           >> 0x1cU)))));
    bufp->fullBit(oldp+350,((1U & (IData)((vlSelf->B 
                                           >> 0x1cU)))));
    bufp->fullBit(oldp+351,((1U & (IData)((vlSelf->A 
                                           >> 0x1dU)))));
    bufp->fullBit(oldp+352,((1U & (IData)((vlSelf->B 
                                           >> 0x1dU)))));
    bufp->fullBit(oldp+353,((1U & (IData)((vlSelf->A 
                                           >> 0x1eU)))));
    bufp->fullBit(oldp+354,((1U & (IData)((vlSelf->B 
                                           >> 0x1eU)))));
    bufp->fullBit(oldp+355,((1U & (IData)((vlSelf->A 
                                           >> 0x1fU)))));
    bufp->fullBit(oldp+356,((1U & (IData)((vlSelf->B 
                                           >> 0x1fU)))));
    bufp->fullCData(oldp+357,((0xffU & (IData)((vlSelf->A 
                                                >> 0x20U)))),8);
    bufp->fullCData(oldp+358,((0xffU & (IData)((vlSelf->B 
                                                >> 0x20U)))),8);
    bufp->fullBit(oldp+359,((1U & (IData)((vlSelf->A 
                                           >> 0x20U)))));
    bufp->fullBit(oldp+360,((1U & (IData)((vlSelf->B 
                                           >> 0x20U)))));
    bufp->fullBit(oldp+361,((1U & (IData)((vlSelf->A 
                                           >> 0x21U)))));
    bufp->fullBit(oldp+362,((1U & (IData)((vlSelf->B 
                                           >> 0x21U)))));
    bufp->fullBit(oldp+363,((1U & (IData)((vlSelf->A 
                                           >> 0x22U)))));
    bufp->fullBit(oldp+364,((1U & (IData)((vlSelf->B 
                                           >> 0x22U)))));
    bufp->fullBit(oldp+365,((1U & (IData)((vlSelf->A 
                                           >> 0x23U)))));
    bufp->fullBit(oldp+366,((1U & (IData)((vlSelf->B 
                                           >> 0x23U)))));
    bufp->fullBit(oldp+367,((1U & (IData)((vlSelf->A 
                                           >> 0x24U)))));
    bufp->fullBit(oldp+368,((1U & (IData)((vlSelf->B 
                                           >> 0x24U)))));
    bufp->fullBit(oldp+369,((1U & (IData)((vlSelf->A 
                                           >> 0x25U)))));
    bufp->fullBit(oldp+370,((1U & (IData)((vlSelf->B 
                                           >> 0x25U)))));
    bufp->fullBit(oldp+371,((1U & (IData)((vlSelf->A 
                                           >> 0x26U)))));
    bufp->fullBit(oldp+372,((1U & (IData)((vlSelf->B 
                                           >> 0x26U)))));
    bufp->fullBit(oldp+373,((1U & (IData)((vlSelf->A 
                                           >> 0x27U)))));
    bufp->fullBit(oldp+374,((1U & (IData)((vlSelf->B 
                                           >> 0x27U)))));
    bufp->fullCData(oldp+375,((0xffU & (IData)((vlSelf->A 
                                                >> 0x28U)))),8);
    bufp->fullCData(oldp+376,((0xffU & (IData)((vlSelf->B 
                                                >> 0x28U)))),8);
    bufp->fullBit(oldp+377,((1U & (IData)((vlSelf->A 
                                           >> 0x28U)))));
    bufp->fullBit(oldp+378,((1U & (IData)((vlSelf->B 
                                           >> 0x28U)))));
    bufp->fullBit(oldp+379,((1U & (IData)((vlSelf->A 
                                           >> 0x29U)))));
    bufp->fullBit(oldp+380,((1U & (IData)((vlSelf->B 
                                           >> 0x29U)))));
    bufp->fullBit(oldp+381,((1U & (IData)((vlSelf->A 
                                           >> 0x2aU)))));
    bufp->fullBit(oldp+382,((1U & (IData)((vlSelf->B 
                                           >> 0x2aU)))));
    bufp->fullBit(oldp+383,((1U & (IData)((vlSelf->A 
                                           >> 0x2bU)))));
    bufp->fullBit(oldp+384,((1U & (IData)((vlSelf->B 
                                           >> 0x2bU)))));
    bufp->fullBit(oldp+385,((1U & (IData)((vlSelf->A 
                                           >> 0x2cU)))));
    bufp->fullBit(oldp+386,((1U & (IData)((vlSelf->B 
                                           >> 0x2cU)))));
    bufp->fullBit(oldp+387,((1U & (IData)((vlSelf->A 
                                           >> 0x2dU)))));
    bufp->fullBit(oldp+388,((1U & (IData)((vlSelf->B 
                                           >> 0x2dU)))));
    bufp->fullBit(oldp+389,((1U & (IData)((vlSelf->A 
                                           >> 0x2eU)))));
    bufp->fullBit(oldp+390,((1U & (IData)((vlSelf->B 
                                           >> 0x2eU)))));
    bufp->fullBit(oldp+391,((1U & (IData)((vlSelf->A 
                                           >> 0x2fU)))));
    bufp->fullBit(oldp+392,((1U & (IData)((vlSelf->B 
                                           >> 0x2fU)))));
    bufp->fullCData(oldp+393,((0xffU & (IData)((vlSelf->A 
                                                >> 0x30U)))),8);
    bufp->fullCData(oldp+394,((0xffU & (IData)((vlSelf->B 
                                                >> 0x30U)))),8);
    bufp->fullBit(oldp+395,((1U & (IData)((vlSelf->A 
                                           >> 0x30U)))));
    bufp->fullBit(oldp+396,((1U & (IData)((vlSelf->B 
                                           >> 0x30U)))));
    bufp->fullBit(oldp+397,((1U & (IData)((vlSelf->A 
                                           >> 0x31U)))));
    bufp->fullBit(oldp+398,((1U & (IData)((vlSelf->B 
                                           >> 0x31U)))));
    bufp->fullBit(oldp+399,((1U & (IData)((vlSelf->A 
                                           >> 0x32U)))));
    bufp->fullBit(oldp+400,((1U & (IData)((vlSelf->B 
                                           >> 0x32U)))));
    bufp->fullBit(oldp+401,((1U & (IData)((vlSelf->A 
                                           >> 0x33U)))));
    bufp->fullBit(oldp+402,((1U & (IData)((vlSelf->B 
                                           >> 0x33U)))));
    bufp->fullBit(oldp+403,((1U & (IData)((vlSelf->A 
                                           >> 0x34U)))));
    bufp->fullBit(oldp+404,((1U & (IData)((vlSelf->B 
                                           >> 0x34U)))));
    bufp->fullBit(oldp+405,((1U & (IData)((vlSelf->A 
                                           >> 0x35U)))));
    bufp->fullBit(oldp+406,((1U & (IData)((vlSelf->B 
                                           >> 0x35U)))));
    bufp->fullBit(oldp+407,((1U & (IData)((vlSelf->A 
                                           >> 0x36U)))));
    bufp->fullBit(oldp+408,((1U & (IData)((vlSelf->B 
                                           >> 0x36U)))));
    bufp->fullBit(oldp+409,((1U & (IData)((vlSelf->A 
                                           >> 0x37U)))));
    bufp->fullBit(oldp+410,((1U & (IData)((vlSelf->B 
                                           >> 0x37U)))));
    bufp->fullCData(oldp+411,((0xffU & (IData)((vlSelf->A 
                                                >> 0x38U)))),8);
    bufp->fullCData(oldp+412,((0xffU & (IData)((vlSelf->B 
                                                >> 0x38U)))),8);
    bufp->fullBit(oldp+413,((1U & (IData)((vlSelf->A 
                                           >> 0x38U)))));
    bufp->fullBit(oldp+414,((1U & (IData)((vlSelf->B 
                                           >> 0x38U)))));
    bufp->fullBit(oldp+415,((1U & (IData)((vlSelf->A 
                                           >> 0x39U)))));
    bufp->fullBit(oldp+416,((1U & (IData)((vlSelf->B 
                                           >> 0x39U)))));
    bufp->fullBit(oldp+417,((1U & (IData)((vlSelf->A 
                                           >> 0x3aU)))));
    bufp->fullBit(oldp+418,((1U & (IData)((vlSelf->B 
                                           >> 0x3aU)))));
    bufp->fullBit(oldp+419,((1U & (IData)((vlSelf->A 
                                           >> 0x3bU)))));
    bufp->fullBit(oldp+420,((1U & (IData)((vlSelf->B 
                                           >> 0x3bU)))));
    bufp->fullBit(oldp+421,((1U & (IData)((vlSelf->A 
                                           >> 0x3cU)))));
    bufp->fullBit(oldp+422,((1U & (IData)((vlSelf->B 
                                           >> 0x3cU)))));
    bufp->fullBit(oldp+423,((1U & (IData)((vlSelf->A 
                                           >> 0x3dU)))));
    bufp->fullBit(oldp+424,((1U & (IData)((vlSelf->B 
                                           >> 0x3dU)))));
    bufp->fullBit(oldp+425,((1U & (IData)((vlSelf->A 
                                           >> 0x3eU)))));
    bufp->fullBit(oldp+426,((1U & (IData)((vlSelf->B 
                                           >> 0x3eU)))));
    bufp->fullBit(oldp+427,((1U & (IData)((vlSelf->A 
                                           >> 0x3fU)))));
    bufp->fullBit(oldp+428,((1U & (IData)((vlSelf->B 
                                           >> 0x3fU)))));
    bufp->fullIData(oldp+429,(8U),32);
    bufp->fullIData(oldp+430,(4U),32);
    bufp->fullIData(oldp+431,(2U),32);
}
