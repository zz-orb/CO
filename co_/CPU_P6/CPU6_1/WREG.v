`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:55:36 11/23/2023 
// Design Name: 
// Module Name:    WREG 
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
module WREG(
    input clk,
    input reset,
    input [31:0] M_instr,
    input [31:0] M_pc,
    input [31:0] M_DM_RD,
    input [4:0] M_GRF_WA,
    input [31:0] M_ALU_result,
    input [31:0] M_MDU_result,
    input [1:0] Tnew_M,

    output reg [31:0] W_instr,
    output reg [31:0] W_pc,
    output reg [31:0] W_DM_RD,
    output reg [4:0] W_GRF_WA,
    output reg [31:0] W_ALU_result,
    output reg [31:0] W_MDU_result,
    output reg [1:0] Tnew_W

    );

    always @(posedge clk) begin
        if (reset) begin
            W_instr <= 32'b0;
            W_pc <= 32'b0;
            W_DM_RD <= 32'b0;
            W_GRF_WA <= 5'b0;
            W_ALU_result <= 32'b0;
            W_MDU_result <= 32'b0;
        end
        else begin
            W_instr <= M_instr;
            W_pc <= M_pc;
            W_DM_RD <= M_DM_RD;
            W_GRF_WA <= M_GRF_WA;
            W_ALU_result <= M_ALU_result;
            W_MDU_result <= M_MDU_result;
            Tnew_W <= (Tnew_M > 0) ? Tnew_M - 1 : 0;    
        end
    end
endmodule
