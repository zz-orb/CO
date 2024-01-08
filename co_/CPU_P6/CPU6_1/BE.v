`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:21:14 11/29/2023 
// Design Name: 
// Module Name:    BE 
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
`define BE_nstore 2'b00
`define BE_sw 2'b01
`define BE_sh 2'b10
`define BE_sb 2'b11

module BE(
    input [1:0] A,
    input [31:0] Din,
    input [1:0] BE_op,

    output reg [3:0] byteen,
    output reg [31:0] Dout
    );

  always @(*) begin
    case (BE_op)
        `BE_nstore: begin
            byteen = 4'b0;
            Dout = Din;
        end
        `BE_sw: begin
            byteen = {4{1'b1}};
            Dout = Din;
        end
        `BE_sh: begin
            case(A[1]) 
                1'b0: begin
                    byteen = 4'b0011;
                    Dout = {{16{1'b0}},Din[15:0]};
                end
                1'b1: begin
                    byteen = 4'b1100;
                    Dout = {Din[15:0],{16{1'b0}}};
                end
            endcase
        end
        `BE_sb: begin
            case(A)
                2'b00: begin
                    byteen = 4'b0001;
                    Dout = {{24{1'b0}},Din[7:0]};
                end
                2'b01: begin
                    byteen = 4'b0010;
                    Dout = {{16{1'b0}},Din[7:0],{8{1'b0}}};
                end
                2'b10: begin
                    byteen = 4'b0100;
                    Dout = {{8{1'b0}},Din[7:0],{16{1'b0}}};
                end
                2'b11: begin
                    byteen = 4'b1000;
                    Dout = {Din[7:0],{24{1'b0}}};
                end
            endcase
        end
        default: begin
            byteen = 4'b0;
        end
    endcase
  end

endmodule
