`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:24:00 11/12/2023 
// Design Name: 
// Module Name:    ControlUnit 
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
`define R_type_Op 6'b000000
`define lw_Op 6'b100011
`define sw_Op 6'b101011
`define beq_Op 6'b000100
`define ori_Op 6'b001101
`define lui_Op 6'b001111
`define jal_Op 6'b000011
//R_type
`define R_add_Func 6'b100000
`define R_sub_Func 6'b100010
`define R_jr_Func 6'b001000
//ALUOP
`define AND 3'b000
`define OR 3'b001
`define ADD 3'b010
`define SUB 3'b011

module ControlUnit(
    input [5:0] Op,
    input [5:0] Func,
    output Branch,
    output RegWriteByC,
    output [1:0] WriteAofReg,
    output [1:0] WriteDofReg,
    output MemRead,
    output MemWriteByC,
    output [2:0] ALUOp,
    output [1:0] ExtendSel,
    output ALUB,
    output jal_flag,
    output jr_flag
    );

    wire add,sub,lw,sw,beq,ori,lui,jal,jr,R_type;
    assign R_type = (Op == `R_type_Op) ? 1'b1 : 1'b0;
    assign add = (Op == `R_type_Op && Func == `R_add_Func) ? 1'b1 : 1'b0;
    assign sub = (Op == `R_type_Op && Func == `R_sub_Func) ? 1'b1 : 1'b0;
    assign jr = (Op == `R_type_Op && Func == `R_jr_Func) ? 1'b1 : 1'b0;
    assign lw = (Op == `lw_Op) ? 1'b1 : 1'b0;
    assign sw = (Op == `sw_Op) ? 1'b1 : 1'b0;
    assign beq = (Op == `beq_Op) ? 1'b1 : 1'b0;
    assign ori = (Op == `ori_Op) ? 1'b1 : 1'b0;
    assign lui = (Op == `lui_Op) ? 1'b1 : 1'b0;
    assign jal = (Op == `jal_Op)  ? 1'b1 : 1'b0;

    assign Branch =  beq ? 1'b1 : 1'b0;
    assign RegWriteByC = (R_type | lw | lui | ori | jal) ? 1'b1 : 1'b0;
    assign WriteAofReg[0] = R_type ? 1'b1 : 1'b0;
    assign WriteAofReg[1] = jal ? 1'b1 : 1'b0;
    assign WriteDofReg[0] = (lw | jal) ? 1'b1 : 1'b0;
    assign WriteDofReg[1] = (lui | jal) ? 1'b1 : 1'b0;
    assign MemRead = sw ? 1'b1 : 1'b0;
    assign MemWriteByC = sw ? 1'b1 : 1'b0;
    assign ALUOp = add ? `ADD : 
                    sub ? `SUB : 
                    lw ? `ADD :
                    sw ? `ADD : 
                    beq ? `SUB :
                    ori ? `OR : `ADD;
    assign ExtendSel[1] = 1'b0;
    assign ExtendSel[0] = (lw | sw | beq) ? 1'b1 : 1'b0;
    assign ALUB = (lw | sw | ori) ? 1'b1 : 1'b0;
    assign jal_flag = jal ? 1'b1 : 1'b0;
    assign jr_flag = jr ? 1'b1 : 1'b0;
endmodule
