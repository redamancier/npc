// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vmux41__Syms.h"


void Vmux41___024root__traceChgSub0(Vmux41___024root* vlSelf, VerilatedVcd* tracep);

void Vmux41___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vmux41___024root* const __restrict vlSelf = static_cast<Vmux41___024root*>(voidSelf);
    Vmux41__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vmux41___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void Vmux41___024root__traceChgSub0(Vmux41___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux41__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgCData(oldp+0,(vlSelf->data_in0),2);
        tracep->chgCData(oldp+1,(vlSelf->data_in1),2);
        tracep->chgCData(oldp+2,(vlSelf->data_in2),2);
        tracep->chgCData(oldp+3,(vlSelf->data_in3),2);
        tracep->chgCData(oldp+4,(vlSelf->sel),2);
        tracep->chgCData(oldp+5,(vlSelf->data_out),2);
        tracep->chgBit(oldp+6,((0U == (IData)(vlSelf->sel))));
        tracep->chgBit(oldp+7,((1U == (IData)(vlSelf->sel))));
        tracep->chgBit(oldp+8,((2U == (IData)(vlSelf->sel))));
        tracep->chgBit(oldp+9,((3U == (IData)(vlSelf->sel))));
    }
}

void Vmux41___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    Vmux41___024root* const __restrict vlSelf = static_cast<Vmux41___024root*>(voidSelf);
    Vmux41__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        __Vm_traceActivity[0U] = 0U;
    }
}
