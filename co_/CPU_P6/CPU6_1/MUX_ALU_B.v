`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    01:26:29 11/24/2023 
// Design Name: 
// Module Name:    MUX_ALU_B 
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
module MUX_ALU_B(
    input Sel_ALU_B,
    input [31:0] E_GRF_RD2,
    input [31:0] E_ext,
    output reg [31:0] ALU_B
    );

    always @( *) begin
        case (Sel_ALU_B)
            1'b0: begin
                ALU_B = E_GRF_RD2;
            end
            1'b1: begin
                ALU_B = E_ext;
            end
        endcase
    end
endmodule
