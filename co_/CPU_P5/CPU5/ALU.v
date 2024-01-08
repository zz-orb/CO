`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:13:18 11/23/2023 
// Design Name: 
// Module Name:    ALU 
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
`define AND 3'b000
`define OR 3'b001
`define ADD 3'b010
`define SUB 3'b011
`define LUI 3'b100
module ALU(
    input [31:0] A,
    input [31:0] B,
    input [2:0] ALU_op,
    
    output [31:0] ALU_result
    );

    reg [31:0] result;
    always @(*) begin
        case (ALU_op)
        `AND: begin
            result = A & B;
        end
        `OR: begin
            result = A | B;
        end
        `ADD: begin
            result = A + B;
        end
        `SUB: begin
            result = A - B;
        end
		  `LUI: begin
				result = B;
		  end
        default: begin
            result = 32'b0;
        end   
        endcase
    end

    assign ALU_result = result;

endmodule
