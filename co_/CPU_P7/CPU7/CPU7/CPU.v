`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    07:34:27 11/23/2023 
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
//Sel
`define E_EXT_out 1'b0
`define E_pc_8 1'b1
`define M_ALU_result 2'b00
`define M_MDU_result 2'b01
`define M_pc_8 2'b10
`define W_ALU_result 3'b000
`define W_MDU_result 3'b001
`define W_bridge_RD 3'b010
`define W_pc_8 3'b011
`define W_CP0_RD 3'b100
//
`define StartInstr 32'h0000_3000
`define EndInstr 32'h0000_6FFF
`define StartAddrTC0 32'h0000_7F00
`define EndAddrTC0  32'h0000_7F0B
`define StartAddrTC1 32'h0000_7F10
`define EndAddrTC1 32'h0000_7F1B
`define StartAddrDM 32'h0000_0000
`define EndAddrDM 32'h0000_2FFF

module CPU(
    input clk,
    input reset,
    input [31:0] i_inst_rdata,
    input [31:0] m_bridge_rdata,
    input [5:0] HWInt,

    output [31:0] i_inst_addr,
    output [31:0] m_bridge_addr,
    output [31:0] m_bridge_wdata,
    output [3 :0] m_bridge_byteen,
    output [31:0] m_inst_addr,
    output w_grf_we,
    output [4:0] w_grf_addr,
    output [31:0] w_grf_wdata,
    output [31:0] w_inst_addr
);
/////////// Declarations /////////
//F
wire en;
wire stall;
assign en = (stall == 1'b1) ? 1'b0 : 1'b1;
assign clr_E = (stall == 1'b1) ? 1'b1 : 1'b0;
wire [31:0] npc;
wire [31:0] F_pc;
wire [31:0] F_pc_tem;
wire [31:0] F_instr;
wire F_BD;
//D
wire [31:0] D_pc;
wire [31:0] D_instr;
wire [5:0] D_instr_Op;
wire [5:0] D_instr_Func;
wire [4:0] D_instr_rs;
wire [4:0] D_instr_rt;
wire [4:0] D_instr_rd;
wire [25:0] D_instr_index;
wire [15:0] D_instr_Imm;

wire [2:0] NPC_op;
wire [2:0] CMP_op;
wire [1:0] EXT_op;

wire [1:0] Tuse_rs;
wire [1:0] Tuse_rt;
wire [1:0] Tnew_D;

wire [31:0] D_GRF_RD1;
wire [31:0] D_GRF_RD2;
wire D_CMP_out;
wire [4:0] D_GRF_WA;
wire [31:0] D_EXT_out;
wire D_md;
wire D_mf;
wire D_mt;
wire D_eret;
wire D_syscall;
wire D_RI;
wire D_BD;
wire D_B_J;
//E
wire [31:0] E_pc;
wire [31:0] E_instr;
wire [5:0] E_instr_Op;
wire [5:0] E_instr_Func;
wire [4:0] E_instr_rs;
wire [4:0] E_instr_rt;
wire [4:0] E_instr_rd;
wire [25:0] E_instr_index;
wire [15:0] E_instr_Imm;

wire E_RegWrite;
wire E_Sel_ALU_B;
wire Sel_E_out;
wire [31:0] E_out;

wire [3:0] ALU_op;
wire [3:0] MDU_op;

wire [1:0] Tnew_E;

wire [31:0] E_GRF_RD1;
wire [31:0] E_GRF_RD2;
wire [4:0] E_GRF_WA;
wire [31:0] E_EXT_out;
wire [31:0] E_ALU_result;
wire E_ALU_OverFlow;
wire [31:0] E_ALU_B;
wire E_MDU_Start;
wire E_MDU_Start_tem;
wire E_MDU_Busy;
wire [31:0] E_MDU_result;
wire [31:0] E_MDU_HI;
wire [31:0] E_MDU_LO;
wire E_mtc0;
wire E_BD;
wire E_load;
wire E_store;
wire E_ovinstr;
//M
wire [31:0] M_pc;
wire [31:0] M_instr;
wire [5:0] M_instr_Op;
wire [5:0] M_instr_Func;
wire [4:0] M_instr_rs;
wire [4:0] M_instr_rt;
wire [4:0] M_instr_rd;
wire [25:0] M_instr_index;
wire [15:0] M_instr_Imm;

wire M_RegWrite;
wire [1:0] Sel_M_out;
wire [31:0] M_out;
wire MemRead;
wire MemWrite;

wire CP0Write;

wire [1:0] BE_op;
wire [2:0] DE_op;

wire [1:0] Tnew_M;

wire [31:0] M_GRF_RD2;
wire [4:0] M_GRF_WA;
wire [31:0] M_bridge_RD_bef;
wire [31:0] M_bridge_RD;
wire [31:0] M_CP0_RD;
wire [31:0] M_ALU_result;
wire M_ALU_OverFlow;
wire [31:0] M_MDU_result;
wire M_eret;
wire M_mtc0;
wire M_BD;
wire M_RI;
wire [31:0] EPC;
wire Req;
//W
wire [31:0] W_pc;
wire [31:0] W_instr;
wire [5:0] W_instr_Op;
wire [5:0] W_instr_Func;
wire [4:0] W_instr_rs;
wire [4:0] W_instr_rt;
wire [4:0] W_instr_rd;
wire [25:0] W_instr_index;
wire [15:0] W_instr_Imm;

wire W_RegWrite;
wire [2:0] W_Sel_GRF_WD;
wire [2:0] Sel_W_out;
wire [31:0] W_out;

wire [1:0] Tnew_W;

wire [4:0] W_GRF_WA;
wire [31:0] W_bridge_RD;
wire [31:0] W_CP0_RD;
wire [31:0] W_ALU_result;
wire [31:0] W_MDU_result;
wire [31:0] W_GRF_WD;
//HCU
wire [1:0] FW_CMP_RD1_D;
wire [1:0] FW_CMP_RD2_D;
wire [1:0] FW_ALU_A_E;
wire [1:0] FW_ALU_B_E;
wire [1:0] FW_bridge_RD_M;
wire [31:0] D_GRF_RD1_f;
wire [31:0] D_GRF_RD2_f;
wire [31:0] E_GRF_RD1_f;
wire [31:0] E_GRF_RD2_f;
wire [31:0] M_GRF_RD2_f;
//ExcCode
wire AdEL_F,AdEL_E,AdEL_M;
wire AdES_E,AdES_M;
wire Syscall; 
wire RI;
wire Ov;

wire [4:0] D_ExcCode;
wire [4:0] E_ExcCode;
wire [4:0] M_ExcCode;
/**********  Stage_F  **********/
PC PC(
    .clk(clk),
    .reset(reset),
    .Req(Req),
    .en(en),
    .npc(npc),

    .pc(F_pc_tem)
);
assign i_inst_addr = F_pc;
assign F_pc = D_eret ? EPC : F_pc_tem;
assign F_instr = AdEL_F ? 32'b0 : i_inst_rdata;
assign AdEL_F = ((|F_pc[1:0]) | (F_pc < `StartInstr) | (F_pc > `EndInstr));
assign F_BD = D_B_J;
/**********  Stage_D  **********/
DREG DREG(
    .clk(clk),
	.reset(reset),
    .Req(Req),
    .en(en),
    .F_instr(F_instr),
    .F_pc(F_pc),
    .AdEL_F(AdEL_F),
	.F_BD(F_BD),

    .D_instr(D_instr),
    .D_pc(D_pc),
    .D_ExcCode(D_ExcCode),
	.D_BD(D_BD)
);
MCU DMCU(
    //input
    .pc(D_pc),
    .instr(D_instr),
    //output
    .Op(D_instr_Op),
    .Func(D_instr_Func),
    .rs(D_instr_rs),
    .rt(D_instr_rt),
    .rd(D_instr_rd),
    .instr_index(D_instr_index),
    .Imm(D_instr_Imm), 

    .GRF_WA(D_GRF_WA),
    
    .NPC_op(NPC_op),
    .CMP_op(CMP_op),
    .EXT_op(EXT_op),

    .md(D_md),
    .mf(D_mf),
    .mt(D_mt),
    .eret(D_eret),
    .syscall(D_syscall),

    .Tuse_rs(Tuse_rs),
    .Tuse_rt(Tuse_rt),
    .Tnew_D(Tnew_D),

    .RI(D_RI),
	.B_J(D_B_J)
);
assign Syscall = D_syscall ? 1'b1 : 1'b0;
assign RI = D_RI ? 1'b1 : 1'b0;
GRF GRF(
    .clk(clk),
    .reset(reset),
    .pc(W_pc),
    .WE(W_RegWrite),
    .WA(W_GRF_WA),
    .WD(W_GRF_WD),
    .RA1(D_instr_rs),
    .RA2(D_instr_rt),

    .RD1(D_GRF_RD1),
    .RD2(D_GRF_RD2)
);
assign w_grf_we = W_RegWrite;
assign w_grf_addr = W_GRF_WA;
assign w_grf_wdata = W_GRF_WD;
assign w_inst_addr = W_pc;
CMP CMP(
    .RD1(D_GRF_RD1_f),
    .RD2(D_GRF_RD2_f),
    .CMP_op(CMP_op),
    .out(D_CMP_out)
);
EXT EXT(
    .EXT_op(EXT_op),
    .in(D_instr_Imm),
    .out(D_EXT_out)
);
NPC NPC(
    .F_pc(F_pc),
    .D_pc(D_pc),
    .judge_b(D_CMP_out),
    .NPC_op(NPC_op),
    .instr_offset_ext(D_EXT_out),
    .instr_index(D_instr_index),
    .pc_rs(D_GRF_RD1_f),
    .pc_EPC(EPC),

    .npc(npc)
);
/**********  Stage_E  **********/
EREG EREG(
    .clk(clk),
	.reset(reset),
    .Req(Req),
    .stall(clr_E),
    .D_instr(D_instr),
    .D_pc(D_pc),
    .D_GRF_RD1(D_GRF_RD1_f),
    .D_GRF_RD2(D_GRF_RD2_f),
    .D_GRF_WA(D_GRF_WA),
    .D_EXT_out(D_EXT_out),
    .Tnew_D(Tnew_D),
    .D_BD(D_BD),
    .D_ExcCode(D_ExcCode),
    .RI(RI),
    .Syscall(Syscall),

    .E_instr(E_instr),
    .E_pc(E_pc),
    .E_GRF_RD1(E_GRF_RD1),
    .E_GRF_RD2(E_GRF_RD2),
    .E_GRF_WA(E_GRF_WA),
    .E_EXT_out(E_EXT_out),
    .Tnew_E(Tnew_E),
    .E_BD(E_BD),
    .E_ExcCode(E_ExcCode)
);
assign E_out = (Sel_E_out == `E_EXT_out) ? E_EXT_out :
                (Sel_E_out == `E_pc_8) ? E_pc + 8 : 0;
MCU EMCU(
    //input
    .pc(E_pc),
    .instr(E_instr),
    .Busy(E_MDU_Busy),
    //output
    .Op(E_instr_Op),
    .Func(E_instr_Func),
    .rs(E_instr_rs),
    .rt(E_instr_rt),
    .rd(E_instr_rd),
    .instr_index(E_instr_index),
    .Imm(E_instr_Imm),

    .RegWrite(E_RegWrite),
    .Sel_ALU_B(E_Sel_ALU_B),
    .Sel_E_out(Sel_E_out),
    
    .ALU_op(ALU_op),
    .MDU_op(MDU_op),
    .Start(E_MDU_Start_tem),

    .mtc0(E_mtc0),
    .store(E_store),
    .load(E_load),
    .ovinstr(E_ovinstr)
);
assign Ov = ( E_ovinstr && E_ALU_OverFlow == 1'b1) ? 1'b1 : 1'b0;
assign AdEL_E = (E_load && E_ALU_OverFlow == 1'b1) ? 1'b1 : 1'b0;                                             //ַʱӷ
assign AdES_E = (E_store && E_ALU_OverFlow == 1'b1) ? 1'b1 : 1'b0;      
MUX_ALU_B EMUX_ALU_B(
    .Sel_ALU_B(E_Sel_ALU_B),
    .E_GRF_RD2(E_GRF_RD2_f),
    .E_ext(E_EXT_out),
    .ALU_B(E_ALU_B)
);
ALU ALU(
    .A(E_GRF_RD1_f),
    .B(E_ALU_B),
    .ALU_op(ALU_op),
    .ALU_OverFlow(E_ALU_OverFlow),
    .ALU_result(E_ALU_result)
);
assign E_MDU_Start = Req ? 1'b0 : E_MDU_Start_tem;
MDU MDU(
    .clk(clk),
    .reset(reset),
    .Req(Req),
    .Start(E_MDU_Start),
    .MDU_op(MDU_op),
    .A(E_GRF_RD1_f),
    .B(E_GRF_RD2_f),

    .HI(E_MDU_HI),
    .LO(E_MDU_LO),
    .out(E_MDU_result),
    .Busy(E_MDU_Busy)
);
/**********  Stage_M  **********/
MREG MREG(
    .clk(clk),
	.reset(reset),
    .Req(Req),
    .E_instr(E_instr),
    .E_pc(E_pc),
    .E_GRF_RD2(E_GRF_RD2_f),
    .E_GRF_WA(E_GRF_WA),
    .E_ALU_result(E_ALU_result),
    .E_ALU_OverFlow(E_ALU_OverFlow),
    .E_MDU_result(E_MDU_result),
    .Tnew_E(Tnew_E),
    .E_BD(E_BD),
    .Ov(Ov),
    .AdEL_E(AdEL_E),
    .AdES_E(AdES_E),
    .E_ExcCode(E_ExcCode),

    .M_instr(M_instr),
    .M_pc(M_pc),
    .M_GRF_RD2(M_GRF_RD2),
    .M_GRF_WA(M_GRF_WA),
    .M_ALU_result(M_ALU_result),
    .M_ALU_OverFlow(M_ALU_OverFlow),
    .M_MDU_result(M_MDU_result),
    .Tnew_M(Tnew_M),
    .M_BD(M_BD),
    .M_ExcCode(M_ExcCode)
);
assign M_out = (Sel_M_out == `M_ALU_result) ? M_ALU_result :
                (Sel_M_out == `M_MDU_result) ? M_MDU_result :
                (Sel_M_out == `M_pc_8) ? M_pc + 8 :  0;
