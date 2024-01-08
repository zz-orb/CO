`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:46:08 11/23/2023 
// Design Name: 
// Module Name:    MREG 
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
module MREG(
    input clk,
    input reset,
    input Req,
    input [31:0] E_instr,
    input [31:0] E_pc,
    input [31:0] E_GRF_RD2,
    input [4:0] E_GRF_WA,
    input [31:0] E_ALU_result,
    input E_ALU_OverFlow,
    input [31:0] E_MDU_result,
    input [1:0] Tnew_E,
    input E_BD,
    input Ov,
    input AdEL_E,
    input AdES_E,
    input [4:0] E_ExcCode,

    output reg [31:0] M_instr,
    output reg [31:0] M_pc,
    output reg [31:0] M_GRF_RD2,
    output reg [4:0] M_GRF_WA,
    output reg [31:0] M_ALU_result,
    output reg M_ALU_OverFlow,
    output reg [31:0] M_MDU_result,
    output reg [1:0] Tnew_M,
    output reg M_BD,
    output reg [4:0] M_ExcCode
    );

    always @(posedge clk) begin
        if (reset | Req) begin
            M_instr <= 32'b0;
            M_pc <= Req ? 32'h0000_4180 : 0;
            M_GRF_RD2 <= 32'b0;
            M_GRF_WA <= 5'b0;
            M_ALU_result <= 32'b0;
            M_MDU_result <= 32'b0;
            M_BD <= 0;
            M_ExcCode <= 5'b0;
        end
        else begin
            M_instr <= E_instr;
            M_pc <= E_pc;
            M_GRF_RD2 <= E_GRF_RD2;
            M_GRF_WA <= E_GRF_WA;
            M_ALU_result <= E_ALU_result;
            M_ALU_OverFlow <= E_ALU_OverFlow;
            M_MDU_result <= E_MDU_result;
            Tnew_M <= (Tnew_E > 0) ? Tnew_E - 1 : 0;
            M_BD <= E_BD;
            M_ExcCode <= (|E_ExcCode) ? E_ExcCode :
                        Ov ? 5'd12 :
                        AdEL_E ? 5'd4 : 
                        AdES_E ? 5'd5 : 5'd0;
        end
    end
endmodule
