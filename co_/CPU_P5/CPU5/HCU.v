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
    input E_WE,
    input [4:0] M_GRF_RA2,
    input [4:0] M_GRF_WA, 
    input M_WE,
    input [4:0] W_GRF_WA,
    input W_WE,
    input [1:0] Tuse_rs,
    input [1:0] Tuse_rt,
    input [1:0] Tnew_E,
    input [1:0] Tnew_M,
    input [1:0] Tnew_W,
    
    output [1:0] FW_CMP_RD1_D,
    output [1:0] FW_CMP_RD2_D,
    output [1:0] FW_ALU_A_E,
    output [1:0] FW_ALU_B_E,
    output [1:0] FW_DM_RD_M,
    output reg stall
    );
	 initial begin
		stall = 1'b0;
	 end
    assign FW_CMP_RD1_D = ((D_GRF_RA1 == E_GRF_WA) && (Tnew_E === 2'b00) && E_WE && D_GRF_RA1 ) ? 2 :
                        ((D_GRF_RA1 == M_GRF_WA) && (Tnew_M === 2'b00) && M_WE && D_GRF_RA1 ) ? 1 : 0;
    assign FW_CMP_RD2_D = ((D_GRF_RA2 == E_GRF_WA) && (Tnew_E === 2'b00) && E_WE && D_GRF_RA2) ? 2 :
                        ((D_GRF_RA2 == M_GRF_WA) && (Tnew_M === 2'b00) && M_WE && D_GRF_RA2) ? 1 : 0; 
    assign FW_ALU_A_E = ((E_GRF_RA1 == M_GRF_WA) && (Tnew_M === 2'b00) && M_WE && E_GRF_RA1) ? 2 :
                        ((E_GRF_RA1 == W_GRF_WA) && (Tnew_W === 2'b00) && W_WE && E_GRF_RA1) ? 1 : 0;  
    assign FW_ALU_B_E = ((E_GRF_RA2 == M_GRF_WA) && (Tnew_M === 2'b00) && M_WE && E_GRF_RA2) ? 2 :
                        ((E_GRF_RA2 == W_GRF_WA) && (Tnew_W === 2'b00) && W_WE && E_GRF_RA2) ? 1 : 0;   
    assign FW_DM_RD_M = ((M_GRF_RA2 == W_GRF_WA) && (Tnew_W === 2'b00) && W_WE && M_GRF_RA2) ? 1 : 0;  

    wire stall_rs0_E1 = (Tuse_rs === 0) && (Tnew_E === 1) && (D_GRF_RA1 == E_GRF_WA) && E_WE && E_GRF_WA;
    wire stall_rs0_E2 = (Tuse_rs === 0) && (Tnew_E === 2) && (D_GRF_RA1 == E_GRF_WA) && E_WE && E_GRF_WA;
    wire stall_rs0_M1 = (Tuse_rs === 0) && (Tnew_M === 1) && (D_GRF_RA1 == M_GRF_WA) && M_WE && M_GRF_WA;
    wire stall_rs1_E2 = (Tuse_rs === 1) && (Tnew_E === 2) && (D_GRF_RA1 == E_GRF_WA) && E_WE && E_GRF_WA;
    wire stall_rs = stall_rs0_E1 || stall_rs0_E2 || stall_rs0_M1 || stall_rs1_E2;

    wire stall_rt0_E1 = (Tuse_rt === 0) && (Tnew_E === 1) && (D_GRF_RA2 == E_GRF_WA) && E_WE && E_GRF_WA;
    wire stall_rt0_E2 = (Tuse_rt === 0) && (Tnew_E === 2) && (D_GRF_RA2 == E_GRF_WA) && E_WE && E_GRF_WA;
    wire stall_rt0_M1 = (Tuse_rt === 0) && (Tnew_M === 1) && (D_GRF_RA2 == M_GRF_WA) && M_WE && M_GRF_WA;
    wire stall_rt1_E2 = (Tuse_rt === 1) && (Tnew_E === 2) && (D_GRF_RA2 == E_GRF_WA) && E_WE && E_GRF_WA;
    wire stall_rt = stall_rt0_E1 || stall_rt0_E2 || stall_rt0_M1 || stall_rt1_E2;
	
	 always @(*) begin
			stall = stall_rs || stall_rt;
	 end
endmodule
