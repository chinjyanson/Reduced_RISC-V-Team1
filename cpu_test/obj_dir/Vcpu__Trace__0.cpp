// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcpu__Syms.h"


void Vcpu___024root__trace_chg_sub_0(Vcpu___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vcpu___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root__trace_chg_top_0\n"); );
    // Init
    Vcpu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcpu___024root*>(voidSelf);
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vcpu___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vcpu___024root__trace_chg_sub_0(Vcpu___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,(((0x13U == (0x7fU & vlSelf->cpu__DOT__Instr)) 
                              | (0x63U != (0x7fU & vlSelf->cpu__DOT__Instr)))));
        bufp->chgBit(oldp+1,(((0x13U != (0x7fU & vlSelf->cpu__DOT__Instr)) 
                              & ((0x63U == (0x7fU & vlSelf->cpu__DOT__Instr)) 
                                 & (vlSelf->cpu__DOT__Myred__DOT__ALUop1 
                                    == vlSelf->cpu__DOT__Myred__DOT__ALUop2)))));
        bufp->chgIData(oldp+2,(vlSelf->cpu__DOT__ImmOp),32);
        bufp->chgIData(oldp+3,(vlSelf->cpu__DOT__Instr),32);
        bufp->chgBit(oldp+4,((vlSelf->cpu__DOT__Myred__DOT__ALUop1 
                              == vlSelf->cpu__DOT__Myred__DOT__ALUop2)));
        bufp->chgIData(oldp+5,(vlSelf->cpu__DOT__PC),32);
        bufp->chgIData(oldp+6,(vlSelf->cpu__DOT__Myblue__DOT__next_PC),32);
        bufp->chgIData(oldp+7,(vlSelf->cpu__DOT__Myblue__DOT__pc),32);
        bufp->chgCData(oldp+8,(vlSelf->cpu__DOT__Mygreen__DOT__ImmSrc),2);
        bufp->chgCData(oldp+9,((0x7fU & vlSelf->cpu__DOT__Instr)),7);
        bufp->chgIData(oldp+10,((vlSelf->cpu__DOT__Myred__DOT__ALUop1 
                                 + vlSelf->cpu__DOT__Myred__DOT__ALUop2)),32);
        bufp->chgIData(oldp+11,(vlSelf->cpu__DOT__Myred__DOT__ALUop1),32);
        bufp->chgIData(oldp+12,(vlSelf->cpu__DOT__Myred__DOT__ALUop2),32);
        bufp->chgIData(oldp+13,(vlSelf->cpu__DOT__Myred__DOT__regOp2),32);
        bufp->chgCData(oldp+14,((0x1fU & (vlSelf->cpu__DOT__Instr 
                                          >> 0x14U))),5);
        bufp->chgCData(oldp+15,((0x1fU & (vlSelf->cpu__DOT__Instr 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+16,((0x1fU & (vlSelf->cpu__DOT__Instr 
                                          >> 7U))),5);
        bufp->chgIData(oldp+17,(vlSelf->cpu__DOT__Myred__DOT__register__DOT__reg_array[0]),32);
        bufp->chgIData(oldp+18,(vlSelf->cpu__DOT__Myred__DOT__register__DOT__reg_array[1]),32);
        bufp->chgIData(oldp+19,(vlSelf->cpu__DOT__Myred__DOT__register__DOT__reg_array[2]),32);
        bufp->chgIData(oldp+20,(vlSelf->cpu__DOT__Myred__DOT__register__DOT__reg_array[3]),32);
        bufp->chgIData(oldp+21,(vlSelf->cpu__DOT__Myred__DOT__register__DOT__reg_array[4]),32);
        bufp->chgIData(oldp+22,(vlSelf->cpu__DOT__Myred__DOT__register__DOT__reg_array[5]),32);
        bufp->chgIData(oldp+23,(vlSelf->cpu__DOT__Myred__DOT__register__DOT__reg_array[6]),32);
        bufp->chgIData(oldp+24,(vlSelf->cpu__DOT__Myred__DOT__register__DOT__reg_array[7]),32);
        bufp->chgIData(oldp+25,(vlSelf->cpu__DOT__Myred__DOT__register__DOT__reg_array[8]),32);
        bufp->chgIData(oldp+26,(vlSelf->cpu__DOT__Myred__DOT__register__DOT__reg_array[9]),32);
        bufp->chgIData(oldp+27,(vlSelf->cpu__DOT__Myred__DOT__register__DOT__reg_array[10]),32);
        bufp->chgIData(oldp+28,(vlSelf->cpu__DOT__Myred__DOT__register__DOT__reg_array[11]),32);
        bufp->chgIData(oldp+29,(vlSelf->cpu__DOT__Myred__DOT__register__DOT__reg_array[12]),32);
        bufp->chgIData(oldp+30,(vlSelf->cpu__DOT__Myred__DOT__register__DOT__reg_array[13]),32);
        bufp->chgIData(oldp+31,(vlSelf->cpu__DOT__Myred__DOT__register__DOT__reg_array[14]),32);
        bufp->chgIData(oldp+32,(vlSelf->cpu__DOT__Myred__DOT__register__DOT__reg_array[15]),32);
        bufp->chgIData(oldp+33,(vlSelf->cpu__DOT__Myred__DOT__register__DOT__reg_array[16]),32);
        bufp->chgIData(oldp+34,(vlSelf->cpu__DOT__Myred__DOT__register__DOT__reg_array[17]),32);
        bufp->chgIData(oldp+35,(vlSelf->cpu__DOT__Myred__DOT__register__DOT__reg_array[18]),32);
        bufp->chgIData(oldp+36,(vlSelf->cpu__DOT__Myred__DOT__register__DOT__reg_array[19]),32);
        bufp->chgIData(oldp+37,(vlSelf->cpu__DOT__Myred__DOT__register__DOT__reg_array[20]),32);
        bufp->chgIData(oldp+38,(vlSelf->cpu__DOT__Myred__DOT__register__DOT__reg_array[21]),32);
        bufp->chgIData(oldp+39,(vlSelf->cpu__DOT__Myred__DOT__register__DOT__reg_array[22]),32);
        bufp->chgIData(oldp+40,(vlSelf->cpu__DOT__Myred__DOT__register__DOT__reg_array[23]),32);
        bufp->chgIData(oldp+41,(vlSelf->cpu__DOT__Myred__DOT__register__DOT__reg_array[24]),32);
        bufp->chgIData(oldp+42,(vlSelf->cpu__DOT__Myred__DOT__register__DOT__reg_array[25]),32);
        bufp->chgIData(oldp+43,(vlSelf->cpu__DOT__Myred__DOT__register__DOT__reg_array[26]),32);
        bufp->chgIData(oldp+44,(vlSelf->cpu__DOT__Myred__DOT__register__DOT__reg_array[27]),32);
        bufp->chgIData(oldp+45,(vlSelf->cpu__DOT__Myred__DOT__register__DOT__reg_array[28]),32);
        bufp->chgIData(oldp+46,(vlSelf->cpu__DOT__Myred__DOT__register__DOT__reg_array[29]),32);
        bufp->chgIData(oldp+47,(vlSelf->cpu__DOT__Myred__DOT__register__DOT__reg_array[30]),32);
        bufp->chgIData(oldp+48,(vlSelf->cpu__DOT__Myred__DOT__register__DOT__reg_array[31]),32);
    }
    bufp->chgBit(oldp+49,(vlSelf->clk));
    bufp->chgBit(oldp+50,(vlSelf->rst));
    bufp->chgIData(oldp+51,(vlSelf->a0),32);
    bufp->chgIData(oldp+52,(vlSelf->instr2),32);
    bufp->chgCData(oldp+53,(vlSelf->aluctrl2),3);
    bufp->chgIData(oldp+54,(vlSelf->pc2),32);
}

void Vcpu___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root__trace_cleanup\n"); );
    // Init
    Vcpu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcpu___024root*>(voidSelf);
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
