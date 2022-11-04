// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__traceInitSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vtop___024root__traceInitTop(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vtop___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vtop___024root__traceInitSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBus(c+1,"data_in0", false,-1, 1,0);
        tracep->declBus(c+2,"data_in1", false,-1, 1,0);
        tracep->declBus(c+3,"data_in2", false,-1, 1,0);
        tracep->declBus(c+4,"data_in3", false,-1, 1,0);
        tracep->declBus(c+5,"sel", false,-1, 1,0);
        tracep->declBus(c+6,"data_out", false,-1, 1,0);
        tracep->declBus(c+11,"top DW", false,-1, 31,0);
        tracep->declBus(c+1,"top data_in0", false,-1, 1,0);
        tracep->declBus(c+2,"top data_in1", false,-1, 1,0);
        tracep->declBus(c+3,"top data_in2", false,-1, 1,0);
        tracep->declBus(c+4,"top data_in3", false,-1, 1,0);
        tracep->declBus(c+5,"top sel", false,-1, 1,0);
        tracep->declBus(c+6,"top data_out", false,-1, 1,0);
        tracep->declBit(c+7,"top sel_in0", false,-1);
        tracep->declBit(c+8,"top sel_in1", false,-1);
        tracep->declBit(c+9,"top sel_in2", false,-1);
        tracep->declBit(c+10,"top sel_in3", false,-1);
    }
}

void Vtop___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vtop___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vtop___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vtop___024root__traceRegister(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vtop___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vtop___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vtop___024root__traceCleanup, vlSelf);
    }
}

void Vtop___024root__traceFullSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vtop___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vtop___024root* const __restrict vlSelf = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vtop___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vtop___024root__traceFullSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullCData(oldp+1,(vlSelf->data_in0),2);
        tracep->fullCData(oldp+2,(vlSelf->data_in1),2);
        tracep->fullCData(oldp+3,(vlSelf->data_in2),2);
        tracep->fullCData(oldp+4,(vlSelf->data_in3),2);
        tracep->fullCData(oldp+5,(vlSelf->sel),2);
        tracep->fullCData(oldp+6,(vlSelf->data_out),2);
        tracep->fullBit(oldp+7,((0U == (IData)(vlSelf->sel))));
        tracep->fullBit(oldp+8,((1U == (IData)(vlSelf->sel))));
        tracep->fullBit(oldp+9,((2U == (IData)(vlSelf->sel))));
        tracep->fullBit(oldp+10,((3U == (IData)(vlSelf->sel))));
        tracep->fullIData(oldp+11,(2U),32);
    }
}
