`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:40:47 11/29/2023 
// Design Name: 
// Module Name:    DE 
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
`define DE_n_extend 3'b000
`define DE_un_b_extend 3'b001
`define DE_b_extend 3'b010
`define DE_un_h_extend 3'b011
`define DE_h_extend 3'b100
module DE(
    input [1:0] A,
    input [31:0] RDin,
    input [2:0] DE_op,

    output reg [31:0] RDout
    );

    reg [7:0] in_b;
    reg [15:0] in_h;
  
    always @(*) begin
        in_b = RDin [(7+8*A)-:8];
        in_h = RDin [(15+16*A[1])-:16];
        case (DE_op)
            `DE_n_extend: begin
                RDout = RDin;
            end
            `DE_un_b_extend: begin
                RDout = {{24{1'b0}},in_b};
            end
            `DE_b_extend: begin
                RDout = {{24{in_b[7]}},in_b};
            end
            `DE_un_h_extend: begin
                RDout = {{16{1'b0}},in_h};
            end
            `DE_h_extend: begin
                RDout = {{16{in_h[15]}},in_h};
            end
            default: begin
                RDout = RDin;
            end
        endcase
    end

endmodule
