`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:25:05 11/05/2023 
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
`define zero 2'b00
`define sign 2'b01  
module EXT(
    input [1:0] extendSignal,
    input [15:0] in,
    output [31:0] out
    );

    reg [31:0]_out;
    always @(*) begin
        case (extendSignal)
            `zero: begin
                _out = {{16{1'b0}}, in};
            end
            `sign: begin
                _out = {{16{in[15]}}, in};
            end
        endcase
    end

    assign out = _out;
endmodule
