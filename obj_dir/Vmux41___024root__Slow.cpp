// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmux41.h for the primary calling header

#include "Vmux41___024root.h"
#include "Vmux41__Syms.h"

//==========


void Vmux41___024root___ctor_var_reset(Vmux41___024root* vlSelf);

Vmux41___024root::Vmux41___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vmux41___024root___ctor_var_reset(this);
}

void Vmux41___024root::__Vconfigure(Vmux41__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vmux41___024root::~Vmux41___024root() {
}

void Vmux41___024root___eval_initial(Vmux41___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux41__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux41___024root___eval_initial\n"); );
}

void Vmux41___024root___combo__TOP__1(Vmux41___024root* vlSelf);

void Vmux41___024root___eval_settle(Vmux41___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux41__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux41___024root___eval_settle\n"); );
    // Body
    Vmux41___024root___combo__TOP__1(vlSelf);
}

void Vmux41___024root___final(Vmux41___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux41__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux41___024root___final\n"); );
}

void Vmux41___024root___ctor_var_reset(Vmux41___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux41__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux41___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->data_in0 = VL_RAND_RESET_I(2);
    vlSelf->data_in1 = VL_RAND_RESET_I(2);
    vlSelf->data_in2 = VL_RAND_RESET_I(2);
    vlSelf->data_in3 = VL_RAND_RESET_I(2);
    vlSelf->sel = VL_RAND_RESET_I(2);
    vlSelf->data_out = VL_RAND_RESET_I(2);
}
