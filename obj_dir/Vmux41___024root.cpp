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
    vlSelf->y = (1U & (((((IData)((3U != (3U & (IData)(vlSelf->s)))) 
                          | (IData)(vlSelf->a)) & ((IData)(
                                                           (1U 
                                                            != 
                                                            (3U 
                                                             & (IData)(vlSelf->s)))) 
                                                   | ((IData)(vlSelf->a) 
                                                      >> 1U))) 
                        & ((IData)((2U != (3U & (IData)(vlSelf->s)))) 
                           | ((IData)(vlSelf->a) >> 2U))) 
                       & (((IData)(vlSelf->s) | ((IData)(vlSelf->s) 
                                                 >> 1U)) 
                          | ((IData)(vlSelf->a) >> 3U))));
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
    if (VL_UNLIKELY((vlSelf->a & 0xf0U))) {
        Verilated::overWidthError("a");}
    if (VL_UNLIKELY((vlSelf->s & 0xfcU))) {
        Verilated::overWidthError("s");}
}
#endif  // VL_DEBUG
