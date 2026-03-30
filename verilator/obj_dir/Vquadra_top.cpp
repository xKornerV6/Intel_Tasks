// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vquadra_top.h for the primary calling header

#include "Vquadra_top.h"
#include "Vquadra_top__Syms.h"

//==========

void Vquadra_top::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vquadra_top::eval\n"); );
    Vquadra_top__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vquadra_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        vlSymsp->__Vm_activity = true;
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/home/user/Intel_Tasks/verilator/../rtl-model/quadra_top.sv", 3, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vquadra_top::_eval_initial_loop(Vquadra_top__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/home/user/Intel_Tasks/verilator/../rtl-model/quadra_top.sv", 3, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void Vquadra_top::_sequent__TOP__1(Vquadra_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top::_sequent__TOP__1\n"); );
    Vquadra_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->quadra_top__DOT__x2_q = (0x1ffffU & vlTOPp->x);
    if (vlTOPp->rst_b) {
        vlTOPp->y = (0x1ffffffU & ((IData)(0x28U) + 
                                   (((VL_EXTENDS_II(25,24, vlTOPp->quadra_top__DOT__a_lut) 
                                      << 1U) + (IData)(
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
                                    + (IData)((0x7fffffffffffULL 
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
                                                                                & vlTOPp->x))))))))), 0x22U))))));
        vlTOPp->quadra_top__DOT__dv_p2 = ((IData)(vlTOPp->quadra_top__DOT__dv_p1) 
                                          & 1U);
        vlTOPp->quadra_top__DOT__dv_p1 = ((IData)(vlTOPp->quadra_top__DOT__dv_p0) 
                                          & 1U);
        vlTOPp->quadra_top__DOT__dv_p0 = ((IData)(vlTOPp->x_dv) 
                                          & 1U);
    } else {
        vlTOPp->y = 0U;
        vlTOPp->quadra_top__DOT__dv_p2 = 0U;
        vlTOPp->quadra_top__DOT__dv_p1 = 0U;
        vlTOPp->quadra_top__DOT__dv_p0 = 0U;
    }
    vlTOPp->y_dv = vlTOPp->quadra_top__DOT__dv_p0;
}

VL_INLINE_OPT void Vquadra_top::_combo__TOP__3(Vquadra_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top::_combo__TOP__3\n"); );
    Vquadra_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vtableidx1 = (0x7fU & (vlTOPp->x >> 0x11U));
    vlTOPp->quadra_top__DOT__a_lut = vlTOPp->__Vtable1_quadra_top__DOT__a_lut
        [vlTOPp->__Vtableidx1];
    vlTOPp->__Vtableidx2 = (0x7fU & (vlTOPp->x >> 0x11U));
    vlTOPp->quadra_top__DOT__b_lut = vlTOPp->__Vtable2_quadra_top__DOT__b_lut
        [vlTOPp->__Vtableidx2];
    vlTOPp->__Vtableidx3 = (0x7fU & (vlTOPp->x >> 0x11U));
    vlTOPp->quadra_top__DOT__c_lut = vlTOPp->__Vtable3_quadra_top__DOT__c_lut
        [vlTOPp->__Vtableidx3];
}

void Vquadra_top::_eval(Vquadra_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top::_eval\n"); );
    Vquadra_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__1(vlSymsp);
        vlTOPp->__Vm_traceActivity[1U] = 1U;
    }
    vlTOPp->_combo__TOP__3(vlSymsp);
    vlTOPp->__Vm_traceActivity[2U] = 1U;
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
}

VL_INLINE_OPT QData Vquadra_top::_change_request(Vquadra_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top::_change_request\n"); );
    Vquadra_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData Vquadra_top::_change_request_1(Vquadra_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top::_change_request_1\n"); );
    Vquadra_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vquadra_top::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vquadra_top::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((rst_b & 0xfeU))) {
        Verilated::overWidthError("rst_b");}
    if (VL_UNLIKELY((x & 0xff000000U))) {
        Verilated::overWidthError("x");}
    if (VL_UNLIKELY((x_dv & 0xfeU))) {
        Verilated::overWidthError("x_dv");}
}
#endif  // VL_DEBUG
