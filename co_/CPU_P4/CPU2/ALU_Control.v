`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:00:45 11/05/2023 
// Design Name: 
// Module Name:    ALU_Control 
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
//ALUOP
`define R_type_ALUOP 3'b010
`define beq_ALUOP 3'b001
`define ori_ALUOP 3'b011
//R_type
`define R_add_Func 6'b100000
`define R_sub_Func 6'b100010
`define R_jr_Func 6'b001000
module ALU_Control(
    input [5:0] Func,
    input [2:0] ALUOP,
    output reg [2:0] ALU_operation,
    output reg jr
    );
    
  always @(*) begin
    case (ALUOP)
        3'b000: begin
            ALU_operation = `ADD;
            jr = 1'b0;
        end
        3'b001: begin
            ALU_operation = `OR;
            jr = 1'b0;       
        end
        3'b011: begin
            ALU_operation = `SUB;
            jr = 1'b0;       
        end
        `R_type_ALUOP: begin
            case (Func)
            `R_add_Func: begin
                ALU_operation = `ADD;
                jr = 1'b0;       
            end
            `R_sub_Func: begin
                ALU_operation = `SUB;
                jr = 1'b0;       
            end
            `R_jr_Func: begin
                jr = 1'b1;
            end
            default: begin
            jr = 1'b0;
            end
            endcase
        end
        default: begin
            jr = 1'b0;
        end
    endcase
  end

endmodule
