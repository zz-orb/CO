`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:20:31 11/24/2023 
// Design Name: 
// Module Name:    MUX_GRF_WD 
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
`define W_ALU_result 2'b00
`define W_MDU_result 2'b01
`define W_DM_RD 2'b10
`define W_pc_8 2'b11
module MUX_GRF_WD(
    input [1:0] Sel_GRF_WD,
    input [31:0] W_ALU_result,
    input [31:0] W_DM_RD,
    input [31:0] pc,
    input [31:0] W_MDU_result,
    output reg [31:0] GRF_WD
    );

    always @( *) begin
        case (Sel_GRF_WD)
            `W_ALU_result: begin
                GRF_WD = W_ALU_result;
            end
            `W_MDU_result: begin
                GRF_WD = W_MDU_result;
            end
            `W_DM_RD: begin
                GRF_WD = W_DM_RD;
            end
            `W_pc_8: begin
                GRF_WD = pc + 8;
            end
        endcase
    end

endmodule
