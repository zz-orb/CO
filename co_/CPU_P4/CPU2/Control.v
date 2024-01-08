`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:19:53 11/05/2023 
// Design Name: 
// Module Name:    Control 
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
`define R_type 6'b000000
`define lw 6'b100011
`define sw 6'b101011
`define beq 6'b000100
`define ori 6'b001101
`define lui 6'b001111
`define jal 6'b000011
module Control(
    input [5:0] Op,
    output reg Branch,
    output reg RegWriteByC,
    output reg [1:0] WriteAofReg,
    output reg [1:0] WriteDofReg,
    output reg MemRead,
    output reg MemWriteByC,
    output reg [2:0] ALUOP,
    output reg [1:0] ExtendSel,
    output reg ALUB,
    output reg jal
    );
    
  always @(*) begin
    case (Op)
    `R_type: begin
        Branch = 1'b0;
        RegWriteByC = 1'b1;
        WriteAofReg = 2'b01;
        WriteDofReg = 2'b00;
        MemRead = 1'b0;
        MemWriteByC = 1'b0;
        ALUOP = 3'b010;
        //ExtendSel
        ALUB = 1'b0;
        jal = 1'b0;
    end
    `lw: begin
        Branch = 1'b0;
        RegWriteByC = 1'b1;
        WriteAofReg = 2'b00;
        WriteDofReg = 2'b01;
        MemRead = 1'b1;
        MemWriteByC = 1'b0;
        ALUOP = 3'b000;
        ExtendSel = 2'b01;
        ALUB = 1'b1;
        jal = 1'b0;
    end
    `sw: begin
        Branch = 1'b0;
        RegWriteByC = 1'b0;
        //WriteAofReg
        //WriteDofReg
        MemRead = 1'b0;
        MemWriteByC = 1'b1;
        ALUOP = 3'b000;
        ExtendSel = 2'b01;
        ALUB = 1'b1;
        jal = 1'b0;
    end
    `beq: begin
        Branch = 1'b1;
        RegWriteByC = 1'b0;
        //WriteAofReg
        //WriteDofReg
        MemRead = 1'b0;
        MemWriteByC = 1'b0;
        ALUOP = 3'b011;
        ExtendSel = 2'b01;
        ALUB = 1'b0;
        jal = 1'b0;
    end
    `lui: begin
        Branch = 1'b0;
        RegWriteByC = 1'b1;
        WriteAofReg = 2'b00;
        WriteDofReg = 2'b10;
        MemRead = 1'b0;
        MemWriteByC = 1'b0;
        ALUOP = 3'bzzz;
        //ExtendSel
        //ALUB
        jal = 1'b0;
    end
    `ori: begin
        Branch = 1'b0;
        RegWriteByC = 1'b1;
        WriteAofReg = 2'b00;
        WriteDofReg = 2'b00;
        MemRead = 1'b0;
        MemWriteByC = 1'b0;
        ALUOP = 3'b001;
        ExtendSel = 2'b00;
        ALUB = 1'b1;
        jal = 1'b0;
    end
    `jal: begin
        Branch = 1'b0;
        RegWriteByC = 1'b1;
        WriteAofReg = 2'b10;
        WriteDofReg = 2'b11;
        MemRead = 1'b0;
        MemWriteByC = 1'b0;
        ALUOP = 3'bzzz;
        //ExtendSel
        //ALUB
        jal = 1'b1;
    end
    default: begin
        Branch = 1'b0;
        RegWriteByC = 1'b0;
        //WriteAofReg
        //WriteDofReg
        MemRead = 1'b0;
        MemWriteByC = 1'b0;
        ALUOP = 3'bzzz;
        //ExtendSel
        //ALUB
        jal = 1'b0;
    end
    endcase
  end
endmodule
