// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vdiv__Syms.h"


VL_ATTR_COLD void Vdiv___024root__trace_init_sub__TOP__0(Vdiv___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdiv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdiv___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1002,"clk", false,-1);
    tracep->declBit(c+1003,"rst_n", false,-1);
    tracep->declBit(c+1004,"valid", false,-1);
    tracep->declBit(c+1005,"sign", false,-1);
    tracep->declQuad(c+1006,"x", false,-1, 63,0);
    tracep->declQuad(c+1008,"y", false,-1, 63,0);
    tracep->declQuad(c+1010,"result", false,-1, 63,0);
    tracep->declQuad(c+1012,"rem", false,-1, 63,0);
    tracep->declBit(c+1014,"finish", false,-1);
    tracep->pushNamePrefix("div ");
    tracep->declBit(c+1002,"clk", false,-1);
    tracep->declBit(c+1003,"rst_n", false,-1);
    tracep->declBit(c+1004,"valid", false,-1);
    tracep->declBit(c+1005,"sign", false,-1);
    tracep->declQuad(c+1006,"x", false,-1, 63,0);
    tracep->declQuad(c+1008,"y", false,-1, 63,0);
    tracep->declQuad(c+1010,"result", false,-1, 63,0);
    tracep->declQuad(c+1012,"rem", false,-1, 63,0);
    tracep->declBit(c+1014,"finish", false,-1);
    tracep->declQuad(c+1015,"x_abs", false,-1, 63,0);
    tracep->declQuad(c+1017,"y_abs", false,-1, 63,0);
    tracep->declBit(c+1019,"s_sign", false,-1);
    tracep->declBit(c+1020,"r_sign", false,-1);
    tracep->declBus(c+328,"current_state", false,-1, 4,0);
    tracep->declBus(c+1021,"next_state", false,-1, 4,0);
    tracep->declBus(c+1053,"IDLE", false,-1, 4,0);
    tracep->declBus(c+1054,"INIT", false,-1, 4,0);
    tracep->declBus(c+1055,"QUOT", false,-1, 4,0);
    tracep->declBus(c+1056,"FIX", false,-1, 4,0);
    tracep->declBus(c+1057,"DONE", false,-1, 4,0);
    tracep->declQuad(c+329,"x_abs_reg", false,-1, 63,0);
    tracep->declQuad(c+331,"y_abs_reg", false,-1, 63,0);
    tracep->declQuad(c+333,"divisor_n", false,-1, 63,0);
    tracep->declQuad(c+335,"divisor", false,-1, 63,0);
    tracep->declQuad(c+337,"dividend", false,-1, 63,0);
    tracep->declQuad(c+4,"dividend_tmp", false,-1, 63,0);
    tracep->declBus(c+1022,"shift_x", false,-1, 5,0);
    tracep->declBit(c+339,"zero_x", false,-1);
    tracep->declBus(c+1023,"shift_y", false,-1, 5,0);
    tracep->declBit(c+340,"zero_y", false,-1);
    tracep->declBus(c+1024,"shift_x_tmp", false,-1, 5,0);
    tracep->declBus(c+1025,"shift", false,-1, 5,0);
    tracep->declBus(c+6,"q", false,-1, 1,0);
    tracep->declBus(c+341,"cout", false,-1, 5,0);
    tracep->declBit(c+1026,"final_shift", false,-1);
    tracep->declQuad(c+7,"add_B", false,-1, 63,0);
    tracep->declQuad(c+342,"fix_rem", false,-1, 63,0);
    tracep->declQuad(c+344,"fix_a", false,-1, 63,0);
    tracep->declQuad(c+346,"fix_b", false,-1, 63,0);
    tracep->declQuad(c+348,"s_abs_reg", false,-1, 63,0);
    tracep->declQuad(c+350,"r_abs_reg", false,-1, 63,0);
    tracep->declQuad(c+352,"s_abs", false,-1, 63,0);
    tracep->declQuad(c+1027,"r_abs", false,-1, 63,0);
    tracep->declBus(c+1058,"i", false,-1, 31,0);
    tracep->pushNamePrefix("cla0 ");
    tracep->declBus(c+1059,"width", false,-1, 31,0);
    tracep->declBus(c+1060,"size", false,-1, 31,0);
    tracep->declQuad(c+354,"a", false,-1, 63,0);
    tracep->declQuad(c+7,"b", false,-1, 63,0);
    tracep->declBit(c+1061,"cin", false,-1);
    tracep->declQuad(c+4,"s", false,-1, 63,0);
    tracep->declBit(c+9,"co", false,-1);
    tracep->declBus(c+10,"temp", false,-1, 16,0);
    tracep->pushNamePrefix("genblk1[0] ");
    tracep->pushNamePrefix("cla_part0 ");
    tracep->declBus(c+1060,"width", false,-1, 31,0);
    tracep->declBus(c+356,"a", false,-1, 3,0);
    tracep->declBus(c+11,"b", false,-1, 3,0);
    tracep->declBit(c+1061,"cin", false,-1);
    tracep->declBus(c+12,"s", false,-1, 3,0);
    tracep->declBit(c+13,"co", false,-1);
    tracep->declBus(c+14,"p", false,-1, 3,0);
    tracep->declBus(c+15,"c", false,-1, 4,0);
    tracep->declBus(c+16,"g", false,-1, 3,0);
    tracep->pushNamePrefix("carry0 ");
    tracep->declBus(c+1060,"width", false,-1, 31,0);
    tracep->declBus(c+14,"p", false,-1, 3,0);
    tracep->declBus(c+16,"g", false,-1, 3,0);
    tracep->declBit(c+1061,"c0", false,-1);
    tracep->declBus(c+17,"c", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("genblk1[0] ");
    tracep->pushNamePrefix("pg0 ");
    tracep->declBit(c+1061,"a", false,-1);
    tracep->declBit(c+18,"b", false,-1);
    tracep->declBit(c+18,"p", false,-1);
    tracep->declBit(c+1061,"g", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[1] ");
    tracep->pushNamePrefix("pg0 ");
    tracep->declBit(c+357,"a", false,-1);
    tracep->declBit(c+19,"b", false,-1);
    tracep->declBit(c+20,"p", false,-1);
    tracep->declBit(c+21,"g", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[2] ");
    tracep->pushNamePrefix("pg0 ");
    tracep->declBit(c+358,"a", false,-1);
    tracep->declBit(c+22,"b", false,-1);
    tracep->declBit(c+23,"p", false,-1);
    tracep->declBit(c+24,"g", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[3] ");
    tracep->pushNamePrefix("pg0 ");
    tracep->declBit(c+359,"a", false,-1);
    tracep->declBit(c+25,"b", false,-1);
    tracep->declBit(c+26,"p", false,-1);
    tracep->declBit(c+27,"g", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("sum0 ");
    tracep->declBus(c+1060,"width", false,-1, 31,0);
    tracep->declBus(c+14,"p", false,-1, 3,0);
    tracep->declBus(c+28,"c", false,-1, 3,0);
    tracep->declBus(c+12,"s", false,-1, 3,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("genblk1[12] ");
    tracep->pushNamePrefix("cla_part0 ");
    tracep->declBus(c+1060,"width", false,-1, 31,0);
    tracep->declBus(c+360,"a", false,-1, 3,0);
    tracep->declBus(c+29,"b", false,-1, 3,0);
    tracep->declBit(c+30,"cin", false,-1);
    tracep->declBus(c+31,"s", false,-1, 3,0);
    tracep->declBit(c+32,"co", false,-1);
    tracep->declBus(c+33,"p", false,-1, 3,0);
    tracep->declBus(c+34,"c", false,-1, 4,0);
    tracep->declBus(c+35,"g", false,-1, 3,0);
    tracep->pushNamePrefix("carry0 ");
    tracep->declBus(c+1060,"width", false,-1, 31,0);
    tracep->declBus(c+33,"p", false,-1, 3,0);
    tracep->declBus(c+35,"g", false,-1, 3,0);
    tracep->declBit(c+30,"c0", false,-1);
    tracep->declBus(c+36,"c", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("genblk1[0] ");
    tracep->pushNamePrefix("pg0 ");
    tracep->declBit(c+361,"a", false,-1);
    tracep->declBit(c+37,"b", false,-1);
    tracep->declBit(c+38,"p", false,-1);
    tracep->declBit(c+39,"g", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[1] ");
    tracep->pushNamePrefix("pg0 ");
    tracep->declBit(c+362,"a", false,-1);
    tracep->declBit(c+40,"b", false,-1);
    tracep->declBit(c+41,"p", false,-1);
    tracep->declBit(c+42,"g", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[2] ");
    tracep->pushNamePrefix("pg0 ");
    tracep->declBit(c+363,"a", false,-1);
    tracep->declBit(c+43,"b", false,-1);
    tracep->declBit(c+44,"p", false,-1);
    tracep->declBit(c+45,"g", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[3] ");
    tracep->pushNamePrefix("pg0 ");
    tracep->declBit(c+364,"a", false,-1);
    tracep->declBit(c+46,"b", false,-1);
    tracep->declBit(c+47,"p", false,-1);
    tracep->declBit(c+48,"g", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("sum0 ");
    tracep->declBus(c+1060,"width", false,-1, 31,0);
    tracep->declBus(c+33,"p", false,-1, 3,0);
    tracep->declBus(c+49,"c", false,-1, 3,0);
    tracep->declBus(c+31,"s", false,-1, 3,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("genblk1[16] ");
    tracep->pushNamePrefix("cla_part0 ");
    tracep->declBus(c+1060,"width", false,-1, 31,0);
    tracep->declBus(c+365,"a", false,-1, 3,0);
    tracep->declBus(c+50,"b", false,-1, 3,0);
    tracep->declBit(c+32,"cin", false,-1);
    tracep->declBus(c+51,"s", false,-1, 3,0);
    tracep->declBit(c+52,"co", false,-1);
    tracep->declBus(c+53,"p", false,-1, 3,0);
    tracep->declBus(c+54,"c", false,-1, 4,0);
    tracep->declBus(c+55,"g", false,-1, 3,0);
    tracep->pushNamePrefix("carry0 ");
    tracep->declBus(c+1060,"width", false,-1, 31,0);
    tracep->declBus(c+53,"p", false,-1, 3,0);
    tracep->declBus(c+55,"g", false,-1, 3,0);
    tracep->declBit(c+32,"c0", false,-1);
    tracep->declBus(c+56,"c", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("genblk1[0] ");
    tracep->pushNamePrefix("pg0 ");
    tracep->declBit(c+366,"a", false,-1);
    tracep->declBit(c+57,"b", false,-1);
    tracep->declBit(c+58,"p", false,-1);
    tracep->declBit(c+59,"g", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[1] ");
    tracep->pushNamePrefix("pg0 ");
    tracep->declBit(c+367,"a", false,-1);
    tracep->declBit(c+60,"b", false,-1);
    tracep->declBit(c+61,"p", false,-1);
    tracep->declBit(c+62,"g", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[2] ");
    tracep->pushNamePrefix("pg0 ");
    tracep->declBit(c+368,"a", false,-1);
    tracep->declBit(c+63,"b", false,-1);
    tracep->declBit(c+64,"p", false,-1);
    tracep->declBit(c+65,"g", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[3] ");
    tracep->pushNamePrefix("pg0 ");
    tracep->declBit(c+369,"a", false,-1);
    tracep->declBit(c+66,"b", false,-1);
    tracep->declBit(c+67,"p", false,-1);
    tracep->declBit(c+68,"g", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("sum0 ");
    tracep->declBus(c+1060,"width", false,-1, 31,0);
    tracep->declBus(c+53,"p", false,-1, 3,0);
    tracep->declBus(c+69,"c", false,-1, 3,0);
    tracep->declBus(c+51,"s", false,-1, 3,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("genblk1[20] ");
    tracep->pushNamePrefix("cla_part0 ");
    tracep->declBus(c+1060,"width", false,-1, 31,0);
    tracep->declBus(c+370,"a", false,-1, 3,0);
    tracep->declBus(c+70,"b", false,-1, 3,0);
    tracep->declBit(c+52,"cin", false,-1);
    tracep->declBus(c+71,"s", false,-1, 3,0);
    tracep->declBit(c+72,"co", false,-1);
    tracep->declBus(c+73,"p", false,-1, 3,0);
    tracep->declBus(c+74,"c", false,-1, 4,0);
    tracep->declBus(c+75,"g", false,-1, 3,0);
    tracep->pushNamePrefix("carry0 ");
    tracep->declBus(c+1060,"width", false,-1, 31,0);
    tracep->declBus(c+73,"p", false,-1, 3,0);
    tracep->declBus(c+75,"g", false,-1, 3,0);
    tracep->declBit(c+52,"c0", false,-1);
    tracep->declBus(c+76,"c", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("genblk1[0] ");
    tracep->pushNamePrefix("pg0 ");
    tracep->declBit(c+371,"a", false,-1);
    tracep->declBit(c+77,"b", false,-1);
    tracep->declBit(c+78,"p", false,-1);
    tracep->declBit(c+79,"g", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[1] ");
    tracep->pushNamePrefix("pg0 ");
    tracep->declBit(c+372,"a", false,-1);
    tracep->declBit(c+80,"b", false,-1);
    tracep->declBit(c+81,"p", false,-1);
    tracep->declBit(c+82,"g", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[2] ");
    tracep->pushNamePrefix("pg0 ");
    tracep->declBit(c+373,"a", false,-1);
    tracep->declBit(c+83,"b", false,-1);
    tracep->declBit(c+84,"p", false,-1);
    tracep->declBit(c+85,"g", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[3] ");
    tracep->pushNamePrefix("pg0 ");
    tracep->declBit(c+374,"a", false,-1);
    tracep->declBit(c+86,"b", false,-1);
    tracep->declBit(c+87,"p", false,-1);
    tracep->declBit(c+88,"g", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("sum0 ");
    tracep->declBus(c+1060,"width", false,-1, 31,0);
    tracep->declBus(c+73,"p", false,-1, 3,0);
    tracep->declBus(c+89,"c", false,-1, 3,0);
    tracep->declBus(c+71,"s", false,-1, 3,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("genblk1[24] ");
    tracep->pushNamePrefix("cla_part0 ");
    tracep->declBus(c+1060,"width", false,-1, 31,0);
    tracep->declBus(c+375,"a", false,-1, 3,0);
    tracep->declBus(c+90,"b", false,-1, 3,0);
    tracep->declBit(c+72,"cin", false,-1);
    tracep->declBus(c+91,"s", false,-1, 3,0);
    tracep->declBit(c+92,"co", false,-1);
    tracep->declBus(c+93,"p", false,-1, 3,0);
    tracep->declBus(c+94,"c", false,-1, 4,0);
    tracep->declBus(c+95,"g", false,-1, 3,0);
    tracep->pushNamePrefix("carry0 ");
    tracep->declBus(c+1060,"width", false,-1, 31,0);
    tracep->declBus(c+93,"p", false,-1, 3,0);
    tracep->declBus(c+95,"g", false,-1, 3,0);
    tracep->declBit(c+72,"c0", false,-1);
    tracep->declBus(c+96,"c", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("genblk1[0] ");
    tracep->pushNamePrefix("pg0 ");
    tracep->declBit(c+376,"a", false,-1);
    tracep->declBit(c+97,"b", false,-1);
    tracep->declBit(c+98,"p", false,-1);
    tracep->declBit(c+99,"g", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[1] ");
    tracep->pushNamePrefix("pg0 ");
    tracep->declBit(c+377,"a", false,-1);
    tracep->declBit(c+100,"b", false,-1);
    tracep->declBit(c+101,"p", false,-1);
    tracep->declBit(c+102,"g", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[2] ");
    tracep->pushNamePrefix("pg0 ");
    tracep->declBit(c+378,"a", false,-1);
    tracep->declBit(c+103,"b", false,-1);
    tracep->declBit(c+104,"p", false,-1);
    tracep->declBit(c+105,"g", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[3] ");
    tracep->pushNamePrefix("pg0 ");
    tracep->declBit(c+379,"a", false,-1);
    tracep->declBit(c+106,"b", false,-1);
    tracep->declBit(c+107,"p", false,-1);
    tracep->declBit(c+108,"g", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("sum0 ");
    tracep->declBus(c+1060,"width", false,-1, 31,0);
    tracep->declBus(c+93,"p", false,-1, 3,0);
    tracep->declBus(c+109,"c", false,-1, 3,0);
    tracep->declBus(c+91,"s", false,-1, 3,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("genblk1[28] ");
    tracep->pushNamePrefix("cla_part0 ");
    tracep->declBus(c+1060,"width", false,-1, 31,0);
    tracep->declBus(c+380,"a", false,-1, 3,0);
    tracep->declBus(c+110,"b", false,-1, 3,0);
    tracep->declBit(c+92,"cin", false,-1);
    tracep->declBus(c+111,"s", false,-1, 3,0);
    tracep->declBit(c+112,"co", false,-1);
    tracep->declBus(c+113,"p", false,-1, 3,0);
    tracep->declBus(c+114,"c", false,-1, 4,0);
    tracep->declBus(c+115,"g", false,-1, 3,0);
    tracep->pushNamePrefix("carry0 ");
    tracep->declBus(c+1060,"width", false,-1, 31,0);
    tracep->declBus(c+113,"p", false,-1, 3,0);
    tracep->declBus(c+115,"g", false,-1, 3,0);
    tracep->declBit(c+92,"c0", false,-1);
    tracep->declBus(c+116,"c", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("genblk1[0] ");
    tracep->pushNamePrefix("pg0 ");
    tracep->declBit(c+381,"a", false,-1);
    tracep->declBit(c+117,"b", false,-1);
    tracep->declBit(c+118,"p", false,-1);
    tracep->declBit(c+119,"g", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[1] ");
    tracep->pushNamePrefix("pg0 ");
    tracep->declBit(c+382,"a", false,-1);
    tracep->declBit(c+120,"b", false,-1);
    tracep->declBit(c+121,"p", false,-1);
    tracep->declBit(c+122,"g", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[2] ");
    tracep->pushNamePrefix("pg0 ");
    tracep->declBit(c+383,"a", false,-1);
    tracep->declBit(c+123,"b", false,-1);
    tracep->declBit(c+124,"p", false,-1);
    tracep->declBit(c+125,"g", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[3] ");
    tracep->pushNamePrefix("pg0 ");
    tracep->declBit(c+384,"a", false,-1);
    tracep->declBit(c+126,"b", false,-1);
    tracep->declBit(c+127,"p", false,-1);
    tracep->declBit(c+128,"g", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("sum0 ");
    tracep->declBus(c+1060,"width", false,-1, 31,0);
    tracep->declBus(c+113,"p", false,-1, 3,0);
    tracep->declBus(c+129,"c", false,-1, 3,0);
    tracep->declBus(c+111,"s", false,-1, 3,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("genblk1[32] ");
    tracep->pushNamePrefix("cla_part0 ");
    tracep->declBus(c+1060,"width", false,-1, 31,0);
    tracep->declBus(c+385,"a", false,-1, 3,0);
    tracep->declBus(c+130,"b", false,-1, 3,0);
    tracep->declBit(c+112,"cin", false,-1);
    tracep->declBus(c+131,"s", false,-1, 3,0);
    tracep->declBit(c+132,"co", false,-1);
    tracep->declBus(c+133,"p", false,-1, 3,0);
    tracep->declBus(c+134,"c", false,-1, 4,0);
    tracep->declBus(c+135,"g", false,-1, 3,0);
    tracep->pushNamePrefix("carry0 ");
    tracep->declBus(c+1060,"width", false,-1, 31,0);
    tracep->declBus(c+133,"p", false,-1, 3,0);
    tracep->declBus(c+135,"g", false,-1, 3,0);
    tracep->declBit(c+112,"c0", false,-1);
    tracep->declBus(c+136,"c", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("genblk1[0] ");
    tracep->pushNamePrefix("pg0 ");
    tracep->declBit(c+386,"a", false,-1);
    tracep->declBit(c+137,"b", false,-1);
    tracep->declBit(c+138,"p", false,-1);
    tracep->declBit(c+139,"g", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[1] ");
    tracep->pushNamePrefix("pg0 ");
    tracep->declBit(c+387,"a", false,-1);
    tracep->declBit(c+140,"b", false,-1);
    tracep->declBit(c+141,"p", false,-1);
    tracep->declBit(c+142,"g", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[2] ");
    tracep->pushNamePrefix("pg0 ");
    tracep->declBit(c+388,"a", false,-1);
    tracep->declBit(c+143,"b", false,-1);
    tracep->declBit(c+144,"p", false,-1);
    tracep->declBit(c+145,"g", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[3] ");
    tracep->pushNamePrefix("pg0 ");
    tracep->declBit(c+389,"a", false,-1);
    tracep->declBit(c+146,"b", false,-1);
    tracep->declBit(c+147,"p", false,-1);
    tracep->declBit(c+148,"g", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("sum0 ");
    tracep->declBus(c+1060,"width", false,-1, 31,0);
    tracep->declBus(c+133,"p", false,-1, 3,0);
    tracep->declBus(c+149,"c", false,-1, 3,0);
    tracep->declBus(c+131,"s", false,-1, 3,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("genblk1[36] ");
    tracep->pushNamePrefix("cla_part0 ");
    tracep->declBus(c+1060,"width", false,-1, 31,0);
    tracep->declBus(c+390,"a", false,-1, 3,0);
    tracep->declBus(c+150,"b", false,-1, 3,0);
    tracep->declBit(c+132,"cin", false,-1);
    tracep->declBus(c+151,"s", false,-1, 3,0);
    tracep->declBit(c+152,"co", false,-1);
    tracep->declBus(c+153,"p", false,-1, 3,0);
    tracep->declBus(c+154,"c", false,-1, 4,0);
    tracep->declBus(c+155,"g", false,-1, 3,0);
    tracep->pushNamePrefix("carry0 ");
    tracep->declBus(c+1060,"width", false,-1, 31,0);
    tracep->declBus(c+153,"p", false,-1, 3,0);
    tracep->declBus(c+155,"g", false,-1, 3,0);
    tracep->declBit(c+132,"c0", false,-1);
    tracep->declBus(c+156,"c", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("genblk1[0] ");
    tracep->pushNamePrefix("pg0 ");
    tracep->declBit(c+391,"a", false,-1);
    tracep->declBit(c+157,"b", false,-1);
    tracep->declBit(c+158,"p", false,-1);
    tracep->declBit(c+159,"g", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[1] ");
    tracep->pushNamePrefix("pg0 ");
    tracep->declBit(c+392,"a", false,-1);
    tracep->declBit(c+160,"b", false,-1);
    tracep->declBit(c+161,"p", false,-1);
    tracep->declBit(c+162,"g", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[2] ");
    tracep->pushNamePrefix("pg0 ");
    tracep->declBit(c+393,"a", false,-1);
    tracep->declBit(c+163,"b", false,-1);
    tracep->declBit(c+164,"p", false,-1);
    tracep->declBit(c+165,"g", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[3] ");
    tracep->pushNamePrefix("pg0 ");
    tracep->declBit(c+394,"a", false,-1);
    tracep->declBit(c+166,"b", false,-1);
    tracep->declBit(c+167,"p", false,-1);
    tracep->declBit(c+168,"g", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("sum0 ");
    tracep->declBus(c+1060,"width", false,-1, 31,0);
    tracep->declBus(c+153,"p", false,-1, 3,0);
    tracep->declBus(c+169,"c", false,-1, 3,0);
    tracep->declBus(c+151,"s", false,-1, 3,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("genblk1[40] ");
    tracep->pushNamePrefix("cla_part0 ");
    tracep->declBus(c+1060,"width", false,-1, 31,0);
    tracep->declBus(c+395,"a", false,-1, 3,0);
    tracep->declBus(c+170,"b", false,-1, 3,0);
    tracep->declBit(c+152,"cin", false,-1);
    tracep->declBus(c+171,"s", false,-1, 3,0);
    tracep->declBit(c+172,"co", false,-1);
    tracep->declBus(c+173,"p", false,-1, 3,0);
    tracep->declBus(c+174,"c", false,-1, 4,0);
    tracep->declBus(c+175,"g", false,-1, 3,0);
    tracep->pushNamePrefix("carry0 ");
    tracep->declBus(c+1060,"width", false,-1, 31,0);
    tracep->declBus(c+173,"p", false,-1, 3,0);
    tracep->declBus(c+175,"g", false,-1, 3,0);
    tracep->declBit(c+152,"c0", false,-1);
    tracep->declBus(c+176,"c", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("genblk1[0] ");
    tracep->pushNamePrefix("pg0 ");
    tracep->declBit(c+396,"a", false,-1);
    tracep->declBit(c+177,"b", false,-1);
    tracep->declBit(c+178,"p", false,-1);
    tracep->declBit(c+179,"g", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[1] ");
    tracep->pushNamePrefix("pg0 ");
    tracep->declBit(c+397,"a", false,-1);
    tracep->declBit(c+180,"b", false,-1);
    tracep->declBit(c+181,"p", false,-1);
    tracep->declBit(c+182,"g", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[2] ");
    tracep->pushNamePrefix("pg0 ");
    tracep->declBit(c+398,"a", false,-1);
    tracep->declBit(c+183,"b", false,-1);
    tracep->declBit(c+184,"p", false,-1);
    tracep->declBit(c+185,"g", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[3] ");
    tracep->pushNamePrefix("pg0 ");
    tracep->declBit(c+399,"a", false,-1);
    tracep->declBit(c+186,"b", false,-1);
    tracep->declBit(c+187,"p", false,-1);
    tracep->declBit(c+188,"g", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("sum0 ");
    tracep->declBus(c+1060,"width", false,-1, 31,0);
    tracep->declBus(c+173,"p", false,-1, 3,0);
    tracep->declBus(c+189,"c", false,-1, 3,0);
    tracep->declBus(c+171,"s", false,-1, 3,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("genblk1[44] ");
    tracep->pushNamePrefix("cla_part0 ");
    tracep->declBus(c+1060,"width", false,-1, 31,0);
    tracep->declBus(c+400,"a", false,-1, 3,0);
    tracep->declBus(c+190,"b", false,-1, 3,0);
    tracep->declBit(c+172,"cin", false,-1);
    tracep->declBus(c+191,"s", false,-1, 3,0);
    tracep->declBit(c+192,"co", false,-1);
    tracep->declBus(c+193,"p", false,-1, 3,0);
    tracep->declBus(c+194,"c", false,-1, 4,0);
    tracep->declBus(c+195,"g", false,-1, 3,0);
    tracep->pushNamePrefix("carry0 ");
    tracep->declBus(c+1060,"width", false,-1, 31,0);
    tracep->declBus(c+193,"p", false,-1, 3,0);
    tracep->declBus(c+195,"g", false,-1, 3,0);
    tracep->declBit(c+172,"c0", false,-1);
    tracep->declBus(c+196,"c", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("genblk1[0] ");
    tracep->pushNamePrefix("pg0 ");
    tracep->declBit(c+401,"a", false,-1);
    tracep->declBit(c+197,"b", false,-1);
    tracep->declBit(c+198,"p", false,-1);
    tracep->declBit(c+199,"g", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[1] ");
    tracep->pushNamePrefix("pg0 ");
    tracep->declBit(c+402,"a", false,-1);
    tracep->declBit(c+200,"b", false,-1);
    tracep->declBit(c+201,"p", false,-1);
    tracep->declBit(c+202,"g", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[2] ");
    tracep->pushNamePrefix("pg0 ");
    tracep->declBit(c+403,"a", false,-1);
    tracep->declBit(c+203,"b", false,-1);
    tracep->declBit(c+204,"p", false,-1);
    tracep->declBit(c+205,"g", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[3] ");
    tracep->pushNamePrefix("pg0 ");
    tracep->declBit(c+404,"a", false,-1);
    tracep->declBit(c+206,"b", false,-1);
    tracep->declBit(c+207,"p", false,-1);
    tracep->declBit(c+208,"g", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("sum0 ");
    tracep->declBus(c+1060,"width", false,-1, 31,0);
    tracep->declBus(c+193,"p", false,-1, 3,0);
    tracep->declBus(c+209,"c", false,-1, 3,0);
    tracep->declBus(c+191,"s", false,-1, 3,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("genblk1[48] ");
    tracep->pushNamePrefix("cla_part0 ");
    tracep->declBus(c+1060,"width", false,-1, 31,0);
    tracep->declBus(c+405,"a", false,-1, 3,0);
    tracep->declBus(c+210,"b", false,-1, 3,0);
    tracep->declBit(c+192,"cin", false,-1);
    tracep->declBus(c+211,"s", false,-1, 3,0);
    tracep->declBit(c+212,"co", false,-1);
    tracep->declBus(c+213,"p", false,-1, 3,0);
    tracep->declBus(c+214,"c", false,-1, 4,0);
    tracep->declBus(c+215,"g", false,-1, 3,0);
    tracep->pushNamePrefix("carry0 ");
    tracep->declBus(c+1060,"width", false,-1, 31,0);
    tracep->declBus(c+213,"p", false,-1, 3,0);
    tracep->declBus(c+215,"g", false,-1, 3,0);
    tracep->declBit(c+192,"c0", false,-1);
    tracep->declBus(c+216,"c", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("genblk1[0] ");
    tracep->pushNamePrefix("pg0 ");
    tracep->declBit(c+406,"a", false,-1);
    tracep->declBit(c+217,"b", false,-1);
    tracep->declBit(c+218,"p", false,-1);
    tracep->declBit(c+219,"g", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[1] ");
    tracep->pushNamePrefix("pg0 ");
    tracep->declBit(c+407,"a", false,-1);
    tracep->declBit(c+220,"b", false,-1);
    tracep->declBit(c+221,"p", false,-1);
    tracep->declBit(c+222,"g", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[2] ");
    tracep->pushNamePrefix("pg0 ");
    tracep->declBit(c+408,"a", false,-1);
    tracep->declBit(c+223,"b", false,-1);
    tracep->declBit(c+224,"p", false,-1);
    tracep->declBit(c+225,"g", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[3] ");
    tracep->pushNamePrefix("pg0 ");
    tracep->declBit(c+409,"a", false,-1);
    tracep->declBit(c+226,"b", false,-1);
    tracep->declBit(c+227,"p", false,-1);
    tracep->declBit(c+228,"g", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("sum0 ");
    tracep->declBus(c+1060,"width", false,-1, 31,0);
    tracep->declBus(c+213,"p", false,-1, 3,0);
    tracep->declBus(c+229,"c", false,-1, 3,0);
    tracep->declBus(c+211,"s", false,-1, 3,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("genblk1[4] ");
    tracep->pushNamePrefix("cla_part0 ");
    tracep->declBus(c+1060,"width", false,-1, 31,0);
    tracep->declBus(c+410,"a", false,-1, 3,0);
    tracep->declBus(c+230,"b", false,-1, 3,0);
    tracep->declBit(c+13,"cin", false,-1);
    tracep->declBus(c+231,"s", false,-1, 3,0);
    tracep->declBit(c+232,"co", false,-1);
    tracep->declBus(c+233,"p", false,-1, 3,0);
    tracep->declBus(c+234,"c", false,-1, 4,0);
    tracep->declBus(c+235,"g", false,-1, 3,0);
    tracep->pushNamePrefix("carry0 ");
    tracep->declBus(c+1060,"width", false,-1, 31,0);
    tracep->declBus(c+233,"p", false,-1, 3,0);
    tracep->declBus(c+235,"g", false,-1, 3,0);
    tracep->declBit(c+13,"c0", false,-1);
    tracep->declBus(c+236,"c", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("genblk1[0] ");
    tracep->pushNamePrefix("pg0 ");
    tracep->declBit(c+411,"a", false,-1);
    tracep->declBit(c+237,"b", false,-1);
    tracep->declBit(c+238,"p", false,-1);
    tracep->declBit(c+239,"g", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[1] ");
    tracep->pushNamePrefix("pg0 ");
    tracep->declBit(c+412,"a", false,-1);
    tracep->declBit(c+240,"b", false,-1);
    tracep->declBit(c+241,"p", false,-1);
    tracep->declBit(c+242,"g", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[2] ");
    tracep->pushNamePrefix("pg0 ");
    tracep->declBit(c+413,"a", false,-1);
    tracep->declBit(c+243,"b", false,-1);
    tracep->declBit(c+244,"p", false,-1);
    tracep->declBit(c+245,"g", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[3] ");
    tracep->pushNamePrefix("pg0 ");
    tracep->declBit(c+414,"a", false,-1);
    tracep->declBit(c+246,"b", false,-1);
    tracep->declBit(c+247,"p", false,-1);
    tracep->declBit(c+248,"g", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("sum0 ");
    tracep->declBus(c+1060,"width", false,-1, 31,0);
    tracep->declBus(c+233,"p", false,-1, 3,0);
    tracep->declBus(c+249,"c", false,-1, 3,0);
    tracep->declBus(c+231,"s", false,-1, 3,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("genblk1[52] ");
    tracep->pushNamePrefix("cla_part0 ");
    tracep->declBus(c+1060,"width", false,-1, 31,0);
    tracep->declBus(c+415,"a", false,-1, 3,0);
    tracep->declBus(c+250,"b", false,-1, 3,0);
    tracep->declBit(c+212,"cin", false,-1);
    tracep->declBus(c+251,"s", false,-1, 3,0);
    tracep->declBit(c+252,"co", false,-1);
    tracep->declBus(c+253,"p", false,-1, 3,0);
    tracep->declBus(c+254,"c", false,-1, 4,0);
    tracep->declBus(c+255,"g", false,-1, 3,0);
    tracep->pushNamePrefix("carry0 ");
    tracep->declBus(c+1060,"width", false,-1, 31,0);
    tracep->declBus(c+253,"p", false,-1, 3,0);
    tracep->declBus(c+255,"g", false,-1, 3,0);
    tracep->declBit(c+212,"c0", false,-1);
    tracep->declBus(c+256,"c", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("genblk1[0] ");
    tracep->pushNamePrefix("pg0 ");
    tracep->declBit(c+416,"a", false,-1);
    tracep->declBit(c+257,"b", false,-1);
    tracep->declBit(c+258,"p", false,-1);
    tracep->declBit(c+259,"g", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[1] ");
    tracep->pushNamePrefix("pg0 ");
    tracep->declBit(c+417,"a", false,-1);
    tracep->declBit(c+260,"b", false,-1);
    tracep->declBit(c+261,"p", false,-1);
    tracep->declBit(c+262,"g", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[2] ");
    tracep->pushNamePrefix("pg0 ");
    tracep->declBit(c+418,"a", false,-1);
    tracep->declBit(c+263,"b", false,-1);
    tracep->declBit(c+264,"p", false,-1);
    tracep->declBit(c+265,"g", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[3] ");
    tracep->pushNamePrefix("pg0 ");
    tracep->declBit(c+419,"a", false,-1);
    tracep->declBit(c+266,"b", false,-1);
    tracep->declBit(c+267,"p", false,-1);
    tracep->declBit(c+268,"g", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("sum0 ");
    tracep->declBus(c+1060,"width", false,-1, 31,0);
    tracep->declBus(c+253,"p", false,-1, 3,0);
    tracep->declBus(c+269,"c", false,-1, 3,0);
    tracep->declBus(c+251,"s", false,-1, 3,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("genblk1[56] ");
    tracep->pushNamePrefix("cla_part0 ");
    tracep->declBus(c+1060,"width", false,-1, 31,0);
    tracep->declBus(c+420,"a", false,-1, 3,0);
    tracep->declBus(c+270,"b", false,-1, 3,0);
    tracep->declBit(c+252,"cin", false,-1);
    tracep->declBus(c+271,"s", false,-1, 3,0);
    tracep->declBit(c+272,"co", false,-1);
    tracep->declBus(c+273,"p", false,-1, 3,0);
    tracep->declBus(c+274,"c", false,-1, 4,0);
    tracep->declBus(c+275,"g", false,-1, 3,0);
    tracep->pushNamePrefix("carry0 ");
    tracep->declBus(c+1060,"width", false,-1, 31,0);
    tracep->declBus(c+273,"p", false,-1, 3,0);
    tracep->declBus(c+275,"g", false,-1, 3,0);
    tracep->declBit(c+252,"c0", false,-1);
    tracep->declBus(c+276,"c", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("genblk1[0] ");
    tracep->pushNamePrefix("pg0 ");
    tracep->declBit(c+421,"a", false,-1);
    tracep->declBit(c+277,"b", false,-1);
    tracep->declBit(c+278,"p", false,-1);
    tracep->declBit(c+279,"g", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[1] ");
    tracep->pushNamePrefix("pg0 ");
    tracep->declBit(c+422,"a", false,-1);
    tracep->declBit(c+280,"b", false,-1);
    tracep->declBit(c+281,"p", false,-1);
    tracep->declBit(c+282,"g", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[2] ");
    tracep->pushNamePrefix("pg0 ");
    tracep->declBit(c+423,"a", false,-1);
    tracep->declBit(c+283,"b", false,-1);
    tracep->declBit(c+284,"p", false,-1);
    tracep->declBit(c+285,"g", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[3] ");
    tracep->pushNamePrefix("pg0 ");
    tracep->declBit(c+424,"a", false,-1);
    tracep->declBit(c+286,"b", false,-1);
    tracep->declBit(c+287,"p", false,-1);
    tracep->declBit(c+288,"g", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("sum0 ");
    tracep->declBus(c+1060,"width", false,-1, 31,0);
    tracep->declBus(c+273,"p", false,-1, 3,0);
    tracep->declBus(c+289,"c", false,-1, 3,0);
    tracep->declBus(c+271,"s", false,-1, 3,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("genblk1[60] ");
    tracep->pushNamePrefix("cla_part0 ");
    tracep->declBus(c+1060,"width", false,-1, 31,0);
    tracep->declBus(c+425,"a", false,-1, 3,0);
    tracep->declBus(c+290,"b", false,-1, 3,0);
    tracep->declBit(c+272,"cin", false,-1);
    tracep->declBus(c+291,"s", false,-1, 3,0);
    tracep->declBit(c+9,"co", false,-1);
    tracep->declBus(c+292,"p", false,-1, 3,0);
    tracep->declBus(c+293,"c", false,-1, 4,0);
    tracep->declBus(c+294,"g", false,-1, 3,0);
    tracep->pushNamePrefix("carry0 ");
    tracep->declBus(c+1060,"width", false,-1, 31,0);
    tracep->declBus(c+292,"p", false,-1, 3,0);
    tracep->declBus(c+294,"g", false,-1, 3,0);
    tracep->declBit(c+272,"c0", false,-1);
    tracep->declBus(c+295,"c", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("genblk1[0] ");
    tracep->pushNamePrefix("pg0 ");
    tracep->declBit(c+426,"a", false,-1);
    tracep->declBit(c+296,"b", false,-1);
    tracep->declBit(c+297,"p", false,-1);
    tracep->declBit(c+298,"g", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[1] ");
    tracep->pushNamePrefix("pg0 ");
    tracep->declBit(c+427,"a", false,-1);
    tracep->declBit(c+299,"b", false,-1);
    tracep->declBit(c+300,"p", false,-1);
    tracep->declBit(c+301,"g", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[2] ");
    tracep->pushNamePrefix("pg0 ");
    tracep->declBit(c+428,"a", false,-1);
    tracep->declBit(c+302,"b", false,-1);
    tracep->declBit(c+303,"p", false,-1);
    tracep->declBit(c+304,"g", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[3] ");
    tracep->pushNamePrefix("pg0 ");
    tracep->declBit(c+429,"a", false,-1);
    tracep->declBit(c+305,"b", false,-1);
    tracep->declBit(c+306,"p", false,-1);
    tracep->declBit(c+307,"g", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("sum0 ");
    tracep->declBus(c+1060,"width", false,-1, 31,0);
    tracep->declBus(c+292,"p", false,-1, 3,0);
    tracep->declBus(c+308,"c", false,-1, 3,0);
    tracep->declBus(c+291,"s", false,-1, 3,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("genblk1[8] ");
    tracep->pushNamePrefix("cla_part0 ");
    tracep->declBus(c+1060,"width", false,-1, 31,0);
    tracep->declBus(c+430,"a", false,-1, 3,0);
    tracep->declBus(c+309,"b", false,-1, 3,0);
    tracep->declBit(c+232,"cin", false,-1);
    tracep->declBus(c+310,"s", false,-1, 3,0);
    tracep->declBit(c+30,"co", false,-1);
    tracep->declBus(c+311,"p", false,-1, 3,0);
    tracep->declBus(c+312,"c", false,-1, 4,0);
    tracep->declBus(c+313,"g", false,-1, 3,0);
    tracep->pushNamePrefix("carry0 ");
    tracep->declBus(c+1060,"width", false,-1, 31,0);
    tracep->declBus(c+311,"p", false,-1, 3,0);
    tracep->declBus(c+313,"g", false,-1, 3,0);
    tracep->declBit(c+232,"c0", false,-1);
    tracep->declBus(c+314,"c", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("genblk1[0] ");
    tracep->pushNamePrefix("pg0 ");
    tracep->declBit(c+431,"a", false,-1);
    tracep->declBit(c+315,"b", false,-1);
    tracep->declBit(c+316,"p", false,-1);
    tracep->declBit(c+317,"g", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[1] ");
    tracep->pushNamePrefix("pg0 ");
    tracep->declBit(c+432,"a", false,-1);
    tracep->declBit(c+318,"b", false,-1);
    tracep->declBit(c+319,"p", false,-1);
    tracep->declBit(c+320,"g", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[2] ");
    tracep->pushNamePrefix("pg0 ");
    tracep->declBit(c+433,"a", false,-1);
    tracep->declBit(c+321,"b", false,-1);
    tracep->declBit(c+322,"p", false,-1);
    tracep->declBit(c+323,"g", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[3] ");
    tracep->pushNamePrefix("pg0 ");
    tracep->declBit(c+434,"a", false,-1);
    tracep->declBit(c+324,"b", false,-1);
    tracep->declBit(c+325,"p", false,-1);
    tracep->declBit(c+326,"g", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("sum0 ");
    tracep->declBus(c+1060,"width", false,-1, 31,0);
    tracep->declBus(c+311,"p", false,-1, 3,0);
    tracep->declBus(c+327,"c", false,-1, 3,0);
    tracep->declBus(c+310,"s", false,-1, 3,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("cla1 ");
    tracep->declBus(c+1059,"width", false,-1, 31,0);
    tracep->declBus(c+1060,"size", false,-1, 31,0);
    tracep->declQuad(c+337,"a", false,-1, 63,0);
    tracep->declQuad(c+335,"b", false,-1, 63,0);
    tracep->declBit(c+1061,"cin", false,-1);
    tracep->declQuad(c+342,"s", false,-1, 63,0);
    tracep->declBit(c+435,"co", false,-1);
    tracep->declBus(c+436,"temp", false,-1, 16,0);
    tracep->pushNamePrefix("genblk1[0] ");
    tracep->pushNamePrefix("cla_part0 ");
    tracep->declBus(c+1060,"width", false,-1, 31,0);
    tracep->declBus(c+437,"a", false,-1, 3,0);
    tracep->declBus(c+438,"b", false,-1, 3,0);
    tracep->declBit(c+1061,"cin", false,-1);
    tracep->declBus(c+439,"s", false,-1, 3,0);
    tracep->declBit(c+440,"co", false,-1);
    tracep->declBus(c+441,"p", false,-1, 3,0);
    tracep->declBus(c+442,"c", false,-1, 4,0);
    tracep->declBus(c+443,"g", false,-1, 3,0);
    tracep->pushNamePrefix("carry0 ");
    tracep->declBus(c+1060,"width", false,-1, 31,0);
    tracep->declBus(c+441,"p", false,-1, 3,0);
    tracep->declBus(c+443,"g", false,-1, 3,0);
    tracep->declBit(c+1061,"c0", false,-1);
    tracep->declBus(c+444,"c", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("genblk1[0] ");
    tracep->pushNamePrefix("pg0 ");
    tracep->declBit(c+445,"a", false,-1);
    tracep->declBit(c+446,"b", false,-1);
    tracep->declBit(c+447,"p", false,-1);
    tracep->declBit(c+448,"g", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[1] ");
    tracep->pushNamePrefix("pg0 ");
    tracep->declBit(c+449,"a", false,-1);
    tracep->declBit(c+450,"b", false,-1);
    tracep->declBit(c+451,"p", false,-1);
    tracep->declBit(c+452,"g", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[2] ");
    tracep->pushNamePrefix("pg0 ");
    tracep->declBit(c+453,"a", false,-1);
    tracep->declBit(c+454,"b", false,-1);
    tracep->declBit(c+455,"p", false,-1);
    tracep->declBit(c+456,"g", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[3] ");
    tracep->pushNamePrefix("pg0 ");
    tracep->declBit(c+457,"a", false,-1);
    tracep->declBit(c+458,"b", false,-1);
    tracep->declBit(c+459,"p", false,-1);
    tracep->declBit(c+460,"g", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("sum0 ");
    tracep->declBus(c+1060,"width", false,-1, 31,0);
    tracep->declBus(c+441,"p", false,-1, 3,0);
    tracep->declBus(c+461,"c", false,-1, 3,0);
    tracep->declBus(c+439,"s", false,-1, 3,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("genblk1[12] ");
    tracep->pushNamePrefix("cla_part0 ");
    tracep->declBus(c+1060,"width", false,-1, 31,0);
    tracep->declBus(c+462,"a", false,-1, 3,0);
    tracep->declBus(c+463,"b", false,-1, 3,0);
    tracep->declBit(c+464,"cin", false,-1);
    tracep->declBus(c+465,"s", false,-1, 3,0);
    tracep->declBit(c+466,"co", false,-1);
    tracep->declBus(c+467,"p", false,-1, 3,0);
    tracep->declBus(c+468,"c", false,-1, 4,0);
    tracep->declBus(c+469,"g", false,-1, 3,0);
    tracep->pushNamePrefix("carry0 ");
    tracep->declBus(c+1060,"width", false,-1, 31,0);
    tracep->declBus(c+467,"p", false,-1, 3,0);
    tracep->declBus(c+469,"g", false,-1, 3,0);
    tracep->declBit(c+464,"c0", false,-1);
    tracep->declBus(c+470,"c", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("genblk1[0] ");
    tracep->pushNamePrefix("pg0 ");
    tracep->declBit(c+471,"a", false,-1);
    tracep->declBit(c+472,"b", false,-1);
    tracep->declBit(c+473,"p", false,-1);
    tracep->declBit(c+474,"g", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[1] ");
    tracep->pushNamePrefix("pg0 ");
    tracep->declBit(c+475,"a", false,-1);
    tracep->declBit(c+476,"b", false,-1);
    tracep->declBit(c+477,"p", false,-1);
    tracep->declBit(c+478,"g", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[2] ");
    tracep->pushNamePrefix("pg0 ");
    tracep->declBit(c+479,"a", false,-1);
    tracep->declBit(c+480,"b", false,-1);
    tracep->declBit(c+481,"p", false,-1);
    tracep->declBit(c+482,"g", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[3] ");
    tracep->pushNamePrefix("pg0 ");
    tracep->declBit(c+483,"a", false,-1);
    tracep->declBit(c+484,"b", false,-1);
    tracep->declBit(c+485,"p", false,-1);
    tracep->declBit(c+486,"g", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("sum0 ");
    tracep->declBus(c+1060,"width", false,-1, 31,0);
    tracep->declBus(c+467,"p", false,-1, 3,0);
    tracep->declBus(c+487,"c", false,-1, 3,0);
    tracep->declBus(c+465,"s", false,-1, 3,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("genblk1[16] ");
    tracep->pushNamePrefix("cla_part0 ");
    tracep->declBus(c+1060,"width", false,-1, 31,0);
    tracep->declBus(c+488,"a", false,-1, 3,0);
    tracep->declBus(c+489,"b", false,-1, 3,0);
    tracep->declBit(c+466,"cin", false,-1);
    tracep->declBus(c+490,"s", false,-1, 3,0);
    tracep->declBit(c+491,"co", false,-1);
    tracep->declBus(c+492,"p", false,-1, 3,0);
    tracep->declBus(c+493,"c", false,-1, 4,0);
    tracep->declBus(c+494,"g", false,-1, 3,0);
    tracep->pushNamePrefix("carry0 ");
    tracep->declBus(c+1060,"width", false,-1, 31,0);
    tracep->declBus(c+492,"p", false,-1, 3,0);
    tracep->declBus(c+494,"g", false,-1, 3,0);
    tracep->declBit(c+466,"c0", false,-1);
    tracep->declBus(c+495,"c", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("genblk1[0] ");
    tracep->pushNamePrefix("pg0 ");
    tracep->declBit(c+496,"a", false,-1);
    tracep->declBit(c+497,"b", false,-1);
    tracep->declBit(c+498,"p", false,-1);
    tracep->declBit(c+499,"g", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[1] ");
    tracep->pushNamePrefix("pg0 ");
    tracep->declBit(c+500,"a", false,-1);
    tracep->declBit(c+501,"b", false,-1);
    tracep->declBit(c+502,"p", false,-1);
    tracep->declBit(c+503,"g", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[2] ");
    tracep->pushNamePrefix("pg0 ");
    tracep->declBit(c+504,"a", false,-1);
    tracep->declBit(c+505,"b", false,-1);
    tracep->declBit(c+506,"p", false,-1);
    tracep->declBit(c+507,"g", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[3] ");
    tracep->pushNamePrefix("pg0 ");
    tracep->declBit(c+508,"a", false,-1);
    tracep->declBit(c+509,"b", false,-1);
    tracep->declBit(c+510,"p", false,-1);
    tracep->declBit(c+511,"g", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("sum0 ");
    tracep->declBus(c+1060,"width", false,-1, 31,0);
    tracep->declBus(c+492,"p", false,-1, 3,0);
    tracep->declBus(c+512,"c", false,-1, 3,0);
    tracep->declBus(c+490,"s", false,-1, 3,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("genblk1[20] ");
    tracep->pushNamePrefix("cla_part0 ");
    tracep->declBus(c+1060,"width", false,-1, 31,0);
    tracep->declBus(c+513,"a", false,-1, 3,0);
    tracep->declBus(c+514,"b", false,-1, 3,0);
    tracep->declBit(c+491,"cin", false,-1);
    tracep->declBus(c+515,"s", false,-1, 3,0);
    tracep->declBit(c+516,"co", false,-1);
    tracep->declBus(c+517,"p", false,-1, 3,0);
    tracep->declBus(c+518,"c", false,-1, 4,0);
    tracep->declBus(c+519,"g", false,-1, 3,0);
    tracep->pushNamePrefix("carry0 ");
    tracep->declBus(c+1060,"width", false,-1, 31,0);
    tracep->declBus(c+517,"p", false,-1, 3,0);
    tracep->declBus(c+519,"g", false,-1, 3,0);
    tracep->declBit(c+491,"c0", false,-1);
    tracep->declBus(c+520,"c", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("genblk1[0] ");
    tracep->pushNamePrefix("pg0 ");
    tracep->declBit(c+521,"a", false,-1);
    tracep->declBit(c+522,"b", false,-1);
    tracep->declBit(c+523,"p", false,-1);
    tracep->declBit(c+524,"g", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[1] ");
    tracep->pushNamePrefix("pg0 ");
    tracep->declBit(c+525,"a", false,-1);
    tracep->declBit(c+526,"b", false,-1);
    tracep->declBit(c+527,"p", false,-1);
    tracep->declBit(c+528,"g", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[2] ");
    tracep->pushNamePrefix("pg0 ");
    tracep->declBit(c+529,"a", false,-1);
    tracep->declBit(c+530,"b", false,-1);
    tracep->declBit(c+531,"p", false,-1);
    tracep->declBit(c+532,"g", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[3] ");
    tracep->pushNamePrefix("pg0 ");
    tracep->declBit(c+533,"a", false,-1);
    tracep->declBit(c+534,"b", false,-1);
    tracep->declBit(c+535,"p", false,-1);
    tracep->declBit(c+536,"g", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("sum0 ");
    tracep->declBus(c+1060,"width", false,-1, 31,0);
    tracep->declBus(c+517,"p", false,-1, 3,0);
    tracep->declBus(c+537,"c", false,-1, 3,0);
    tracep->declBus(c+515,"s", false,-1, 3,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("genblk1[24] ");
    tracep->pushNamePrefix("cla_part0 ");
    tracep->declBus(c+1060,"width", false,-1, 31,0);
    tracep->declBus(c+538,"a", false,-1, 3,0);
    tracep->declBus(c+539,"b", false,-1, 3,0);
    tracep->declBit(c+516,"cin", false,-1);
    tracep->declBus(c+540,"s", false,-1, 3,0);
    tracep->declBit(c+541,"co", false,-1);
    tracep->declBus(c+542,"p", false,-1, 3,0);
    tracep->declBus(c+543,"c", false,-1, 4,0);
    tracep->declBus(c+544,"g", false,-1, 3,0);
    tracep->pushNamePrefix("carry0 ");
    tracep->declBus(c+1060,"width", false,-1, 31,0);
    tracep->declBus(c+542,"p", false,-1, 3,0);
    tracep->declBus(c+544,"g", false,-1, 3,0);
    tracep->declBit(c+516,"c0", false,-1);
    tracep->declBus(c+545,"c", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("genblk1[0] ");
    tracep->pushNamePrefix("pg0 ");
    tracep->declBit(c+546,"a", false,-1);
    tracep->declBit(c+547,"b", false,-1);
    tracep->declBit(c+548,"p", false,-1);
    tracep->declBit(c+549,"g", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[1] ");
    tracep->pushNamePrefix("pg0 ");
    tracep->declBit(c+550,"a", false,-1);
    tracep->declBit(c+551,"b", false,-1);
    tracep->declBit(c+552,"p", false,-1);
    tracep->declBit(c+553,"g", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[2] ");
    tracep->pushNamePrefix("pg0 ");
    tracep->declBit(c+554,"a", false,-1);
    tracep->declBit(c+555,"b", false,-1);
    tracep->declBit(c+556,"p", false,-1);
    tracep->declBit(c+557,"g", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[3] ");
    tracep->pushNamePrefix("pg0 ");
    tracep->declBit(c+558,"a", false,-1);
    tracep->declBit(c+559,"b", false,-1);
    tracep->declBit(c+560,"p", false,-1);
    tracep->declBit(c+561,"g", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("sum0 ");
    tracep->declBus(c+1060,"width", false,-1, 31,0);
    tracep->declBus(c+542,"p", false,-1, 3,0);
    tracep->declBus(c+562,"c", false,-1, 3,0);
    tracep->declBus(c+540,"s", false,-1, 3,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("genblk1[28] ");
    tracep->pushNamePrefix("cla_part0 ");
    tracep->declBus(c+1060,"width", false,-1, 31,0);
    tracep->declBus(c+563,"a", false,-1, 3,0);
    tracep->declBus(c+564,"b", false,-1, 3,0);
    tracep->declBit(c+541,"cin", false,-1);
    tracep->declBus(c+565,"s", false,-1, 3,0);
    tracep->declBit(c+566,"co", false,-1);
    tracep->declBus(c+567,"p", false,-1, 3,0);
    tracep->declBus(c+568,"c", false,-1, 4,0);
    tracep->declBus(c+569,"g", false,-1, 3,0);
    tracep->pushNamePrefix("carry0 ");
    tracep->declBus(c+1060,"width", false,-1, 31,0);
    tracep->declBus(c+567,"p", false,-1, 3,0);
    tracep->declBus(c+569,"g", false,-1, 3,0);
    tracep->declBit(c+541,"c0", false,-1);
    tracep->declBus(c+570,"c", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("genblk1[0] ");
    tracep->pushNamePrefix("pg0 ");
    tracep->declBit(c+571,"a", false,-1);
    tracep->declBit(c+572,"b", false,-1);
    tracep->declBit(c+573,"p", false,-1);
    tracep->declBit(c+574,"g", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[1] ");
    tracep->pushNamePrefix("pg0 ");
    tracep->declBit(c+575,"a", false,-1);
    tracep->declBit(c+576,"b", false,-1);
    tracep->declBit(c+577,"p", false,-1);
    tracep->declBit(c+578,"g", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[2] ");
    tracep->pushNamePrefix("pg0 ");
    tracep->declBit(c+579,"a", false,-1);
    tracep->declBit(c+580,"b", false,-1);
    tracep->declBit(c+581,"p", false,-1);
    tracep->declBit(c+582,"g", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[3] ");
    tracep->pushNamePrefix("pg0 ");
    tracep->declBit(c+583,"a", false,-1);
    tracep->declBit(c+584,"b", false,-1);
    tracep->declBit(c+585,"p", false,-1);
    tracep->declBit(c+586,"g", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("sum0 ");
    tracep->declBus(c+1060,"width", false,-1, 31,0);
    tracep->declBus(c+567,"p", false,-1, 3,0);
    tracep->declBus(c+587,"c", false,-1, 3,0);
    tracep->declBus(c+565,"s", false,-1, 3,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("genblk1[32] ");
    tracep->pushNamePrefix("cla_part0 ");
    tracep->declBus(c+1060,"width", false,-1, 31,0);
    tracep->declBus(c+588,"a", false,-1, 3,0);
    tracep->declBus(c+589,"b", false,-1, 3,0);
    tracep->declBit(c+566,"cin", false,-1);
    tracep->declBus(c+590,"s", false,-1, 3,0);
    tracep->declBit(c+591,"co", false,-1);
    tracep->declBus(c+592,"p", false,-1, 3,0);
    tracep->declBus(c+593,"c", false,-1, 4,0);
    tracep->declBus(c+594,"g", false,-1, 3,0);
    tracep->pushNamePrefix("carry0 ");
    tracep->declBus(c+1060,"width", false,-1, 31,0);
    tracep->declBus(c+592,"p", false,-1, 3,0);
    tracep->declBus(c+594,"g", false,-1, 3,0);
    tracep->declBit(c+566,"c0", false,-1);
    tracep->declBus(c+595,"c", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("genblk1[0] ");
    tracep->pushNamePrefix("pg0 ");
    tracep->declBit(c+596,"a", false,-1);
    tracep->declBit(c+597,"b", false,-1);
    tracep->declBit(c+598,"p", false,-1);
    tracep->declBit(c+599,"g", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[1] ");
    tracep->pushNamePrefix("pg0 ");
    tracep->declBit(c+600,"a", false,-1);
    tracep->declBit(c+601,"b", false,-1);
    tracep->declBit(c+602,"p", false,-1);
    tracep->declBit(c+603,"g", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[2] ");
    tracep->pushNamePrefix("pg0 ");
    tracep->declBit(c+604,"a", false,-1);
    tracep->declBit(c+605,"b", false,-1);
    tracep->declBit(c+606,"p", false,-1);
    tracep->declBit(c+607,"g", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[3] ");
    tracep->pushNamePrefix("pg0 ");
    tracep->declBit(c+608,"a", false,-1);
    tracep->declBit(c+609,"b", false,-1);
    tracep->declBit(c+610,"p", false,-1);
    tracep->declBit(c+611,"g", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("sum0 ");
    tracep->declBus(c+1060,"width", false,-1, 31,0);
    tracep->declBus(c+592,"p", false,-1, 3,0);
    tracep->declBus(c+612,"c", false,-1, 3,0);
    tracep->declBus(c+590,"s", false,-1, 3,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("genblk1[36] ");
    tracep->pushNamePrefix("cla_part0 ");
    tracep->declBus(c+1060,"width", false,-1, 31,0);
    tracep->declBus(c+613,"a", false,-1, 3,0);
    tracep->declBus(c+614,"b", false,-1, 3,0);
    tracep->declBit(c+591,"cin", false,-1);
    tracep->declBus(c+615,"s", false,-1, 3,0);
    tracep->declBit(c+616,"co", false,-1);
    tracep->declBus(c+617,"p", false,-1, 3,0);
    tracep->declBus(c+618,"c", false,-1, 4,0);
    tracep->declBus(c+619,"g", false,-1, 3,0);
    tracep->pushNamePrefix("carry0 ");
    tracep->declBus(c+1060,"width", false,-1, 31,0);
    tracep->declBus(c+617,"p", false,-1, 3,0);
    tracep->declBus(c+619,"g", false,-1, 3,0);
    tracep->declBit(c+591,"c0", false,-1);
    tracep->declBus(c+620,"c", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("genblk1[0] ");
    tracep->pushNamePrefix("pg0 ");
    tracep->declBit(c+621,"a", false,-1);
    tracep->declBit(c+622,"b", false,-1);
    tracep->declBit(c+623,"p", false,-1);
    tracep->declBit(c+624,"g", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[1] ");
    tracep->pushNamePrefix("pg0 ");
    tracep->declBit(c+625,"a", false,-1);
    tracep->declBit(c+626,"b", false,-1);
    tracep->declBit(c+627,"p", false,-1);
    tracep->declBit(c+628,"g", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[2] ");
    tracep->pushNamePrefix("pg0 ");
    tracep->declBit(c+629,"a", false,-1);
    tracep->declBit(c+630,"b", false,-1);
    tracep->declBit(c+631,"p", false,-1);
    tracep->declBit(c+632,"g", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[3] ");
    tracep->pushNamePrefix("pg0 ");
    tracep->declBit(c+633,"a", false,-1);
    tracep->declBit(c+634,"b", false,-1);
    tracep->declBit(c+635,"p", false,-1);
    tracep->declBit(c+636,"g", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("sum0 ");
    tracep->declBus(c+1060,"width", false,-1, 31,0);
    tracep->declBus(c+617,"p", false,-1, 3,0);
    tracep->declBus(c+637,"c", false,-1, 3,0);
    tracep->declBus(c+615,"s", false,-1, 3,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("genblk1[40] ");
    tracep->pushNamePrefix("cla_part0 ");
    tracep->declBus(c+1060,"width", false,-1, 31,0);
    tracep->declBus(c+638,"a", false,-1, 3,0);
    tracep->declBus(c+639,"b", false,-1, 3,0);
    tracep->declBit(c+616,"cin", false,-1);
    tracep->declBus(c+640,"s", false,-1, 3,0);
    tracep->declBit(c+641,"co", false,-1);
    tracep->declBus(c+642,"p", false,-1, 3,0);
    tracep->declBus(c+643,"c", false,-1, 4,0);
    tracep->declBus(c+644,"g", false,-1, 3,0);
    tracep->pushNamePrefix("carry0 ");
    tracep->declBus(c+1060,"width", false,-1, 31,0);
    tracep->declBus(c+642,"p", false,-1, 3,0);
    tracep->declBus(c+644,"g", false,-1, 3,0);
    tracep->declBit(c+616,"c0", false,-1);
    tracep->declBus(c+645,"c", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("genblk1[0] ");
    tracep->pushNamePrefix("pg0 ");
    tracep->declBit(c+646,"a", false,-1);
    tracep->declBit(c+647,"b", false,-1);
    tracep->declBit(c+648,"p", false,-1);
    tracep->declBit(c+649,"g", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[1] ");
    tracep->pushNamePrefix("pg0 ");
    tracep->declBit(c+650,"a", false,-1);
    tracep->declBit(c+651,"b", false,-1);
    tracep->declBit(c+652,"p", false,-1);
    tracep->declBit(c+653,"g", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[2] ");
    tracep->pushNamePrefix("pg0 ");
    tracep->declBit(c+654,"a", false,-1);
    tracep->declBit(c+655,"b", false,-1);
    tracep->declBit(c+656,"p", false,-1);
    tracep->declBit(c+657,"g", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[3] ");
    tracep->pushNamePrefix("pg0 ");
    tracep->declBit(c+658,"a", false,-1);
    tracep->declBit(c+659,"b", false,-1);
    tracep->declBit(c+660,"p", false,-1);
    tracep->declBit(c+661,"g", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("sum0 ");
    tracep->declBus(c+1060,"width", false,-1, 31,0);
    tracep->declBus(c+642,"p", false,-1, 3,0);
    tracep->declBus(c+662,"c", false,-1, 3,0);
    tracep->declBus(c+640,"s", false,-1, 3,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("genblk1[44] ");
    tracep->pushNamePrefix("cla_part0 ");
    tracep->declBus(c+1060,"width", false,-1, 31,0);
    tracep->declBus(c+663,"a", false,-1, 3,0);
    tracep->declBus(c+664,"b", false,-1, 3,0);
    tracep->declBit(c+641,"cin", false,-1);
    tracep->declBus(c+665,"s", false,-1, 3,0);
    tracep->declBit(c+666,"co", false,-1);
    tracep->declBus(c+667,"p", false,-1, 3,0);
    tracep->declBus(c+668,"c", false,-1, 4,0);
    tracep->declBus(c+669,"g", false,-1, 3,0);
    tracep->pushNamePrefix("carry0 ");
    tracep->declBus(c+1060,"width", false,-1, 31,0);
    tracep->declBus(c+667,"p", false,-1, 3,0);
    tracep->declBus(c+669,"g", false,-1, 3,0);
    tracep->declBit(c+641,"c0", false,-1);
    tracep->declBus(c+670,"c", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("genblk1[0] ");
    tracep->pushNamePrefix("pg0 ");
    tracep->declBit(c+671,"a", false,-1);
    tracep->declBit(c+672,"b", false,-1);
    tracep->declBit(c+673,"p", false,-1);
    tracep->declBit(c+674,"g", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[1] ");
    tracep->pushNamePrefix("pg0 ");
    tracep->declBit(c+675,"a", false,-1);
    tracep->declBit(c+676,"b", false,-1);
    tracep->declBit(c+677,"p", false,-1);
    tracep->declBit(c+678,"g", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[2] ");
    tracep->pushNamePrefix("pg0 ");
    tracep->declBit(c+679,"a", false,-1);
    tracep->declBit(c+680,"b", false,-1);
    tracep->declBit(c+681,"p", false,-1);
    tracep->declBit(c+682,"g", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[3] ");
    tracep->pushNamePrefix("pg0 ");
    tracep->declBit(c+683,"a", false,-1);
    tracep->declBit(c+684,"b", false,-1);
    tracep->declBit(c+685,"p", false,-1);
    tracep->declBit(c+686,"g", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("sum0 ");
    tracep->declBus(c+1060,"width", false,-1, 31,0);
    tracep->declBus(c+667,"p", false,-1, 3,0);
    tracep->declBus(c+687,"c", false,-1, 3,0);
    tracep->declBus(c+665,"s", false,-1, 3,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("genblk1[48] ");
    tracep->pushNamePrefix("cla_part0 ");
    tracep->declBus(c+1060,"width", false,-1, 31,0);
    tracep->declBus(c+688,"a", false,-1, 3,0);
    tracep->declBus(c+689,"b", false,-1, 3,0);
    tracep->declBit(c+666,"cin", false,-1);
    tracep->declBus(c+690,"s", false,-1, 3,0);
    tracep->declBit(c+691,"co", false,-1);
    tracep->declBus(c+692,"p", false,-1, 3,0);
    tracep->declBus(c+693,"c", false,-1, 4,0);
    tracep->declBus(c+694,"g", false,-1, 3,0);
    tracep->pushNamePrefix("carry0 ");
    tracep->declBus(c+1060,"width", false,-1, 31,0);
    tracep->declBus(c+692,"p", false,-1, 3,0);
    tracep->declBus(c+694,"g", false,-1, 3,0);
    tracep->declBit(c+666,"c0", false,-1);
    tracep->declBus(c+695,"c", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("genblk1[0] ");
    tracep->pushNamePrefix("pg0 ");
    tracep->declBit(c+696,"a", false,-1);
    tracep->declBit(c+697,"b", false,-1);
    tracep->declBit(c+698,"p", false,-1);
    tracep->declBit(c+699,"g", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[1] ");
    tracep->pushNamePrefix("pg0 ");
    tracep->declBit(c+700,"a", false,-1);
    tracep->declBit(c+701,"b", false,-1);
    tracep->declBit(c+702,"p", false,-1);
    tracep->declBit(c+703,"g", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[2] ");
    tracep->pushNamePrefix("pg0 ");
    tracep->declBit(c+704,"a", false,-1);
    tracep->declBit(c+705,"b", false,-1);
    tracep->declBit(c+706,"p", false,-1);
    tracep->declBit(c+707,"g", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[3] ");
    tracep->pushNamePrefix("pg0 ");
    tracep->declBit(c+708,"a", false,-1);
    tracep->declBit(c+709,"b", false,-1);
    tracep->declBit(c+710,"p", false,-1);
    tracep->declBit(c+711,"g", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("sum0 ");
    tracep->declBus(c+1060,"width", false,-1, 31,0);
    tracep->declBus(c+692,"p", false,-1, 3,0);
    tracep->declBus(c+712,"c", false,-1, 3,0);
    tracep->declBus(c+690,"s", false,-1, 3,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("genblk1[4] ");
    tracep->pushNamePrefix("cla_part0 ");
    tracep->declBus(c+1060,"width", false,-1, 31,0);
    tracep->declBus(c+713,"a", false,-1, 3,0);
    tracep->declBus(c+714,"b", false,-1, 3,0);
    tracep->declBit(c+440,"cin", false,-1);
    tracep->declBus(c+715,"s", false,-1, 3,0);
    tracep->declBit(c+716,"co", false,-1);
    tracep->declBus(c+717,"p", false,-1, 3,0);
    tracep->declBus(c+718,"c", false,-1, 4,0);
    tracep->declBus(c+719,"g", false,-1, 3,0);
    tracep->pushNamePrefix("carry0 ");
    tracep->declBus(c+1060,"width", false,-1, 31,0);
    tracep->declBus(c+717,"p", false,-1, 3,0);
    tracep->declBus(c+719,"g", false,-1, 3,0);
    tracep->declBit(c+440,"c0", false,-1);
    tracep->declBus(c+720,"c", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("genblk1[0] ");
    tracep->pushNamePrefix("pg0 ");
    tracep->declBit(c+721,"a", false,-1);
    tracep->declBit(c+722,"b", false,-1);
    tracep->declBit(c+723,"p", false,-1);
    tracep->declBit(c+724,"g", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[1] ");
    tracep->pushNamePrefix("pg0 ");
    tracep->declBit(c+725,"a", false,-1);
    tracep->declBit(c+726,"b", false,-1);
    tracep->declBit(c+727,"p", false,-1);
    tracep->declBit(c+728,"g", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[2] ");
    tracep->pushNamePrefix("pg0 ");
    tracep->declBit(c+729,"a", false,-1);
    tracep->declBit(c+730,"b", false,-1);
    tracep->declBit(c+731,"p", false,-1);
    tracep->declBit(c+732,"g", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[3] ");
    tracep->pushNamePrefix("pg0 ");
    tracep->declBit(c+733,"a", false,-1);
    tracep->declBit(c+734,"b", false,-1);
    tracep->declBit(c+735,"p", false,-1);
    tracep->declBit(c+736,"g", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("sum0 ");
    tracep->declBus(c+1060,"width", false,-1, 31,0);
    tracep->declBus(c+717,"p", false,-1, 3,0);
    tracep->declBus(c+737,"c", false,-1, 3,0);
    tracep->declBus(c+715,"s", false,-1, 3,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("genblk1[52] ");
    tracep->pushNamePrefix("cla_part0 ");
    tracep->declBus(c+1060,"width", false,-1, 31,0);
    tracep->declBus(c+738,"a", false,-1, 3,0);
    tracep->declBus(c+739,"b", false,-1, 3,0);
    tracep->declBit(c+691,"cin", false,-1);
    tracep->declBus(c+740,"s", false,-1, 3,0);
    tracep->declBit(c+741,"co", false,-1);
    tracep->declBus(c+742,"p", false,-1, 3,0);
    tracep->declBus(c+743,"c", false,-1, 4,0);
    tracep->declBus(c+744,"g", false,-1, 3,0);
    tracep->pushNamePrefix("carry0 ");
    tracep->declBus(c+1060,"width", false,-1, 31,0);
    tracep->declBus(c+742,"p", false,-1, 3,0);
    tracep->declBus(c+744,"g", false,-1, 3,0);
    tracep->declBit(c+691,"c0", false,-1);
    tracep->declBus(c+745,"c", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("genblk1[0] ");
    tracep->pushNamePrefix("pg0 ");
    tracep->declBit(c+746,"a", false,-1);
    tracep->declBit(c+747,"b", false,-1);
    tracep->declBit(c+748,"p", false,-1);
    tracep->declBit(c+749,"g", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[1] ");
    tracep->pushNamePrefix("pg0 ");
    tracep->declBit(c+750,"a", false,-1);
    tracep->declBit(c+751,"b", false,-1);
    tracep->declBit(c+752,"p", false,-1);
    tracep->declBit(c+753,"g", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[2] ");
    tracep->pushNamePrefix("pg0 ");
    tracep->declBit(c+754,"a", false,-1);
    tracep->declBit(c+755,"b", false,-1);
    tracep->declBit(c+756,"p", false,-1);
    tracep->declBit(c+757,"g", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[3] ");
    tracep->pushNamePrefix("pg0 ");
    tracep->declBit(c+758,"a", false,-1);
    tracep->declBit(c+759,"b", false,-1);
    tracep->declBit(c+760,"p", false,-1);
    tracep->declBit(c+761,"g", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("sum0 ");
    tracep->declBus(c+1060,"width", false,-1, 31,0);
    tracep->declBus(c+742,"p", false,-1, 3,0);
    tracep->declBus(c+762,"c", false,-1, 3,0);
    tracep->declBus(c+740,"s", false,-1, 3,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("genblk1[56] ");
    tracep->pushNamePrefix("cla_part0 ");
    tracep->declBus(c+1060,"width", false,-1, 31,0);
    tracep->declBus(c+763,"a", false,-1, 3,0);
    tracep->declBus(c+764,"b", false,-1, 3,0);
    tracep->declBit(c+741,"cin", false,-1);
    tracep->declBus(c+765,"s", false,-1, 3,0);
    tracep->declBit(c+766,"co", false,-1);
    tracep->declBus(c+767,"p", false,-1, 3,0);
    tracep->declBus(c+768,"c", false,-1, 4,0);
    tracep->declBus(c+769,"g", false,-1, 3,0);
    tracep->pushNamePrefix("carry0 ");
    tracep->declBus(c+1060,"width", false,-1, 31,0);
    tracep->declBus(c+767,"p", false,-1, 3,0);
    tracep->declBus(c+769,"g", false,-1, 3,0);
    tracep->declBit(c+741,"c0", false,-1);
    tracep->declBus(c+770,"c", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("genblk1[0] ");
    tracep->pushNamePrefix("pg0 ");
    tracep->declBit(c+771,"a", false,-1);
    tracep->declBit(c+772,"b", false,-1);
    tracep->declBit(c+773,"p", false,-1);
    tracep->declBit(c+774,"g", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[1] ");
    tracep->pushNamePrefix("pg0 ");
    tracep->declBit(c+775,"a", false,-1);
    tracep->declBit(c+776,"b", false,-1);
    tracep->declBit(c+777,"p", false,-1);
    tracep->declBit(c+778,"g", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[2] ");
    tracep->pushNamePrefix("pg0 ");
    tracep->declBit(c+779,"a", false,-1);
    tracep->declBit(c+780,"b", false,-1);
    tracep->declBit(c+781,"p", false,-1);
    tracep->declBit(c+782,"g", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[3] ");
    tracep->pushNamePrefix("pg0 ");
    tracep->declBit(c+783,"a", false,-1);
    tracep->declBit(c+784,"b", false,-1);
    tracep->declBit(c+785,"p", false,-1);
    tracep->declBit(c+786,"g", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("sum0 ");
    tracep->declBus(c+1060,"width", false,-1, 31,0);
    tracep->declBus(c+767,"p", false,-1, 3,0);
    tracep->declBus(c+787,"c", false,-1, 3,0);
    tracep->declBus(c+765,"s", false,-1, 3,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("genblk1[60] ");
    tracep->pushNamePrefix("cla_part0 ");
    tracep->declBus(c+1060,"width", false,-1, 31,0);
    tracep->declBus(c+788,"a", false,-1, 3,0);
    tracep->declBus(c+789,"b", false,-1, 3,0);
    tracep->declBit(c+766,"cin", false,-1);
    tracep->declBus(c+790,"s", false,-1, 3,0);
    tracep->declBit(c+435,"co", false,-1);
    tracep->declBus(c+791,"p", false,-1, 3,0);
    tracep->declBus(c+792,"c", false,-1, 4,0);
    tracep->declBus(c+793,"g", false,-1, 3,0);
    tracep->pushNamePrefix("carry0 ");
    tracep->declBus(c+1060,"width", false,-1, 31,0);
    tracep->declBus(c+791,"p", false,-1, 3,0);
    tracep->declBus(c+793,"g", false,-1, 3,0);
    tracep->declBit(c+766,"c0", false,-1);
    tracep->declBus(c+794,"c", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("genblk1[0] ");
    tracep->pushNamePrefix("pg0 ");
    tracep->declBit(c+795,"a", false,-1);
    tracep->declBit(c+796,"b", false,-1);
    tracep->declBit(c+797,"p", false,-1);
    tracep->declBit(c+798,"g", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[1] ");
    tracep->pushNamePrefix("pg0 ");
    tracep->declBit(c+799,"a", false,-1);
    tracep->declBit(c+800,"b", false,-1);
    tracep->declBit(c+801,"p", false,-1);
    tracep->declBit(c+802,"g", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[2] ");
    tracep->pushNamePrefix("pg0 ");
    tracep->declBit(c+803,"a", false,-1);
    tracep->declBit(c+804,"b", false,-1);
    tracep->declBit(c+805,"p", false,-1);
    tracep->declBit(c+806,"g", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[3] ");
    tracep->pushNamePrefix("pg0 ");
    tracep->declBit(c+807,"a", false,-1);
    tracep->declBit(c+808,"b", false,-1);
    tracep->declBit(c+809,"p", false,-1);
    tracep->declBit(c+810,"g", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("sum0 ");
    tracep->declBus(c+1060,"width", false,-1, 31,0);
    tracep->declBus(c+791,"p", false,-1, 3,0);
    tracep->declBus(c+811,"c", false,-1, 3,0);
    tracep->declBus(c+790,"s", false,-1, 3,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("genblk1[8] ");
    tracep->pushNamePrefix("cla_part0 ");
    tracep->declBus(c+1060,"width", false,-1, 31,0);
    tracep->declBus(c+812,"a", false,-1, 3,0);
    tracep->declBus(c+813,"b", false,-1, 3,0);
    tracep->declBit(c+716,"cin", false,-1);
    tracep->declBus(c+814,"s", false,-1, 3,0);
    tracep->declBit(c+464,"co", false,-1);
    tracep->declBus(c+815,"p", false,-1, 3,0);
    tracep->declBus(c+816,"c", false,-1, 4,0);
    tracep->declBus(c+817,"g", false,-1, 3,0);
    tracep->pushNamePrefix("carry0 ");
    tracep->declBus(c+1060,"width", false,-1, 31,0);
    tracep->declBus(c+815,"p", false,-1, 3,0);
    tracep->declBus(c+817,"g", false,-1, 3,0);
    tracep->declBit(c+716,"c0", false,-1);
    tracep->declBus(c+818,"c", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("genblk1[0] ");
    tracep->pushNamePrefix("pg0 ");
    tracep->declBit(c+819,"a", false,-1);
    tracep->declBit(c+820,"b", false,-1);
    tracep->declBit(c+821,"p", false,-1);
    tracep->declBit(c+822,"g", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[1] ");
    tracep->pushNamePrefix("pg0 ");
    tracep->declBit(c+823,"a", false,-1);
    tracep->declBit(c+824,"b", false,-1);
    tracep->declBit(c+825,"p", false,-1);
    tracep->declBit(c+826,"g", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[2] ");
    tracep->pushNamePrefix("pg0 ");
    tracep->declBit(c+827,"a", false,-1);
    tracep->declBit(c+828,"b", false,-1);
    tracep->declBit(c+829,"p", false,-1);
    tracep->declBit(c+830,"g", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[3] ");
    tracep->pushNamePrefix("pg0 ");
    tracep->declBit(c+831,"a", false,-1);
    tracep->declBit(c+832,"b", false,-1);
    tracep->declBit(c+833,"p", false,-1);
    tracep->declBit(c+834,"g", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("sum0 ");
    tracep->declBus(c+1060,"width", false,-1, 31,0);
    tracep->declBus(c+815,"p", false,-1, 3,0);
    tracep->declBus(c+835,"c", false,-1, 3,0);
    tracep->declBus(c+814,"s", false,-1, 3,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("lzd0 ");
    tracep->declQuad(c+331,"in", false,-1, 63,0);
    tracep->declBus(c+1023,"out", false,-1, 5,0);
    tracep->declBit(c+340,"zero", false,-1);
    tracep->declBus(c+836,"z", false,-1, 1,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+1029+i*1,"out_3_0", true,(i+0), 4,0);
    }
    tracep->pushNamePrefix("lzd_32_0 ");
    tracep->declBus(c+837,"in", false,-1, 31,0);
    tracep->declBus(c+1031,"out", false,-1, 4,0);
    tracep->declBit(c+838,"zero", false,-1);
    tracep->declBus(c+839,"z", false,-1, 1,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+1032+i*1,"out_3_0", true,(i+0), 3,0);
    }
    tracep->pushNamePrefix("lzd_16_0 ");
    tracep->declBus(c+840,"in", false,-1, 15,0);
    tracep->declBus(c+1034,"out", false,-1, 3,0);
    tracep->declBit(c+841,"zero", false,-1);
    tracep->declBus(c+842,"z", false,-1, 3,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+843+i*1,"out_2", true,(i+0), 1,0);
    }
    tracep->pushNamePrefix("lzd_4_0 ");
    tracep->declBus(c+847,"in", false,-1, 3,0);
    tracep->declBus(c+848,"out", false,-1, 1,0);
    tracep->declBit(c+849,"zero", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lzd_4_1 ");
    tracep->declBus(c+850,"in", false,-1, 3,0);
    tracep->declBus(c+851,"out", false,-1, 1,0);
    tracep->declBit(c+852,"zero", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lzd_4_2 ");
    tracep->declBus(c+853,"in", false,-1, 3,0);
    tracep->declBus(c+854,"out", false,-1, 1,0);
    tracep->declBit(c+855,"zero", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lzd_4_3 ");
    tracep->declBus(c+856,"in", false,-1, 3,0);
    tracep->declBus(c+857,"out", false,-1, 1,0);
    tracep->declBit(c+858,"zero", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lzd_16_1 ");
    tracep->declBus(c+859,"in", false,-1, 15,0);
    tracep->declBus(c+1035,"out", false,-1, 3,0);
    tracep->declBit(c+860,"zero", false,-1);
    tracep->declBus(c+861,"z", false,-1, 3,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+862+i*1,"out_2", true,(i+0), 1,0);
    }
    tracep->pushNamePrefix("lzd_4_0 ");
    tracep->declBus(c+866,"in", false,-1, 3,0);
    tracep->declBus(c+867,"out", false,-1, 1,0);
    tracep->declBit(c+868,"zero", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lzd_4_1 ");
    tracep->declBus(c+869,"in", false,-1, 3,0);
    tracep->declBus(c+870,"out", false,-1, 1,0);
    tracep->declBit(c+871,"zero", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lzd_4_2 ");
    tracep->declBus(c+872,"in", false,-1, 3,0);
    tracep->declBus(c+873,"out", false,-1, 1,0);
    tracep->declBit(c+874,"zero", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lzd_4_3 ");
    tracep->declBus(c+875,"in", false,-1, 3,0);
    tracep->declBus(c+876,"out", false,-1, 1,0);
    tracep->declBit(c+877,"zero", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lzd_32_1 ");
    tracep->declBus(c+878,"in", false,-1, 31,0);
    tracep->declBus(c+1036,"out", false,-1, 4,0);
    tracep->declBit(c+879,"zero", false,-1);
    tracep->declBus(c+880,"z", false,-1, 1,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+1037+i*1,"out_3_0", true,(i+0), 3,0);
    }
    tracep->pushNamePrefix("lzd_16_0 ");
    tracep->declBus(c+881,"in", false,-1, 15,0);
    tracep->declBus(c+1039,"out", false,-1, 3,0);
    tracep->declBit(c+882,"zero", false,-1);
    tracep->declBus(c+883,"z", false,-1, 3,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+884+i*1,"out_2", true,(i+0), 1,0);
    }
    tracep->pushNamePrefix("lzd_4_0 ");
    tracep->declBus(c+888,"in", false,-1, 3,0);
    tracep->declBus(c+889,"out", false,-1, 1,0);
    tracep->declBit(c+890,"zero", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lzd_4_1 ");
    tracep->declBus(c+891,"in", false,-1, 3,0);
    tracep->declBus(c+892,"out", false,-1, 1,0);
    tracep->declBit(c+893,"zero", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lzd_4_2 ");
    tracep->declBus(c+894,"in", false,-1, 3,0);
    tracep->declBus(c+895,"out", false,-1, 1,0);
    tracep->declBit(c+896,"zero", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lzd_4_3 ");
    tracep->declBus(c+897,"in", false,-1, 3,0);
    tracep->declBus(c+898,"out", false,-1, 1,0);
    tracep->declBit(c+899,"zero", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lzd_16_1 ");
    tracep->declBus(c+900,"in", false,-1, 15,0);
    tracep->declBus(c+1040,"out", false,-1, 3,0);
    tracep->declBit(c+901,"zero", false,-1);
    tracep->declBus(c+902,"z", false,-1, 3,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+903+i*1,"out_2", true,(i+0), 1,0);
    }
    tracep->pushNamePrefix("lzd_4_0 ");
    tracep->declBus(c+907,"in", false,-1, 3,0);
    tracep->declBus(c+908,"out", false,-1, 1,0);
    tracep->declBit(c+909,"zero", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lzd_4_1 ");
    tracep->declBus(c+910,"in", false,-1, 3,0);
    tracep->declBus(c+911,"out", false,-1, 1,0);
    tracep->declBit(c+912,"zero", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lzd_4_2 ");
    tracep->declBus(c+913,"in", false,-1, 3,0);
    tracep->declBus(c+914,"out", false,-1, 1,0);
    tracep->declBit(c+915,"zero", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lzd_4_3 ");
    tracep->declBus(c+916,"in", false,-1, 3,0);
    tracep->declBus(c+917,"out", false,-1, 1,0);
    tracep->declBit(c+918,"zero", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("lzd1 ");
    tracep->declQuad(c+329,"in", false,-1, 63,0);
    tracep->declBus(c+1024,"out", false,-1, 5,0);
    tracep->declBit(c+339,"zero", false,-1);
    tracep->declBus(c+919,"z", false,-1, 1,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+1041+i*1,"out_3_0", true,(i+0), 4,0);
    }
    tracep->pushNamePrefix("lzd_32_0 ");
    tracep->declBus(c+920,"in", false,-1, 31,0);
    tracep->declBus(c+1043,"out", false,-1, 4,0);
    tracep->declBit(c+921,"zero", false,-1);
    tracep->declBus(c+922,"z", false,-1, 1,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+1044+i*1,"out_3_0", true,(i+0), 3,0);
    }
    tracep->pushNamePrefix("lzd_16_0 ");
    tracep->declBus(c+923,"in", false,-1, 15,0);
    tracep->declBus(c+1046,"out", false,-1, 3,0);
    tracep->declBit(c+924,"zero", false,-1);
    tracep->declBus(c+925,"z", false,-1, 3,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+926+i*1,"out_2", true,(i+0), 1,0);
    }
    tracep->pushNamePrefix("lzd_4_0 ");
    tracep->declBus(c+930,"in", false,-1, 3,0);
    tracep->declBus(c+931,"out", false,-1, 1,0);
    tracep->declBit(c+932,"zero", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lzd_4_1 ");
    tracep->declBus(c+933,"in", false,-1, 3,0);
    tracep->declBus(c+934,"out", false,-1, 1,0);
    tracep->declBit(c+935,"zero", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lzd_4_2 ");
    tracep->declBus(c+936,"in", false,-1, 3,0);
    tracep->declBus(c+937,"out", false,-1, 1,0);
    tracep->declBit(c+938,"zero", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lzd_4_3 ");
    tracep->declBus(c+939,"in", false,-1, 3,0);
    tracep->declBus(c+940,"out", false,-1, 1,0);
    tracep->declBit(c+941,"zero", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lzd_16_1 ");
    tracep->declBus(c+942,"in", false,-1, 15,0);
    tracep->declBus(c+1047,"out", false,-1, 3,0);
    tracep->declBit(c+943,"zero", false,-1);
    tracep->declBus(c+944,"z", false,-1, 3,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+945+i*1,"out_2", true,(i+0), 1,0);
    }
    tracep->pushNamePrefix("lzd_4_0 ");
    tracep->declBus(c+949,"in", false,-1, 3,0);
    tracep->declBus(c+950,"out", false,-1, 1,0);
    tracep->declBit(c+951,"zero", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lzd_4_1 ");
    tracep->declBus(c+952,"in", false,-1, 3,0);
    tracep->declBus(c+953,"out", false,-1, 1,0);
    tracep->declBit(c+954,"zero", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lzd_4_2 ");
    tracep->declBus(c+955,"in", false,-1, 3,0);
    tracep->declBus(c+956,"out", false,-1, 1,0);
    tracep->declBit(c+957,"zero", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lzd_4_3 ");
    tracep->declBus(c+958,"in", false,-1, 3,0);
    tracep->declBus(c+959,"out", false,-1, 1,0);
    tracep->declBit(c+960,"zero", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lzd_32_1 ");
    tracep->declBus(c+961,"in", false,-1, 31,0);
    tracep->declBus(c+1048,"out", false,-1, 4,0);
    tracep->declBit(c+962,"zero", false,-1);
    tracep->declBus(c+963,"z", false,-1, 1,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+1049+i*1,"out_3_0", true,(i+0), 3,0);
    }
    tracep->pushNamePrefix("lzd_16_0 ");
    tracep->declBus(c+964,"in", false,-1, 15,0);
    tracep->declBus(c+1051,"out", false,-1, 3,0);
    tracep->declBit(c+965,"zero", false,-1);
    tracep->declBus(c+966,"z", false,-1, 3,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+967+i*1,"out_2", true,(i+0), 1,0);
    }
    tracep->pushNamePrefix("lzd_4_0 ");
    tracep->declBus(c+971,"in", false,-1, 3,0);
    tracep->declBus(c+972,"out", false,-1, 1,0);
    tracep->declBit(c+973,"zero", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lzd_4_1 ");
    tracep->declBus(c+974,"in", false,-1, 3,0);
    tracep->declBus(c+975,"out", false,-1, 1,0);
    tracep->declBit(c+976,"zero", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lzd_4_2 ");
    tracep->declBus(c+977,"in", false,-1, 3,0);
    tracep->declBus(c+978,"out", false,-1, 1,0);
    tracep->declBit(c+979,"zero", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lzd_4_3 ");
    tracep->declBus(c+980,"in", false,-1, 3,0);
    tracep->declBus(c+981,"out", false,-1, 1,0);
    tracep->declBit(c+982,"zero", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lzd_16_1 ");
    tracep->declBus(c+983,"in", false,-1, 15,0);
    tracep->declBus(c+1052,"out", false,-1, 3,0);
    tracep->declBit(c+984,"zero", false,-1);
    tracep->declBus(c+985,"z", false,-1, 3,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+986+i*1,"out_2", true,(i+0), 1,0);
    }
    tracep->pushNamePrefix("lzd_4_0 ");
    tracep->declBus(c+990,"in", false,-1, 3,0);
    tracep->declBus(c+991,"out", false,-1, 1,0);
    tracep->declBit(c+992,"zero", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lzd_4_1 ");
    tracep->declBus(c+993,"in", false,-1, 3,0);
    tracep->declBus(c+994,"out", false,-1, 1,0);
    tracep->declBit(c+995,"zero", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lzd_4_2 ");
    tracep->declBus(c+996,"in", false,-1, 3,0);
    tracep->declBus(c+997,"out", false,-1, 1,0);
    tracep->declBit(c+998,"zero", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lzd_4_3 ");
    tracep->declBus(c+999,"in", false,-1, 3,0);
    tracep->declBus(c+1000,"out", false,-1, 1,0);
    tracep->declBit(c+1001,"zero", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("oppo0 ");
    tracep->declBus(c+1059,"width", false,-1, 31,0);
    tracep->declQuad(c+1006,"in", false,-1, 63,0);
    tracep->declBit(c+1,"sign", false,-1);
    tracep->declQuad(c+1015,"in_abs", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("oppo1 ");
    tracep->declBus(c+1059,"width", false,-1, 31,0);
    tracep->declQuad(c+1008,"in", false,-1, 63,0);
    tracep->declBit(c+2,"sign", false,-1);
    tracep->declQuad(c+1017,"in_abs", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("oppo2 ");
    tracep->declBus(c+1059,"width", false,-1, 31,0);
    tracep->declQuad(c+348,"in", false,-1, 63,0);
    tracep->declBit(c+3,"sign", false,-1);
    tracep->declQuad(c+1010,"in_abs", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("oppo3 ");
    tracep->declBus(c+1059,"width", false,-1, 31,0);
    tracep->declQuad(c+350,"in", false,-1, 63,0);
    tracep->declBit(c+1,"sign", false,-1);
    tracep->declQuad(c+1012,"in_abs", false,-1, 63,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vdiv___024root__trace_init_top(Vdiv___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdiv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdiv___024root__trace_init_top\n"); );
    // Body
    Vdiv___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vdiv___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vdiv___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vdiv___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vdiv___024root__trace_register(Vdiv___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdiv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdiv___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vdiv___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vdiv___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vdiv___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vdiv___024root__trace_full_sub_0(Vdiv___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vdiv___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdiv___024root__trace_full_top_0\n"); );
    // Init
    Vdiv___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdiv___024root*>(voidSelf);
    Vdiv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vdiv___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vdiv___024root__trace_full_sub_0(Vdiv___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vdiv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdiv___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->div__DOT____Vcellinp__oppo0____pinNumber2));
    bufp->fullBit(oldp+2,(vlSelf->div__DOT____Vcellinp__oppo1____pinNumber2));
    bufp->fullBit(oldp+3,(vlSelf->div__DOT____Vcellinp__oppo2____pinNumber2));
    bufp->fullQData(oldp+4,((((QData)((IData)((((0xeU 
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
    bufp->fullCData(oldp+6,(vlSelf->div__DOT__q),2);
    bufp->fullQData(oldp+7,(vlSelf->div__DOT__add_B),64);
    bufp->fullBit(oldp+9,((1U & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__60__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                 >> 3U))));
    bufp->fullIData(oldp+10,(((0x10000U & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__60__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                           << 0xdU)) 
                              | ((0x8000U & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__56__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                             << 0xcU)) 
                                 | ((0x4000U & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__52__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                << 0xbU)) 
                                    | ((0x2000U & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__48__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
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
    bufp->fullCData(oldp+11,((0xfU & (IData)(vlSelf->div__DOT__add_B))),4);
    bufp->fullCData(oldp+12,((0xfU & (((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__0__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                       << 1U) ^ (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__0__KET____DOT__cla_part0__DOT__p)))),4);
    bufp->fullBit(oldp+13,((1U & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__0__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                  >> 3U))));
    bufp->fullCData(oldp+14,(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__0__KET____DOT__cla_part0__DOT__p),4);
    bufp->fullCData(oldp+15,(((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__0__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                              << 1U)),5);
    bufp->fullCData(oldp+16,(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__0__KET____DOT__cla_part0__DOT__g),4);
    bufp->fullCData(oldp+17,(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__0__KET____DOT__cla_part0__DOT____Vcellout__carry0__c),4);
    bufp->fullBit(oldp+18,((1U & (IData)(vlSelf->div__DOT__add_B))));
    bufp->fullBit(oldp+19,((1U & (IData)((vlSelf->div__DOT__add_B 
                                          >> 1U)))));
    bufp->fullBit(oldp+20,((1U & ((IData)((0x7fffffffffffffffULL 
                                           & vlSelf->div__DOT__dividend)) 
                                  ^ (IData)((vlSelf->div__DOT__add_B 
                                             >> 1U))))));
    bufp->fullBit(oldp+21,((1U & ((IData)((0x7fffffffffffffffULL 
                                           & vlSelf->div__DOT__dividend)) 
                                  & (IData)((vlSelf->div__DOT__add_B 
                                             >> 1U))))));
    bufp->fullBit(oldp+22,((1U & (IData)((vlSelf->div__DOT__add_B 
                                          >> 2U)))));
    bufp->fullBit(oldp+23,((1U & ((IData)((0x3fffffffffffffffULL 
                                           & (vlSelf->div__DOT__dividend 
                                              >> 1U))) 
                                  ^ (IData)((vlSelf->div__DOT__add_B 
                                             >> 2U))))));
    bufp->fullBit(oldp+24,((1U & ((IData)((0x3fffffffffffffffULL 
                                           & (vlSelf->div__DOT__dividend 
                                              >> 1U))) 
                                  & (IData)((vlSelf->div__DOT__add_B 
                                             >> 2U))))));
    bufp->fullBit(oldp+25,((1U & (IData)((vlSelf->div__DOT__add_B 
                                          >> 3U)))));
    bufp->fullBit(oldp+26,((1U & ((IData)((0x1fffffffffffffffULL 
                                           & (vlSelf->div__DOT__dividend 
                                              >> 2U))) 
                                  ^ (IData)((vlSelf->div__DOT__add_B 
                                             >> 3U))))));
    bufp->fullBit(oldp+27,((1U & ((IData)((0x1fffffffffffffffULL 
                                           & (vlSelf->div__DOT__dividend 
                                              >> 2U))) 
                                  & (IData)((vlSelf->div__DOT__add_B 
                                             >> 3U))))));
    bufp->fullCData(oldp+28,((0xfU & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__0__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                      << 1U))),4);
    bufp->fullCData(oldp+29,((0xfU & (IData)((vlSelf->div__DOT__add_B 
                                              >> 0xcU)))),4);
    bufp->fullBit(oldp+30,((1U & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__8__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                  >> 3U))));
    bufp->fullCData(oldp+31,((((0xeU & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__12__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                        << 1U)) | (1U 
                                                   & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__8__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                      >> 3U))) 
                              ^ (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__12__KET____DOT__cla_part0__DOT__p))),4);
    bufp->fullBit(oldp+32,((1U & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__12__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                  >> 3U))));
    bufp->fullCData(oldp+33,(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__12__KET____DOT__cla_part0__DOT__p),4);
    bufp->fullCData(oldp+34,((((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__12__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                               << 1U) | (1U & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__8__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                               >> 3U)))),5);
    bufp->fullCData(oldp+35,(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__12__KET____DOT__cla_part0__DOT__g),4);
    bufp->fullCData(oldp+36,(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__12__KET____DOT__cla_part0__DOT____Vcellout__carry0__c),4);
    bufp->fullBit(oldp+37,((1U & (IData)((vlSelf->div__DOT__add_B 
                                          >> 0xcU)))));
    bufp->fullBit(oldp+38,((1U & ((IData)((0xfffffffffffffULL 
                                           & (vlSelf->div__DOT__dividend 
                                              >> 0xbU))) 
                                  ^ (IData)((vlSelf->div__DOT__add_B 
                                             >> 0xcU))))));
    bufp->fullBit(oldp+39,((1U & ((IData)((0xfffffffffffffULL 
                                           & (vlSelf->div__DOT__dividend 
                                              >> 0xbU))) 
                                  & (IData)((vlSelf->div__DOT__add_B 
                                             >> 0xcU))))));
    bufp->fullBit(oldp+40,((1U & (IData)((vlSelf->div__DOT__add_B 
                                          >> 0xdU)))));
    bufp->fullBit(oldp+41,((1U & ((IData)((0x7ffffffffffffULL 
                                           & (vlSelf->div__DOT__dividend 
                                              >> 0xcU))) 
                                  ^ (IData)((vlSelf->div__DOT__add_B 
                                             >> 0xdU))))));
    bufp->fullBit(oldp+42,((1U & ((IData)((0x7ffffffffffffULL 
                                           & (vlSelf->div__DOT__dividend 
                                              >> 0xcU))) 
                                  & (IData)((vlSelf->div__DOT__add_B 
                                             >> 0xdU))))));
    bufp->fullBit(oldp+43,((1U & (IData)((vlSelf->div__DOT__add_B 
                                          >> 0xeU)))));
    bufp->fullBit(oldp+44,((1U & ((IData)((0x3ffffffffffffULL 
                                           & (vlSelf->div__DOT__dividend 
                                              >> 0xdU))) 
                                  ^ (IData)((vlSelf->div__DOT__add_B 
                                             >> 0xeU))))));
    bufp->fullBit(oldp+45,((1U & ((IData)((0x3ffffffffffffULL 
                                           & (vlSelf->div__DOT__dividend 
                                              >> 0xdU))) 
                                  & (IData)((vlSelf->div__DOT__add_B 
                                             >> 0xeU))))));
    bufp->fullBit(oldp+46,((1U & (IData)((vlSelf->div__DOT__add_B 
                                          >> 0xfU)))));
    bufp->fullBit(oldp+47,((1U & ((IData)((0x1ffffffffffffULL 
                                           & (vlSelf->div__DOT__dividend 
                                              >> 0xeU))) 
                                  ^ (IData)((vlSelf->div__DOT__add_B 
                                             >> 0xfU))))));
    bufp->fullBit(oldp+48,((1U & ((IData)((0x1ffffffffffffULL 
                                           & (vlSelf->div__DOT__dividend 
                                              >> 0xeU))) 
                                  & (IData)((vlSelf->div__DOT__add_B 
                                             >> 0xfU))))));
    bufp->fullCData(oldp+49,(((0xeU & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__12__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                       << 1U)) | (1U 
                                                  & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__8__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                     >> 3U)))),4);
    bufp->fullCData(oldp+50,((0xfU & (IData)((vlSelf->div__DOT__add_B 
                                              >> 0x10U)))),4);
    bufp->fullCData(oldp+51,((((0xeU & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__16__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                        << 1U)) | (1U 
                                                   & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__12__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                      >> 3U))) 
                              ^ (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__16__KET____DOT__cla_part0__DOT__p))),4);
    bufp->fullBit(oldp+52,((1U & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__16__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                  >> 3U))));
    bufp->fullCData(oldp+53,(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__16__KET____DOT__cla_part0__DOT__p),4);
    bufp->fullCData(oldp+54,((((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__16__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                               << 1U) | (1U & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__12__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                               >> 3U)))),5);
    bufp->fullCData(oldp+55,(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__16__KET____DOT__cla_part0__DOT__g),4);
    bufp->fullCData(oldp+56,(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__16__KET____DOT__cla_part0__DOT____Vcellout__carry0__c),4);
    bufp->fullBit(oldp+57,((1U & (IData)((vlSelf->div__DOT__add_B 
                                          >> 0x10U)))));
    bufp->fullBit(oldp+58,((1U & ((IData)((0xffffffffffffULL 
                                           & (vlSelf->div__DOT__dividend 
                                              >> 0xfU))) 
                                  ^ (IData)((vlSelf->div__DOT__add_B 
                                             >> 0x10U))))));
    bufp->fullBit(oldp+59,((1U & ((IData)((0xffffffffffffULL 
                                           & (vlSelf->div__DOT__dividend 
                                              >> 0xfU))) 
                                  & (IData)((vlSelf->div__DOT__add_B 
                                             >> 0x10U))))));
    bufp->fullBit(oldp+60,((1U & (IData)((vlSelf->div__DOT__add_B 
                                          >> 0x11U)))));
    bufp->fullBit(oldp+61,((1U & ((IData)((0x7fffffffffffULL 
                                           & (vlSelf->div__DOT__dividend 
                                              >> 0x10U))) 
                                  ^ (IData)((vlSelf->div__DOT__add_B 
                                             >> 0x11U))))));
    bufp->fullBit(oldp+62,((1U & ((IData)((0x7fffffffffffULL 
                                           & (vlSelf->div__DOT__dividend 
                                              >> 0x10U))) 
                                  & (IData)((vlSelf->div__DOT__add_B 
                                             >> 0x11U))))));
    bufp->fullBit(oldp+63,((1U & (IData)((vlSelf->div__DOT__add_B 
                                          >> 0x12U)))));
    bufp->fullBit(oldp+64,((1U & ((IData)((0x3fffffffffffULL 
                                           & (vlSelf->div__DOT__dividend 
                                              >> 0x11U))) 
                                  ^ (IData)((vlSelf->div__DOT__add_B 
                                             >> 0x12U))))));
    bufp->fullBit(oldp+65,((1U & ((IData)((0x3fffffffffffULL 
                                           & (vlSelf->div__DOT__dividend 
                                              >> 0x11U))) 
                                  & (IData)((vlSelf->div__DOT__add_B 
                                             >> 0x12U))))));
    bufp->fullBit(oldp+66,((1U & (IData)((vlSelf->div__DOT__add_B 
                                          >> 0x13U)))));
    bufp->fullBit(oldp+67,((1U & ((IData)((0x1fffffffffffULL 
                                           & (vlSelf->div__DOT__dividend 
                                              >> 0x12U))) 
                                  ^ (IData)((vlSelf->div__DOT__add_B 
                                             >> 0x13U))))));
    bufp->fullBit(oldp+68,((1U & ((IData)((0x1fffffffffffULL 
                                           & (vlSelf->div__DOT__dividend 
                                              >> 0x12U))) 
                                  & (IData)((vlSelf->div__DOT__add_B 
                                             >> 0x13U))))));
    bufp->fullCData(oldp+69,(((0xeU & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__16__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                       << 1U)) | (1U 
                                                  & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__12__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                     >> 3U)))),4);
    bufp->fullCData(oldp+70,((0xfU & (IData)((vlSelf->div__DOT__add_B 
                                              >> 0x14U)))),4);
    bufp->fullCData(oldp+71,((((0xeU & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__20__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                        << 1U)) | (1U 
                                                   & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__16__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                      >> 3U))) 
                              ^ (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__20__KET____DOT__cla_part0__DOT__p))),4);
    bufp->fullBit(oldp+72,((1U & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__20__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                  >> 3U))));
    bufp->fullCData(oldp+73,(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__20__KET____DOT__cla_part0__DOT__p),4);
    bufp->fullCData(oldp+74,((((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__20__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                               << 1U) | (1U & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__16__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                               >> 3U)))),5);
    bufp->fullCData(oldp+75,(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__20__KET____DOT__cla_part0__DOT__g),4);
    bufp->fullCData(oldp+76,(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__20__KET____DOT__cla_part0__DOT____Vcellout__carry0__c),4);
    bufp->fullBit(oldp+77,((1U & (IData)((vlSelf->div__DOT__add_B 
                                          >> 0x14U)))));
    bufp->fullBit(oldp+78,((1U & ((IData)((0xfffffffffffULL 
                                           & (vlSelf->div__DOT__dividend 
                                              >> 0x13U))) 
                                  ^ (IData)((vlSelf->div__DOT__add_B 
                                             >> 0x14U))))));
    bufp->fullBit(oldp+79,((1U & ((IData)((0xfffffffffffULL 
                                           & (vlSelf->div__DOT__dividend 
                                              >> 0x13U))) 
                                  & (IData)((vlSelf->div__DOT__add_B 
                                             >> 0x14U))))));
    bufp->fullBit(oldp+80,((1U & (IData)((vlSelf->div__DOT__add_B 
                                          >> 0x15U)))));
    bufp->fullBit(oldp+81,((1U & ((IData)((0x7ffffffffffULL 
                                           & (vlSelf->div__DOT__dividend 
                                              >> 0x14U))) 
                                  ^ (IData)((vlSelf->div__DOT__add_B 
                                             >> 0x15U))))));
    bufp->fullBit(oldp+82,((1U & ((IData)((0x7ffffffffffULL 
                                           & (vlSelf->div__DOT__dividend 
                                              >> 0x14U))) 
                                  & (IData)((vlSelf->div__DOT__add_B 
                                             >> 0x15U))))));
    bufp->fullBit(oldp+83,((1U & (IData)((vlSelf->div__DOT__add_B 
                                          >> 0x16U)))));
    bufp->fullBit(oldp+84,((1U & ((IData)((0x3ffffffffffULL 
                                           & (vlSelf->div__DOT__dividend 
                                              >> 0x15U))) 
                                  ^ (IData)((vlSelf->div__DOT__add_B 
                                             >> 0x16U))))));
    bufp->fullBit(oldp+85,((1U & ((IData)((0x3ffffffffffULL 
                                           & (vlSelf->div__DOT__dividend 
                                              >> 0x15U))) 
                                  & (IData)((vlSelf->div__DOT__add_B 
                                             >> 0x16U))))));
    bufp->fullBit(oldp+86,((1U & (IData)((vlSelf->div__DOT__add_B 
                                          >> 0x17U)))));
    bufp->fullBit(oldp+87,((1U & ((IData)((0x1ffffffffffULL 
                                           & (vlSelf->div__DOT__dividend 
                                              >> 0x16U))) 
                                  ^ (IData)((vlSelf->div__DOT__add_B 
                                             >> 0x17U))))));
    bufp->fullBit(oldp+88,((1U & ((IData)((0x1ffffffffffULL 
                                           & (vlSelf->div__DOT__dividend 
                                              >> 0x16U))) 
                                  & (IData)((vlSelf->div__DOT__add_B 
                                             >> 0x17U))))));
    bufp->fullCData(oldp+89,(((0xeU & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__20__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                       << 1U)) | (1U 
                                                  & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__16__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                     >> 3U)))),4);
    bufp->fullCData(oldp+90,((0xfU & (IData)((vlSelf->div__DOT__add_B 
                                              >> 0x18U)))),4);
    bufp->fullCData(oldp+91,((((0xeU & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__24__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                        << 1U)) | (1U 
                                                   & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__20__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                      >> 3U))) 
                              ^ (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__24__KET____DOT__cla_part0__DOT__p))),4);
    bufp->fullBit(oldp+92,((1U & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__24__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                  >> 3U))));
    bufp->fullCData(oldp+93,(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__24__KET____DOT__cla_part0__DOT__p),4);
    bufp->fullCData(oldp+94,((((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__24__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                               << 1U) | (1U & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__20__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                               >> 3U)))),5);
    bufp->fullCData(oldp+95,(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__24__KET____DOT__cla_part0__DOT__g),4);
    bufp->fullCData(oldp+96,(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__24__KET____DOT__cla_part0__DOT____Vcellout__carry0__c),4);
    bufp->fullBit(oldp+97,((1U & (IData)((vlSelf->div__DOT__add_B 
                                          >> 0x18U)))));
    bufp->fullBit(oldp+98,((1U & ((IData)((0xffffffffffULL 
                                           & (vlSelf->div__DOT__dividend 
                                              >> 0x17U))) 
                                  ^ (IData)((vlSelf->div__DOT__add_B 
                                             >> 0x18U))))));
    bufp->fullBit(oldp+99,((1U & ((IData)((0xffffffffffULL 
                                           & (vlSelf->div__DOT__dividend 
                                              >> 0x17U))) 
                                  & (IData)((vlSelf->div__DOT__add_B 
                                             >> 0x18U))))));
    bufp->fullBit(oldp+100,((1U & (IData)((vlSelf->div__DOT__add_B 
                                           >> 0x19U)))));
    bufp->fullBit(oldp+101,((1U & ((IData)((0x7fffffffffULL 
                                            & (vlSelf->div__DOT__dividend 
                                               >> 0x18U))) 
                                   ^ (IData)((vlSelf->div__DOT__add_B 
                                              >> 0x19U))))));
    bufp->fullBit(oldp+102,((1U & ((IData)((0x7fffffffffULL 
                                            & (vlSelf->div__DOT__dividend 
                                               >> 0x18U))) 
                                   & (IData)((vlSelf->div__DOT__add_B 
                                              >> 0x19U))))));
    bufp->fullBit(oldp+103,((1U & (IData)((vlSelf->div__DOT__add_B 
                                           >> 0x1aU)))));
    bufp->fullBit(oldp+104,((1U & ((IData)((0x3fffffffffULL 
                                            & (vlSelf->div__DOT__dividend 
                                               >> 0x19U))) 
                                   ^ (IData)((vlSelf->div__DOT__add_B 
                                              >> 0x1aU))))));
    bufp->fullBit(oldp+105,((1U & ((IData)((0x3fffffffffULL 
                                            & (vlSelf->div__DOT__dividend 
                                               >> 0x19U))) 
                                   & (IData)((vlSelf->div__DOT__add_B 
                                              >> 0x1aU))))));
    bufp->fullBit(oldp+106,((1U & (IData)((vlSelf->div__DOT__add_B 
                                           >> 0x1bU)))));
    bufp->fullBit(oldp+107,((1U & ((IData)((0x1fffffffffULL 
                                            & (vlSelf->div__DOT__dividend 
                                               >> 0x1aU))) 
                                   ^ (IData)((vlSelf->div__DOT__add_B 
                                              >> 0x1bU))))));
    bufp->fullBit(oldp+108,((1U & ((IData)((0x1fffffffffULL 
                                            & (vlSelf->div__DOT__dividend 
                                               >> 0x1aU))) 
                                   & (IData)((vlSelf->div__DOT__add_B 
                                              >> 0x1bU))))));
    bufp->fullCData(oldp+109,(((0xeU & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__24__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                        << 1U)) | (1U 
                                                   & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__20__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                      >> 3U)))),4);
    bufp->fullCData(oldp+110,((0xfU & (IData)((vlSelf->div__DOT__add_B 
                                               >> 0x1cU)))),4);
    bufp->fullCData(oldp+111,((((0xeU & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__28__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                         << 1U)) | 
                                (1U & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__24__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                       >> 3U))) ^ (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__28__KET____DOT__cla_part0__DOT__p))),4);
    bufp->fullBit(oldp+112,((1U & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__28__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                   >> 3U))));
    bufp->fullCData(oldp+113,(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__28__KET____DOT__cla_part0__DOT__p),4);
    bufp->fullCData(oldp+114,((((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__28__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                << 1U) | (1U & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__24__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                >> 3U)))),5);
    bufp->fullCData(oldp+115,(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__28__KET____DOT__cla_part0__DOT__g),4);
    bufp->fullCData(oldp+116,(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__28__KET____DOT__cla_part0__DOT____Vcellout__carry0__c),4);
    bufp->fullBit(oldp+117,((1U & (IData)((vlSelf->div__DOT__add_B 
                                           >> 0x1cU)))));
    bufp->fullBit(oldp+118,((1U & ((IData)((0xfffffffffULL 
                                            & (vlSelf->div__DOT__dividend 
                                               >> 0x1bU))) 
                                   ^ (IData)((vlSelf->div__DOT__add_B 
                                              >> 0x1cU))))));
    bufp->fullBit(oldp+119,((1U & ((IData)((0xfffffffffULL 
                                            & (vlSelf->div__DOT__dividend 
                                               >> 0x1bU))) 
                                   & (IData)((vlSelf->div__DOT__add_B 
                                              >> 0x1cU))))));
    bufp->fullBit(oldp+120,((1U & (IData)((vlSelf->div__DOT__add_B 
                                           >> 0x1dU)))));
    bufp->fullBit(oldp+121,((1U & ((IData)((0x7ffffffffULL 
                                            & (vlSelf->div__DOT__dividend 
                                               >> 0x1cU))) 
                                   ^ (IData)((vlSelf->div__DOT__add_B 
                                              >> 0x1dU))))));
    bufp->fullBit(oldp+122,((1U & ((IData)((0x7ffffffffULL 
                                            & (vlSelf->div__DOT__dividend 
                                               >> 0x1cU))) 
                                   & (IData)((vlSelf->div__DOT__add_B 
                                              >> 0x1dU))))));
    bufp->fullBit(oldp+123,((1U & (IData)((vlSelf->div__DOT__add_B 
                                           >> 0x1eU)))));
    bufp->fullBit(oldp+124,((1U & ((IData)((0x3ffffffffULL 
                                            & (vlSelf->div__DOT__dividend 
                                               >> 0x1dU))) 
                                   ^ (IData)((vlSelf->div__DOT__add_B 
                                              >> 0x1eU))))));
    bufp->fullBit(oldp+125,((1U & ((IData)((0x3ffffffffULL 
                                            & (vlSelf->div__DOT__dividend 
                                               >> 0x1dU))) 
                                   & (IData)((vlSelf->div__DOT__add_B 
                                              >> 0x1eU))))));
    bufp->fullBit(oldp+126,((1U & (IData)((vlSelf->div__DOT__add_B 
                                           >> 0x1fU)))));
    bufp->fullBit(oldp+127,((1U & ((IData)((0x1ffffffffULL 
                                            & (vlSelf->div__DOT__dividend 
                                               >> 0x1eU))) 
                                   ^ (IData)((vlSelf->div__DOT__add_B 
                                              >> 0x1fU))))));
    bufp->fullBit(oldp+128,((1U & ((IData)((0x1ffffffffULL 
                                            & (vlSelf->div__DOT__dividend 
                                               >> 0x1eU))) 
                                   & (IData)((vlSelf->div__DOT__add_B 
                                              >> 0x1fU))))));
    bufp->fullCData(oldp+129,(((0xeU & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__28__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                        << 1U)) | (1U 
                                                   & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__24__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                      >> 3U)))),4);
    bufp->fullCData(oldp+130,((0xfU & (IData)((vlSelf->div__DOT__add_B 
                                               >> 0x20U)))),4);
    bufp->fullCData(oldp+131,((((0xeU & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__32__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                         << 1U)) | 
                                (1U & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__28__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                       >> 3U))) ^ (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__32__KET____DOT__cla_part0__DOT__p))),4);
    bufp->fullBit(oldp+132,((1U & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__32__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                   >> 3U))));
    bufp->fullCData(oldp+133,(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__32__KET____DOT__cla_part0__DOT__p),4);
    bufp->fullCData(oldp+134,((((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__32__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                << 1U) | (1U & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__28__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                >> 3U)))),5);
    bufp->fullCData(oldp+135,(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__32__KET____DOT__cla_part0__DOT__g),4);
    bufp->fullCData(oldp+136,(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__32__KET____DOT__cla_part0__DOT____Vcellout__carry0__c),4);
    bufp->fullBit(oldp+137,((1U & (IData)((vlSelf->div__DOT__add_B 
                                           >> 0x20U)))));
    bufp->fullBit(oldp+138,((1U & ((IData)((0xffffffffULL 
                                            & (vlSelf->div__DOT__dividend 
                                               >> 0x1fU))) 
                                   ^ (IData)((vlSelf->div__DOT__add_B 
                                              >> 0x20U))))));
    bufp->fullBit(oldp+139,((1U & ((IData)((0xffffffffULL 
                                            & (vlSelf->div__DOT__dividend 
                                               >> 0x1fU))) 
                                   & (IData)((vlSelf->div__DOT__add_B 
                                              >> 0x20U))))));
    bufp->fullBit(oldp+140,((1U & (IData)((vlSelf->div__DOT__add_B 
                                           >> 0x21U)))));
    bufp->fullBit(oldp+141,((1U & ((IData)((0x7fffffffULL 
                                            & (vlSelf->div__DOT__dividend 
                                               >> 0x20U))) 
                                   ^ (IData)((vlSelf->div__DOT__add_B 
                                              >> 0x21U))))));
    bufp->fullBit(oldp+142,((1U & ((IData)((0x7fffffffULL 
                                            & (vlSelf->div__DOT__dividend 
                                               >> 0x20U))) 
                                   & (IData)((vlSelf->div__DOT__add_B 
                                              >> 0x21U))))));
    bufp->fullBit(oldp+143,((1U & (IData)((vlSelf->div__DOT__add_B 
                                           >> 0x22U)))));
    bufp->fullBit(oldp+144,((1U & ((IData)((0x3fffffffULL 
                                            & (vlSelf->div__DOT__dividend 
                                               >> 0x21U))) 
                                   ^ (IData)((vlSelf->div__DOT__add_B 
                                              >> 0x22U))))));
    bufp->fullBit(oldp+145,((1U & ((IData)((0x3fffffffULL 
                                            & (vlSelf->div__DOT__dividend 
                                               >> 0x21U))) 
                                   & (IData)((vlSelf->div__DOT__add_B 
                                              >> 0x22U))))));
    bufp->fullBit(oldp+146,((1U & (IData)((vlSelf->div__DOT__add_B 
                                           >> 0x23U)))));
    bufp->fullBit(oldp+147,((1U & ((IData)((0x1fffffffULL 
                                            & (vlSelf->div__DOT__dividend 
                                               >> 0x22U))) 
                                   ^ (IData)((vlSelf->div__DOT__add_B 
                                              >> 0x23U))))));
    bufp->fullBit(oldp+148,((1U & ((IData)((0x1fffffffULL 
                                            & (vlSelf->div__DOT__dividend 
                                               >> 0x22U))) 
                                   & (IData)((vlSelf->div__DOT__add_B 
                                              >> 0x23U))))));
    bufp->fullCData(oldp+149,(((0xeU & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__32__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                        << 1U)) | (1U 
                                                   & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__28__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                      >> 3U)))),4);
    bufp->fullCData(oldp+150,((0xfU & (IData)((vlSelf->div__DOT__add_B 
                                               >> 0x24U)))),4);
    bufp->fullCData(oldp+151,((((0xeU & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__36__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                         << 1U)) | 
                                (1U & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__32__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                       >> 3U))) ^ (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__36__KET____DOT__cla_part0__DOT__p))),4);
    bufp->fullBit(oldp+152,((1U & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__36__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                   >> 3U))));
    bufp->fullCData(oldp+153,(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__36__KET____DOT__cla_part0__DOT__p),4);
    bufp->fullCData(oldp+154,((((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__36__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                << 1U) | (1U & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__32__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                >> 3U)))),5);
    bufp->fullCData(oldp+155,(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__36__KET____DOT__cla_part0__DOT__g),4);
    bufp->fullCData(oldp+156,(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__36__KET____DOT__cla_part0__DOT____Vcellout__carry0__c),4);
    bufp->fullBit(oldp+157,((1U & (IData)((vlSelf->div__DOT__add_B 
                                           >> 0x24U)))));
    bufp->fullBit(oldp+158,((1U & ((IData)((0xfffffffULL 
                                            & (vlSelf->div__DOT__dividend 
                                               >> 0x23U))) 
                                   ^ (IData)((vlSelf->div__DOT__add_B 
                                              >> 0x24U))))));
    bufp->fullBit(oldp+159,((1U & ((IData)((0xfffffffULL 
                                            & (vlSelf->div__DOT__dividend 
                                               >> 0x23U))) 
                                   & (IData)((vlSelf->div__DOT__add_B 
                                              >> 0x24U))))));
    bufp->fullBit(oldp+160,((1U & (IData)((vlSelf->div__DOT__add_B 
                                           >> 0x25U)))));
    bufp->fullBit(oldp+161,((1U & ((IData)((0x7ffffffULL 
                                            & (vlSelf->div__DOT__dividend 
                                               >> 0x24U))) 
                                   ^ (IData)((vlSelf->div__DOT__add_B 
                                              >> 0x25U))))));
    bufp->fullBit(oldp+162,((1U & ((IData)((0x7ffffffULL 
                                            & (vlSelf->div__DOT__dividend 
                                               >> 0x24U))) 
                                   & (IData)((vlSelf->div__DOT__add_B 
                                              >> 0x25U))))));
    bufp->fullBit(oldp+163,((1U & (IData)((vlSelf->div__DOT__add_B 
                                           >> 0x26U)))));
    bufp->fullBit(oldp+164,((1U & ((IData)((0x3ffffffULL 
                                            & (vlSelf->div__DOT__dividend 
                                               >> 0x25U))) 
                                   ^ (IData)((vlSelf->div__DOT__add_B 
                                              >> 0x26U))))));
    bufp->fullBit(oldp+165,((1U & ((IData)((0x3ffffffULL 
                                            & (vlSelf->div__DOT__dividend 
                                               >> 0x25U))) 
                                   & (IData)((vlSelf->div__DOT__add_B 
                                              >> 0x26U))))));
    bufp->fullBit(oldp+166,((1U & (IData)((vlSelf->div__DOT__add_B 
                                           >> 0x27U)))));
    bufp->fullBit(oldp+167,((1U & ((IData)((0x1ffffffULL 
                                            & (vlSelf->div__DOT__dividend 
                                               >> 0x26U))) 
                                   ^ (IData)((vlSelf->div__DOT__add_B 
                                              >> 0x27U))))));
    bufp->fullBit(oldp+168,((1U & ((IData)((0x1ffffffULL 
                                            & (vlSelf->div__DOT__dividend 
                                               >> 0x26U))) 
                                   & (IData)((vlSelf->div__DOT__add_B 
                                              >> 0x27U))))));
    bufp->fullCData(oldp+169,(((0xeU & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__36__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                        << 1U)) | (1U 
                                                   & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__32__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                      >> 3U)))),4);
    bufp->fullCData(oldp+170,((0xfU & (IData)((vlSelf->div__DOT__add_B 
                                               >> 0x28U)))),4);
    bufp->fullCData(oldp+171,((((0xeU & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__40__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                         << 1U)) | 
                                (1U & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__36__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                       >> 3U))) ^ (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__40__KET____DOT__cla_part0__DOT__p))),4);
    bufp->fullBit(oldp+172,((1U & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__40__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                   >> 3U))));
    bufp->fullCData(oldp+173,(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__40__KET____DOT__cla_part0__DOT__p),4);
    bufp->fullCData(oldp+174,((((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__40__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                << 1U) | (1U & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__36__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                >> 3U)))),5);
    bufp->fullCData(oldp+175,(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__40__KET____DOT__cla_part0__DOT__g),4);
    bufp->fullCData(oldp+176,(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__40__KET____DOT__cla_part0__DOT____Vcellout__carry0__c),4);
    bufp->fullBit(oldp+177,((1U & (IData)((vlSelf->div__DOT__add_B 
                                           >> 0x28U)))));
    bufp->fullBit(oldp+178,((1U & ((IData)((0xffffffULL 
                                            & (vlSelf->div__DOT__dividend 
                                               >> 0x27U))) 
                                   ^ (IData)((vlSelf->div__DOT__add_B 
                                              >> 0x28U))))));
    bufp->fullBit(oldp+179,((1U & ((IData)((0xffffffULL 
                                            & (vlSelf->div__DOT__dividend 
                                               >> 0x27U))) 
                                   & (IData)((vlSelf->div__DOT__add_B 
                                              >> 0x28U))))));
    bufp->fullBit(oldp+180,((1U & (IData)((vlSelf->div__DOT__add_B 
                                           >> 0x29U)))));
    bufp->fullBit(oldp+181,((1U & ((IData)((0x7fffffULL 
                                            & (vlSelf->div__DOT__dividend 
                                               >> 0x28U))) 
                                   ^ (IData)((vlSelf->div__DOT__add_B 
                                              >> 0x29U))))));
    bufp->fullBit(oldp+182,((1U & ((IData)((0x7fffffULL 
                                            & (vlSelf->div__DOT__dividend 
                                               >> 0x28U))) 
                                   & (IData)((vlSelf->div__DOT__add_B 
                                              >> 0x29U))))));
    bufp->fullBit(oldp+183,((1U & (IData)((vlSelf->div__DOT__add_B 
                                           >> 0x2aU)))));
    bufp->fullBit(oldp+184,((1U & ((IData)((0x3fffffULL 
                                            & (vlSelf->div__DOT__dividend 
                                               >> 0x29U))) 
                                   ^ (IData)((vlSelf->div__DOT__add_B 
                                              >> 0x2aU))))));
    bufp->fullBit(oldp+185,((1U & ((IData)((0x3fffffULL 
                                            & (vlSelf->div__DOT__dividend 
                                               >> 0x29U))) 
                                   & (IData)((vlSelf->div__DOT__add_B 
                                              >> 0x2aU))))));
    bufp->fullBit(oldp+186,((1U & (IData)((vlSelf->div__DOT__add_B 
                                           >> 0x2bU)))));
    bufp->fullBit(oldp+187,((1U & ((IData)((0x1fffffULL 
                                            & (vlSelf->div__DOT__dividend 
                                               >> 0x2aU))) 
                                   ^ (IData)((vlSelf->div__DOT__add_B 
                                              >> 0x2bU))))));
    bufp->fullBit(oldp+188,((1U & ((IData)((0x1fffffULL 
                                            & (vlSelf->div__DOT__dividend 
                                               >> 0x2aU))) 
                                   & (IData)((vlSelf->div__DOT__add_B 
                                              >> 0x2bU))))));
    bufp->fullCData(oldp+189,(((0xeU & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__40__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                        << 1U)) | (1U 
                                                   & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__36__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                      >> 3U)))),4);
    bufp->fullCData(oldp+190,((0xfU & (IData)((vlSelf->div__DOT__add_B 
                                               >> 0x2cU)))),4);
    bufp->fullCData(oldp+191,((((0xeU & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__44__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                         << 1U)) | 
                                (1U & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__40__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                       >> 3U))) ^ (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__44__KET____DOT__cla_part0__DOT__p))),4);
    bufp->fullBit(oldp+192,((1U & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__44__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                   >> 3U))));
    bufp->fullCData(oldp+193,(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__44__KET____DOT__cla_part0__DOT__p),4);
    bufp->fullCData(oldp+194,((((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__44__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                << 1U) | (1U & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__40__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                >> 3U)))),5);
    bufp->fullCData(oldp+195,(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__44__KET____DOT__cla_part0__DOT__g),4);
    bufp->fullCData(oldp+196,(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__44__KET____DOT__cla_part0__DOT____Vcellout__carry0__c),4);
    bufp->fullBit(oldp+197,((1U & (IData)((vlSelf->div__DOT__add_B 
                                           >> 0x2cU)))));
    bufp->fullBit(oldp+198,((1U & ((IData)((0xfffffULL 
                                            & (vlSelf->div__DOT__dividend 
                                               >> 0x2bU))) 
                                   ^ (IData)((vlSelf->div__DOT__add_B 
                                              >> 0x2cU))))));
    bufp->fullBit(oldp+199,((1U & ((IData)((0xfffffULL 
                                            & (vlSelf->div__DOT__dividend 
                                               >> 0x2bU))) 
                                   & (IData)((vlSelf->div__DOT__add_B 
                                              >> 0x2cU))))));
    bufp->fullBit(oldp+200,((1U & (IData)((vlSelf->div__DOT__add_B 
                                           >> 0x2dU)))));
    bufp->fullBit(oldp+201,((1U & ((IData)((0x7ffffULL 
                                            & (vlSelf->div__DOT__dividend 
                                               >> 0x2cU))) 
                                   ^ (IData)((vlSelf->div__DOT__add_B 
                                              >> 0x2dU))))));
    bufp->fullBit(oldp+202,((1U & ((IData)((0x7ffffULL 
                                            & (vlSelf->div__DOT__dividend 
                                               >> 0x2cU))) 
                                   & (IData)((vlSelf->div__DOT__add_B 
                                              >> 0x2dU))))));
    bufp->fullBit(oldp+203,((1U & (IData)((vlSelf->div__DOT__add_B 
                                           >> 0x2eU)))));
    bufp->fullBit(oldp+204,((1U & ((IData)((0x3ffffULL 
                                            & (vlSelf->div__DOT__dividend 
                                               >> 0x2dU))) 
                                   ^ (IData)((vlSelf->div__DOT__add_B 
                                              >> 0x2eU))))));
    bufp->fullBit(oldp+205,((1U & ((IData)((0x3ffffULL 
                                            & (vlSelf->div__DOT__dividend 
                                               >> 0x2dU))) 
                                   & (IData)((vlSelf->div__DOT__add_B 
                                              >> 0x2eU))))));
    bufp->fullBit(oldp+206,((1U & (IData)((vlSelf->div__DOT__add_B 
                                           >> 0x2fU)))));
    bufp->fullBit(oldp+207,((1U & ((IData)((0x1ffffULL 
                                            & (vlSelf->div__DOT__dividend 
                                               >> 0x2eU))) 
                                   ^ (IData)((vlSelf->div__DOT__add_B 
                                              >> 0x2fU))))));
    bufp->fullBit(oldp+208,((1U & ((IData)((0x1ffffULL 
                                            & (vlSelf->div__DOT__dividend 
                                               >> 0x2eU))) 
                                   & (IData)((vlSelf->div__DOT__add_B 
                                              >> 0x2fU))))));
    bufp->fullCData(oldp+209,(((0xeU & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__44__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                        << 1U)) | (1U 
                                                   & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__40__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                      >> 3U)))),4);
    bufp->fullCData(oldp+210,((0xfU & (IData)((vlSelf->div__DOT__add_B 
                                               >> 0x30U)))),4);
    bufp->fullCData(oldp+211,((((0xeU & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__48__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                         << 1U)) | 
                                (1U & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__44__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                       >> 3U))) ^ (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__48__KET____DOT__cla_part0__DOT__p))),4);
    bufp->fullBit(oldp+212,((1U & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__48__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                   >> 3U))));
    bufp->fullCData(oldp+213,(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__48__KET____DOT__cla_part0__DOT__p),4);
    bufp->fullCData(oldp+214,((((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__48__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                << 1U) | (1U & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__44__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                >> 3U)))),5);
    bufp->fullCData(oldp+215,(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__48__KET____DOT__cla_part0__DOT__g),4);
    bufp->fullCData(oldp+216,(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__48__KET____DOT__cla_part0__DOT____Vcellout__carry0__c),4);
    bufp->fullBit(oldp+217,((1U & (IData)((vlSelf->div__DOT__add_B 
                                           >> 0x30U)))));
    bufp->fullBit(oldp+218,((1U & ((IData)((0xffffULL 
                                            & (vlSelf->div__DOT__dividend 
                                               >> 0x2fU))) 
                                   ^ (IData)((vlSelf->div__DOT__add_B 
                                              >> 0x30U))))));
    bufp->fullBit(oldp+219,((1U & ((IData)((0xffffULL 
                                            & (vlSelf->div__DOT__dividend 
                                               >> 0x2fU))) 
                                   & (IData)((vlSelf->div__DOT__add_B 
                                              >> 0x30U))))));
    bufp->fullBit(oldp+220,((1U & (IData)((vlSelf->div__DOT__add_B 
                                           >> 0x31U)))));
    bufp->fullBit(oldp+221,((1U & ((IData)((0x7fffULL 
                                            & (vlSelf->div__DOT__dividend 
                                               >> 0x30U))) 
                                   ^ (IData)((vlSelf->div__DOT__add_B 
                                              >> 0x31U))))));
    bufp->fullBit(oldp+222,((1U & ((IData)((0x7fffULL 
                                            & (vlSelf->div__DOT__dividend 
                                               >> 0x30U))) 
                                   & (IData)((vlSelf->div__DOT__add_B 
                                              >> 0x31U))))));
    bufp->fullBit(oldp+223,((1U & (IData)((vlSelf->div__DOT__add_B 
                                           >> 0x32U)))));
    bufp->fullBit(oldp+224,((1U & ((IData)((0x3fffULL 
                                            & (vlSelf->div__DOT__dividend 
                                               >> 0x31U))) 
                                   ^ (IData)((vlSelf->div__DOT__add_B 
                                              >> 0x32U))))));
    bufp->fullBit(oldp+225,((1U & ((IData)((0x3fffULL 
                                            & (vlSelf->div__DOT__dividend 
                                               >> 0x31U))) 
                                   & (IData)((vlSelf->div__DOT__add_B 
                                              >> 0x32U))))));
    bufp->fullBit(oldp+226,((1U & (IData)((vlSelf->div__DOT__add_B 
                                           >> 0x33U)))));
    bufp->fullBit(oldp+227,((1U & ((IData)((0x1fffULL 
                                            & (vlSelf->div__DOT__dividend 
                                               >> 0x32U))) 
                                   ^ (IData)((vlSelf->div__DOT__add_B 
                                              >> 0x33U))))));
    bufp->fullBit(oldp+228,((1U & ((IData)((0x1fffULL 
                                            & (vlSelf->div__DOT__dividend 
                                               >> 0x32U))) 
                                   & (IData)((vlSelf->div__DOT__add_B 
                                              >> 0x33U))))));
    bufp->fullCData(oldp+229,(((0xeU & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__48__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                        << 1U)) | (1U 
                                                   & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__44__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                      >> 3U)))),4);
    bufp->fullCData(oldp+230,((0xfU & (IData)((vlSelf->div__DOT__add_B 
                                               >> 4U)))),4);
    bufp->fullCData(oldp+231,((((0xeU & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__4__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                         << 1U)) | 
                                (1U & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__0__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                       >> 3U))) ^ (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__4__KET____DOT__cla_part0__DOT__p))),4);
    bufp->fullBit(oldp+232,((1U & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__4__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                   >> 3U))));
    bufp->fullCData(oldp+233,(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__4__KET____DOT__cla_part0__DOT__p),4);
    bufp->fullCData(oldp+234,((((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__4__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                << 1U) | (1U & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__0__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                >> 3U)))),5);
    bufp->fullCData(oldp+235,(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__4__KET____DOT__cla_part0__DOT__g),4);
    bufp->fullCData(oldp+236,(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__4__KET____DOT__cla_part0__DOT____Vcellout__carry0__c),4);
    bufp->fullBit(oldp+237,((1U & (IData)((vlSelf->div__DOT__add_B 
                                           >> 4U)))));
    bufp->fullBit(oldp+238,((1U & ((IData)((0xfffffffffffffffULL 
                                            & (vlSelf->div__DOT__dividend 
                                               >> 3U))) 
                                   ^ (IData)((vlSelf->div__DOT__add_B 
                                              >> 4U))))));
    bufp->fullBit(oldp+239,((1U & ((IData)((0xfffffffffffffffULL 
                                            & (vlSelf->div__DOT__dividend 
                                               >> 3U))) 
                                   & (IData)((vlSelf->div__DOT__add_B 
                                              >> 4U))))));
    bufp->fullBit(oldp+240,((1U & (IData)((vlSelf->div__DOT__add_B 
                                           >> 5U)))));
    bufp->fullBit(oldp+241,((1U & ((IData)((0x7ffffffffffffffULL 
                                            & (vlSelf->div__DOT__dividend 
                                               >> 4U))) 
                                   ^ (IData)((vlSelf->div__DOT__add_B 
                                              >> 5U))))));
    bufp->fullBit(oldp+242,((1U & ((IData)((0x7ffffffffffffffULL 
                                            & (vlSelf->div__DOT__dividend 
                                               >> 4U))) 
                                   & (IData)((vlSelf->div__DOT__add_B 
                                              >> 5U))))));
    bufp->fullBit(oldp+243,((1U & (IData)((vlSelf->div__DOT__add_B 
                                           >> 6U)))));
    bufp->fullBit(oldp+244,((1U & ((IData)((0x3ffffffffffffffULL 
                                            & (vlSelf->div__DOT__dividend 
                                               >> 5U))) 
                                   ^ (IData)((vlSelf->div__DOT__add_B 
                                              >> 6U))))));
    bufp->fullBit(oldp+245,((1U & ((IData)((0x3ffffffffffffffULL 
                                            & (vlSelf->div__DOT__dividend 
                                               >> 5U))) 
                                   & (IData)((vlSelf->div__DOT__add_B 
                                              >> 6U))))));
    bufp->fullBit(oldp+246,((1U & (IData)((vlSelf->div__DOT__add_B 
                                           >> 7U)))));
    bufp->fullBit(oldp+247,((1U & ((IData)((0x1ffffffffffffffULL 
                                            & (vlSelf->div__DOT__dividend 
                                               >> 6U))) 
                                   ^ (IData)((vlSelf->div__DOT__add_B 
                                              >> 7U))))));
    bufp->fullBit(oldp+248,((1U & ((IData)((0x1ffffffffffffffULL 
                                            & (vlSelf->div__DOT__dividend 
                                               >> 6U))) 
                                   & (IData)((vlSelf->div__DOT__add_B 
                                              >> 7U))))));
    bufp->fullCData(oldp+249,(((0xeU & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__4__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                        << 1U)) | (1U 
                                                   & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__0__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                      >> 3U)))),4);
    bufp->fullCData(oldp+250,((0xfU & (IData)((vlSelf->div__DOT__add_B 
                                               >> 0x34U)))),4);
    bufp->fullCData(oldp+251,((((0xeU & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__52__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                         << 1U)) | 
                                (1U & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__48__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                       >> 3U))) ^ (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__52__KET____DOT__cla_part0__DOT__p))),4);
    bufp->fullBit(oldp+252,((1U & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__52__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                   >> 3U))));
    bufp->fullCData(oldp+253,(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__52__KET____DOT__cla_part0__DOT__p),4);
    bufp->fullCData(oldp+254,((((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__52__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                << 1U) | (1U & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__48__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                >> 3U)))),5);
    bufp->fullCData(oldp+255,(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__52__KET____DOT__cla_part0__DOT__g),4);
    bufp->fullCData(oldp+256,(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__52__KET____DOT__cla_part0__DOT____Vcellout__carry0__c),4);
    bufp->fullBit(oldp+257,((1U & (IData)((vlSelf->div__DOT__add_B 
                                           >> 0x34U)))));
    bufp->fullBit(oldp+258,((1U & ((IData)((0xfffULL 
                                            & (vlSelf->div__DOT__dividend 
                                               >> 0x33U))) 
                                   ^ (IData)((vlSelf->div__DOT__add_B 
                                              >> 0x34U))))));
    bufp->fullBit(oldp+259,((1U & ((IData)((0xfffULL 
                                            & (vlSelf->div__DOT__dividend 
                                               >> 0x33U))) 
                                   & (IData)((vlSelf->div__DOT__add_B 
                                              >> 0x34U))))));
    bufp->fullBit(oldp+260,((1U & (IData)((vlSelf->div__DOT__add_B 
                                           >> 0x35U)))));
    bufp->fullBit(oldp+261,((1U & ((IData)((0x7ffULL 
                                            & (vlSelf->div__DOT__dividend 
                                               >> 0x34U))) 
                                   ^ (IData)((vlSelf->div__DOT__add_B 
                                              >> 0x35U))))));
    bufp->fullBit(oldp+262,((1U & ((IData)((0x7ffULL 
                                            & (vlSelf->div__DOT__dividend 
                                               >> 0x34U))) 
                                   & (IData)((vlSelf->div__DOT__add_B 
                                              >> 0x35U))))));
    bufp->fullBit(oldp+263,((1U & (IData)((vlSelf->div__DOT__add_B 
                                           >> 0x36U)))));
    bufp->fullBit(oldp+264,((1U & ((IData)((0x3ffULL 
                                            & (vlSelf->div__DOT__dividend 
                                               >> 0x35U))) 
                                   ^ (IData)((vlSelf->div__DOT__add_B 
                                              >> 0x36U))))));
    bufp->fullBit(oldp+265,((1U & ((IData)((0x3ffULL 
                                            & (vlSelf->div__DOT__dividend 
                                               >> 0x35U))) 
                                   & (IData)((vlSelf->div__DOT__add_B 
                                              >> 0x36U))))));
    bufp->fullBit(oldp+266,((1U & (IData)((vlSelf->div__DOT__add_B 
                                           >> 0x37U)))));
    bufp->fullBit(oldp+267,((1U & ((IData)((0x1ffULL 
                                            & (vlSelf->div__DOT__dividend 
                                               >> 0x36U))) 
                                   ^ (IData)((vlSelf->div__DOT__add_B 
                                              >> 0x37U))))));
    bufp->fullBit(oldp+268,((1U & ((IData)((0x1ffULL 
                                            & (vlSelf->div__DOT__dividend 
                                               >> 0x36U))) 
                                   & (IData)((vlSelf->div__DOT__add_B 
                                              >> 0x37U))))));
    bufp->fullCData(oldp+269,(((0xeU & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__52__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                        << 1U)) | (1U 
                                                   & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__48__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                      >> 3U)))),4);
    bufp->fullCData(oldp+270,((0xfU & (IData)((vlSelf->div__DOT__add_B 
                                               >> 0x38U)))),4);
    bufp->fullCData(oldp+271,((((0xeU & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__56__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                         << 1U)) | 
                                (1U & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__52__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                       >> 3U))) ^ (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__56__KET____DOT__cla_part0__DOT__p))),4);
    bufp->fullBit(oldp+272,((1U & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__56__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                   >> 3U))));
    bufp->fullCData(oldp+273,(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__56__KET____DOT__cla_part0__DOT__p),4);
    bufp->fullCData(oldp+274,((((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__56__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                << 1U) | (1U & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__52__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                >> 3U)))),5);
    bufp->fullCData(oldp+275,(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__56__KET____DOT__cla_part0__DOT__g),4);
    bufp->fullCData(oldp+276,(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__56__KET____DOT__cla_part0__DOT____Vcellout__carry0__c),4);
    bufp->fullBit(oldp+277,((1U & (IData)((vlSelf->div__DOT__add_B 
                                           >> 0x38U)))));
    bufp->fullBit(oldp+278,((1U & ((IData)((0xffULL 
                                            & (vlSelf->div__DOT__dividend 
                                               >> 0x37U))) 
                                   ^ (IData)((vlSelf->div__DOT__add_B 
                                              >> 0x38U))))));
    bufp->fullBit(oldp+279,((1U & ((IData)((0xffULL 
                                            & (vlSelf->div__DOT__dividend 
                                               >> 0x37U))) 
                                   & (IData)((vlSelf->div__DOT__add_B 
                                              >> 0x38U))))));
    bufp->fullBit(oldp+280,((1U & (IData)((vlSelf->div__DOT__add_B 
                                           >> 0x39U)))));
    bufp->fullBit(oldp+281,((1U & ((IData)((0x7fULL 
                                            & (vlSelf->div__DOT__dividend 
                                               >> 0x38U))) 
                                   ^ (IData)((vlSelf->div__DOT__add_B 
                                              >> 0x39U))))));
    bufp->fullBit(oldp+282,((1U & ((IData)((0x7fULL 
                                            & (vlSelf->div__DOT__dividend 
                                               >> 0x38U))) 
                                   & (IData)((vlSelf->div__DOT__add_B 
                                              >> 0x39U))))));
    bufp->fullBit(oldp+283,((1U & (IData)((vlSelf->div__DOT__add_B 
                                           >> 0x3aU)))));
    bufp->fullBit(oldp+284,((1U & ((IData)((0x3fULL 
                                            & (vlSelf->div__DOT__dividend 
                                               >> 0x39U))) 
                                   ^ (IData)((vlSelf->div__DOT__add_B 
                                              >> 0x3aU))))));
    bufp->fullBit(oldp+285,((1U & ((IData)((0x3fULL 
                                            & (vlSelf->div__DOT__dividend 
                                               >> 0x39U))) 
                                   & (IData)((vlSelf->div__DOT__add_B 
                                              >> 0x3aU))))));
    bufp->fullBit(oldp+286,((1U & (IData)((vlSelf->div__DOT__add_B 
                                           >> 0x3bU)))));
    bufp->fullBit(oldp+287,((1U & ((IData)((0x1fULL 
                                            & (vlSelf->div__DOT__dividend 
                                               >> 0x3aU))) 
                                   ^ (IData)((vlSelf->div__DOT__add_B 
                                              >> 0x3bU))))));
    bufp->fullBit(oldp+288,((1U & ((IData)((0x1fULL 
                                            & (vlSelf->div__DOT__dividend 
                                               >> 0x3aU))) 
                                   & (IData)((vlSelf->div__DOT__add_B 
                                              >> 0x3bU))))));
    bufp->fullCData(oldp+289,(((0xeU & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__56__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                        << 1U)) | (1U 
                                                   & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__52__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                      >> 3U)))),4);
    bufp->fullCData(oldp+290,((0xfU & (IData)((vlSelf->div__DOT__add_B 
                                               >> 0x3cU)))),4);
    bufp->fullCData(oldp+291,((((0xeU & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__60__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                         << 1U)) | 
                                (1U & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__56__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                       >> 3U))) ^ (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__60__KET____DOT__cla_part0__DOT__p))),4);
    bufp->fullCData(oldp+292,(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__60__KET____DOT__cla_part0__DOT__p),4);
    bufp->fullCData(oldp+293,((((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__60__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                << 1U) | (1U & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__56__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                >> 3U)))),5);
    bufp->fullCData(oldp+294,(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__60__KET____DOT__cla_part0__DOT__g),4);
    bufp->fullCData(oldp+295,(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__60__KET____DOT__cla_part0__DOT____Vcellout__carry0__c),4);
    bufp->fullBit(oldp+296,((1U & (IData)((vlSelf->div__DOT__add_B 
                                           >> 0x3cU)))));
    bufp->fullBit(oldp+297,((1U & ((IData)((0xfULL 
                                            & (vlSelf->div__DOT__dividend 
                                               >> 0x3bU))) 
                                   ^ (IData)((vlSelf->div__DOT__add_B 
                                              >> 0x3cU))))));
    bufp->fullBit(oldp+298,((1U & ((IData)((0xfULL 
                                            & (vlSelf->div__DOT__dividend 
                                               >> 0x3bU))) 
                                   & (IData)((vlSelf->div__DOT__add_B 
                                              >> 0x3cU))))));
    bufp->fullBit(oldp+299,((1U & (IData)((vlSelf->div__DOT__add_B 
                                           >> 0x3dU)))));
    bufp->fullBit(oldp+300,((1U & ((IData)((7ULL & 
                                            (vlSelf->div__DOT__dividend 
                                             >> 0x3cU))) 
                                   ^ (IData)((vlSelf->div__DOT__add_B 
                                              >> 0x3dU))))));
    bufp->fullBit(oldp+301,((1U & ((IData)((7ULL & 
                                            (vlSelf->div__DOT__dividend 
                                             >> 0x3cU))) 
                                   & (IData)((vlSelf->div__DOT__add_B 
                                              >> 0x3dU))))));
    bufp->fullBit(oldp+302,((1U & (IData)((vlSelf->div__DOT__add_B 
                                           >> 0x3eU)))));
    bufp->fullBit(oldp+303,((1U & ((IData)((3ULL & 
                                            (vlSelf->div__DOT__dividend 
                                             >> 0x3dU))) 
                                   ^ (IData)((vlSelf->div__DOT__add_B 
                                              >> 0x3eU))))));
    bufp->fullBit(oldp+304,((1U & ((IData)((3ULL & 
                                            (vlSelf->div__DOT__dividend 
                                             >> 0x3dU))) 
                                   & (IData)((vlSelf->div__DOT__add_B 
                                              >> 0x3eU))))));
    bufp->fullBit(oldp+305,((1U & (IData)((vlSelf->div__DOT__add_B 
                                           >> 0x3fU)))));
    bufp->fullBit(oldp+306,((1U & ((vlSelf->div__DOT__dividend 
                                    >> 0x3eU) ^ (vlSelf->div__DOT__add_B 
                                                 >> 0x3fU)))));
    bufp->fullBit(oldp+307,((1U & (IData)(((vlSelf->div__DOT__dividend 
                                            >> 0x3eU) 
                                           & (vlSelf->div__DOT__add_B 
                                              >> 0x3fU))))));
    bufp->fullCData(oldp+308,(((0xeU & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__60__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                        << 1U)) | (1U 
                                                   & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__56__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                      >> 3U)))),4);
    bufp->fullCData(oldp+309,((0xfU & (IData)((vlSelf->div__DOT__add_B 
                                               >> 8U)))),4);
    bufp->fullCData(oldp+310,((((0xeU & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__8__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                         << 1U)) | 
                                (1U & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__4__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                       >> 3U))) ^ (IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__8__KET____DOT__cla_part0__DOT__p))),4);
    bufp->fullCData(oldp+311,(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__8__KET____DOT__cla_part0__DOT__p),4);
    bufp->fullCData(oldp+312,((((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__8__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                << 1U) | (1U & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__4__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                >> 3U)))),5);
    bufp->fullCData(oldp+313,(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__8__KET____DOT__cla_part0__DOT__g),4);
    bufp->fullCData(oldp+314,(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__8__KET____DOT__cla_part0__DOT____Vcellout__carry0__c),4);
    bufp->fullBit(oldp+315,((1U & (IData)((vlSelf->div__DOT__add_B 
                                           >> 8U)))));
    bufp->fullBit(oldp+316,((1U & ((IData)((0xffffffffffffffULL 
                                            & (vlSelf->div__DOT__dividend 
                                               >> 7U))) 
                                   ^ (IData)((vlSelf->div__DOT__add_B 
                                              >> 8U))))));
    bufp->fullBit(oldp+317,((1U & ((IData)((0xffffffffffffffULL 
                                            & (vlSelf->div__DOT__dividend 
                                               >> 7U))) 
                                   & (IData)((vlSelf->div__DOT__add_B 
                                              >> 8U))))));
    bufp->fullBit(oldp+318,((1U & (IData)((vlSelf->div__DOT__add_B 
                                           >> 9U)))));
    bufp->fullBit(oldp+319,((1U & ((IData)((0x7fffffffffffffULL 
                                            & (vlSelf->div__DOT__dividend 
                                               >> 8U))) 
                                   ^ (IData)((vlSelf->div__DOT__add_B 
                                              >> 9U))))));
    bufp->fullBit(oldp+320,((1U & ((IData)((0x7fffffffffffffULL 
                                            & (vlSelf->div__DOT__dividend 
                                               >> 8U))) 
                                   & (IData)((vlSelf->div__DOT__add_B 
                                              >> 9U))))));
    bufp->fullBit(oldp+321,((1U & (IData)((vlSelf->div__DOT__add_B 
                                           >> 0xaU)))));
    bufp->fullBit(oldp+322,((1U & ((IData)((0x3fffffffffffffULL 
                                            & (vlSelf->div__DOT__dividend 
                                               >> 9U))) 
                                   ^ (IData)((vlSelf->div__DOT__add_B 
                                              >> 0xaU))))));
    bufp->fullBit(oldp+323,((1U & ((IData)((0x3fffffffffffffULL 
                                            & (vlSelf->div__DOT__dividend 
                                               >> 9U))) 
                                   & (IData)((vlSelf->div__DOT__add_B 
                                              >> 0xaU))))));
    bufp->fullBit(oldp+324,((1U & (IData)((vlSelf->div__DOT__add_B 
                                           >> 0xbU)))));
    bufp->fullBit(oldp+325,((1U & ((IData)((0x1fffffffffffffULL 
                                            & (vlSelf->div__DOT__dividend 
                                               >> 0xaU))) 
                                   ^ (IData)((vlSelf->div__DOT__add_B 
                                              >> 0xbU))))));
    bufp->fullBit(oldp+326,((1U & ((IData)((0x1fffffffffffffULL 
                                            & (vlSelf->div__DOT__dividend 
                                               >> 0xaU))) 
                                   & (IData)((vlSelf->div__DOT__add_B 
                                              >> 0xbU))))));
    bufp->fullCData(oldp+327,(((0xeU & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__8__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                        << 1U)) | (1U 
                                                   & ((IData)(vlSelf->div__DOT__cla0__DOT__genblk1__BRA__4__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                      >> 3U)))),4);
    bufp->fullCData(oldp+328,(vlSelf->div__DOT__current_state),5);
    bufp->fullQData(oldp+329,(vlSelf->div__DOT__x_abs_reg),64);
    bufp->fullQData(oldp+331,(vlSelf->div__DOT__y_abs_reg),64);
    bufp->fullQData(oldp+333,(vlSelf->div__DOT__divisor_n),64);
    bufp->fullQData(oldp+335,(vlSelf->div__DOT__divisor),64);
    bufp->fullQData(oldp+337,(vlSelf->div__DOT__dividend),64);
    bufp->fullBit(oldp+339,(((IData)(vlSelf->div__DOT__lzd1__DOT____Vcellout__lzd_32_0____pinNumber3) 
                             & ((0xfU == (IData)(vlSelf->div__DOT__lzd1__DOT__lzd_32_1__DOT__lzd_16_0__DOT__z)) 
                                & (0xfU == (IData)(vlSelf->div__DOT__lzd1__DOT__lzd_32_1__DOT__lzd_16_1__DOT__z))))));
    bufp->fullBit(oldp+340,(((IData)(vlSelf->div__DOT__lzd0__DOT____Vcellout__lzd_32_0____pinNumber3) 
                             & ((0xfU == (IData)(vlSelf->div__DOT__lzd0__DOT__lzd_32_1__DOT__lzd_16_0__DOT__z)) 
                                & (0xfU == (IData)(vlSelf->div__DOT__lzd0__DOT__lzd_32_1__DOT__lzd_16_1__DOT__z))))));
    bufp->fullCData(oldp+341,(vlSelf->div__DOT__cout),6);
    bufp->fullQData(oldp+342,((((QData)((IData)((((0xeU 
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
    bufp->fullQData(oldp+344,(vlSelf->div__DOT__fix_a),64);
    bufp->fullQData(oldp+346,(vlSelf->div__DOT__fix_b),64);
    bufp->fullQData(oldp+348,(vlSelf->div__DOT__s_abs_reg),64);
    bufp->fullQData(oldp+350,(vlSelf->div__DOT__r_abs_reg),64);
    bufp->fullQData(oldp+352,(((1U & (IData)((vlSelf->div__DOT__dividend 
                                              >> 0x3fU)))
                                ? vlSelf->div__DOT__fix_b
                                : vlSelf->div__DOT__fix_a)),64);
    bufp->fullQData(oldp+354,((vlSelf->div__DOT__dividend 
                               << 1U)),64);
    bufp->fullCData(oldp+356,((0xfU & ((IData)(vlSelf->div__DOT__dividend) 
                                       << 1U))),4);
    bufp->fullBit(oldp+357,((1U & (IData)((0x7fffffffffffffffULL 
                                           & vlSelf->div__DOT__dividend)))));
    bufp->fullBit(oldp+358,((1U & (IData)((0x3fffffffffffffffULL 
                                           & (vlSelf->div__DOT__dividend 
                                              >> 1U))))));
    bufp->fullBit(oldp+359,((1U & (IData)((0x1fffffffffffffffULL 
                                           & (vlSelf->div__DOT__dividend 
                                              >> 2U))))));
    bufp->fullCData(oldp+360,((0xfU & (IData)((0xfffffffffffffULL 
                                               & (vlSelf->div__DOT__dividend 
                                                  >> 0xbU))))),4);
    bufp->fullBit(oldp+361,((1U & (IData)((0xfffffffffffffULL 
                                           & (vlSelf->div__DOT__dividend 
                                              >> 0xbU))))));
    bufp->fullBit(oldp+362,((1U & (IData)((0x7ffffffffffffULL 
                                           & (vlSelf->div__DOT__dividend 
                                              >> 0xcU))))));
    bufp->fullBit(oldp+363,((1U & (IData)((0x3ffffffffffffULL 
                                           & (vlSelf->div__DOT__dividend 
                                              >> 0xdU))))));
    bufp->fullBit(oldp+364,((1U & (IData)((0x1ffffffffffffULL 
                                           & (vlSelf->div__DOT__dividend 
                                              >> 0xeU))))));
    bufp->fullCData(oldp+365,((0xfU & (IData)((0xffffffffffffULL 
                                               & (vlSelf->div__DOT__dividend 
                                                  >> 0xfU))))),4);
    bufp->fullBit(oldp+366,((1U & (IData)((0xffffffffffffULL 
                                           & (vlSelf->div__DOT__dividend 
                                              >> 0xfU))))));
    bufp->fullBit(oldp+367,((1U & (IData)((0x7fffffffffffULL 
                                           & (vlSelf->div__DOT__dividend 
                                              >> 0x10U))))));
    bufp->fullBit(oldp+368,((1U & (IData)((0x3fffffffffffULL 
                                           & (vlSelf->div__DOT__dividend 
                                              >> 0x11U))))));
    bufp->fullBit(oldp+369,((1U & (IData)((0x1fffffffffffULL 
                                           & (vlSelf->div__DOT__dividend 
                                              >> 0x12U))))));
    bufp->fullCData(oldp+370,((0xfU & (IData)((0xfffffffffffULL 
                                               & (vlSelf->div__DOT__dividend 
                                                  >> 0x13U))))),4);
    bufp->fullBit(oldp+371,((1U & (IData)((0xfffffffffffULL 
                                           & (vlSelf->div__DOT__dividend 
                                              >> 0x13U))))));
    bufp->fullBit(oldp+372,((1U & (IData)((0x7ffffffffffULL 
                                           & (vlSelf->div__DOT__dividend 
                                              >> 0x14U))))));
    bufp->fullBit(oldp+373,((1U & (IData)((0x3ffffffffffULL 
                                           & (vlSelf->div__DOT__dividend 
                                              >> 0x15U))))));
    bufp->fullBit(oldp+374,((1U & (IData)((0x1ffffffffffULL 
                                           & (vlSelf->div__DOT__dividend 
                                              >> 0x16U))))));
    bufp->fullCData(oldp+375,((0xfU & (IData)((0xffffffffffULL 
                                               & (vlSelf->div__DOT__dividend 
                                                  >> 0x17U))))),4);
    bufp->fullBit(oldp+376,((1U & (IData)((0xffffffffffULL 
                                           & (vlSelf->div__DOT__dividend 
                                              >> 0x17U))))));
    bufp->fullBit(oldp+377,((1U & (IData)((0x7fffffffffULL 
                                           & (vlSelf->div__DOT__dividend 
                                              >> 0x18U))))));
    bufp->fullBit(oldp+378,((1U & (IData)((0x3fffffffffULL 
                                           & (vlSelf->div__DOT__dividend 
                                              >> 0x19U))))));
    bufp->fullBit(oldp+379,((1U & (IData)((0x1fffffffffULL 
                                           & (vlSelf->div__DOT__dividend 
                                              >> 0x1aU))))));
    bufp->fullCData(oldp+380,((0xfU & (IData)((0xfffffffffULL 
                                               & (vlSelf->div__DOT__dividend 
                                                  >> 0x1bU))))),4);
    bufp->fullBit(oldp+381,((1U & (IData)((0xfffffffffULL 
                                           & (vlSelf->div__DOT__dividend 
                                              >> 0x1bU))))));
    bufp->fullBit(oldp+382,((1U & (IData)((0x7ffffffffULL 
                                           & (vlSelf->div__DOT__dividend 
                                              >> 0x1cU))))));
    bufp->fullBit(oldp+383,((1U & (IData)((0x3ffffffffULL 
                                           & (vlSelf->div__DOT__dividend 
                                              >> 0x1dU))))));
    bufp->fullBit(oldp+384,((1U & (IData)((0x1ffffffffULL 
                                           & (vlSelf->div__DOT__dividend 
                                              >> 0x1eU))))));
    bufp->fullCData(oldp+385,((0xfU & (IData)((0xffffffffULL 
                                               & (vlSelf->div__DOT__dividend 
                                                  >> 0x1fU))))),4);
    bufp->fullBit(oldp+386,((1U & (IData)((0xffffffffULL 
                                           & (vlSelf->div__DOT__dividend 
                                              >> 0x1fU))))));
    bufp->fullBit(oldp+387,((1U & (IData)((0x7fffffffULL 
                                           & (vlSelf->div__DOT__dividend 
                                              >> 0x20U))))));
    bufp->fullBit(oldp+388,((1U & (IData)((0x3fffffffULL 
                                           & (vlSelf->div__DOT__dividend 
                                              >> 0x21U))))));
    bufp->fullBit(oldp+389,((1U & (IData)((0x1fffffffULL 
                                           & (vlSelf->div__DOT__dividend 
                                              >> 0x22U))))));
    bufp->fullCData(oldp+390,((0xfU & (IData)((0xfffffffULL 
                                               & (vlSelf->div__DOT__dividend 
                                                  >> 0x23U))))),4);
    bufp->fullBit(oldp+391,((1U & (IData)((0xfffffffULL 
                                           & (vlSelf->div__DOT__dividend 
                                              >> 0x23U))))));
    bufp->fullBit(oldp+392,((1U & (IData)((0x7ffffffULL 
                                           & (vlSelf->div__DOT__dividend 
                                              >> 0x24U))))));
    bufp->fullBit(oldp+393,((1U & (IData)((0x3ffffffULL 
                                           & (vlSelf->div__DOT__dividend 
                                              >> 0x25U))))));
    bufp->fullBit(oldp+394,((1U & (IData)((0x1ffffffULL 
                                           & (vlSelf->div__DOT__dividend 
                                              >> 0x26U))))));
    bufp->fullCData(oldp+395,((0xfU & (IData)((0xffffffULL 
                                               & (vlSelf->div__DOT__dividend 
                                                  >> 0x27U))))),4);
    bufp->fullBit(oldp+396,((1U & (IData)((0xffffffULL 
                                           & (vlSelf->div__DOT__dividend 
                                              >> 0x27U))))));
    bufp->fullBit(oldp+397,((1U & (IData)((0x7fffffULL 
                                           & (vlSelf->div__DOT__dividend 
                                              >> 0x28U))))));
    bufp->fullBit(oldp+398,((1U & (IData)((0x3fffffULL 
                                           & (vlSelf->div__DOT__dividend 
                                              >> 0x29U))))));
    bufp->fullBit(oldp+399,((1U & (IData)((0x1fffffULL 
                                           & (vlSelf->div__DOT__dividend 
                                              >> 0x2aU))))));
    bufp->fullCData(oldp+400,((0xfU & (IData)((0xfffffULL 
                                               & (vlSelf->div__DOT__dividend 
                                                  >> 0x2bU))))),4);
    bufp->fullBit(oldp+401,((1U & (IData)((0xfffffULL 
                                           & (vlSelf->div__DOT__dividend 
                                              >> 0x2bU))))));
    bufp->fullBit(oldp+402,((1U & (IData)((0x7ffffULL 
                                           & (vlSelf->div__DOT__dividend 
                                              >> 0x2cU))))));
    bufp->fullBit(oldp+403,((1U & (IData)((0x3ffffULL 
                                           & (vlSelf->div__DOT__dividend 
                                              >> 0x2dU))))));
    bufp->fullBit(oldp+404,((1U & (IData)((0x1ffffULL 
                                           & (vlSelf->div__DOT__dividend 
                                              >> 0x2eU))))));
    bufp->fullCData(oldp+405,((0xfU & (IData)((0xffffULL 
                                               & (vlSelf->div__DOT__dividend 
                                                  >> 0x2fU))))),4);
    bufp->fullBit(oldp+406,((1U & (IData)((0xffffULL 
                                           & (vlSelf->div__DOT__dividend 
                                              >> 0x2fU))))));
    bufp->fullBit(oldp+407,((1U & (IData)((0x7fffULL 
                                           & (vlSelf->div__DOT__dividend 
                                              >> 0x30U))))));
    bufp->fullBit(oldp+408,((1U & (IData)((0x3fffULL 
                                           & (vlSelf->div__DOT__dividend 
                                              >> 0x31U))))));
    bufp->fullBit(oldp+409,((1U & (IData)((0x1fffULL 
                                           & (vlSelf->div__DOT__dividend 
                                              >> 0x32U))))));
    bufp->fullCData(oldp+410,((0xfU & (IData)((0xfffffffffffffffULL 
                                               & (vlSelf->div__DOT__dividend 
                                                  >> 3U))))),4);
    bufp->fullBit(oldp+411,((1U & (IData)((0xfffffffffffffffULL 
                                           & (vlSelf->div__DOT__dividend 
                                              >> 3U))))));
    bufp->fullBit(oldp+412,((1U & (IData)((0x7ffffffffffffffULL 
                                           & (vlSelf->div__DOT__dividend 
                                              >> 4U))))));
    bufp->fullBit(oldp+413,((1U & (IData)((0x3ffffffffffffffULL 
                                           & (vlSelf->div__DOT__dividend 
                                              >> 5U))))));
    bufp->fullBit(oldp+414,((1U & (IData)((0x1ffffffffffffffULL 
                                           & (vlSelf->div__DOT__dividend 
                                              >> 6U))))));
    bufp->fullCData(oldp+415,((0xfU & (IData)((0xfffULL 
                                               & (vlSelf->div__DOT__dividend 
                                                  >> 0x33U))))),4);
    bufp->fullBit(oldp+416,((1U & (IData)((0xfffULL 
                                           & (vlSelf->div__DOT__dividend 
                                              >> 0x33U))))));
    bufp->fullBit(oldp+417,((1U & (IData)((0x7ffULL 
                                           & (vlSelf->div__DOT__dividend 
                                              >> 0x34U))))));
    bufp->fullBit(oldp+418,((1U & (IData)((0x3ffULL 
                                           & (vlSelf->div__DOT__dividend 
                                              >> 0x35U))))));
    bufp->fullBit(oldp+419,((1U & (IData)((0x1ffULL 
                                           & (vlSelf->div__DOT__dividend 
                                              >> 0x36U))))));
    bufp->fullCData(oldp+420,((0xfU & (IData)((0xffULL 
                                               & (vlSelf->div__DOT__dividend 
                                                  >> 0x37U))))),4);
    bufp->fullBit(oldp+421,((1U & (IData)((0xffULL 
                                           & (vlSelf->div__DOT__dividend 
                                              >> 0x37U))))));
    bufp->fullBit(oldp+422,((1U & (IData)((0x7fULL 
                                           & (vlSelf->div__DOT__dividend 
                                              >> 0x38U))))));
    bufp->fullBit(oldp+423,((1U & (IData)((0x3fULL 
                                           & (vlSelf->div__DOT__dividend 
                                              >> 0x39U))))));
    bufp->fullBit(oldp+424,((1U & (IData)((0x1fULL 
                                           & (vlSelf->div__DOT__dividend 
                                              >> 0x3aU))))));
    bufp->fullCData(oldp+425,((0xfU & (IData)((0xfULL 
                                               & (vlSelf->div__DOT__dividend 
                                                  >> 0x3bU))))),4);
    bufp->fullBit(oldp+426,((1U & (IData)((0xfULL & 
                                           (vlSelf->div__DOT__dividend 
                                            >> 0x3bU))))));
    bufp->fullBit(oldp+427,((1U & (IData)((7ULL & (vlSelf->div__DOT__dividend 
                                                   >> 0x3cU))))));
    bufp->fullBit(oldp+428,((1U & (IData)((3ULL & (vlSelf->div__DOT__dividend 
                                                   >> 0x3dU))))));
    bufp->fullBit(oldp+429,((1U & (IData)((1ULL & (vlSelf->div__DOT__dividend 
                                                   >> 0x3eU))))));
    bufp->fullCData(oldp+430,((0xfU & (IData)((0xffffffffffffffULL 
                                               & (vlSelf->div__DOT__dividend 
                                                  >> 7U))))),4);
    bufp->fullBit(oldp+431,((1U & (IData)((0xffffffffffffffULL 
                                           & (vlSelf->div__DOT__dividend 
                                              >> 7U))))));
    bufp->fullBit(oldp+432,((1U & (IData)((0x7fffffffffffffULL 
                                           & (vlSelf->div__DOT__dividend 
                                              >> 8U))))));
    bufp->fullBit(oldp+433,((1U & (IData)((0x3fffffffffffffULL 
                                           & (vlSelf->div__DOT__dividend 
                                              >> 9U))))));
    bufp->fullBit(oldp+434,((1U & (IData)((0x1fffffffffffffULL 
                                           & (vlSelf->div__DOT__dividend 
                                              >> 0xaU))))));
    bufp->fullBit(oldp+435,((1U & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__60__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                   >> 3U))));
    bufp->fullIData(oldp+436,(((0x10000U & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__60__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                            << 0xdU)) 
                               | ((0x8000U & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__56__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                              << 0xcU)) 
                                  | ((0x4000U & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__52__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                 << 0xbU)) 
                                     | ((0x2000U & 
                                         ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__48__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
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
    bufp->fullCData(oldp+437,((0xfU & (IData)(vlSelf->div__DOT__dividend))),4);
    bufp->fullCData(oldp+438,((0xfU & (IData)(vlSelf->div__DOT__divisor))),4);
    bufp->fullCData(oldp+439,((0xfU & (((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__0__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                        << 1U) ^ (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__0__KET____DOT__cla_part0__DOT__p)))),4);
    bufp->fullBit(oldp+440,((1U & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__0__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                   >> 3U))));
    bufp->fullCData(oldp+441,(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__0__KET____DOT__cla_part0__DOT__p),4);
    bufp->fullCData(oldp+442,(((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__0__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                               << 1U)),5);
    bufp->fullCData(oldp+443,(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__0__KET____DOT__cla_part0__DOT__g),4);
    bufp->fullCData(oldp+444,(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__0__KET____DOT__cla_part0__DOT____Vcellout__carry0__c),4);
    bufp->fullBit(oldp+445,((1U & (IData)(vlSelf->div__DOT__dividend))));
    bufp->fullBit(oldp+446,((1U & (IData)(vlSelf->div__DOT__divisor))));
    bufp->fullBit(oldp+447,((1U & ((IData)(vlSelf->div__DOT__dividend) 
                                   ^ (IData)(vlSelf->div__DOT__divisor)))));
    bufp->fullBit(oldp+448,((1U & ((IData)(vlSelf->div__DOT__dividend) 
                                   & (IData)(vlSelf->div__DOT__divisor)))));
    bufp->fullBit(oldp+449,((1U & (IData)((vlSelf->div__DOT__dividend 
                                           >> 1U)))));
    bufp->fullBit(oldp+450,((1U & (IData)((vlSelf->div__DOT__divisor 
                                           >> 1U)))));
    bufp->fullBit(oldp+451,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                            >> 1U)) 
                                   ^ (IData)((vlSelf->div__DOT__divisor 
                                              >> 1U))))));
    bufp->fullBit(oldp+452,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                            >> 1U)) 
                                   & (IData)((vlSelf->div__DOT__divisor 
                                              >> 1U))))));
    bufp->fullBit(oldp+453,((1U & (IData)((vlSelf->div__DOT__dividend 
                                           >> 2U)))));
    bufp->fullBit(oldp+454,((1U & (IData)((vlSelf->div__DOT__divisor 
                                           >> 2U)))));
    bufp->fullBit(oldp+455,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                            >> 2U)) 
                                   ^ (IData)((vlSelf->div__DOT__divisor 
                                              >> 2U))))));
    bufp->fullBit(oldp+456,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                            >> 2U)) 
                                   & (IData)((vlSelf->div__DOT__divisor 
                                              >> 2U))))));
    bufp->fullBit(oldp+457,((1U & (IData)((vlSelf->div__DOT__dividend 
                                           >> 3U)))));
    bufp->fullBit(oldp+458,((1U & (IData)((vlSelf->div__DOT__divisor 
                                           >> 3U)))));
    bufp->fullBit(oldp+459,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                            >> 3U)) 
                                   ^ (IData)((vlSelf->div__DOT__divisor 
                                              >> 3U))))));
    bufp->fullBit(oldp+460,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                            >> 3U)) 
                                   & (IData)((vlSelf->div__DOT__divisor 
                                              >> 3U))))));
    bufp->fullCData(oldp+461,((0xfU & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__0__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                       << 1U))),4);
    bufp->fullCData(oldp+462,((0xfU & (IData)((vlSelf->div__DOT__dividend 
                                               >> 0xcU)))),4);
    bufp->fullCData(oldp+463,((0xfU & (IData)((vlSelf->div__DOT__divisor 
                                               >> 0xcU)))),4);
    bufp->fullBit(oldp+464,((1U & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__8__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                   >> 3U))));
    bufp->fullCData(oldp+465,((((0xeU & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__12__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                         << 1U)) | 
                                (1U & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__8__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                       >> 3U))) ^ (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__12__KET____DOT__cla_part0__DOT__p))),4);
    bufp->fullBit(oldp+466,((1U & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__12__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                   >> 3U))));
    bufp->fullCData(oldp+467,(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__12__KET____DOT__cla_part0__DOT__p),4);
    bufp->fullCData(oldp+468,((((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__12__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                << 1U) | (1U & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__8__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                >> 3U)))),5);
    bufp->fullCData(oldp+469,(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__12__KET____DOT__cla_part0__DOT__g),4);
    bufp->fullCData(oldp+470,(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__12__KET____DOT__cla_part0__DOT____Vcellout__carry0__c),4);
    bufp->fullBit(oldp+471,((1U & (IData)((vlSelf->div__DOT__dividend 
                                           >> 0xcU)))));
    bufp->fullBit(oldp+472,((1U & (IData)((vlSelf->div__DOT__divisor 
                                           >> 0xcU)))));
    bufp->fullBit(oldp+473,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                            >> 0xcU)) 
                                   ^ (IData)((vlSelf->div__DOT__divisor 
                                              >> 0xcU))))));
    bufp->fullBit(oldp+474,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                            >> 0xcU)) 
                                   & (IData)((vlSelf->div__DOT__divisor 
                                              >> 0xcU))))));
    bufp->fullBit(oldp+475,((1U & (IData)((vlSelf->div__DOT__dividend 
                                           >> 0xdU)))));
    bufp->fullBit(oldp+476,((1U & (IData)((vlSelf->div__DOT__divisor 
                                           >> 0xdU)))));
    bufp->fullBit(oldp+477,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                            >> 0xdU)) 
                                   ^ (IData)((vlSelf->div__DOT__divisor 
                                              >> 0xdU))))));
    bufp->fullBit(oldp+478,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                            >> 0xdU)) 
                                   & (IData)((vlSelf->div__DOT__divisor 
                                              >> 0xdU))))));
    bufp->fullBit(oldp+479,((1U & (IData)((vlSelf->div__DOT__dividend 
                                           >> 0xeU)))));
    bufp->fullBit(oldp+480,((1U & (IData)((vlSelf->div__DOT__divisor 
                                           >> 0xeU)))));
    bufp->fullBit(oldp+481,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                            >> 0xeU)) 
                                   ^ (IData)((vlSelf->div__DOT__divisor 
                                              >> 0xeU))))));
    bufp->fullBit(oldp+482,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                            >> 0xeU)) 
                                   & (IData)((vlSelf->div__DOT__divisor 
                                              >> 0xeU))))));
    bufp->fullBit(oldp+483,((1U & (IData)((vlSelf->div__DOT__dividend 
                                           >> 0xfU)))));
    bufp->fullBit(oldp+484,((1U & (IData)((vlSelf->div__DOT__divisor 
                                           >> 0xfU)))));
    bufp->fullBit(oldp+485,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                            >> 0xfU)) 
                                   ^ (IData)((vlSelf->div__DOT__divisor 
                                              >> 0xfU))))));
    bufp->fullBit(oldp+486,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                            >> 0xfU)) 
                                   & (IData)((vlSelf->div__DOT__divisor 
                                              >> 0xfU))))));
    bufp->fullCData(oldp+487,(((0xeU & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__12__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                        << 1U)) | (1U 
                                                   & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__8__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                      >> 3U)))),4);
    bufp->fullCData(oldp+488,((0xfU & (IData)((vlSelf->div__DOT__dividend 
                                               >> 0x10U)))),4);
    bufp->fullCData(oldp+489,((0xfU & (IData)((vlSelf->div__DOT__divisor 
                                               >> 0x10U)))),4);
    bufp->fullCData(oldp+490,((((0xeU & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__16__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                         << 1U)) | 
                                (1U & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__12__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                       >> 3U))) ^ (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__16__KET____DOT__cla_part0__DOT__p))),4);
    bufp->fullBit(oldp+491,((1U & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__16__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                   >> 3U))));
    bufp->fullCData(oldp+492,(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__16__KET____DOT__cla_part0__DOT__p),4);
    bufp->fullCData(oldp+493,((((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__16__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                << 1U) | (1U & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__12__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                >> 3U)))),5);
    bufp->fullCData(oldp+494,(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__16__KET____DOT__cla_part0__DOT__g),4);
    bufp->fullCData(oldp+495,(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__16__KET____DOT__cla_part0__DOT____Vcellout__carry0__c),4);
    bufp->fullBit(oldp+496,((1U & (IData)((vlSelf->div__DOT__dividend 
                                           >> 0x10U)))));
    bufp->fullBit(oldp+497,((1U & (IData)((vlSelf->div__DOT__divisor 
                                           >> 0x10U)))));
    bufp->fullBit(oldp+498,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                            >> 0x10U)) 
                                   ^ (IData)((vlSelf->div__DOT__divisor 
                                              >> 0x10U))))));
    bufp->fullBit(oldp+499,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                            >> 0x10U)) 
                                   & (IData)((vlSelf->div__DOT__divisor 
                                              >> 0x10U))))));
    bufp->fullBit(oldp+500,((1U & (IData)((vlSelf->div__DOT__dividend 
                                           >> 0x11U)))));
    bufp->fullBit(oldp+501,((1U & (IData)((vlSelf->div__DOT__divisor 
                                           >> 0x11U)))));
    bufp->fullBit(oldp+502,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                            >> 0x11U)) 
                                   ^ (IData)((vlSelf->div__DOT__divisor 
                                              >> 0x11U))))));
    bufp->fullBit(oldp+503,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                            >> 0x11U)) 
                                   & (IData)((vlSelf->div__DOT__divisor 
                                              >> 0x11U))))));
    bufp->fullBit(oldp+504,((1U & (IData)((vlSelf->div__DOT__dividend 
                                           >> 0x12U)))));
    bufp->fullBit(oldp+505,((1U & (IData)((vlSelf->div__DOT__divisor 
                                           >> 0x12U)))));
    bufp->fullBit(oldp+506,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                            >> 0x12U)) 
                                   ^ (IData)((vlSelf->div__DOT__divisor 
                                              >> 0x12U))))));
    bufp->fullBit(oldp+507,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                            >> 0x12U)) 
                                   & (IData)((vlSelf->div__DOT__divisor 
                                              >> 0x12U))))));
    bufp->fullBit(oldp+508,((1U & (IData)((vlSelf->div__DOT__dividend 
                                           >> 0x13U)))));
    bufp->fullBit(oldp+509,((1U & (IData)((vlSelf->div__DOT__divisor 
                                           >> 0x13U)))));
    bufp->fullBit(oldp+510,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                            >> 0x13U)) 
                                   ^ (IData)((vlSelf->div__DOT__divisor 
                                              >> 0x13U))))));
    bufp->fullBit(oldp+511,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                            >> 0x13U)) 
                                   & (IData)((vlSelf->div__DOT__divisor 
                                              >> 0x13U))))));
    bufp->fullCData(oldp+512,(((0xeU & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__16__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                        << 1U)) | (1U 
                                                   & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__12__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                      >> 3U)))),4);
    bufp->fullCData(oldp+513,((0xfU & (IData)((vlSelf->div__DOT__dividend 
                                               >> 0x14U)))),4);
    bufp->fullCData(oldp+514,((0xfU & (IData)((vlSelf->div__DOT__divisor 
                                               >> 0x14U)))),4);
    bufp->fullCData(oldp+515,((((0xeU & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__20__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                         << 1U)) | 
                                (1U & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__16__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                       >> 3U))) ^ (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__20__KET____DOT__cla_part0__DOT__p))),4);
    bufp->fullBit(oldp+516,((1U & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__20__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                   >> 3U))));
    bufp->fullCData(oldp+517,(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__20__KET____DOT__cla_part0__DOT__p),4);
    bufp->fullCData(oldp+518,((((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__20__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                << 1U) | (1U & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__16__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                >> 3U)))),5);
    bufp->fullCData(oldp+519,(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__20__KET____DOT__cla_part0__DOT__g),4);
    bufp->fullCData(oldp+520,(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__20__KET____DOT__cla_part0__DOT____Vcellout__carry0__c),4);
    bufp->fullBit(oldp+521,((1U & (IData)((vlSelf->div__DOT__dividend 
                                           >> 0x14U)))));
    bufp->fullBit(oldp+522,((1U & (IData)((vlSelf->div__DOT__divisor 
                                           >> 0x14U)))));
    bufp->fullBit(oldp+523,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                            >> 0x14U)) 
                                   ^ (IData)((vlSelf->div__DOT__divisor 
                                              >> 0x14U))))));
    bufp->fullBit(oldp+524,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                            >> 0x14U)) 
                                   & (IData)((vlSelf->div__DOT__divisor 
                                              >> 0x14U))))));
    bufp->fullBit(oldp+525,((1U & (IData)((vlSelf->div__DOT__dividend 
                                           >> 0x15U)))));
    bufp->fullBit(oldp+526,((1U & (IData)((vlSelf->div__DOT__divisor 
                                           >> 0x15U)))));
    bufp->fullBit(oldp+527,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                            >> 0x15U)) 
                                   ^ (IData)((vlSelf->div__DOT__divisor 
                                              >> 0x15U))))));
    bufp->fullBit(oldp+528,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                            >> 0x15U)) 
                                   & (IData)((vlSelf->div__DOT__divisor 
                                              >> 0x15U))))));
    bufp->fullBit(oldp+529,((1U & (IData)((vlSelf->div__DOT__dividend 
                                           >> 0x16U)))));
    bufp->fullBit(oldp+530,((1U & (IData)((vlSelf->div__DOT__divisor 
                                           >> 0x16U)))));
    bufp->fullBit(oldp+531,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                            >> 0x16U)) 
                                   ^ (IData)((vlSelf->div__DOT__divisor 
                                              >> 0x16U))))));
    bufp->fullBit(oldp+532,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                            >> 0x16U)) 
                                   & (IData)((vlSelf->div__DOT__divisor 
                                              >> 0x16U))))));
    bufp->fullBit(oldp+533,((1U & (IData)((vlSelf->div__DOT__dividend 
                                           >> 0x17U)))));
    bufp->fullBit(oldp+534,((1U & (IData)((vlSelf->div__DOT__divisor 
                                           >> 0x17U)))));
    bufp->fullBit(oldp+535,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                            >> 0x17U)) 
                                   ^ (IData)((vlSelf->div__DOT__divisor 
                                              >> 0x17U))))));
    bufp->fullBit(oldp+536,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                            >> 0x17U)) 
                                   & (IData)((vlSelf->div__DOT__divisor 
                                              >> 0x17U))))));
    bufp->fullCData(oldp+537,(((0xeU & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__20__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                        << 1U)) | (1U 
                                                   & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__16__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                      >> 3U)))),4);
    bufp->fullCData(oldp+538,((0xfU & (IData)((vlSelf->div__DOT__dividend 
                                               >> 0x18U)))),4);
    bufp->fullCData(oldp+539,((0xfU & (IData)((vlSelf->div__DOT__divisor 
                                               >> 0x18U)))),4);
    bufp->fullCData(oldp+540,((((0xeU & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__24__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                         << 1U)) | 
                                (1U & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__20__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                       >> 3U))) ^ (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__24__KET____DOT__cla_part0__DOT__p))),4);
    bufp->fullBit(oldp+541,((1U & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__24__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                   >> 3U))));
    bufp->fullCData(oldp+542,(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__24__KET____DOT__cla_part0__DOT__p),4);
    bufp->fullCData(oldp+543,((((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__24__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                << 1U) | (1U & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__20__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                >> 3U)))),5);
    bufp->fullCData(oldp+544,(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__24__KET____DOT__cla_part0__DOT__g),4);
    bufp->fullCData(oldp+545,(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__24__KET____DOT__cla_part0__DOT____Vcellout__carry0__c),4);
    bufp->fullBit(oldp+546,((1U & (IData)((vlSelf->div__DOT__dividend 
                                           >> 0x18U)))));
    bufp->fullBit(oldp+547,((1U & (IData)((vlSelf->div__DOT__divisor 
                                           >> 0x18U)))));
    bufp->fullBit(oldp+548,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                            >> 0x18U)) 
                                   ^ (IData)((vlSelf->div__DOT__divisor 
                                              >> 0x18U))))));
    bufp->fullBit(oldp+549,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                            >> 0x18U)) 
                                   & (IData)((vlSelf->div__DOT__divisor 
                                              >> 0x18U))))));
    bufp->fullBit(oldp+550,((1U & (IData)((vlSelf->div__DOT__dividend 
                                           >> 0x19U)))));
    bufp->fullBit(oldp+551,((1U & (IData)((vlSelf->div__DOT__divisor 
                                           >> 0x19U)))));
    bufp->fullBit(oldp+552,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                            >> 0x19U)) 
                                   ^ (IData)((vlSelf->div__DOT__divisor 
                                              >> 0x19U))))));
    bufp->fullBit(oldp+553,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                            >> 0x19U)) 
                                   & (IData)((vlSelf->div__DOT__divisor 
                                              >> 0x19U))))));
    bufp->fullBit(oldp+554,((1U & (IData)((vlSelf->div__DOT__dividend 
                                           >> 0x1aU)))));
    bufp->fullBit(oldp+555,((1U & (IData)((vlSelf->div__DOT__divisor 
                                           >> 0x1aU)))));
    bufp->fullBit(oldp+556,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                            >> 0x1aU)) 
                                   ^ (IData)((vlSelf->div__DOT__divisor 
                                              >> 0x1aU))))));
    bufp->fullBit(oldp+557,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                            >> 0x1aU)) 
                                   & (IData)((vlSelf->div__DOT__divisor 
                                              >> 0x1aU))))));
    bufp->fullBit(oldp+558,((1U & (IData)((vlSelf->div__DOT__dividend 
                                           >> 0x1bU)))));
    bufp->fullBit(oldp+559,((1U & (IData)((vlSelf->div__DOT__divisor 
                                           >> 0x1bU)))));
    bufp->fullBit(oldp+560,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                            >> 0x1bU)) 
                                   ^ (IData)((vlSelf->div__DOT__divisor 
                                              >> 0x1bU))))));
    bufp->fullBit(oldp+561,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                            >> 0x1bU)) 
                                   & (IData)((vlSelf->div__DOT__divisor 
                                              >> 0x1bU))))));
    bufp->fullCData(oldp+562,(((0xeU & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__24__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                        << 1U)) | (1U 
                                                   & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__20__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                      >> 3U)))),4);
    bufp->fullCData(oldp+563,((0xfU & (IData)((vlSelf->div__DOT__dividend 
                                               >> 0x1cU)))),4);
    bufp->fullCData(oldp+564,((0xfU & (IData)((vlSelf->div__DOT__divisor 
                                               >> 0x1cU)))),4);
    bufp->fullCData(oldp+565,((((0xeU & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__28__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                         << 1U)) | 
                                (1U & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__24__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                       >> 3U))) ^ (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__28__KET____DOT__cla_part0__DOT__p))),4);
    bufp->fullBit(oldp+566,((1U & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__28__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                   >> 3U))));
    bufp->fullCData(oldp+567,(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__28__KET____DOT__cla_part0__DOT__p),4);
    bufp->fullCData(oldp+568,((((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__28__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                << 1U) | (1U & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__24__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                >> 3U)))),5);
    bufp->fullCData(oldp+569,(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__28__KET____DOT__cla_part0__DOT__g),4);
    bufp->fullCData(oldp+570,(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__28__KET____DOT__cla_part0__DOT____Vcellout__carry0__c),4);
    bufp->fullBit(oldp+571,((1U & (IData)((vlSelf->div__DOT__dividend 
                                           >> 0x1cU)))));
    bufp->fullBit(oldp+572,((1U & (IData)((vlSelf->div__DOT__divisor 
                                           >> 0x1cU)))));
    bufp->fullBit(oldp+573,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                            >> 0x1cU)) 
                                   ^ (IData)((vlSelf->div__DOT__divisor 
                                              >> 0x1cU))))));
    bufp->fullBit(oldp+574,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                            >> 0x1cU)) 
                                   & (IData)((vlSelf->div__DOT__divisor 
                                              >> 0x1cU))))));
    bufp->fullBit(oldp+575,((1U & (IData)((vlSelf->div__DOT__dividend 
                                           >> 0x1dU)))));
    bufp->fullBit(oldp+576,((1U & (IData)((vlSelf->div__DOT__divisor 
                                           >> 0x1dU)))));
    bufp->fullBit(oldp+577,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                            >> 0x1dU)) 
                                   ^ (IData)((vlSelf->div__DOT__divisor 
                                              >> 0x1dU))))));
    bufp->fullBit(oldp+578,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                            >> 0x1dU)) 
                                   & (IData)((vlSelf->div__DOT__divisor 
                                              >> 0x1dU))))));
    bufp->fullBit(oldp+579,((1U & (IData)((vlSelf->div__DOT__dividend 
                                           >> 0x1eU)))));
    bufp->fullBit(oldp+580,((1U & (IData)((vlSelf->div__DOT__divisor 
                                           >> 0x1eU)))));
    bufp->fullBit(oldp+581,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                            >> 0x1eU)) 
                                   ^ (IData)((vlSelf->div__DOT__divisor 
                                              >> 0x1eU))))));
    bufp->fullBit(oldp+582,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                            >> 0x1eU)) 
                                   & (IData)((vlSelf->div__DOT__divisor 
                                              >> 0x1eU))))));
    bufp->fullBit(oldp+583,((1U & (IData)((vlSelf->div__DOT__dividend 
                                           >> 0x1fU)))));
    bufp->fullBit(oldp+584,((1U & (IData)((vlSelf->div__DOT__divisor 
                                           >> 0x1fU)))));
    bufp->fullBit(oldp+585,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                            >> 0x1fU)) 
                                   ^ (IData)((vlSelf->div__DOT__divisor 
                                              >> 0x1fU))))));
    bufp->fullBit(oldp+586,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                            >> 0x1fU)) 
                                   & (IData)((vlSelf->div__DOT__divisor 
                                              >> 0x1fU))))));
    bufp->fullCData(oldp+587,(((0xeU & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__28__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                        << 1U)) | (1U 
                                                   & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__24__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                      >> 3U)))),4);
    bufp->fullCData(oldp+588,((0xfU & (IData)((vlSelf->div__DOT__dividend 
                                               >> 0x20U)))),4);
    bufp->fullCData(oldp+589,((0xfU & (IData)((vlSelf->div__DOT__divisor 
                                               >> 0x20U)))),4);
    bufp->fullCData(oldp+590,((((0xeU & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__32__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                         << 1U)) | 
                                (1U & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__28__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                       >> 3U))) ^ (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__32__KET____DOT__cla_part0__DOT__p))),4);
    bufp->fullBit(oldp+591,((1U & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__32__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                   >> 3U))));
    bufp->fullCData(oldp+592,(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__32__KET____DOT__cla_part0__DOT__p),4);
    bufp->fullCData(oldp+593,((((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__32__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                << 1U) | (1U & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__28__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                >> 3U)))),5);
    bufp->fullCData(oldp+594,(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__32__KET____DOT__cla_part0__DOT__g),4);
    bufp->fullCData(oldp+595,(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__32__KET____DOT__cla_part0__DOT____Vcellout__carry0__c),4);
    bufp->fullBit(oldp+596,((1U & (IData)((vlSelf->div__DOT__dividend 
                                           >> 0x20U)))));
    bufp->fullBit(oldp+597,((1U & (IData)((vlSelf->div__DOT__divisor 
                                           >> 0x20U)))));
    bufp->fullBit(oldp+598,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                            >> 0x20U)) 
                                   ^ (IData)((vlSelf->div__DOT__divisor 
                                              >> 0x20U))))));
    bufp->fullBit(oldp+599,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                            >> 0x20U)) 
                                   & (IData)((vlSelf->div__DOT__divisor 
                                              >> 0x20U))))));
    bufp->fullBit(oldp+600,((1U & (IData)((vlSelf->div__DOT__dividend 
                                           >> 0x21U)))));
    bufp->fullBit(oldp+601,((1U & (IData)((vlSelf->div__DOT__divisor 
                                           >> 0x21U)))));
    bufp->fullBit(oldp+602,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                            >> 0x21U)) 
                                   ^ (IData)((vlSelf->div__DOT__divisor 
                                              >> 0x21U))))));
    bufp->fullBit(oldp+603,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                            >> 0x21U)) 
                                   & (IData)((vlSelf->div__DOT__divisor 
                                              >> 0x21U))))));
    bufp->fullBit(oldp+604,((1U & (IData)((vlSelf->div__DOT__dividend 
                                           >> 0x22U)))));
    bufp->fullBit(oldp+605,((1U & (IData)((vlSelf->div__DOT__divisor 
                                           >> 0x22U)))));
    bufp->fullBit(oldp+606,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                            >> 0x22U)) 
                                   ^ (IData)((vlSelf->div__DOT__divisor 
                                              >> 0x22U))))));
    bufp->fullBit(oldp+607,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                            >> 0x22U)) 
                                   & (IData)((vlSelf->div__DOT__divisor 
                                              >> 0x22U))))));
    bufp->fullBit(oldp+608,((1U & (IData)((vlSelf->div__DOT__dividend 
                                           >> 0x23U)))));
    bufp->fullBit(oldp+609,((1U & (IData)((vlSelf->div__DOT__divisor 
                                           >> 0x23U)))));
    bufp->fullBit(oldp+610,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                            >> 0x23U)) 
                                   ^ (IData)((vlSelf->div__DOT__divisor 
                                              >> 0x23U))))));
    bufp->fullBit(oldp+611,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                            >> 0x23U)) 
                                   & (IData)((vlSelf->div__DOT__divisor 
                                              >> 0x23U))))));
    bufp->fullCData(oldp+612,(((0xeU & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__32__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                        << 1U)) | (1U 
                                                   & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__28__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                      >> 3U)))),4);
    bufp->fullCData(oldp+613,((0xfU & (IData)((vlSelf->div__DOT__dividend 
                                               >> 0x24U)))),4);
    bufp->fullCData(oldp+614,((0xfU & (IData)((vlSelf->div__DOT__divisor 
                                               >> 0x24U)))),4);
    bufp->fullCData(oldp+615,((((0xeU & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__36__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                         << 1U)) | 
                                (1U & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__32__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                       >> 3U))) ^ (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__36__KET____DOT__cla_part0__DOT__p))),4);
    bufp->fullBit(oldp+616,((1U & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__36__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                   >> 3U))));
    bufp->fullCData(oldp+617,(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__36__KET____DOT__cla_part0__DOT__p),4);
    bufp->fullCData(oldp+618,((((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__36__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                << 1U) | (1U & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__32__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                >> 3U)))),5);
    bufp->fullCData(oldp+619,(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__36__KET____DOT__cla_part0__DOT__g),4);
    bufp->fullCData(oldp+620,(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__36__KET____DOT__cla_part0__DOT____Vcellout__carry0__c),4);
    bufp->fullBit(oldp+621,((1U & (IData)((vlSelf->div__DOT__dividend 
                                           >> 0x24U)))));
    bufp->fullBit(oldp+622,((1U & (IData)((vlSelf->div__DOT__divisor 
                                           >> 0x24U)))));
    bufp->fullBit(oldp+623,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                            >> 0x24U)) 
                                   ^ (IData)((vlSelf->div__DOT__divisor 
                                              >> 0x24U))))));
    bufp->fullBit(oldp+624,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                            >> 0x24U)) 
                                   & (IData)((vlSelf->div__DOT__divisor 
                                              >> 0x24U))))));
    bufp->fullBit(oldp+625,((1U & (IData)((vlSelf->div__DOT__dividend 
                                           >> 0x25U)))));
    bufp->fullBit(oldp+626,((1U & (IData)((vlSelf->div__DOT__divisor 
                                           >> 0x25U)))));
    bufp->fullBit(oldp+627,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                            >> 0x25U)) 
                                   ^ (IData)((vlSelf->div__DOT__divisor 
                                              >> 0x25U))))));
    bufp->fullBit(oldp+628,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                            >> 0x25U)) 
                                   & (IData)((vlSelf->div__DOT__divisor 
                                              >> 0x25U))))));
    bufp->fullBit(oldp+629,((1U & (IData)((vlSelf->div__DOT__dividend 
                                           >> 0x26U)))));
    bufp->fullBit(oldp+630,((1U & (IData)((vlSelf->div__DOT__divisor 
                                           >> 0x26U)))));
    bufp->fullBit(oldp+631,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                            >> 0x26U)) 
                                   ^ (IData)((vlSelf->div__DOT__divisor 
                                              >> 0x26U))))));
    bufp->fullBit(oldp+632,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                            >> 0x26U)) 
                                   & (IData)((vlSelf->div__DOT__divisor 
                                              >> 0x26U))))));
    bufp->fullBit(oldp+633,((1U & (IData)((vlSelf->div__DOT__dividend 
                                           >> 0x27U)))));
    bufp->fullBit(oldp+634,((1U & (IData)((vlSelf->div__DOT__divisor 
                                           >> 0x27U)))));
    bufp->fullBit(oldp+635,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                            >> 0x27U)) 
                                   ^ (IData)((vlSelf->div__DOT__divisor 
                                              >> 0x27U))))));
    bufp->fullBit(oldp+636,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                            >> 0x27U)) 
                                   & (IData)((vlSelf->div__DOT__divisor 
                                              >> 0x27U))))));
    bufp->fullCData(oldp+637,(((0xeU & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__36__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                        << 1U)) | (1U 
                                                   & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__32__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                      >> 3U)))),4);
    bufp->fullCData(oldp+638,((0xfU & (IData)((vlSelf->div__DOT__dividend 
                                               >> 0x28U)))),4);
    bufp->fullCData(oldp+639,((0xfU & (IData)((vlSelf->div__DOT__divisor 
                                               >> 0x28U)))),4);
    bufp->fullCData(oldp+640,((((0xeU & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__40__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                         << 1U)) | 
                                (1U & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__36__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                       >> 3U))) ^ (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__40__KET____DOT__cla_part0__DOT__p))),4);
    bufp->fullBit(oldp+641,((1U & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__40__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                   >> 3U))));
    bufp->fullCData(oldp+642,(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__40__KET____DOT__cla_part0__DOT__p),4);
    bufp->fullCData(oldp+643,((((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__40__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                << 1U) | (1U & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__36__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                >> 3U)))),5);
    bufp->fullCData(oldp+644,(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__40__KET____DOT__cla_part0__DOT__g),4);
    bufp->fullCData(oldp+645,(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__40__KET____DOT__cla_part0__DOT____Vcellout__carry0__c),4);
    bufp->fullBit(oldp+646,((1U & (IData)((vlSelf->div__DOT__dividend 
                                           >> 0x28U)))));
    bufp->fullBit(oldp+647,((1U & (IData)((vlSelf->div__DOT__divisor 
                                           >> 0x28U)))));
    bufp->fullBit(oldp+648,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                            >> 0x28U)) 
                                   ^ (IData)((vlSelf->div__DOT__divisor 
                                              >> 0x28U))))));
    bufp->fullBit(oldp+649,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                            >> 0x28U)) 
                                   & (IData)((vlSelf->div__DOT__divisor 
                                              >> 0x28U))))));
    bufp->fullBit(oldp+650,((1U & (IData)((vlSelf->div__DOT__dividend 
                                           >> 0x29U)))));
    bufp->fullBit(oldp+651,((1U & (IData)((vlSelf->div__DOT__divisor 
                                           >> 0x29U)))));
    bufp->fullBit(oldp+652,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                            >> 0x29U)) 
                                   ^ (IData)((vlSelf->div__DOT__divisor 
                                              >> 0x29U))))));
    bufp->fullBit(oldp+653,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                            >> 0x29U)) 
                                   & (IData)((vlSelf->div__DOT__divisor 
                                              >> 0x29U))))));
    bufp->fullBit(oldp+654,((1U & (IData)((vlSelf->div__DOT__dividend 
                                           >> 0x2aU)))));
    bufp->fullBit(oldp+655,((1U & (IData)((vlSelf->div__DOT__divisor 
                                           >> 0x2aU)))));
    bufp->fullBit(oldp+656,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                            >> 0x2aU)) 
                                   ^ (IData)((vlSelf->div__DOT__divisor 
                                              >> 0x2aU))))));
    bufp->fullBit(oldp+657,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                            >> 0x2aU)) 
                                   & (IData)((vlSelf->div__DOT__divisor 
                                              >> 0x2aU))))));
    bufp->fullBit(oldp+658,((1U & (IData)((vlSelf->div__DOT__dividend 
                                           >> 0x2bU)))));
    bufp->fullBit(oldp+659,((1U & (IData)((vlSelf->div__DOT__divisor 
                                           >> 0x2bU)))));
    bufp->fullBit(oldp+660,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                            >> 0x2bU)) 
                                   ^ (IData)((vlSelf->div__DOT__divisor 
                                              >> 0x2bU))))));
    bufp->fullBit(oldp+661,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                            >> 0x2bU)) 
                                   & (IData)((vlSelf->div__DOT__divisor 
                                              >> 0x2bU))))));
    bufp->fullCData(oldp+662,(((0xeU & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__40__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                        << 1U)) | (1U 
                                                   & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__36__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                      >> 3U)))),4);
    bufp->fullCData(oldp+663,((0xfU & (IData)((vlSelf->div__DOT__dividend 
                                               >> 0x2cU)))),4);
    bufp->fullCData(oldp+664,((0xfU & (IData)((vlSelf->div__DOT__divisor 
                                               >> 0x2cU)))),4);
    bufp->fullCData(oldp+665,((((0xeU & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__44__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                         << 1U)) | 
                                (1U & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__40__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                       >> 3U))) ^ (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__44__KET____DOT__cla_part0__DOT__p))),4);
    bufp->fullBit(oldp+666,((1U & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__44__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                   >> 3U))));
    bufp->fullCData(oldp+667,(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__44__KET____DOT__cla_part0__DOT__p),4);
    bufp->fullCData(oldp+668,((((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__44__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                << 1U) | (1U & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__40__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                >> 3U)))),5);
    bufp->fullCData(oldp+669,(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__44__KET____DOT__cla_part0__DOT__g),4);
    bufp->fullCData(oldp+670,(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__44__KET____DOT__cla_part0__DOT____Vcellout__carry0__c),4);
    bufp->fullBit(oldp+671,((1U & (IData)((vlSelf->div__DOT__dividend 
                                           >> 0x2cU)))));
    bufp->fullBit(oldp+672,((1U & (IData)((vlSelf->div__DOT__divisor 
                                           >> 0x2cU)))));
    bufp->fullBit(oldp+673,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                            >> 0x2cU)) 
                                   ^ (IData)((vlSelf->div__DOT__divisor 
                                              >> 0x2cU))))));
    bufp->fullBit(oldp+674,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                            >> 0x2cU)) 
                                   & (IData)((vlSelf->div__DOT__divisor 
                                              >> 0x2cU))))));
    bufp->fullBit(oldp+675,((1U & (IData)((vlSelf->div__DOT__dividend 
                                           >> 0x2dU)))));
    bufp->fullBit(oldp+676,((1U & (IData)((vlSelf->div__DOT__divisor 
                                           >> 0x2dU)))));
    bufp->fullBit(oldp+677,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                            >> 0x2dU)) 
                                   ^ (IData)((vlSelf->div__DOT__divisor 
                                              >> 0x2dU))))));
    bufp->fullBit(oldp+678,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                            >> 0x2dU)) 
                                   & (IData)((vlSelf->div__DOT__divisor 
                                              >> 0x2dU))))));
    bufp->fullBit(oldp+679,((1U & (IData)((vlSelf->div__DOT__dividend 
                                           >> 0x2eU)))));
    bufp->fullBit(oldp+680,((1U & (IData)((vlSelf->div__DOT__divisor 
                                           >> 0x2eU)))));
    bufp->fullBit(oldp+681,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                            >> 0x2eU)) 
                                   ^ (IData)((vlSelf->div__DOT__divisor 
                                              >> 0x2eU))))));
    bufp->fullBit(oldp+682,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                            >> 0x2eU)) 
                                   & (IData)((vlSelf->div__DOT__divisor 
                                              >> 0x2eU))))));
    bufp->fullBit(oldp+683,((1U & (IData)((vlSelf->div__DOT__dividend 
                                           >> 0x2fU)))));
    bufp->fullBit(oldp+684,((1U & (IData)((vlSelf->div__DOT__divisor 
                                           >> 0x2fU)))));
    bufp->fullBit(oldp+685,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                            >> 0x2fU)) 
                                   ^ (IData)((vlSelf->div__DOT__divisor 
                                              >> 0x2fU))))));
    bufp->fullBit(oldp+686,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                            >> 0x2fU)) 
                                   & (IData)((vlSelf->div__DOT__divisor 
                                              >> 0x2fU))))));
    bufp->fullCData(oldp+687,(((0xeU & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__44__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                        << 1U)) | (1U 
                                                   & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__40__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                      >> 3U)))),4);
    bufp->fullCData(oldp+688,((0xfU & (IData)((vlSelf->div__DOT__dividend 
                                               >> 0x30U)))),4);
    bufp->fullCData(oldp+689,((0xfU & (IData)((vlSelf->div__DOT__divisor 
                                               >> 0x30U)))),4);
    bufp->fullCData(oldp+690,((((0xeU & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__48__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                         << 1U)) | 
                                (1U & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__44__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                       >> 3U))) ^ (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__48__KET____DOT__cla_part0__DOT__p))),4);
    bufp->fullBit(oldp+691,((1U & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__48__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                   >> 3U))));
    bufp->fullCData(oldp+692,(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__48__KET____DOT__cla_part0__DOT__p),4);
    bufp->fullCData(oldp+693,((((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__48__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                << 1U) | (1U & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__44__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                >> 3U)))),5);
    bufp->fullCData(oldp+694,(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__48__KET____DOT__cla_part0__DOT__g),4);
    bufp->fullCData(oldp+695,(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__48__KET____DOT__cla_part0__DOT____Vcellout__carry0__c),4);
    bufp->fullBit(oldp+696,((1U & (IData)((vlSelf->div__DOT__dividend 
                                           >> 0x30U)))));
    bufp->fullBit(oldp+697,((1U & (IData)((vlSelf->div__DOT__divisor 
                                           >> 0x30U)))));
    bufp->fullBit(oldp+698,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                            >> 0x30U)) 
                                   ^ (IData)((vlSelf->div__DOT__divisor 
                                              >> 0x30U))))));
    bufp->fullBit(oldp+699,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                            >> 0x30U)) 
                                   & (IData)((vlSelf->div__DOT__divisor 
                                              >> 0x30U))))));
    bufp->fullBit(oldp+700,((1U & (IData)((vlSelf->div__DOT__dividend 
                                           >> 0x31U)))));
    bufp->fullBit(oldp+701,((1U & (IData)((vlSelf->div__DOT__divisor 
                                           >> 0x31U)))));
    bufp->fullBit(oldp+702,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                            >> 0x31U)) 
                                   ^ (IData)((vlSelf->div__DOT__divisor 
                                              >> 0x31U))))));
    bufp->fullBit(oldp+703,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                            >> 0x31U)) 
                                   & (IData)((vlSelf->div__DOT__divisor 
                                              >> 0x31U))))));
    bufp->fullBit(oldp+704,((1U & (IData)((vlSelf->div__DOT__dividend 
                                           >> 0x32U)))));
    bufp->fullBit(oldp+705,((1U & (IData)((vlSelf->div__DOT__divisor 
                                           >> 0x32U)))));
    bufp->fullBit(oldp+706,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                            >> 0x32U)) 
                                   ^ (IData)((vlSelf->div__DOT__divisor 
                                              >> 0x32U))))));
    bufp->fullBit(oldp+707,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                            >> 0x32U)) 
                                   & (IData)((vlSelf->div__DOT__divisor 
                                              >> 0x32U))))));
    bufp->fullBit(oldp+708,((1U & (IData)((vlSelf->div__DOT__dividend 
                                           >> 0x33U)))));
    bufp->fullBit(oldp+709,((1U & (IData)((vlSelf->div__DOT__divisor 
                                           >> 0x33U)))));
    bufp->fullBit(oldp+710,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                            >> 0x33U)) 
                                   ^ (IData)((vlSelf->div__DOT__divisor 
                                              >> 0x33U))))));
    bufp->fullBit(oldp+711,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                            >> 0x33U)) 
                                   & (IData)((vlSelf->div__DOT__divisor 
                                              >> 0x33U))))));
    bufp->fullCData(oldp+712,(((0xeU & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__48__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                        << 1U)) | (1U 
                                                   & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__44__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                      >> 3U)))),4);
    bufp->fullCData(oldp+713,((0xfU & (IData)((vlSelf->div__DOT__dividend 
                                               >> 4U)))),4);
    bufp->fullCData(oldp+714,((0xfU & (IData)((vlSelf->div__DOT__divisor 
                                               >> 4U)))),4);
    bufp->fullCData(oldp+715,((((0xeU & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__4__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                         << 1U)) | 
                                (1U & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__0__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                       >> 3U))) ^ (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__4__KET____DOT__cla_part0__DOT__p))),4);
    bufp->fullBit(oldp+716,((1U & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__4__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                   >> 3U))));
    bufp->fullCData(oldp+717,(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__4__KET____DOT__cla_part0__DOT__p),4);
    bufp->fullCData(oldp+718,((((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__4__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                << 1U) | (1U & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__0__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                >> 3U)))),5);
    bufp->fullCData(oldp+719,(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__4__KET____DOT__cla_part0__DOT__g),4);
    bufp->fullCData(oldp+720,(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__4__KET____DOT__cla_part0__DOT____Vcellout__carry0__c),4);
    bufp->fullBit(oldp+721,((1U & (IData)((vlSelf->div__DOT__dividend 
                                           >> 4U)))));
    bufp->fullBit(oldp+722,((1U & (IData)((vlSelf->div__DOT__divisor 
                                           >> 4U)))));
    bufp->fullBit(oldp+723,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                            >> 4U)) 
                                   ^ (IData)((vlSelf->div__DOT__divisor 
                                              >> 4U))))));
    bufp->fullBit(oldp+724,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                            >> 4U)) 
                                   & (IData)((vlSelf->div__DOT__divisor 
                                              >> 4U))))));
    bufp->fullBit(oldp+725,((1U & (IData)((vlSelf->div__DOT__dividend 
                                           >> 5U)))));
    bufp->fullBit(oldp+726,((1U & (IData)((vlSelf->div__DOT__divisor 
                                           >> 5U)))));
    bufp->fullBit(oldp+727,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                            >> 5U)) 
                                   ^ (IData)((vlSelf->div__DOT__divisor 
                                              >> 5U))))));
    bufp->fullBit(oldp+728,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                            >> 5U)) 
                                   & (IData)((vlSelf->div__DOT__divisor 
                                              >> 5U))))));
    bufp->fullBit(oldp+729,((1U & (IData)((vlSelf->div__DOT__dividend 
                                           >> 6U)))));
    bufp->fullBit(oldp+730,((1U & (IData)((vlSelf->div__DOT__divisor 
                                           >> 6U)))));
    bufp->fullBit(oldp+731,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                            >> 6U)) 
                                   ^ (IData)((vlSelf->div__DOT__divisor 
                                              >> 6U))))));
    bufp->fullBit(oldp+732,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                            >> 6U)) 
                                   & (IData)((vlSelf->div__DOT__divisor 
                                              >> 6U))))));
    bufp->fullBit(oldp+733,((1U & (IData)((vlSelf->div__DOT__dividend 
                                           >> 7U)))));
    bufp->fullBit(oldp+734,((1U & (IData)((vlSelf->div__DOT__divisor 
                                           >> 7U)))));
    bufp->fullBit(oldp+735,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                            >> 7U)) 
                                   ^ (IData)((vlSelf->div__DOT__divisor 
                                              >> 7U))))));
    bufp->fullBit(oldp+736,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                            >> 7U)) 
                                   & (IData)((vlSelf->div__DOT__divisor 
                                              >> 7U))))));
    bufp->fullCData(oldp+737,(((0xeU & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__4__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                        << 1U)) | (1U 
                                                   & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__0__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                      >> 3U)))),4);
    bufp->fullCData(oldp+738,((0xfU & (IData)((vlSelf->div__DOT__dividend 
                                               >> 0x34U)))),4);
    bufp->fullCData(oldp+739,((0xfU & (IData)((vlSelf->div__DOT__divisor 
                                               >> 0x34U)))),4);
    bufp->fullCData(oldp+740,((((0xeU & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__52__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                         << 1U)) | 
                                (1U & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__48__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                       >> 3U))) ^ (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__52__KET____DOT__cla_part0__DOT__p))),4);
    bufp->fullBit(oldp+741,((1U & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__52__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                   >> 3U))));
    bufp->fullCData(oldp+742,(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__52__KET____DOT__cla_part0__DOT__p),4);
    bufp->fullCData(oldp+743,((((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__52__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                << 1U) | (1U & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__48__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                >> 3U)))),5);
    bufp->fullCData(oldp+744,(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__52__KET____DOT__cla_part0__DOT__g),4);
    bufp->fullCData(oldp+745,(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__52__KET____DOT__cla_part0__DOT____Vcellout__carry0__c),4);
    bufp->fullBit(oldp+746,((1U & (IData)((vlSelf->div__DOT__dividend 
                                           >> 0x34U)))));
    bufp->fullBit(oldp+747,((1U & (IData)((vlSelf->div__DOT__divisor 
                                           >> 0x34U)))));
    bufp->fullBit(oldp+748,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                            >> 0x34U)) 
                                   ^ (IData)((vlSelf->div__DOT__divisor 
                                              >> 0x34U))))));
    bufp->fullBit(oldp+749,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                            >> 0x34U)) 
                                   & (IData)((vlSelf->div__DOT__divisor 
                                              >> 0x34U))))));
    bufp->fullBit(oldp+750,((1U & (IData)((vlSelf->div__DOT__dividend 
                                           >> 0x35U)))));
    bufp->fullBit(oldp+751,((1U & (IData)((vlSelf->div__DOT__divisor 
                                           >> 0x35U)))));
    bufp->fullBit(oldp+752,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                            >> 0x35U)) 
                                   ^ (IData)((vlSelf->div__DOT__divisor 
                                              >> 0x35U))))));
    bufp->fullBit(oldp+753,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                            >> 0x35U)) 
                                   & (IData)((vlSelf->div__DOT__divisor 
                                              >> 0x35U))))));
    bufp->fullBit(oldp+754,((1U & (IData)((vlSelf->div__DOT__dividend 
                                           >> 0x36U)))));
    bufp->fullBit(oldp+755,((1U & (IData)((vlSelf->div__DOT__divisor 
                                           >> 0x36U)))));
    bufp->fullBit(oldp+756,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                            >> 0x36U)) 
                                   ^ (IData)((vlSelf->div__DOT__divisor 
                                              >> 0x36U))))));
    bufp->fullBit(oldp+757,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                            >> 0x36U)) 
                                   & (IData)((vlSelf->div__DOT__divisor 
                                              >> 0x36U))))));
    bufp->fullBit(oldp+758,((1U & (IData)((vlSelf->div__DOT__dividend 
                                           >> 0x37U)))));
    bufp->fullBit(oldp+759,((1U & (IData)((vlSelf->div__DOT__divisor 
                                           >> 0x37U)))));
    bufp->fullBit(oldp+760,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                            >> 0x37U)) 
                                   ^ (IData)((vlSelf->div__DOT__divisor 
                                              >> 0x37U))))));
    bufp->fullBit(oldp+761,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                            >> 0x37U)) 
                                   & (IData)((vlSelf->div__DOT__divisor 
                                              >> 0x37U))))));
    bufp->fullCData(oldp+762,(((0xeU & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__52__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                        << 1U)) | (1U 
                                                   & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__48__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                      >> 3U)))),4);
    bufp->fullCData(oldp+763,((0xfU & (IData)((vlSelf->div__DOT__dividend 
                                               >> 0x38U)))),4);
    bufp->fullCData(oldp+764,((0xfU & (IData)((vlSelf->div__DOT__divisor 
                                               >> 0x38U)))),4);
    bufp->fullCData(oldp+765,((((0xeU & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__56__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                         << 1U)) | 
                                (1U & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__52__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                       >> 3U))) ^ (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__56__KET____DOT__cla_part0__DOT__p))),4);
    bufp->fullBit(oldp+766,((1U & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__56__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                   >> 3U))));
    bufp->fullCData(oldp+767,(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__56__KET____DOT__cla_part0__DOT__p),4);
    bufp->fullCData(oldp+768,((((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__56__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                << 1U) | (1U & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__52__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                >> 3U)))),5);
    bufp->fullCData(oldp+769,(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__56__KET____DOT__cla_part0__DOT__g),4);
    bufp->fullCData(oldp+770,(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__56__KET____DOT__cla_part0__DOT____Vcellout__carry0__c),4);
    bufp->fullBit(oldp+771,((1U & (IData)((vlSelf->div__DOT__dividend 
                                           >> 0x38U)))));
    bufp->fullBit(oldp+772,((1U & (IData)((vlSelf->div__DOT__divisor 
                                           >> 0x38U)))));
    bufp->fullBit(oldp+773,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                            >> 0x38U)) 
                                   ^ (IData)((vlSelf->div__DOT__divisor 
                                              >> 0x38U))))));
    bufp->fullBit(oldp+774,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                            >> 0x38U)) 
                                   & (IData)((vlSelf->div__DOT__divisor 
                                              >> 0x38U))))));
    bufp->fullBit(oldp+775,((1U & (IData)((vlSelf->div__DOT__dividend 
                                           >> 0x39U)))));
    bufp->fullBit(oldp+776,((1U & (IData)((vlSelf->div__DOT__divisor 
                                           >> 0x39U)))));
    bufp->fullBit(oldp+777,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                            >> 0x39U)) 
                                   ^ (IData)((vlSelf->div__DOT__divisor 
                                              >> 0x39U))))));
    bufp->fullBit(oldp+778,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                            >> 0x39U)) 
                                   & (IData)((vlSelf->div__DOT__divisor 
                                              >> 0x39U))))));
    bufp->fullBit(oldp+779,((1U & (IData)((vlSelf->div__DOT__dividend 
                                           >> 0x3aU)))));
    bufp->fullBit(oldp+780,((1U & (IData)((vlSelf->div__DOT__divisor 
                                           >> 0x3aU)))));
    bufp->fullBit(oldp+781,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                            >> 0x3aU)) 
                                   ^ (IData)((vlSelf->div__DOT__divisor 
                                              >> 0x3aU))))));
    bufp->fullBit(oldp+782,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                            >> 0x3aU)) 
                                   & (IData)((vlSelf->div__DOT__divisor 
                                              >> 0x3aU))))));
    bufp->fullBit(oldp+783,((1U & (IData)((vlSelf->div__DOT__dividend 
                                           >> 0x3bU)))));
    bufp->fullBit(oldp+784,((1U & (IData)((vlSelf->div__DOT__divisor 
                                           >> 0x3bU)))));
    bufp->fullBit(oldp+785,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                            >> 0x3bU)) 
                                   ^ (IData)((vlSelf->div__DOT__divisor 
                                              >> 0x3bU))))));
    bufp->fullBit(oldp+786,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                            >> 0x3bU)) 
                                   & (IData)((vlSelf->div__DOT__divisor 
                                              >> 0x3bU))))));
    bufp->fullCData(oldp+787,(((0xeU & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__56__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                        << 1U)) | (1U 
                                                   & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__52__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                      >> 3U)))),4);
    bufp->fullCData(oldp+788,((0xfU & (IData)((vlSelf->div__DOT__dividend 
                                               >> 0x3cU)))),4);
    bufp->fullCData(oldp+789,((0xfU & (IData)((vlSelf->div__DOT__divisor 
                                               >> 0x3cU)))),4);
    bufp->fullCData(oldp+790,((((0xeU & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__60__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                         << 1U)) | 
                                (1U & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__56__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                       >> 3U))) ^ (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__60__KET____DOT__cla_part0__DOT__p))),4);
    bufp->fullCData(oldp+791,(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__60__KET____DOT__cla_part0__DOT__p),4);
    bufp->fullCData(oldp+792,((((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__60__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                << 1U) | (1U & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__56__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                >> 3U)))),5);
    bufp->fullCData(oldp+793,(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__60__KET____DOT__cla_part0__DOT__g),4);
    bufp->fullCData(oldp+794,(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__60__KET____DOT__cla_part0__DOT____Vcellout__carry0__c),4);
    bufp->fullBit(oldp+795,((1U & (IData)((vlSelf->div__DOT__dividend 
                                           >> 0x3cU)))));
    bufp->fullBit(oldp+796,((1U & (IData)((vlSelf->div__DOT__divisor 
                                           >> 0x3cU)))));
    bufp->fullBit(oldp+797,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                            >> 0x3cU)) 
                                   ^ (IData)((vlSelf->div__DOT__divisor 
                                              >> 0x3cU))))));
    bufp->fullBit(oldp+798,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                            >> 0x3cU)) 
                                   & (IData)((vlSelf->div__DOT__divisor 
                                              >> 0x3cU))))));
    bufp->fullBit(oldp+799,((1U & (IData)((vlSelf->div__DOT__dividend 
                                           >> 0x3dU)))));
    bufp->fullBit(oldp+800,((1U & (IData)((vlSelf->div__DOT__divisor 
                                           >> 0x3dU)))));
    bufp->fullBit(oldp+801,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                            >> 0x3dU)) 
                                   ^ (IData)((vlSelf->div__DOT__divisor 
                                              >> 0x3dU))))));
    bufp->fullBit(oldp+802,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                            >> 0x3dU)) 
                                   & (IData)((vlSelf->div__DOT__divisor 
                                              >> 0x3dU))))));
    bufp->fullBit(oldp+803,((1U & (IData)((vlSelf->div__DOT__dividend 
                                           >> 0x3eU)))));
    bufp->fullBit(oldp+804,((1U & (IData)((vlSelf->div__DOT__divisor 
                                           >> 0x3eU)))));
    bufp->fullBit(oldp+805,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                            >> 0x3eU)) 
                                   ^ (IData)((vlSelf->div__DOT__divisor 
                                              >> 0x3eU))))));
    bufp->fullBit(oldp+806,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                            >> 0x3eU)) 
                                   & (IData)((vlSelf->div__DOT__divisor 
                                              >> 0x3eU))))));
    bufp->fullBit(oldp+807,((1U & (IData)((vlSelf->div__DOT__dividend 
                                           >> 0x3fU)))));
    bufp->fullBit(oldp+808,((1U & (IData)((vlSelf->div__DOT__divisor 
                                           >> 0x3fU)))));
    bufp->fullBit(oldp+809,((IData)(((vlSelf->div__DOT__dividend 
                                      ^ vlSelf->div__DOT__divisor) 
                                     >> 0x3fU))));
    bufp->fullBit(oldp+810,((IData)(((vlSelf->div__DOT__dividend 
                                      & vlSelf->div__DOT__divisor) 
                                     >> 0x3fU))));
    bufp->fullCData(oldp+811,(((0xeU & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__60__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                        << 1U)) | (1U 
                                                   & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__56__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                      >> 3U)))),4);
    bufp->fullCData(oldp+812,((0xfU & (IData)((vlSelf->div__DOT__dividend 
                                               >> 8U)))),4);
    bufp->fullCData(oldp+813,((0xfU & (IData)((vlSelf->div__DOT__divisor 
                                               >> 8U)))),4);
    bufp->fullCData(oldp+814,((((0xeU & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__8__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                         << 1U)) | 
                                (1U & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__4__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                       >> 3U))) ^ (IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__8__KET____DOT__cla_part0__DOT__p))),4);
    bufp->fullCData(oldp+815,(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__8__KET____DOT__cla_part0__DOT__p),4);
    bufp->fullCData(oldp+816,((((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__8__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                << 1U) | (1U & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__4__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                >> 3U)))),5);
    bufp->fullCData(oldp+817,(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__8__KET____DOT__cla_part0__DOT__g),4);
    bufp->fullCData(oldp+818,(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__8__KET____DOT__cla_part0__DOT____Vcellout__carry0__c),4);
    bufp->fullBit(oldp+819,((1U & (IData)((vlSelf->div__DOT__dividend 
                                           >> 8U)))));
    bufp->fullBit(oldp+820,((1U & (IData)((vlSelf->div__DOT__divisor 
                                           >> 8U)))));
    bufp->fullBit(oldp+821,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                            >> 8U)) 
                                   ^ (IData)((vlSelf->div__DOT__divisor 
                                              >> 8U))))));
    bufp->fullBit(oldp+822,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                            >> 8U)) 
                                   & (IData)((vlSelf->div__DOT__divisor 
                                              >> 8U))))));
    bufp->fullBit(oldp+823,((1U & (IData)((vlSelf->div__DOT__dividend 
                                           >> 9U)))));
    bufp->fullBit(oldp+824,((1U & (IData)((vlSelf->div__DOT__divisor 
                                           >> 9U)))));
    bufp->fullBit(oldp+825,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                            >> 9U)) 
                                   ^ (IData)((vlSelf->div__DOT__divisor 
                                              >> 9U))))));
    bufp->fullBit(oldp+826,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                            >> 9U)) 
                                   & (IData)((vlSelf->div__DOT__divisor 
                                              >> 9U))))));
    bufp->fullBit(oldp+827,((1U & (IData)((vlSelf->div__DOT__dividend 
                                           >> 0xaU)))));
    bufp->fullBit(oldp+828,((1U & (IData)((vlSelf->div__DOT__divisor 
                                           >> 0xaU)))));
    bufp->fullBit(oldp+829,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                            >> 0xaU)) 
                                   ^ (IData)((vlSelf->div__DOT__divisor 
                                              >> 0xaU))))));
    bufp->fullBit(oldp+830,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                            >> 0xaU)) 
                                   & (IData)((vlSelf->div__DOT__divisor 
                                              >> 0xaU))))));
    bufp->fullBit(oldp+831,((1U & (IData)((vlSelf->div__DOT__dividend 
                                           >> 0xbU)))));
    bufp->fullBit(oldp+832,((1U & (IData)((vlSelf->div__DOT__divisor 
                                           >> 0xbU)))));
    bufp->fullBit(oldp+833,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                            >> 0xbU)) 
                                   ^ (IData)((vlSelf->div__DOT__divisor 
                                              >> 0xbU))))));
    bufp->fullBit(oldp+834,((1U & ((IData)((vlSelf->div__DOT__dividend 
                                            >> 0xbU)) 
                                   & (IData)((vlSelf->div__DOT__divisor 
                                              >> 0xbU))))));
    bufp->fullCData(oldp+835,(((0xeU & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__8__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                        << 1U)) | (1U 
                                                   & ((IData)(vlSelf->div__DOT__cla1__DOT__genblk1__BRA__4__KET____DOT__cla_part0__DOT____Vcellout__carry0__c) 
                                                      >> 3U)))),4);
    bufp->fullCData(oldp+836,(((((0xfU == (IData)(vlSelf->div__DOT__lzd0__DOT__lzd_32_1__DOT__lzd_16_0__DOT__z)) 
                                 & (0xfU == (IData)(vlSelf->div__DOT__lzd0__DOT__lzd_32_1__DOT__lzd_16_1__DOT__z))) 
                                << 1U) | (IData)(vlSelf->div__DOT__lzd0__DOT____Vcellout__lzd_32_0____pinNumber3))),2);
    bufp->fullIData(oldp+837,((IData)((vlSelf->div__DOT__y_abs_reg 
                                       >> 0x20U))),32);
    bufp->fullBit(oldp+838,(vlSelf->div__DOT__lzd0__DOT____Vcellout__lzd_32_0____pinNumber3));
    bufp->fullCData(oldp+839,((((IData)((0xfU == (IData)(vlSelf->div__DOT__lzd0__DOT__lzd_32_0__DOT__lzd_16_1__DOT__z))) 
                                << 1U) | (0xfU == (IData)(vlSelf->div__DOT__lzd0__DOT__lzd_32_0__DOT__lzd_16_0__DOT__z)))),2);
    bufp->fullSData(oldp+840,((0xffffU & (IData)((vlSelf->div__DOT__y_abs_reg 
                                                  >> 0x30U)))),16);
    bufp->fullBit(oldp+841,((0xfU == (IData)(vlSelf->div__DOT__lzd0__DOT__lzd_32_0__DOT__lzd_16_0__DOT__z))));
    bufp->fullCData(oldp+842,(vlSelf->div__DOT__lzd0__DOT__lzd_32_0__DOT__lzd_16_0__DOT__z),4);
    bufp->fullCData(oldp+843,(vlSelf->div__DOT__lzd0__DOT__lzd_32_0__DOT__lzd_16_0__DOT__out_2[0]),2);
    bufp->fullCData(oldp+844,(vlSelf->div__DOT__lzd0__DOT__lzd_32_0__DOT__lzd_16_0__DOT__out_2[1]),2);
    bufp->fullCData(oldp+845,(vlSelf->div__DOT__lzd0__DOT__lzd_32_0__DOT__lzd_16_0__DOT__out_2[2]),2);
    bufp->fullCData(oldp+846,(vlSelf->div__DOT__lzd0__DOT__lzd_32_0__DOT__lzd_16_0__DOT__out_2[3]),2);
    bufp->fullCData(oldp+847,((0xfU & (IData)((vlSelf->div__DOT__y_abs_reg 
                                               >> 0x3cU)))),4);
    bufp->fullCData(oldp+848,(((2U & ((~ (IData)((0ULL 
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
    bufp->fullBit(oldp+849,((1U & (~ (IData)((0U != 
                                              (0xfU 
                                               & (IData)(
                                                         (vlSelf->div__DOT__y_abs_reg 
                                                          >> 0x3cU)))))))));
    bufp->fullCData(oldp+850,((0xfU & (IData)((vlSelf->div__DOT__y_abs_reg 
                                               >> 0x38U)))),4);
    bufp->fullCData(oldp+851,(((2U & ((~ (IData)((0ULL 
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
    bufp->fullBit(oldp+852,((1U & (~ (IData)((0U != 
                                              (0xfU 
                                               & (IData)(
                                                         (vlSelf->div__DOT__y_abs_reg 
                                                          >> 0x38U)))))))));
    bufp->fullCData(oldp+853,((0xfU & (IData)((vlSelf->div__DOT__y_abs_reg 
                                               >> 0x34U)))),4);
    bufp->fullCData(oldp+854,(((2U & ((~ (IData)((0ULL 
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
    bufp->fullBit(oldp+855,((1U & (~ (IData)((0U != 
                                              (0xfU 
                                               & (IData)(
                                                         (vlSelf->div__DOT__y_abs_reg 
                                                          >> 0x34U)))))))));
    bufp->fullCData(oldp+856,((0xfU & (IData)((vlSelf->div__DOT__y_abs_reg 
                                               >> 0x30U)))),4);
    bufp->fullCData(oldp+857,(((2U & ((~ (IData)((0ULL 
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
    bufp->fullBit(oldp+858,((1U & (~ (IData)((0U != 
                                              (0xfU 
                                               & (IData)(
                                                         (vlSelf->div__DOT__y_abs_reg 
                                                          >> 0x30U)))))))));
    bufp->fullSData(oldp+859,((0xffffU & (IData)((vlSelf->div__DOT__y_abs_reg 
                                                  >> 0x20U)))),16);
    bufp->fullBit(oldp+860,((0xfU == (IData)(vlSelf->div__DOT__lzd0__DOT__lzd_32_0__DOT__lzd_16_1__DOT__z))));
    bufp->fullCData(oldp+861,(vlSelf->div__DOT__lzd0__DOT__lzd_32_0__DOT__lzd_16_1__DOT__z),4);
    bufp->fullCData(oldp+862,(vlSelf->div__DOT__lzd0__DOT__lzd_32_0__DOT__lzd_16_1__DOT__out_2[0]),2);
    bufp->fullCData(oldp+863,(vlSelf->div__DOT__lzd0__DOT__lzd_32_0__DOT__lzd_16_1__DOT__out_2[1]),2);
    bufp->fullCData(oldp+864,(vlSelf->div__DOT__lzd0__DOT__lzd_32_0__DOT__lzd_16_1__DOT__out_2[2]),2);
    bufp->fullCData(oldp+865,(vlSelf->div__DOT__lzd0__DOT__lzd_32_0__DOT__lzd_16_1__DOT__out_2[3]),2);
    bufp->fullCData(oldp+866,((0xfU & (IData)((vlSelf->div__DOT__y_abs_reg 
                                               >> 0x2cU)))),4);
    bufp->fullCData(oldp+867,(((2U & ((~ (IData)((0ULL 
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
    bufp->fullBit(oldp+868,((1U & (~ (IData)((0U != 
                                              (0xfU 
                                               & (IData)(
                                                         (vlSelf->div__DOT__y_abs_reg 
                                                          >> 0x2cU)))))))));
    bufp->fullCData(oldp+869,((0xfU & (IData)((vlSelf->div__DOT__y_abs_reg 
                                               >> 0x28U)))),4);
    bufp->fullCData(oldp+870,(((2U & ((~ (IData)((0ULL 
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
    bufp->fullBit(oldp+871,((1U & (~ (IData)((0U != 
                                              (0xfU 
                                               & (IData)(
                                                         (vlSelf->div__DOT__y_abs_reg 
                                                          >> 0x28U)))))))));
    bufp->fullCData(oldp+872,((0xfU & (IData)((vlSelf->div__DOT__y_abs_reg 
                                               >> 0x24U)))),4);
    bufp->fullCData(oldp+873,(((2U & ((~ (IData)((0ULL 
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
    bufp->fullBit(oldp+874,((1U & (~ (IData)((0U != 
                                              (0xfU 
                                               & (IData)(
                                                         (vlSelf->div__DOT__y_abs_reg 
                                                          >> 0x24U)))))))));
    bufp->fullCData(oldp+875,((0xfU & (IData)((vlSelf->div__DOT__y_abs_reg 
                                               >> 0x20U)))),4);
    bufp->fullCData(oldp+876,(((2U & ((~ (IData)((0ULL 
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
    bufp->fullBit(oldp+877,((1U & (~ (IData)((0U != 
                                              (0xfU 
                                               & (IData)(
                                                         (vlSelf->div__DOT__y_abs_reg 
                                                          >> 0x20U)))))))));
    bufp->fullIData(oldp+878,((IData)(vlSelf->div__DOT__y_abs_reg)),32);
    bufp->fullBit(oldp+879,(((0xfU == (IData)(vlSelf->div__DOT__lzd0__DOT__lzd_32_1__DOT__lzd_16_0__DOT__z)) 
                             & (0xfU == (IData)(vlSelf->div__DOT__lzd0__DOT__lzd_32_1__DOT__lzd_16_1__DOT__z)))));
    bufp->fullCData(oldp+880,((((IData)((0xfU == (IData)(vlSelf->div__DOT__lzd0__DOT__lzd_32_1__DOT__lzd_16_1__DOT__z))) 
                                << 1U) | (0xfU == (IData)(vlSelf->div__DOT__lzd0__DOT__lzd_32_1__DOT__lzd_16_0__DOT__z)))),2);
    bufp->fullSData(oldp+881,((0xffffU & (IData)((vlSelf->div__DOT__y_abs_reg 
                                                  >> 0x10U)))),16);
    bufp->fullBit(oldp+882,((0xfU == (IData)(vlSelf->div__DOT__lzd0__DOT__lzd_32_1__DOT__lzd_16_0__DOT__z))));
    bufp->fullCData(oldp+883,(vlSelf->div__DOT__lzd0__DOT__lzd_32_1__DOT__lzd_16_0__DOT__z),4);
    bufp->fullCData(oldp+884,(vlSelf->div__DOT__lzd0__DOT__lzd_32_1__DOT__lzd_16_0__DOT__out_2[0]),2);
    bufp->fullCData(oldp+885,(vlSelf->div__DOT__lzd0__DOT__lzd_32_1__DOT__lzd_16_0__DOT__out_2[1]),2);
    bufp->fullCData(oldp+886,(vlSelf->div__DOT__lzd0__DOT__lzd_32_1__DOT__lzd_16_0__DOT__out_2[2]),2);
    bufp->fullCData(oldp+887,(vlSelf->div__DOT__lzd0__DOT__lzd_32_1__DOT__lzd_16_0__DOT__out_2[3]),2);
    bufp->fullCData(oldp+888,((0xfU & (IData)((vlSelf->div__DOT__y_abs_reg 
                                               >> 0x1cU)))),4);
    bufp->fullCData(oldp+889,(((2U & ((~ (IData)((0ULL 
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
    bufp->fullBit(oldp+890,((1U & (~ (IData)((0U != 
                                              (0xfU 
                                               & (IData)(
                                                         (vlSelf->div__DOT__y_abs_reg 
                                                          >> 0x1cU)))))))));
    bufp->fullCData(oldp+891,((0xfU & (IData)((vlSelf->div__DOT__y_abs_reg 
                                               >> 0x18U)))),4);
    bufp->fullCData(oldp+892,(((2U & ((~ (IData)((0ULL 
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
    bufp->fullBit(oldp+893,((1U & (~ (IData)((0U != 
                                              (0xfU 
                                               & (IData)(
                                                         (vlSelf->div__DOT__y_abs_reg 
                                                          >> 0x18U)))))))));
    bufp->fullCData(oldp+894,((0xfU & (IData)((vlSelf->div__DOT__y_abs_reg 
                                               >> 0x14U)))),4);
    bufp->fullCData(oldp+895,(((2U & ((~ (IData)((0ULL 
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
    bufp->fullBit(oldp+896,((1U & (~ (IData)((0U != 
                                              (0xfU 
                                               & (IData)(
                                                         (vlSelf->div__DOT__y_abs_reg 
                                                          >> 0x14U)))))))));
    bufp->fullCData(oldp+897,((0xfU & (IData)((vlSelf->div__DOT__y_abs_reg 
                                               >> 0x10U)))),4);
    bufp->fullCData(oldp+898,(((2U & ((~ (IData)((0ULL 
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
    bufp->fullBit(oldp+899,((1U & (~ (IData)((0U != 
                                              (0xfU 
                                               & (IData)(
                                                         (vlSelf->div__DOT__y_abs_reg 
                                                          >> 0x10U)))))))));
    bufp->fullSData(oldp+900,((0xffffU & (IData)(vlSelf->div__DOT__y_abs_reg))),16);
    bufp->fullBit(oldp+901,((0xfU == (IData)(vlSelf->div__DOT__lzd0__DOT__lzd_32_1__DOT__lzd_16_1__DOT__z))));
    bufp->fullCData(oldp+902,(vlSelf->div__DOT__lzd0__DOT__lzd_32_1__DOT__lzd_16_1__DOT__z),4);
    bufp->fullCData(oldp+903,(vlSelf->div__DOT__lzd0__DOT__lzd_32_1__DOT__lzd_16_1__DOT__out_2[0]),2);
    bufp->fullCData(oldp+904,(vlSelf->div__DOT__lzd0__DOT__lzd_32_1__DOT__lzd_16_1__DOT__out_2[1]),2);
    bufp->fullCData(oldp+905,(vlSelf->div__DOT__lzd0__DOT__lzd_32_1__DOT__lzd_16_1__DOT__out_2[2]),2);
    bufp->fullCData(oldp+906,(vlSelf->div__DOT__lzd0__DOT__lzd_32_1__DOT__lzd_16_1__DOT__out_2[3]),2);
    bufp->fullCData(oldp+907,((0xfU & (IData)((vlSelf->div__DOT__y_abs_reg 
                                               >> 0xcU)))),4);
    bufp->fullCData(oldp+908,(((2U & ((~ (IData)((0ULL 
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
    bufp->fullBit(oldp+909,((1U & (~ (IData)((0U != 
                                              (0xfU 
                                               & (IData)(
                                                         (vlSelf->div__DOT__y_abs_reg 
                                                          >> 0xcU)))))))));
    bufp->fullCData(oldp+910,((0xfU & (IData)((vlSelf->div__DOT__y_abs_reg 
                                               >> 8U)))),4);
    bufp->fullCData(oldp+911,(((2U & ((~ (IData)((0ULL 
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
    bufp->fullBit(oldp+912,((1U & (~ (IData)((0U != 
                                              (0xfU 
                                               & (IData)(
                                                         (vlSelf->div__DOT__y_abs_reg 
                                                          >> 8U)))))))));
    bufp->fullCData(oldp+913,((0xfU & (IData)((vlSelf->div__DOT__y_abs_reg 
                                               >> 4U)))),4);
    bufp->fullCData(oldp+914,(((2U & ((~ (IData)((0ULL 
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
    bufp->fullBit(oldp+915,((1U & (~ (IData)((0U != 
                                              (0xfU 
                                               & (IData)(
                                                         (vlSelf->div__DOT__y_abs_reg 
                                                          >> 4U)))))))));
    bufp->fullCData(oldp+916,((0xfU & (IData)(vlSelf->div__DOT__y_abs_reg))),4);
    bufp->fullCData(oldp+917,(((2U & ((~ (IData)((0ULL 
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
    bufp->fullBit(oldp+918,((1U & (~ (IData)((0U != 
                                              (0xfU 
                                               & (IData)(vlSelf->div__DOT__y_abs_reg))))))));
    bufp->fullCData(oldp+919,(((((0xfU == (IData)(vlSelf->div__DOT__lzd1__DOT__lzd_32_1__DOT__lzd_16_0__DOT__z)) 
                                 & (0xfU == (IData)(vlSelf->div__DOT__lzd1__DOT__lzd_32_1__DOT__lzd_16_1__DOT__z))) 
                                << 1U) | (IData)(vlSelf->div__DOT__lzd1__DOT____Vcellout__lzd_32_0____pinNumber3))),2);
    bufp->fullIData(oldp+920,((IData)((vlSelf->div__DOT__x_abs_reg 
                                       >> 0x20U))),32);
    bufp->fullBit(oldp+921,(vlSelf->div__DOT__lzd1__DOT____Vcellout__lzd_32_0____pinNumber3));
    bufp->fullCData(oldp+922,((((IData)((0xfU == (IData)(vlSelf->div__DOT__lzd1__DOT__lzd_32_0__DOT__lzd_16_1__DOT__z))) 
                                << 1U) | (0xfU == (IData)(vlSelf->div__DOT__lzd1__DOT__lzd_32_0__DOT__lzd_16_0__DOT__z)))),2);
    bufp->fullSData(oldp+923,((0xffffU & (IData)((vlSelf->div__DOT__x_abs_reg 
                                                  >> 0x30U)))),16);
    bufp->fullBit(oldp+924,((0xfU == (IData)(vlSelf->div__DOT__lzd1__DOT__lzd_32_0__DOT__lzd_16_0__DOT__z))));
    bufp->fullCData(oldp+925,(vlSelf->div__DOT__lzd1__DOT__lzd_32_0__DOT__lzd_16_0__DOT__z),4);
    bufp->fullCData(oldp+926,(vlSelf->div__DOT__lzd1__DOT__lzd_32_0__DOT__lzd_16_0__DOT__out_2[0]),2);
    bufp->fullCData(oldp+927,(vlSelf->div__DOT__lzd1__DOT__lzd_32_0__DOT__lzd_16_0__DOT__out_2[1]),2);
    bufp->fullCData(oldp+928,(vlSelf->div__DOT__lzd1__DOT__lzd_32_0__DOT__lzd_16_0__DOT__out_2[2]),2);
    bufp->fullCData(oldp+929,(vlSelf->div__DOT__lzd1__DOT__lzd_32_0__DOT__lzd_16_0__DOT__out_2[3]),2);
    bufp->fullCData(oldp+930,((0xfU & (IData)((vlSelf->div__DOT__x_abs_reg 
                                               >> 0x3cU)))),4);
    bufp->fullCData(oldp+931,(((2U & ((~ (IData)((0ULL 
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
    bufp->fullBit(oldp+932,((1U & (~ (IData)((0U != 
                                              (0xfU 
                                               & (IData)(
                                                         (vlSelf->div__DOT__x_abs_reg 
                                                          >> 0x3cU)))))))));
    bufp->fullCData(oldp+933,((0xfU & (IData)((vlSelf->div__DOT__x_abs_reg 
                                               >> 0x38U)))),4);
    bufp->fullCData(oldp+934,(((2U & ((~ (IData)((0ULL 
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
    bufp->fullBit(oldp+935,((1U & (~ (IData)((0U != 
                                              (0xfU 
                                               & (IData)(
                                                         (vlSelf->div__DOT__x_abs_reg 
                                                          >> 0x38U)))))))));
    bufp->fullCData(oldp+936,((0xfU & (IData)((vlSelf->div__DOT__x_abs_reg 
                                               >> 0x34U)))),4);
    bufp->fullCData(oldp+937,(((2U & ((~ (IData)((0ULL 
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
    bufp->fullBit(oldp+938,((1U & (~ (IData)((0U != 
                                              (0xfU 
                                               & (IData)(
                                                         (vlSelf->div__DOT__x_abs_reg 
                                                          >> 0x34U)))))))));
    bufp->fullCData(oldp+939,((0xfU & (IData)((vlSelf->div__DOT__x_abs_reg 
                                               >> 0x30U)))),4);
    bufp->fullCData(oldp+940,(((2U & ((~ (IData)((0ULL 
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
    bufp->fullBit(oldp+941,((1U & (~ (IData)((0U != 
                                              (0xfU 
                                               & (IData)(
                                                         (vlSelf->div__DOT__x_abs_reg 
                                                          >> 0x30U)))))))));
    bufp->fullSData(oldp+942,((0xffffU & (IData)((vlSelf->div__DOT__x_abs_reg 
                                                  >> 0x20U)))),16);
    bufp->fullBit(oldp+943,((0xfU == (IData)(vlSelf->div__DOT__lzd1__DOT__lzd_32_0__DOT__lzd_16_1__DOT__z))));
    bufp->fullCData(oldp+944,(vlSelf->div__DOT__lzd1__DOT__lzd_32_0__DOT__lzd_16_1__DOT__z),4);
    bufp->fullCData(oldp+945,(vlSelf->div__DOT__lzd1__DOT__lzd_32_0__DOT__lzd_16_1__DOT__out_2[0]),2);
    bufp->fullCData(oldp+946,(vlSelf->div__DOT__lzd1__DOT__lzd_32_0__DOT__lzd_16_1__DOT__out_2[1]),2);
    bufp->fullCData(oldp+947,(vlSelf->div__DOT__lzd1__DOT__lzd_32_0__DOT__lzd_16_1__DOT__out_2[2]),2);
    bufp->fullCData(oldp+948,(vlSelf->div__DOT__lzd1__DOT__lzd_32_0__DOT__lzd_16_1__DOT__out_2[3]),2);
    bufp->fullCData(oldp+949,((0xfU & (IData)((vlSelf->div__DOT__x_abs_reg 
                                               >> 0x2cU)))),4);
    bufp->fullCData(oldp+950,(((2U & ((~ (IData)((0ULL 
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
    bufp->fullBit(oldp+951,((1U & (~ (IData)((0U != 
                                              (0xfU 
                                               & (IData)(
                                                         (vlSelf->div__DOT__x_abs_reg 
                                                          >> 0x2cU)))))))));
    bufp->fullCData(oldp+952,((0xfU & (IData)((vlSelf->div__DOT__x_abs_reg 
                                               >> 0x28U)))),4);
    bufp->fullCData(oldp+953,(((2U & ((~ (IData)((0ULL 
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
    bufp->fullBit(oldp+954,((1U & (~ (IData)((0U != 
                                              (0xfU 
                                               & (IData)(
                                                         (vlSelf->div__DOT__x_abs_reg 
                                                          >> 0x28U)))))))));
    bufp->fullCData(oldp+955,((0xfU & (IData)((vlSelf->div__DOT__x_abs_reg 
                                               >> 0x24U)))),4);
    bufp->fullCData(oldp+956,(((2U & ((~ (IData)((0ULL 
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
    bufp->fullBit(oldp+957,((1U & (~ (IData)((0U != 
                                              (0xfU 
                                               & (IData)(
                                                         (vlSelf->div__DOT__x_abs_reg 
                                                          >> 0x24U)))))))));
    bufp->fullCData(oldp+958,((0xfU & (IData)((vlSelf->div__DOT__x_abs_reg 
                                               >> 0x20U)))),4);
    bufp->fullCData(oldp+959,(((2U & ((~ (IData)((0ULL 
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
    bufp->fullBit(oldp+960,((1U & (~ (IData)((0U != 
                                              (0xfU 
                                               & (IData)(
                                                         (vlSelf->div__DOT__x_abs_reg 
                                                          >> 0x20U)))))))));
    bufp->fullIData(oldp+961,((IData)(vlSelf->div__DOT__x_abs_reg)),32);
    bufp->fullBit(oldp+962,(((0xfU == (IData)(vlSelf->div__DOT__lzd1__DOT__lzd_32_1__DOT__lzd_16_0__DOT__z)) 
                             & (0xfU == (IData)(vlSelf->div__DOT__lzd1__DOT__lzd_32_1__DOT__lzd_16_1__DOT__z)))));
    bufp->fullCData(oldp+963,((((IData)((0xfU == (IData)(vlSelf->div__DOT__lzd1__DOT__lzd_32_1__DOT__lzd_16_1__DOT__z))) 
                                << 1U) | (0xfU == (IData)(vlSelf->div__DOT__lzd1__DOT__lzd_32_1__DOT__lzd_16_0__DOT__z)))),2);
    bufp->fullSData(oldp+964,((0xffffU & (IData)((vlSelf->div__DOT__x_abs_reg 
                                                  >> 0x10U)))),16);
    bufp->fullBit(oldp+965,((0xfU == (IData)(vlSelf->div__DOT__lzd1__DOT__lzd_32_1__DOT__lzd_16_0__DOT__z))));
    bufp->fullCData(oldp+966,(vlSelf->div__DOT__lzd1__DOT__lzd_32_1__DOT__lzd_16_0__DOT__z),4);
    bufp->fullCData(oldp+967,(vlSelf->div__DOT__lzd1__DOT__lzd_32_1__DOT__lzd_16_0__DOT__out_2[0]),2);
    bufp->fullCData(oldp+968,(vlSelf->div__DOT__lzd1__DOT__lzd_32_1__DOT__lzd_16_0__DOT__out_2[1]),2);
    bufp->fullCData(oldp+969,(vlSelf->div__DOT__lzd1__DOT__lzd_32_1__DOT__lzd_16_0__DOT__out_2[2]),2);
    bufp->fullCData(oldp+970,(vlSelf->div__DOT__lzd1__DOT__lzd_32_1__DOT__lzd_16_0__DOT__out_2[3]),2);
    bufp->fullCData(oldp+971,((0xfU & (IData)((vlSelf->div__DOT__x_abs_reg 
                                               >> 0x1cU)))),4);
    bufp->fullCData(oldp+972,(((2U & ((~ (IData)((0ULL 
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
    bufp->fullBit(oldp+973,((1U & (~ (IData)((0U != 
                                              (0xfU 
                                               & (IData)(
                                                         (vlSelf->div__DOT__x_abs_reg 
                                                          >> 0x1cU)))))))));
    bufp->fullCData(oldp+974,((0xfU & (IData)((vlSelf->div__DOT__x_abs_reg 
                                               >> 0x18U)))),4);
    bufp->fullCData(oldp+975,(((2U & ((~ (IData)((0ULL 
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
    bufp->fullBit(oldp+976,((1U & (~ (IData)((0U != 
                                              (0xfU 
                                               & (IData)(
                                                         (vlSelf->div__DOT__x_abs_reg 
                                                          >> 0x18U)))))))));
    bufp->fullCData(oldp+977,((0xfU & (IData)((vlSelf->div__DOT__x_abs_reg 
                                               >> 0x14U)))),4);
    bufp->fullCData(oldp+978,(((2U & ((~ (IData)((0ULL 
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
    bufp->fullBit(oldp+979,((1U & (~ (IData)((0U != 
                                              (0xfU 
                                               & (IData)(
                                                         (vlSelf->div__DOT__x_abs_reg 
                                                          >> 0x14U)))))))));
    bufp->fullCData(oldp+980,((0xfU & (IData)((vlSelf->div__DOT__x_abs_reg 
                                               >> 0x10U)))),4);
    bufp->fullCData(oldp+981,(((2U & ((~ (IData)((0ULL 
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
    bufp->fullBit(oldp+982,((1U & (~ (IData)((0U != 
                                              (0xfU 
                                               & (IData)(
                                                         (vlSelf->div__DOT__x_abs_reg 
                                                          >> 0x10U)))))))));
    bufp->fullSData(oldp+983,((0xffffU & (IData)(vlSelf->div__DOT__x_abs_reg))),16);
    bufp->fullBit(oldp+984,((0xfU == (IData)(vlSelf->div__DOT__lzd1__DOT__lzd_32_1__DOT__lzd_16_1__DOT__z))));
    bufp->fullCData(oldp+985,(vlSelf->div__DOT__lzd1__DOT__lzd_32_1__DOT__lzd_16_1__DOT__z),4);
    bufp->fullCData(oldp+986,(vlSelf->div__DOT__lzd1__DOT__lzd_32_1__DOT__lzd_16_1__DOT__out_2[0]),2);
    bufp->fullCData(oldp+987,(vlSelf->div__DOT__lzd1__DOT__lzd_32_1__DOT__lzd_16_1__DOT__out_2[1]),2);
    bufp->fullCData(oldp+988,(vlSelf->div__DOT__lzd1__DOT__lzd_32_1__DOT__lzd_16_1__DOT__out_2[2]),2);
    bufp->fullCData(oldp+989,(vlSelf->div__DOT__lzd1__DOT__lzd_32_1__DOT__lzd_16_1__DOT__out_2[3]),2);
    bufp->fullCData(oldp+990,((0xfU & (IData)((vlSelf->div__DOT__x_abs_reg 
                                               >> 0xcU)))),4);
    bufp->fullCData(oldp+991,(((2U & ((~ (IData)((0ULL 
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
    bufp->fullBit(oldp+992,((1U & (~ (IData)((0U != 
                                              (0xfU 
                                               & (IData)(
                                                         (vlSelf->div__DOT__x_abs_reg 
                                                          >> 0xcU)))))))));
    bufp->fullCData(oldp+993,((0xfU & (IData)((vlSelf->div__DOT__x_abs_reg 
                                               >> 8U)))),4);
    bufp->fullCData(oldp+994,(((2U & ((~ (IData)((0ULL 
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
    bufp->fullBit(oldp+995,((1U & (~ (IData)((0U != 
                                              (0xfU 
                                               & (IData)(
                                                         (vlSelf->div__DOT__x_abs_reg 
                                                          >> 8U)))))))));
    bufp->fullCData(oldp+996,((0xfU & (IData)((vlSelf->div__DOT__x_abs_reg 
                                               >> 4U)))),4);
    bufp->fullCData(oldp+997,(((2U & ((~ (IData)((0ULL 
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
    bufp->fullBit(oldp+998,((1U & (~ (IData)((0U != 
                                              (0xfU 
                                               & (IData)(
                                                         (vlSelf->div__DOT__x_abs_reg 
                                                          >> 4U)))))))));
    bufp->fullCData(oldp+999,((0xfU & (IData)(vlSelf->div__DOT__x_abs_reg))),4);
    bufp->fullCData(oldp+1000,(((2U & ((~ (IData)((0ULL 
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
    bufp->fullBit(oldp+1001,((1U & (~ (IData)((0U != 
                                               (0xfU 
                                                & (IData)(vlSelf->div__DOT__x_abs_reg))))))));
    bufp->fullBit(oldp+1002,(vlSelf->clk));
    bufp->fullBit(oldp+1003,(vlSelf->rst_n));
    bufp->fullBit(oldp+1004,(vlSelf->valid));
    bufp->fullBit(oldp+1005,(vlSelf->sign));
    bufp->fullQData(oldp+1006,(vlSelf->x),64);
    bufp->fullQData(oldp+1008,(vlSelf->y),64);
    bufp->fullQData(oldp+1010,(vlSelf->result),64);
    bufp->fullQData(oldp+1012,(vlSelf->rem),64);
    bufp->fullBit(oldp+1014,(vlSelf->finish));
    bufp->fullQData(oldp+1015,(((vlSelf->x ^ (- (QData)((IData)(vlSelf->div__DOT____Vcellinp__oppo0____pinNumber2)))) 
                                + (QData)((IData)(vlSelf->div__DOT____Vcellinp__oppo0____pinNumber2)))),64);
    bufp->fullQData(oldp+1017,(((vlSelf->y ^ (- (QData)((IData)(vlSelf->div__DOT____Vcellinp__oppo1____pinNumber2)))) 
                                + (QData)((IData)(vlSelf->div__DOT____Vcellinp__oppo1____pinNumber2)))),64);
    bufp->fullBit(oldp+1019,((IData)(((vlSelf->x ^ vlSelf->y) 
                                      >> 0x3fU))));
    bufp->fullBit(oldp+1020,((1U & (IData)((vlSelf->x 
                                            >> 0x3fU)))));
    bufp->fullCData(oldp+1021,(vlSelf->div__DOT__next_state),5);
    bufp->fullCData(oldp+1022,((0x3fU & ((IData)(vlSelf->div__DOT__shift_x_tmp) 
                                         - (IData)(2U)))),6);
    bufp->fullCData(oldp+1023,(vlSelf->div__DOT__shift_y),6);
    bufp->fullCData(oldp+1024,(vlSelf->div__DOT__shift_x_tmp),6);
    bufp->fullCData(oldp+1025,(vlSelf->div__DOT__shift),6);
    bufp->fullBit(oldp+1026,(((IData)(vlSelf->div__DOT__cout) 
                              == (0x3fU & ((IData)(vlSelf->div__DOT__shift) 
                                           - (IData)(1U))))));
    bufp->fullQData(oldp+1027,(vlSelf->div__DOT__r_abs),64);
    bufp->fullCData(oldp+1029,(vlSelf->div__DOT__lzd0__DOT__out_3_0[0]),5);
    bufp->fullCData(oldp+1030,(vlSelf->div__DOT__lzd0__DOT__out_3_0[1]),5);
    bufp->fullCData(oldp+1031,((((IData)((0xfU == (IData)(vlSelf->div__DOT__lzd0__DOT__lzd_32_0__DOT__lzd_16_0__DOT__z))) 
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
    bufp->fullCData(oldp+1032,(vlSelf->div__DOT__lzd0__DOT__lzd_32_0__DOT__out_3_0[0]),4);
    bufp->fullCData(oldp+1033,(vlSelf->div__DOT__lzd0__DOT__lzd_32_0__DOT__out_3_0[1]),4);
    bufp->fullCData(oldp+1034,(vlSelf->div__DOT__lzd0__DOT__lzd_32_0__DOT____Vcellout__lzd_16_0____pinNumber2),4);
    bufp->fullCData(oldp+1035,(vlSelf->div__DOT__lzd0__DOT__lzd_32_0__DOT____Vcellout__lzd_16_1____pinNumber2),4);
    bufp->fullCData(oldp+1036,((((IData)((0xfU == (IData)(vlSelf->div__DOT__lzd0__DOT__lzd_32_1__DOT__lzd_16_0__DOT__z))) 
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
    bufp->fullCData(oldp+1037,(vlSelf->div__DOT__lzd0__DOT__lzd_32_1__DOT__out_3_0[0]),4);
    bufp->fullCData(oldp+1038,(vlSelf->div__DOT__lzd0__DOT__lzd_32_1__DOT__out_3_0[1]),4);
    bufp->fullCData(oldp+1039,(vlSelf->div__DOT__lzd0__DOT__lzd_32_1__DOT____Vcellout__lzd_16_0____pinNumber2),4);
    bufp->fullCData(oldp+1040,(vlSelf->div__DOT__lzd0__DOT__lzd_32_1__DOT____Vcellout__lzd_16_1____pinNumber2),4);
    bufp->fullCData(oldp+1041,(vlSelf->div__DOT__lzd1__DOT__out_3_0[0]),5);
    bufp->fullCData(oldp+1042,(vlSelf->div__DOT__lzd1__DOT__out_3_0[1]),5);
    bufp->fullCData(oldp+1043,((((IData)((0xfU == (IData)(vlSelf->div__DOT__lzd1__DOT__lzd_32_0__DOT__lzd_16_0__DOT__z))) 
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
    bufp->fullCData(oldp+1044,(vlSelf->div__DOT__lzd1__DOT__lzd_32_0__DOT__out_3_0[0]),4);
    bufp->fullCData(oldp+1045,(vlSelf->div__DOT__lzd1__DOT__lzd_32_0__DOT__out_3_0[1]),4);
    bufp->fullCData(oldp+1046,(vlSelf->div__DOT__lzd1__DOT__lzd_32_0__DOT____Vcellout__lzd_16_0____pinNumber2),4);
    bufp->fullCData(oldp+1047,(vlSelf->div__DOT__lzd1__DOT__lzd_32_0__DOT____Vcellout__lzd_16_1____pinNumber2),4);
    bufp->fullCData(oldp+1048,((((IData)((0xfU == (IData)(vlSelf->div__DOT__lzd1__DOT__lzd_32_1__DOT__lzd_16_0__DOT__z))) 
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
    bufp->fullCData(oldp+1049,(vlSelf->div__DOT__lzd1__DOT__lzd_32_1__DOT__out_3_0[0]),4);
    bufp->fullCData(oldp+1050,(vlSelf->div__DOT__lzd1__DOT__lzd_32_1__DOT__out_3_0[1]),4);
    bufp->fullCData(oldp+1051,(vlSelf->div__DOT__lzd1__DOT__lzd_32_1__DOT____Vcellout__lzd_16_0____pinNumber2),4);
    bufp->fullCData(oldp+1052,(vlSelf->div__DOT__lzd1__DOT__lzd_32_1__DOT____Vcellout__lzd_16_1____pinNumber2),4);
    bufp->fullCData(oldp+1053,(1U),5);
    bufp->fullCData(oldp+1054,(2U),5);
    bufp->fullCData(oldp+1055,(4U),5);
    bufp->fullCData(oldp+1056,(8U),5);
    bufp->fullCData(oldp+1057,(0x10U),5);
    bufp->fullIData(oldp+1058,(vlSelf->div__DOT__i),32);
    bufp->fullIData(oldp+1059,(0x40U),32);
    bufp->fullIData(oldp+1060,(4U),32);
    bufp->fullBit(oldp+1061,(0U));
}
