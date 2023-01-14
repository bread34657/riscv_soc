`include "defines.v"

module decode (
    //System Signals
    input wire clk_i,
    input wire rst_i,
    //from inst_fetch
    input wire [`XLEN-1:0]pc_i,
    input wire [`XLEN-1:0]inst_i,
    //from regfile
    input wire [`XLEN-1:0] reg_data1_i,
    input wire [`XLEN-1:0] reg_data2_i,
    //to regfile and forwarding
    output reg [4:0] reg_addr1_o,
    output reg [4:0] reg_addr2_o,
    //to exe
    output reg [`XLEN-1:0] pc_o,
    output reg [`XLEN-1:0] imm_o,
    output reg [4:0] rd_addr_o,
    output reg rd_we_o,
    output reg [2:0] opfunc3_o,
    output reg optype_o,
    //to forwarding
    output reg [`XLEN-1:0] op1_o,
    output reg [`XLEN-1:0] op2_o
);

wire [`XLEN-1:0] rv32inst = inst_i;
wire [6:0] opcode = rv32inst[6:0];
wire [2:0] opfunc3 = rv32inst[14: 12];
wire [6:0] funct7 = rv32inst[`XLEN-1 : 25];
wire [4:0] rs1_addr = rv32inst[19:15];
wire [4:0] rs2_addr = rv32inst[24:20];
wire [4:0] rd_addr = rv32inst[11:7];
wire optype;
//which type need write rd
wire reg_we;
assign reg_we = Itype_imm ;

wire [`XLEN-1:0] immI;
assign immI = {{20{rv32inst[31]}}, rv32inst[31:20]};

wire Itype_imm = (opcode == 7'b0010011);
wire Rtype = (opcode == 7'b0110011);
assign optype = (Itype_imm | Rtype);
/*
-----------------
define Rtype,Itype,Stype,Utype

*/
wire [`XLEN-1:0] imm;
assign imm = ({32{Itype_imm}} & immI);
       

always @(posedge clk_i) begin
    if(rst_i) begin
        pc_o <= 0;
        reg_addr1_o <= 0;
        reg_addr2_o <= 0;
        op1_o <= 0;
        op2_o <= 0;   
        rd_addr_o <= 0;
        rd_we_o <= 0;  
        imm_o <= 0;
        opfunc3_o <= 0;
        optype_o <= 0;
    end else begin
        pc_o <= pc_i;
        reg_addr1_o <= rs1_addr;
        reg_addr2_o <= rs2_addr;
        rd_addr_o <= rd_addr;
        rd_we_o <= reg_we;
        op1_o <= reg_data1_i;
        op2_o <= reg_data2_i;
        imm_o <= imm;
        opfunc3_o <= opfunc3;
        optype_o <= optype;
    end
end

endmodule