MCU MMCU(
    //input
    .pc(M_pc),
    .instr(M_instr),
    //output
    .Op(M_instr_Op),
    .Func(M_instr_Func),
    .rs(M_instr_rs),
    .rt(M_instr_rt),
    .rd(M_instr_rd),
    .instr_index(M_instr_index),
    .Imm(M_instr_Imm),

    .RegWrite(M_RegWrite),
    .Sel_M_out(Sel_M_out),
    .MemRead(MemRead),
    .MemWrite(MemWrite),
    .CP0Write(CP0Write),

    .BE_op(BE_op),
    .DE_op(DE_op),

    .eret(M_eret),
    .mtc0(M_mtc0),
    .load(M_load),
    .store(M_store),

    .lw_(M_lw),
    .lb_(M_lb),
    .lh_(M_lh),
    .sw_(M_sw),
    .sb_(M_sb),
    .sh_(M_sh),

    .RI(M_RI)
);
assign AdEL_M = (M_lw && (M_ALU_result[0] | M_ALU_result[1])) ? 1'b1 :                                        //lw未字对齐
			    (M_lh && M_ALU_result[0]) ? 1'b1 :                                                            //lh未半字对齐
			    ((M_lh | M_lb) && (M_ALU_result >= `StartAddrTC0 && M_ALU_result <= `EndAddrTC0)) ? 1'b1 :      //取Timer寄存器的值
			    ((M_lh | M_lb) && (M_ALU_result >= `StartAddrTC1 && M_ALU_result <= `EndAddrTC1)) ? 1'b1 : 
			    (M_load && (M_ALU_result > 32'h00007f23)) ? 1'b1 :                                  //取数地址超出上限
			    (M_load && (M_ALU_result > 32'h00007f1b && M_ALU_result < 32'h00007f20)) ? 1'b1 :                              
			    (M_load && (M_ALU_result > 32'h00007f0b && M_ALU_result < 32'h00007f10)) ? 1'b1 : 
			    (M_load && (M_ALU_result > 32'h00002fff && M_ALU_result < 32'h00007f00)) ? 1'b1 : 1'b0; 

assign AdES_M = (M_sw && (M_ALU_result[0] | M_ALU_result[1])) ? 1'b1 :                                        //sw未字对齐
                (M_sh == 1'b1 && M_ALU_result[0]) ? 1'b1 :                                                    //sh未半字对齐
                ((M_sh | M_sb) && (M_ALU_result >= `StartAddrTC0 && M_ALU_result <= `EndAddrTC0)) ? 1'b1 :      //存Timer寄存器的值
                ((M_sh | M_sb) && (M_ALU_result >= `StartAddrTC1 && M_ALU_result <= `EndAddrTC1)) ? 1'b1 :
                (M_store && (M_ALU_result == 32'h00007f08 || M_ALU_result == 32'h00007f18)) ? 1'b1 : //向计时器的Count存值
                (M_store && (M_ALU_result > 32'h00007f23)) ? 1'b1 :                                  //存数地址超出上限
                (M_store && (M_ALU_result > 32'h00007f1b && M_ALU_result < 32'h00007f20)) ? 1'b1 : 
                (M_store && (M_ALU_result > 32'h00007f0b && M_ALU_result < 32'h00007f10)) ? 1'b1 : 
                (M_store && (M_ALU_result > 32'h00002fff && M_ALU_result < 32'h00007f00)) ? 1'b1 : 1'b0;

wire [4:0] ExcCode = (|M_ExcCode) ? M_ExcCode :
                    AdEL_M ? 5'd4 : 
                    AdES_M ? 5'd5 : M_ExcCode;
CP0 CP0(
    .clk(clk),
    .reset(reset),
    .en(CP0Write),
    .CP0Add(M_instr_rd),
    .CP0In(M_GRF_RD2_f),
    .CP0Out(M_CP0_RD), //out

    .VPC(M_pc),
    .BDIn(M_BD),
    .ExcCodeIn(ExcCode),
    .HWInt(HWInt),
    .EXLClr(M_eret),
    .EPCOut(EPC),  //out
    .Req(Req)             //out
);
BE BE(
    .A(M_ALU_result[1:0]),
    .Din(M_GRF_RD2_f),
    .BE_op(BE_op),
    .Req(Req),

    .byteen(m_bridge_byteen),
    .Dout(m_bridge_wdata)
);
DE DE(
    .A(M_ALU_result[1:0]),
    .RDin(M_bridge_RD_bef),
    .DE_op(DE_op),

    .RDout(M_bridge_RD)
);
assign M_bridge_RD_bef = m_bridge_rdata;

assign m_bridge_addr = M_ALU_result;
assign m_inst_addr = M_pc;

/**********  Stage_W  **********/
WREG WREG(
    .clk(clk),
	.reset(reset),
    .M_instr(M_instr),
    .M_pc(M_pc),
    .M_bridge_RD(M_bridge_RD),
    .M_CP0_RD(M_CP0_RD),
    .M_GRF_WA(M_GRF_WA),
    .M_ALU_result(M_ALU_result),
    .M_MDU_result(M_MDU_result),
    .Tnew_M(Tnew_M),
	 .Req(Req),

    .W_instr(W_instr),
    .W_pc(W_pc),
    .W_bridge_RD(W_bridge_RD),
    .W_CP0_RD(W_CP0_RD),
    .W_GRF_WA(W_GRF_WA),
    .W_ALU_result(W_ALU_result),
    .W_MDU_result(W_MDU_result),
    .Tnew_W(Tnew_W)
);
assign W_out = (Sel_W_out == `W_ALU_result) ? W_ALU_result :
                (Sel_W_out == `W_MDU_result) ? W_MDU_result :
                (Sel_W_out == `W_bridge_RD) ? W_bridge_RD :
                (Sel_W_out == `W_pc_8) ? W_pc + 8 :
                (Sel_W_out == `W_CP0_RD) ? W_CP0_RD : 0;
MCU WMCU(
    //input
    .pc(W_pc),
    .instr(W_instr),
    //output
    .Op(W_instr_Op),
    .Func(W_instr_Func),
    .rs(W_instr_rs),
    .rt(W_instr_rt),
    .rd(W_instr_rd),
    .instr_index(W_instr_index),
    .Imm(W_instr_Imm),

    .RegWrite(W_RegWrite),
    .Sel_GRF_WD(W_Sel_GRF_WD),
    .Sel_W_out(Sel_W_out)
);
MUX_GRF_WD WMUX_GRF_WD(
    .Sel_GRF_WD(W_Sel_GRF_WD),
    .W_ALU_result(W_ALU_result),
    .W_MDU_result(W_MDU_result),
    .W_bridge_RD(W_bridge_RD),
    .W_CP0_RD(W_CP0_RD),
    .pc(W_pc),
    .GRF_WD(W_GRF_WD)
);
HCU HCU(
    .D_GRF_RA1(D_instr_rs),
    .D_GRF_RA2(D_instr_rt),
    .E_GRF_RA1(E_instr_rs),
    .E_GRF_RA2(E_instr_rt),
    .E_GRF_WA(E_GRF_WA),
    .E_instr_rd(E_instr_rd),
    .E_WE(E_RegWrite),

    .M_GRF_RA2(M_instr_rt),
    .M_GRF_WA(M_GRF_WA), 
    .M_instr_rd(M_instr_rd),
    .M_WE(M_RegWrite),
    
    .W_GRF_WA(W_GRF_WA),
    .W_WE(W_RegWrite),
    .Tuse_rs(Tuse_rs),
    .Tuse_rt(Tuse_rt),
    .Tnew_E(Tnew_E),
    .Tnew_M(Tnew_M),
    .Tnew_W(Tnew_W),
    .E_MDU_Start(E_MDU_Start),
    .E_MDU_Busy(E_MDU_Busy),
    .D_md(D_md),
    .D_mf(D_mf),
    .D_mt(D_mt),
    .D_eret(D_eret),
    .E_mtc0(E_mtc0),
    .M_mtc0(M_mtc0),

    .FW_CMP_RD1_D(FW_CMP_RD1_D),
    .FW_CMP_RD2_D(FW_CMP_RD2_D),
    .FW_ALU_A_E(FW_ALU_A_E),
    .FW_ALU_B_E(FW_ALU_B_E),
    .FW_bridge_RD_M(FW_bridge_RD_M),
    .stall(stall)
);
HMUX_CMP_D HMUX_CMP_RD1_D(
    .FW_sel(FW_CMP_RD1_D),
    .D_GRF_RD(D_GRF_RD1),
    .M_out(M_out),
    .E_out(E_out),
    .D_GRF_RD_f(D_GRF_RD1_f)
);
HMUX_CMP_D HMUX_CMP_RD2_D(
    .FW_sel(FW_CMP_RD2_D),
    .D_GRF_RD(D_GRF_RD2),
    .M_out(M_out),
    .E_out(E_out),
    .D_GRF_RD_f(D_GRF_RD2_f)
);
HMUX_ALU_E HMUX_ALU_A_E(
    .FW_sel(FW_ALU_A_E),
    .E_GRF_RD(E_GRF_RD1),
    .W_out(W_out),
    .M_out(M_out),
    .E_GRF_RD_f(E_GRF_RD1_f)
);
HMUX_ALU_E HMUX_ALU_B_E(
    .FW_sel(FW_ALU_B_E),
    .E_GRF_RD(E_GRF_RD2),
    .W_out(W_out),
    .M_out(M_out),
    .E_GRF_RD_f(E_GRF_RD2_f)
);
HMUX_DM_M HMUX_DM_WD_M(
    .FW_sel(FW_bridge_RD_M),
    .M_GRF_RD(M_GRF_RD2),
    .W_out(W_out),
    .M_GRF_RD_f(M_GRF_RD2_f)
);
endmodule
