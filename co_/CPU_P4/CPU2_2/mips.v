`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:40:44 11/05/2023 
// Design Name: 
// Module Name:    mips 
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
module mips(
    input clk,
    input reset
    );
    //mips中 模块实例化命名遵循"模块名_x"形式
    //取指 译码 执行 访存 写回

    wire [31:0] PC;
    wire [31:0] PC_4;
    wire [31:0] NPC;
    PC PC_1(
        .clk(clk),
        .reset(reset),
        .NPC(NPC),
        .PC(PC)
    );
//////////////////////////////////////////////////////////////////////////////////
    wire [31:0] instruction;
    wire [5:0] Op;
    wire [5:0] Func;
    wire [4:0] rs;
    wire [4:0] rt;
    wire [4:0] rd;
    wire [25:0] instr_index;
    wire [15:0] Imm;
    IM IM_1(
        .PC(PC),
        .instruction(instruction),
        .Op(Op),
        .Func(Func),
        .rs(rs),
        .rt(rt),
        .rd(rd),
        .instr_index(instr_index),
        .Imm(Imm)
    );
//////////////////////////////////////////////////////////////////////////////////
    wire Branch;
    wire RegWriteByC;
    wire [1:0] WriteAofReg;
    wire [1:0] WriteDofReg;
    wire MemRead;
    wire MemWriteByC;
    wire [2:0] ALUOp;
    wire [1:0] ExtendSel;
    wire ALUB;
    wire jal_flag;
    wire jr_flag;
    ControlUnit ControlUnit_1(
        .Op(Op),
        .Func(Func),
        .Branch(Branch),
        .RegWriteByC(RegWriteByC),
        .WriteAofReg(WriteAofReg),
        .WriteDofReg(WriteDofReg),
        .MemRead(MemRead),
        .MemWriteByC(MemWriteByC),
        .ALUOp(ALUOp),
        .ExtendSel(ExtendSel),
        .ALUB(ALUB),
        .jal_flag(jal_flag),
        .jr_flag(jr_flag)
    );

    wire RegWrite;
    wire MemWrite;
    assign RegWrite = (instruction == 32'b0) ? 1'b0 : RegWriteByC;
    assign MemWrite = (instruction == 32'b0) ? 1'b0 : MemWriteByC;
//////////////////////////////////////////////////////////////////////////////////
    wire [31:0] SignExt;
    EXT EXT_1(
        .extendSignal(ExtendSel),
        .in(Imm),
        .out(SignExt)
    );

    wire [31:0] RD1;
    wire [31:0] RD2;
    wire zero;
    wire [31:0] ALU_result;
    wire [31:0] B = (ALUB == 0) ? RD2 : SignExt;
    ALU ALU_1(
        .A(RD1),
        .B(B),
        .ALUOp(ALUOp),
        .zero(zero),
        .ALU_result(ALU_result)
    );
//////////////////////////////////////////////////////////////////////////////////
    wire [4:0] RegAdder;
    wire [31:0] RegData;
    wire [31:0] DMRD;
    wire [31:0] PC_RD1_jr;
    assign RegAdder = (WriteAofReg == 2'b00) ? rt :
                        (WriteAofReg == 2'b01) ? rd : 
                        (WriteAofReg == 2'b10) ? 31 : 0;
    assign RegData = (WriteDofReg == 2'b00) ? ALU_result :
                    (WriteDofReg == 2'b01) ? DMRD :
                    (WriteDofReg == 2'b10) ? {Imm, {16{1'b0}}} : PC_4;
    GRF GRF_1(
        .clk(clk),
        .reset(reset),
        .WE(RegWrite),
        .WA(RegAdder),
        .WD(RegData),
        .RA1(rs),
        .RA2(rt),
        .PC(PC),
        .RD1(RD1),
        .RD2(RD2),
        .PC_RD1_jr(PC_RD1_jr)
    );
//////////////////////////////////////////////////////////////////////////////////
    wire [11:0] MemAdder = ALU_result[13:2];
    wire [31:0] MemData = RD2;
    DM DM_1(
    .clk(clk),
    .reset(reset),
    .MemWrite(MemWrite),
    .A(MemAdder),
    .D(MemData),
    .PC(PC),
    .RD(DMRD)
    );
//////////////////////////////////////////////////////////////////////////////////
    NPC NPC_1(
        .PC(PC),
        .zero(zero),
        .Branch(Branch),
        .SignExt(SignExt),
        .instr_index(instr_index),
        .jr_flag(jr_flag),
        .PC_RD1_jr(PC_RD1_jr),
        .jal_flag(jal_flag),
        .PC_4(PC_4),
        .NPC(NPC)
    );
endmodule
