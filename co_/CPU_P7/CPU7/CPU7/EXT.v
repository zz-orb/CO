`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    08:26:53 11/23/2023 
// Design Name: 
// Module Name:    EXT 
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
`define zero_ext 2'b00
`define sign_ext 2'b01
`define lui_ext 2'b10  
module EXT(
    input [1:0] EXT_op,
    input [15:0] in,
    output [31:0] out
    );

    reg [31:0]_out;
    always @(*) begin
        case (EXT_op)
            `zero_ext: begin
                _out = {{16{1'b0}}, in};
            end
            `sign_ext: begin
                _out = {{16{in[15]}}, in};
            end
            `lui_ext: begin
                _out = {in,{16{1'b0}}};
            end
        endcase
    end

    assign out = _out;
endmodule