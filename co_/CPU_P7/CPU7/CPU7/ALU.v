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
`define AND 4'b0000
`define OR 4'b0001
`define ADD 4'b0010
`define SUB 4'b0011
`define LUI 4'b0100
`define SLT 4'b0101
`define SLTU 4'b0110
`define ADDI 4'b0111
module ALU(
    input [31:0] A,
    input [31:0] B,
    input [3:0] ALU_op,
    
    output ALU_OverFlow,
    output [31:0] ALU_result
    );

    wire [32:0]tempAdd = {A[31], A} + {B[31], B};
    wire [32:0]tempSub = {A[31], A} - {B[31], B};
    wire [32:0]tempAddi = $signed({A[31], A}) + $signed({B[31], B});
    assign ALU_OverFlow = (ALU_op == `ADD && tempAdd[32] ^ tempAdd[31] == 1'b1) ? 1'b1 :
                        (ALU_op == `ADDI && tempAdd[32] ^ tempAdd[31] == 1'b1) ? 1'b1 :
                        (ALU_op == `SUB && tempSub[32] ^ tempSub[31] == 1'b1) ? 1'b1 : 1'b0;

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
        `SLT: begin
            result = $signed(A) < $signed(B);
        end
        `SLTU: begin
            result = A < B;
        end
        `ADDI: begin
            result = $signed(A) + $signed(B);
        end
        default: begin
            result = 32'b0;
        end   
        endcase
    end

    assign ALU_result = result;

endmodule
