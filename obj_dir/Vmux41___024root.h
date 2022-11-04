// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmux41.h for the primary calling header

#ifndef VERILATED_VMUX41___024ROOT_H_
#define VERILATED_VMUX41___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vmux41__Syms;
class Vmux41_VerilatedVcd;


//----------

VL_MODULE(Vmux41___024root) {
  public:

    // PORTS
    VL_IN8(data_in0,1,0);
    VL_IN8(data_in1,1,0);
    VL_IN8(data_in2,1,0);
    VL_IN8(data_in3,1,0);
    VL_IN8(sel,1,0);
    VL_OUT8(data_out,1,0);

    // INTERNAL VARIABLES
    Vmux41__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vmux41___024root);  ///< Copying not allowed
  public:
    Vmux41___024root(const char* name);
    ~Vmux41___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vmux41__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
