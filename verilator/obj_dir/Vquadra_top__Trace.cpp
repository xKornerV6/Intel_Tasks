// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vquadra_top__Syms.h"


void Vquadra_top::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    Vquadra_top__Syms* __restrict vlSymsp = static_cast<Vquadra_top__Syms*>(userp);
    Vquadra_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void Vquadra_top::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    Vquadra_top__Syms* __restrict vlSymsp = static_cast<Vquadra_top__Syms*>(userp);
    Vquadra_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+0,(vlTOPp->quadra_top__DOT__dv_p0));
            tracep->chgBit(oldp+1,(vlTOPp->quadra_top__DOT__dv_p1));
            tracep->chgBit(oldp+2,(vlTOPp->quadra_top__DOT__dv_p2));
            tracep->chgIData(oldp+3,(vlTOPp->quadra_top__DOT__x2_q),17);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[2U])) {
            tracep->chgIData(oldp+4,(vlTOPp->quadra_top__DOT__a_lut),24);
            tracep->chgIData(oldp+5,(vlTOPp->quadra_top__DOT__b_lut),19);
            tracep->chgSData(oldp+6,(vlTOPp->quadra_top__DOT__c_lut),13);
            tracep->chgIData(oldp+7,((0x1ffffffU & 
                                      (VL_EXTENDS_II(25,24, vlTOPp->quadra_top__DOT__a_lut) 
                                       << 1U))),25);
        }
        tracep->chgBit(oldp+8,(vlTOPp->clk));
        tracep->chgBit(oldp+9,(vlTOPp->rst_b));
        tracep->chgIData(oldp+10,(vlTOPp->x),24);
        tracep->chgBit(oldp+11,(vlTOPp->x_dv));
        tracep->chgIData(oldp+12,(vlTOPp->y),25);
        tracep->chgBit(oldp+13,(vlTOPp->y_dv));
        tracep->chgCData(oldp+14,((0x7fU & (vlTOPp->x 
                                            >> 0x11U))),7);
        tracep->chgIData(oldp+15,((0x1ffffU & vlTOPp->x)),17);
        tracep->chgIData(oldp+16,((0x1ffffffU & ((IData)(0x28U) 
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
        tracep->chgQData(oldp+17,((0x3ffffffffULL & 
                                   ((QData)((IData)(
                                                    (0x1ffffU 
                                                     & vlTOPp->x))) 
                                    * (QData)((IData)(
                                                      (0x1ffffU 
                                                       & vlTOPp->x)))))),34);
        tracep->chgQData(oldp+19,((0xfffffffffULL & 
                                   VL_MULS_QQQ(36,36,36, 
                                               (0xfffffffffULL 
                                                & VL_EXTENDS_QI(36,19, vlTOPp->quadra_top__DOT__b_lut)), 
                                               (0xfffffffffULL 
                                                & VL_EXTENDS_QI(36,18, 
                                                                (0x1ffffU 
                                                                 & vlTOPp->x)))))),36);
        tracep->chgQData(oldp+21,((0x7fffffffffffULL 
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
        tracep->chgIData(oldp+23,((0x1ffffffU & (IData)(
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
        tracep->chgIData(oldp+24,((0x1ffffffU & (IData)(
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
    }
}

void Vquadra_top::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    Vquadra_top__Syms* __restrict vlSymsp = static_cast<Vquadra_top__Syms*>(userp);
    Vquadra_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
        vlTOPp->__Vm_traceActivity[2U] = 0U;
    }
}
