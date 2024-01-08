`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:02:09 11/23/2023 
// Design Name: 
// Module Name:    MCU 
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
//ALU_op
`define AND 3'b000
`define OR 3'b001
`define ADD 3'b010
`define SUB 3'b011
`define LUI 3'b100
//Sel
`define E_EXT_out 1'b0
`define E_pc_8 1'b1
`define M_ALU_result 1'b0
`define M_pc_8 1'b1
`define W_ALU_result 2'b0
`define W_DM_RD 2'b01
`define W_pc_8 2'b10
module MCU(
    input [31:0] pc,
    input [31:0] instr,

    output [5:0] Op,
    output [5:0] Func,
    output [4:0] rs,
    output [4:0] rt,
    output [4:0] rd,
    output [25:0] instr_index,
    output [15:0] Imm,
    output RegWrite,
    output [1:0] Sel_GRF_WA,
    output [1:0] Sel_GRF_WD,
    output Sel_ALU_B,
    output Sel_E_out,
    output Sel_M_out,
    output [1:0] Sel_W_out,
    output MemRead,
    output MemWrite,
    output [2:0] ALU_op,
    output [2:0] NPC_op,
    output [2:0] CMP_op,
    output [1:0] EXT_op,
    output [1:0] Tuse_rs,
    output [1:0] Tuse_rt,
    output [1:0] Tnew_D
    );

    assign Op = instr[31:26];
    assign Func = instr[5:0];
    assign rs = instr[25:21];
    assign rt = instr[20:16];
    assign rd = instr[15:11];
    assign instr_index = instr[25:0];
    assign Imm = instr[15:0];

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

    assign RegWrite = (R_type | lw | lui | ori | jal) ? 1'b1 : 1'b0;

    assign Sel_GRF_WA[0] = R_type ? 1'b1 : 1'b0;
    assign Sel_GRF_WA[1] = jal ? 1'b1 : 1'b0;
    assign Sel_GRF_WD[0] = lw ? 1'b1 : 1'b0;
    assign Sel_GRF_WD[1] = jal ? 1'b1 : 1'b0;
    assign Sel_ALU_B = (lw | sw | lui | ori) ? 1'b1 : 1'b0;

    assign Sel_E_out = lui ? `E_EXT_out : `E_pc_8;
    assign Sel_M_out = (add | sub | ori | lui) ? `M_ALU_result : `M_pc_8;
    assign Sel_W_out = lw ? `W_DM_RD :
                        (add | sub | ori | lui) ? `W_ALU_result : `W_pc_8;

    assign MemRead = sw ? 1'b1 : 1'b0;
    assign MemWrite = sw ? 1'b1 : 1'b0;

    assign ALU_op = add ? `ADD : 
                    sub ? `SUB : 
                    lw ? `ADD :
                    sw ? `ADD : 
                    beq ? `SUB :
                    ori ? `OR : 
						  lui ? `LUI : `ADD;
    assign NPC_op[0] = (beq | jr) ? 1'b1 : 1'b0;
    assign NPC_op[1] = (jal | jr) ? 1'b1 : 1'b0;
    assign NPC_op[2] = 1'b0;
    assign CMP_op = 3'b0;
    assign EXT_op[1] = lui ? 1'b1 : 1'b0;
    assign EXT_op[0] = (lw | sw | beq) ? 1'b1 : 1'b0;

    assign Tuse_rs = (add | sub | ori | lw | sw) ? 2'b01 :
                        (beq | jr) ? 2'b00 : 2'bxx;
    assign Tuse_rt = sw ? 2'b10 :
                        (add | sub) ? 2'b01 :
                        beq ? 2'b00 : 2'bxx;

    assign Tnew_D = (add | sub | ori) ? 2'b10 :
                    lw ? 2'b11 :
                    lui ? 2'b01 :
                    jal ? 2'b00 : 2'bxx;
endmodule