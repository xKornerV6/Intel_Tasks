// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VQUADRA_TOP_H_
#define _VQUADRA_TOP_H_  // guard

#include "verilated.h"

//==========

class Vquadra_top__Syms;
class Vquadra_top_VerilatedVcd;


//----------

VL_MODULE(Vquadra_top) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(rst_b,0,0);
    VL_IN8(x_dv,0,0);
    VL_OUT8(y_dv,0,0);
    VL_IN(x,23,0);
    VL_OUT(y,24,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    CData/*0:0*/ quadra_top__DOT__dv_p0;
    CData/*0:0*/ quadra_top__DOT__dv_p1;
    CData/*0:0*/ quadra_top__DOT__dv_p2;
    SData/*12:0*/ quadra_top__DOT__c_lut;
    IData/*16:0*/ quadra_top__DOT__x2_q;
    IData/*23:0*/ quadra_top__DOT__a_lut;
    IData/*18:0*/ quadra_top__DOT__b_lut;
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*6:0*/ __Vtableidx1;
    CData/*6:0*/ __Vtableidx2;
    CData/*6:0*/ __Vtableidx3;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vm_traceActivity[3];
    static IData/*23:0*/ __Vtable1_quadra_top__DOT__a_lut[128];
    static IData/*18:0*/ __Vtable2_quadra_top__DOT__b_lut[128];
    static SData/*12:0*/ __Vtable3_quadra_top__DOT__c_lut[128];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vquadra_top__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vquadra_top);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    Vquadra_top(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vquadra_top();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(Vquadra_top__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vquadra_top__Syms* symsp, bool first);
  private:
    static QData _change_request(Vquadra_top__Syms* __restrict vlSymsp);
    static QData _change_request_1(Vquadra_top__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__3(Vquadra_top__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(Vquadra_top__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(Vquadra_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(Vquadra_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__1(Vquadra_top__Syms* __restrict vlSymsp);
    static void _settle__TOP__2(Vquadra_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
  private:
    static void traceChgSub0(void* userp, VerilatedVcd* tracep);
    static void traceChgTop0(void* userp, VerilatedVcd* tracep);
    static void traceCleanup(void* userp, VerilatedVcd* /*unused*/);
    static void traceFullSub0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceFullTop0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitSub0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitTop(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    void traceRegister(VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
