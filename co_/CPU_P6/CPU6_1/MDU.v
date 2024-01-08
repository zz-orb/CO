`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:06:33 11/29/2023 
// Design Name: 
// Module Name:    MDU 
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
`define MDU_nop 4'b0000
`define MDU_mult 4'b0001
`define MDU_multu 4'b0010
`define MDU_div 4'b0011
`define MDU_divu 4'b0100
`define MDU_mfhi 4'b0101
`define MDU_mflo 4'b0110
`define MDU_mthi 4'b0111
`define MDU_mtlo 4'b1000
module MDU(
    input clk,
    input reset,
    input Start,
    input [3:0] MDU_op,
    input [31:0] A,
    input [31:0] B,

    output reg [31:0] HI, 
    output reg [31:0] LO,
    output [31:0] out,
    output reg Busy
    );

    reg [31:0] HI_temp;
    reg [31:0] LO_temp;

    reg [3:0] timecycle = 0;
    reg [3:0] max;

    assign out = (MDU_op == `MDU_mfhi) ? HI : 
                (MDU_op == `MDU_mflo) ? LO : 0;
    always @(posedge clk) begin
        if(reset) begin
            HI <= 0;
            LO <= 0;
            Busy <= 0;

            HI_temp <= 0;
            LO_temp <= 0;

            timecycle <= 0;
            max <= 0;
        end

        else if(Start == 1) begin
            case (MDU_op) 
            `MDU_mult: begin
                {HI_temp, LO_temp} <= $signed(A) * $signed(B);
		        max <= 5;
            end
            `MDU_multu: begin
                {HI_temp, LO_temp} <= A * B;
		        max <= 5;
            end
            `MDU_div: begin
                {HI_temp, LO_temp} <= {$signed(A) % $signed(B), $signed(A) / $signed(B)};
		        max <= 10;
            end
            `MDU_divu: begin
                {HI_temp, LO_temp} <= {A % B, A / B};
		        max <= 10;
            end
            endcase
            Busy <= 1'b1;
            timecycle <= 1;
        end

        else if(Busy == 1) begin
            if(timecycle == max) begin
                {HI, LO} <= {HI_temp, LO_temp};
                Busy <= 0;
            end
            else begin
                timecycle = timecycle + 1;
            end
        end

        else if(Busy == 0)begin
        case (MDU_op) 
            `MDU_mthi: begin
                HI <= A;
            end
            `MDU_mtlo: begin
                LO <= A;
            end
        endcase
        end
    end
endmodule
