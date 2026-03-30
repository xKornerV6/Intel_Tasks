// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vquadra_top__Syms.h"


//======================

void Vquadra_top::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void Vquadra_top::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vquadra_top__Syms* __restrict vlSymsp = static_cast<Vquadra_top__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vquadra_top::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void Vquadra_top::traceInitTop(void* userp, VerilatedVcd* tracep) {
    Vquadra_top__Syms* __restrict vlSymsp = static_cast<Vquadra_top__Syms*>(userp);
    Vquadra_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void Vquadra_top::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    Vquadra_top__Syms* __restrict vlSymsp = static_cast<Vquadra_top__Syms*>(userp);
    Vquadra_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+9,"clk", false,-1);
        tracep->declBit(c+10,"rst_b", false,-1);
        tracep->declBus(c+11,"x", false,-1, 23,0);
        tracep->declBit(c+12,"x_dv", false,-1);
        tracep->declBus(c+13,"y", false,-1, 24,0);
        tracep->declBit(c+14,"y_dv", false,-1);
        tracep->declBit(c+9,"quadra_top clk", false,-1);
        tracep->declBit(c+10,"quadra_top rst_b", false,-1);
        tracep->declBus(c+11,"quadra_top x", false,-1, 23,0);
        tracep->declBit(c+12,"quadra_top x_dv", false,-1);
        tracep->declBus(c+13,"quadra_top y", false,-1, 24,0);
        tracep->declBit(c+14,"quadra_top y_dv", false,-1);
        tracep->declBit(c+1,"quadra_top dv_p0", false,-1);
        tracep->declBit(c+2,"quadra_top dv_p1", false,-1);
        tracep->declBit(c+3,"quadra_top dv_p2", false,-1);
        tracep->declBus(c+15,"quadra_top x1", false,-1, 6,0);
        tracep->declBus(c+16,"quadra_top x2", false,-1, 16,0);
        tracep->declBus(c+4,"quadra_top x2_q", false,-1, 16,0);
        tracep->declBus(c+5,"quadra_top a_lut", false,-1, 23,0);
        tracep->declBus(c+6,"quadra_top b_lut", false,-1, 18,0);
        tracep->declBus(c+7,"quadra_top c_lut", false,-1, 12,0);
        tracep->declBus(c+17,"quadra_top y_raw", false,-1, 24,0);
        tracep->declBus(c+15,"quadra_top i_lut x1", false,-1, 6,0);
        tracep->declBus(c+5,"quadra_top i_lut a", false,-1, 23,0);
        tracep->declBus(c+6,"quadra_top i_lut b", false,-1, 18,0);
        tracep->declBus(c+7,"quadra_top i_lut c", false,-1, 12,0);
        tracep->declBit(c+9,"quadra_top i_quadra clk", false,-1);
        tracep->declBit(c+10,"quadra_top i_quadra rst", false,-1);
        tracep->declBus(c+16,"quadra_top i_quadra x2", false,-1, 16,0);
        tracep->declBus(c+5,"quadra_top i_quadra a", false,-1, 23,0);
        tracep->declBus(c+6,"quadra_top i_quadra b", false,-1, 18,0);
        tracep->declBus(c+7,"quadra_top i_quadra c", false,-1, 12,0);
        tracep->declBus(c+17,"quadra_top i_quadra y", false,-1, 24,0);
        tracep->declQuad(c+18,"quadra_top i_quadra x2_sq", false,-1, 33,0);
        tracep->declQuad(c+20,"quadra_top i_quadra b_x2", false,-1, 35,0);
        tracep->declQuad(c+22,"quadra_top i_quadra c_x2sq", false,-1, 46,0);
        tracep->declBus(c+8,"quadra_top i_quadra term_a", false,-1, 24,0);
        tracep->declBus(c+24,"quadra_top i_quadra term_b", false,-1, 24,0);
        tracep->declBus(c+25,"quadra_top i_quadra term_c", false,-1, 24,0);
        tracep->declBus(c+26,"$unit X_I", false,-1, 31,0);
        tracep->declBus(c+27,"$unit X_F", false,-1, 31,0);
        tracep->declBus(c+28,"$unit X_W", false,-1, 31,0);
        tracep->declBus(c+29,"$unit Y_I", false,-1, 31,0);
        tracep->declBus(c+27,"$unit Y_F", false,-1, 31,0);
        tracep->declBus(c+30,"$unit Y_W", false,-1, 31,0);
        tracep->declBus(c+26,"$unit X1_I", false,-1, 31,0);
        tracep->declBus(c+31,"$unit X1_F", false,-1, 31,0);
        tracep->declBus(c+32,"$unit X1_W", false,-1, 31,0);
        tracep->declBus(c+33,"$unit X2_I", false,-1, 31,0);
        tracep->declBus(c+34,"$unit X2_F", false,-1, 31,0);
        tracep->declBus(c+34,"$unit X2_W", false,-1, 31,0);
        tracep->declBus(c+29,"$unit A_I", false,-1, 31,0);
        tracep->declBus(c+35,"$unit A_F", false,-1, 31,0);
        tracep->declBus(c+28,"$unit A_W", false,-1, 31,0);
        tracep->declBus(c+36,"$unit B_I", false,-1, 31,0);
        tracep->declBus(c+37,"$unit B_F", false,-1, 31,0);
        tracep->declBus(c+38,"$unit B_W", false,-1, 31,0);
        tracep->declBus(c+29,"$unit C_I", false,-1, 31,0);
        tracep->declBus(c+39,"$unit C_F", false,-1, 31,0);
        tracep->declBus(c+40,"$unit C_W", false,-1, 31,0);
    }
}

