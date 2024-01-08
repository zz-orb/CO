`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:36:05 11/23/2023 
// Design Name: 
// Module Name:    HCU 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module HCU(
    input [4:0] D_GRF_RA1,
    input [4:0] D_GRF_RA2,
    input [4:0] E_GRF_RA1,
    input [4:0] E_GRF_RA2,
    input [4:0] E_GRF_WA,
    input [4:0] E_instr_rd,
    input E_WE,

    input [4:0] M_GRF_RA2,
    input [4:0] M_GRF_WA, 
    input [4:0] M_instr_rd,
    input M_WE,

    input [4:0] W_GRF_WA,
    input W_WE,
    input [1:0] Tuse_rs,
    input [1:0] Tuse_rt,
    input [1:0] Tnew_E,
    input [1:0] Tnew_M,
    input [1:0] Tnew_W,
    input E_MDU_Start,
    input E_MDU_Busy,
    input D_md,
    input D_mf,
    input D_mt,
    input D_eret,
    input E_mtc0,
    input M_mtc0,
    
    output [1:0] FW_CMP_RD1_D,
    output [1:0] FW_CMP_RD2_D,
    output [1:0] FW_ALU_A_E,
    output [1:0] FW_ALU_B_E,
    output [1:0] FW_bridge_RD_M,
    output  stall
    );
	
    assign FW_CMP_RD1_D = ((D_GRF_RA1 == E_GRF_WA) && (Tnew_E === 2'b00) && E_WE && D_GRF_RA1 ) ? 2 :
                        ((D_GRF_RA1 == M_GRF_WA) && (Tnew_M === 2'b00) && M_WE && D_GRF_RA1 ) ? 1 : 0;
    assign FW_CMP_RD2_D = ((D_GRF_RA2 == E_GRF_WA) && (Tnew_E === 2'b00) && E_WE && D_GRF_RA2) ? 2 :
                        ((D_GRF_RA2 == M_GRF_WA) && (Tnew_M === 2'b00) && M_WE && D_GRF_RA2) ? 1 : 0; 
    assign FW_ALU_A_E = ((E_GRF_RA1 == M_GRF_WA) && (Tnew_M === 2'b00) && M_WE && E_GRF_RA1) ? 2 :
                        ((E_GRF_RA1 == W_GRF_WA) && (Tnew_W === 2'b00) && W_WE && E_GRF_RA1) ? 1 : 0;  
    assign FW_ALU_B_E = ((E_GRF_RA2 == M_GRF_WA) && (Tnew_M === 2'b00) && M_WE && E_GRF_RA2) ? 2 :
                        ((E_GRF_RA2 == W_GRF_WA) && (Tnew_W === 2'b00) && W_WE && E_GRF_RA2) ? 1 : 0;   
    assign FW_bridge_RD_M = ((M_GRF_RA2 == W_GRF_WA) && (Tnew_W === 2'b00) && W_WE && M_GRF_RA2) ? 1 : 0;  

    wire stall_rs_E = (Tuse_rs < Tnew_E) && (D_GRF_RA1 == E_GRF_WA) && E_WE && E_GRF_WA;
    wire stall_rs_M = (Tuse_rs < Tnew_M) && (D_GRF_RA1 == M_GRF_WA) && M_WE && M_GRF_WA;
    wire stall_rs = stall_rs_E || stall_rs_M;

    wire stall_rt_E = (Tuse_rt < Tnew_E) && (D_GRF_RA2 == E_GRF_WA) && E_WE && E_GRF_WA;
    wire stall_rt_M = (Tuse_rt < Tnew_M) && (D_GRF_RA2 == M_GRF_WA) && M_WE && M_GRF_WA;
    wire stall_rt = stall_rt_E || stall_rt_M;

    wire stall_eret = D_eret && ((E_mtc0 && (E_instr_rd == 5'd14)) || (M_mtc0 && (M_instr_rd == 5'd14)));
	
	assign stall = stall_rs || stall_rt || ((E_MDU_Start || E_MDU_Busy)&&(D_md || D_mf || D_mt)) || stall_eret;
endmodule
