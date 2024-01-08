`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:30:06 11/23/2023 
// Design Name: 
// Module Name:    CMP 
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
`define equal 3'b000
module CMP(
    input [31:0] RD1,
    input [31:0] RD2,
    input [2:0] CMP_op,
    output reg out
    );

    always @(*) begin
        case (CMP_op)
        `equal: begin
            if (RD1 == RD2) begin
                out = 1'b1;
            end
            else begin
                out = 1'b0;
            end
        end
        endcase
    end

endmodule