void Vquadra_top::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void Vquadra_top::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    Vquadra_top__Syms* __restrict vlSymsp = static_cast<Vquadra_top__Syms*>(userp);
    Vquadra_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void Vquadra_top::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    Vquadra_top__Syms* __restrict vlSymsp = static_cast<Vquadra_top__Syms*>(userp);
    Vquadra_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlTOPp->quadra_top__DOT__dv_p0));
        tracep->fullBit(oldp+2,(vlTOPp->quadra_top__DOT__dv_p1));
        tracep->fullBit(oldp+3,(vlTOPp->quadra_top__DOT__dv_p2));
        tracep->fullIData(oldp+4,(vlTOPp->quadra_top__DOT__x2_q),17);
        tracep->fullIData(oldp+5,(vlTOPp->quadra_top__DOT__a_lut),24);
        tracep->fullIData(oldp+6,(vlTOPp->quadra_top__DOT__b_lut),19);
        tracep->fullSData(oldp+7,(vlTOPp->quadra_top__DOT__c_lut),13);
        tracep->fullIData(oldp+8,((0x1ffffffU & (VL_EXTENDS_II(25,24, vlTOPp->quadra_top__DOT__a_lut) 
                                                 << 1U))),25);
        tracep->fullBit(oldp+9,(vlTOPp->clk));
        tracep->fullBit(oldp+10,(vlTOPp->rst_b));
        tracep->fullIData(oldp+11,(vlTOPp->x),24);
        tracep->fullBit(oldp+12,(vlTOPp->x_dv));
        tracep->fullIData(oldp+13,(vlTOPp->y),25);
        tracep->fullBit(oldp+14,(vlTOPp->y_dv));
        tracep->fullCData(oldp+15,((0x7fU & (vlTOPp->x 
                                             >> 0x11U))),7);
        tracep->fullIData(oldp+16,((0x1ffffU & vlTOPp->x)),17);
        tracep->fullIData(oldp+17,((0x1ffffffU & ((IData)(0x28U) 
                                                  + 
                                                  (((VL_EXTENDS_II(25,24, vlTOPp->quadra_top__DOT__a_lut) 
                                                     << 1U) 
                                                    + (IData)(
                                                              (0xfffffffffULL 
                                                               & VL_SHIFTRS_QQI(36,36,32, 
                                                                                (0xfffffffffULL 
                                                                                & VL_MULS_QQQ(36,36,36, 
                                                                                (0xfffffffffULL 
                                                                                & VL_EXTENDS_QI(36,19, vlTOPp->quadra_top__DOT__b_lut)), 
                                                                                (0xfffffffffULL 
                                                                                & VL_EXTENDS_QI(36,18, 
                                                                                (0x1ffffU 
                                                                                & vlTOPp->x))))), 0x10U)))) 
                                                   + (IData)(
                                                             (0x7fffffffffffULL 
                                                              & VL_SHIFTRS_QQI(47,47,32, 
                                                                               (0x7fffffffffffULL 
                                                                                & VL_MULS_QQQ(47,47,47, 
                                                                                (0x7fffffffffffULL 
                                                                                & VL_EXTENDS_QI(47,13, (IData)(vlTOPp->quadra_top__DOT__c_lut))), 
                                                                                (0x7fffffffffffULL 
                                                                                & VL_EXTENDS_QQ(47,35, 
                                                                                (0x3ffffffffULL 
                                                                                & ((QData)((IData)(
                                                                                (0x1ffffU 
                                                                                & vlTOPp->x))) 
                                                                                * (QData)((IData)(
                                                                                (0x1ffffU 
                                                                                & vlTOPp->x))))))))), 0x22U))))))),25);
        tracep->fullQData(oldp+18,((0x3ffffffffULL 
                                    & ((QData)((IData)(
                                                       (0x1ffffU 
                                                        & vlTOPp->x))) 
                                       * (QData)((IData)(
                                                         (0x1ffffU 
                                                          & vlTOPp->x)))))),34);
        tracep->fullQData(oldp+20,((0xfffffffffULL 
                                    & VL_MULS_QQQ(36,36,36, 
                                                  (0xfffffffffULL 
                                                   & VL_EXTENDS_QI(36,19, vlTOPp->quadra_top__DOT__b_lut)), 
                                                  (0xfffffffffULL 
                                                   & VL_EXTENDS_QI(36,18, 
                                                                   (0x1ffffU 
                                                                    & vlTOPp->x)))))),36);
        tracep->fullQData(oldp+22,((0x7fffffffffffULL 
                                    & VL_MULS_QQQ(47,47,47, 
                                                  (0x7fffffffffffULL 
                                                   & VL_EXTENDS_QI(47,13, (IData)(vlTOPp->quadra_top__DOT__c_lut))), 
                                                  (0x7fffffffffffULL 
                                                   & VL_EXTENDS_QQ(47,35, 
                                                                   (0x3ffffffffULL 
                                                                    & ((QData)((IData)(
                                                                                (0x1ffffU 
                                                                                & vlTOPp->x))) 
                                                                       * (QData)((IData)(
                                                                                (0x1ffffU 
                                                                                & vlTOPp->x)))))))))),47);
        tracep->fullIData(oldp+24,((0x1ffffffU & (IData)(
                                                         (0xfffffffffULL 
                                                          & VL_SHIFTRS_QQI(36,36,32, 
                                                                           (0xfffffffffULL 
                                                                            & VL_MULS_QQQ(36,36,36, 
                                                                                (0xfffffffffULL 
                                                                                & VL_EXTENDS_QI(36,19, vlTOPp->quadra_top__DOT__b_lut)), 
                                                                                (0xfffffffffULL 
                                                                                & VL_EXTENDS_QI(36,18, 
                                                                                (0x1ffffU 
                                                                                & vlTOPp->x))))), 0x10U))))),25);
        tracep->fullIData(oldp+25,((0x1ffffffU & (IData)(
                                                         (0x7fffffffffffULL 
                                                          & VL_SHIFTRS_QQI(47,47,32, 
                                                                           (0x7fffffffffffULL 
                                                                            & VL_MULS_QQQ(47,47,47, 
                                                                                (0x7fffffffffffULL 
                                                                                & VL_EXTENDS_QI(47,13, (IData)(vlTOPp->quadra_top__DOT__c_lut))), 
                                                                                (0x7fffffffffffULL 
                                                                                & VL_EXTENDS_QQ(47,35, 
                                                                                (0x3ffffffffULL 
                                                                                & ((QData)((IData)(
                                                                                (0x1ffffU 
                                                                                & vlTOPp->x))) 
                                                                                * (QData)((IData)(
                                                                                (0x1ffffU 
                                                                                & vlTOPp->x))))))))), 0x22U))))),25);
        tracep->fullIData(oldp+26,(1U),32);
        tracep->fullIData(oldp+27,(0x17U),32);
        tracep->fullIData(oldp+28,(0x18U),32);
        tracep->fullIData(oldp+29,(2U),32);
        tracep->fullIData(oldp+30,(0x19U),32);
        tracep->fullIData(oldp+31,(6U),32);
        tracep->fullIData(oldp+32,(7U),32);
        tracep->fullIData(oldp+33,(0U),32);
        tracep->fullIData(oldp+34,(0x11U),32);
        tracep->fullIData(oldp+35,(0x16U),32);
        tracep->fullIData(oldp+36,(3U),32);
        tracep->fullIData(oldp+37,(0x10U),32);
        tracep->fullIData(oldp+38,(0x13U),32);
        tracep->fullIData(oldp+39,(0xbU),32);
        tracep->fullIData(oldp+40,(0xdU),32);
    }
}
