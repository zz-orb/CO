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
`define W_ALU_result 3'b000
`define W_MDU_result 3'b001
`define W_bridge_RD 3'b010
`define W_pc_8 3'b011
`define W_CP0_RD 3'b100
module MUX_GRF_WD(
    input [2:0] Sel_GRF_WD,
    input [31:0] W_ALU_result,
    input [31:0] W_bridge_RD,
    input [31:0] pc,
    input [31:0] W_MDU_result,
    input [31:0] W_CP0_RD,
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
            `W_bridge_RD: begin
                GRF_WD = W_bridge_RD;
            end
            `W_pc_8: begin
                GRF_WD = pc + 8;
            end
            `W_CP0_RD: begin
                GRF_WD = W_CP0_RD;
            end
        endcase
    end

endmodule
