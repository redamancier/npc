// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmux41.h for the primary calling header

#include "Vmux41___024root.h"
#include "Vmux41__Syms.h"

//==========

VL_INLINE_OPT void Vmux41___024root___combo__TOP__1(Vmux41___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux41__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux41___024root___combo__TOP__1\n"); );
    // Body
    vlSelf->data_out = (((((- (IData)((0U == (IData)(vlSelf->sel)))) 
                           & (IData)(vlSelf->data_in0)) 
                          | ((- (IData)((1U == (IData)(vlSelf->sel)))) 
                             & (IData)(vlSelf->data_in1))) 
                         | ((- (IData)((2U == (IData)(vlSelf->sel)))) 
                            & (IData)(vlSelf->data_in2))) 
                        | ((- (IData)((3U == (IData)(vlSelf->sel)))) 
                           & (IData)(vlSelf->data_in3)));
}

void Vmux41___024root___eval(Vmux41___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux41__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux41___024root___eval\n"); );
    // Body
    Vmux41___024root___combo__TOP__1(vlSelf);
}

QData Vmux41___024root___change_request_1(Vmux41___024root* vlSelf);

VL_INLINE_OPT QData Vmux41___024root___change_request(Vmux41___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux41__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux41___024root___change_request\n"); );
    // Body
    return (Vmux41___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vmux41___024root___change_request_1(Vmux41___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux41__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux41___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vmux41___024root___eval_debug_assertions(Vmux41___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux41__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux41___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->data_in0 & 0xfcU))) {
        Verilated::overWidthError("data_in0");}
    if (VL_UNLIKELY((vlSelf->data_in1 & 0xfcU))) {
        Verilated::overWidthError("data_in1");}
    if (VL_UNLIKELY((vlSelf->data_in2 & 0xfcU))) {
        Verilated::overWidthError("data_in2");}
    if (VL_UNLIKELY((vlSelf->data_in3 & 0xfcU))) {
        Verilated::overWidthError("data_in3");}
    if (VL_UNLIKELY((vlSelf->sel & 0xfcU))) {
        Verilated::overWidthError("sel");}
}
#endif  // VL_DEBUG
