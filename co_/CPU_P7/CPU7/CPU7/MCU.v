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
//R_type cal_R
`define R_add_Func 6'b100000
`define R_sub_Func 6'b100010
`define R_and_Func 6'b100100
`define R_or_Func 6'b100101
`define R_slt_Func 6'b101010
`define R_sltu_Func 6'b101011
//cal_I
`define ori_Op 6'b001101
`define addi_Op 6'b001000
`define andi_Op 6'b001100 
//load
`define lw_Op 6'b100011
`define lb_Op 6'b100000
`define lh_Op 6'b100001 
//store
`define sw_Op 6'b101011
`define sb_Op 6'b101000
`define sh_Op 6'b101001
//R_type md
`define R_mult_Func 6'b011000
`define R_multu_Func 6'b011001
`define R_div_Func 6'b011010
`define R_divu_Func 6'b011011
//R_type mf
`define R_mfhi_Func 6'b010000
`define R_mflo_Func 6'b010010
//R_type mt
`define R_mthi_Func 6'b010001
`define R_mtlo_Func 6'b010011
//b
`define beq_Op 6'b000100
`define bne_Op 6'b000101 
//j
`define jal_Op 6'b000011
//
`define R_jr_Func 6'b001000
//
`define lui_Op 6'b001111
//p7
`define R_syscall_Func 6'b001100
`define COP0_Op 6'b010000
`define mfc0 5'b00000
`define mtc0 5'b00100
`define eret_Func 6'b011000
//ALU_op
`define AND 4'b0000
`define OR 4'b0001
`define ADD 4'b0010
`define SUB 4'b0011
`define LUI 4'b0100
`define SLT 4'b0101
`define SLTU 4'b0110
`define ADDI 4'b0111
//MDU_op
`define MDU_nop 4'b0000
`define MDU_mult 4'b0001
`define MDU_multu 4'b0010
`define MDU_div 4'b0011
`define MDU_divu 4'b0100
`define MDU_mfhi 4'b0101
`define MDU_mflo 4'b0110
`define MDU_mthi 4'b0111
`define MDU_mtlo 4'b1000
//BE_op
`define BE_nstore 2'b00
`define BE_sw 2'b01
`define BE_sh 2'b10
`define BE_sb 2'b11
//DE_op
`define DE_n_extend 3'b000
`define DE_un_b_extend 3'b001
`define DE_b_extend 3'b010
`define DE_un_h_extend 3'b011
`define DE_h_extend 3'b100
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
module MCU(
    input [31:0] pc,
    input [31:0] instr,
    input Busy,

    output [5:0] Op,
    output [5:0] Func,
    output [4:0] rs,
    output [4:0] rt,
    output [4:0] rd,
    output [25:0] instr_index,
    output [15:0] Imm,
    output RegWrite,
    output [4:0] GRF_WA,
    output [2:0] Sel_GRF_WD,
    output Sel_ALU_B,
    output Sel_E_out,
    output [1:0] Sel_M_out,
    output [2:0] Sel_W_out,
    output MemRead,
    output MemWrite,
    output CP0Write,
    output [3:0] ALU_op,
    output [3:0] MDU_op,
    output Start,
    output md,
    output mf,
    output mt,
    output eret,
    output mtc0,
    output syscall,
    output load,
    output store,
    output ovinstr,

    output lw_,
    output lb_,
    output lh_,
    output sw_,
    output sb_,
    output sh_,

    output [2:0] NPC_op,
    output [2:0] CMP_op,
    output [1:0] EXT_op,
    output [1:0] BE_op,
    output [2:0] DE_op,
    output [1:0] Tuse_rs,
    output [1:0] Tuse_rt,
    output [1:0] Tnew_D,

    output RI,
    output B_J
    );

    assign Op = instr[31:26];
    assign Func = instr[5:0];
    assign rs = instr[25:21];
    assign rt = instr[20:16];
    assign rd = instr[15:11];
    assign instr_index = instr[25:0];
    assign Imm = instr[15:0];
    
    wire nop;
    wire R_type;
    wire cal_R,add,sub,and_,or_,slt,sltu;
    wire cal_I,ori,addi, andi;
    wire lw,lb,lh; // load
    wire sw,sb,sh; // store
    wire mult,multu,div,divu; //md
    wire mfhi,mflo;  //mf
    wire mthi,mtlo;  //mt
    wire B_type,beq,bne;
    wire jal,jr,lui;
    //eret syscall
    wire mfc0;      //mtc0

    assign RI = ~( nop |
               add | sub | and_ | or_ | slt | sltu |
               ori | addi | andi |
               lw | lb | lh |
               sw | sb | sh |
               mult | multu | div | divu | mfhi | mflo | mthi | mtlo| 
               beq | bne |
               jal | jr | lui |
               eret | syscall | mfc0 | mtc0
               ///////////////
            );
    assign B_J = (jal | jr | beq | bne) ? 1'b1 : 1'b0;
    assign nop = (instr == 32'b0) ? 1'b1 : 1'b0;
    assign ovinstr = (add | addi | sub) ? 1'b1 : 1'b0;

    assign R_type = (Op == `R_type_Op) ? 1'b1 : 1'b0;
    assign cal_R = add | sub | and_ | or_ | slt | sltu;
    assign add = (Op == `R_type_Op && Func == `R_add_Func) ? 1'b1 : 1'b0;
    assign sub = (Op == `R_type_Op && Func == `R_sub_Func) ? 1'b1 : 1'b0;
    assign and_ = (Op == `R_type_Op && Func == `R_and_Func) ? 1'b1 : 1'b0;
    assign or_ = (Op == `R_type_Op && Func == `R_or_Func) ? 1'b1 : 1'b0;
    assign slt = (Op == `R_type_Op && Func == `R_slt_Func) ? 1'b1 : 1'b0;
    assign sltu = (Op == `R_type_Op && Func == `R_sltu_Func) ? 1'b1 : 1'b0;

    assign cal_I = ori | addi | andi;
    assign ori = (Op == `ori_Op) ? 1'b1 : 1'b0;
    assign addi = (Op == `addi_Op) ? 1'b1 : 1'b0;
    assign andi = (Op == `andi_Op) ? 1'b1 : 1'b0;

    assign load = lw | lb | lh;
    assign lw = (Op == `lw_Op) ? 1'b1 : 1'b0;
    assign lb = (Op == `lb_Op) ? 1'b1 : 1'b0;
    assign lh = (Op == `lh_Op) ? 1'b1 : 1'b0;
    assign lw_ = lw;
    assign lb_ = lb;
    assign lh_ = lh;

    assign store = sw | sb | sh;
    assign sw = (Op == `sw_Op) ? 1'b1 : 1'b0;
    assign sb = (Op == `sb_Op) ? 1'b1 : 1'b0;
    assign sh = (Op == `sh_Op) ? 1'b1 : 1'b0;
    assign sw_ = sw;
    assign sb_ = sb;
    assign sh_ = sh;

    assign md = mult | multu | div | divu;
    assign mult = (Op == `R_type_Op && Func == `R_mult_Func) ? 1'b1 : 1'b0;
    assign multu = (Op == `R_type_Op && Func == `R_multu_Func) ? 1'b1 : 1'b0;
    assign div = (Op == `R_type_Op && Func == `R_div_Func) ? 1'b1 : 1'b0;
    assign divu = (Op == `R_type_Op && Func == `R_divu_Func) ? 1'b1 : 1'b0;

    assign mf = mfhi | mflo;
    assign mfhi = (Op == `R_type_Op && Func == `R_mfhi_Func) ? 1'b1 : 1'b0;
    assign mflo = (Op == `R_type_Op && Func == `R_mflo_Func) ? 1'b1 : 1'b0;

    assign mt = mthi | mtlo;
    assign mthi = (Op == `R_type_Op && Func == `R_mthi_Func) ? 1'b1 : 1'b0;
    assign mtlo = (Op == `R_type_Op && Func == `R_mtlo_Func) ? 1'b1 : 1'b0;

    assign B_type = beq | bne;
    assign beq = (Op == `beq_Op) ? 1'b1 : 1'b0;
    assign bne = (Op == `bne_Op) ? 1'b1 : 1'b0;

    assign jr = (Op == `R_type_Op && Func == `R_jr_Func) ? 1'b1 : 1'b0;
    assign lui = (Op == `lui_Op) ? 1'b1 : 1'b0;
    assign jal = (Op == `jal_Op)  ? 1'b1 : 1'b0;

    assign syscall = (Op == `R_type_Op && Func == `R_syscall_Func) ? 1'b1 : 1'b0;
    assign mfc0 = (Op == `COP0_Op && instr[25:21] == `mfc0) ? 1'b1 : 1'b0;
    assign mtc0 = (Op == `COP0_Op && instr[25:21] == `mtc0) ? 1'b1 : 1'b0;
	 assign eret = (Op == `COP0_Op && Func == `eret_Func) ? 1'b1 : 1'b0;
//////////////////////////////////////////////////////////////////////////////////
    assign RegWrite = (cal_R | cal_I | load | mf | lui | jal | mfc0) ? 1'b1 : 1'b0;
    assign GRF_WA = (cal_R | mf) ? rd :
                    (cal_I | load | lui | mfc0) ? rt :
                    jal ? 5'd31 : 5'b0;
    assign Sel_GRF_WD = (cal_R | cal_I | lui) ? `W_ALU_result  :
                        load ? `W_bridge_RD :
                        jal ? `W_pc_8 :
                        mf ? `W_MDU_result : 
                        mfc0 ? `W_CP0_RD : 3'b0;

    assign Sel_ALU_B = (cal_I | load | store | lui) ? 1'b1 : 1'b0;

    assign Sel_E_out = lui ? `E_EXT_out : `E_pc_8;
    assign Sel_M_out = (cal_R | cal_I | lui) ? `M_ALU_result :
                        mf ? `M_MDU_result : `M_pc_8;
    assign Sel_W_out = load ? `W_bridge_RD :
                        (cal_R | cal_I | lui) ? `W_ALU_result :
                        mf ? `W_MDU_result : 
                        mfc0 ? `W_CP0_RD : `W_pc_8;

    assign MemRead = store ? 1'b1 : 1'b0;
    assign MemWrite = store ? 1'b1 : 1'b0;

    assign CP0Write = mtc0 ? 1'b1 : 1'b0;

    assign ALU_op = add ? `ADD : 
                    addi ? `ADDI :
                    sub ? `SUB : 
                    (load | store) ? `ADD :
                    (or_ | ori) ? `OR : 
					lui ? `LUI : 
                    (and_ | andi) ? `AND :
                    slt ? `SLT :
                    sltu ? `SLTU : `ADD;
    assign MDU_op = mult ? `MDU_mult :
                    multu ? `MDU_multu :
                    div ? `MDU_div :
                    divu ? `MDU_divu :
                    mfhi ? `MDU_mfhi :
                    mflo ? `MDU_mflo :
                    mthi ? `MDU_mthi :
                    mtlo ? `MDU_mtlo : `MDU_nop;
    assign Start = md & (~Busy);
    assign NPC_op = B_type ? 3'b001 :
                    jal ? 3'b010 :
                    jr ? 3'b011 : 
                    eret ? 3'b100 : 3'b000;
    assign CMP_op = beq ? 3'b000 :
                    bne ? 3'b001 : 3'b000;
    assign EXT_op = (load | store | B_type | addi) ? 2'b01 :
                    lui ? 2'b10 : 
                    (ori | andi) ? 2'b00 : 2'b00;
    assign BE_op = sw ? `BE_sw :
                    sh ? `BE_sh :
                    sb ? `BE_sb : `BE_nstore;
    assign DE_op = lw ? `DE_n_extend :
                    lh ? `DE_h_extend : 
                    lb ? `DE_b_extend : `DE_n_extend;

    assign Tuse_rs = (cal_R | cal_I | load | store | md | mt) ? 2'b01 :
                    (B_type | jr) ? 2'b00 : 2'b11;
    assign Tuse_rt = (store | mtc0) ? 2'b10 :
                    (cal_R | md) ? 2'b01 :
                    B_type ? 2'b00 : 2'b11;
    assign Tnew_D = (cal_R | cal_I | mf) ? 2'b10 :
                    (load | mfc0) ? 2'b11 :
                    lui ? 2'b01 :
                    jal ? 2'b00 : 2'b00;
endmodule