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
    //to regfile 
    output reg [4:0] rs1_addr_o,
    output reg [4:0] rs2_addr_o,
    //to exe
    output reg [`XLEN-1:0] pc_o,
    output reg [`XLEN-1:0] imm_o,
    output reg [4:0] rd_addr_o,
    output reg rd_we_o,
    output reg [2:0] opfunc3_o,
    output reg [2:0] optype_o,
    output reg shiftsel_o,
    output reg addsubsel_o,
    //to forwarding
    output reg [`XLEN-1:0] rs1_o,
    output reg [`XLEN-1:0] rs2_o,
    output reg [4:0] fwd_raddr1_o,
    output reg [4:0] fwd_raddr2_o
);

wire [`XLEN-1:0] rv32inst = inst_i;
wire [6:0] opcode = rv32inst[6:0];
wire [2:0] opfunc3 = (LUItype)? 3'b000:rv32inst[14: 12];
wire [6:0] opfunc7 = rv32inst[`XLEN-1 : 25];
assign rs1_addr_o = rv32inst[19:15];
assign rs2_addr_o = rv32inst[24:20];
wire [4:0] rd_addr = rv32inst[11:7];
reg [2:0] optype;
wire shiftsel,addsubsel;

//which type need write rd
wire reg_we;
assign reg_we = Itype | Rtype | Ltype | LUItype | AUPICtype;

wire [`XLEN-1:0] immI,immL,immS,immU;
assign immI = {{20{rv32inst[31]}}, rv32inst[31:20]};
assign immL = {{20{rv32inst[31]}}, rv32inst[31:20]};
assign immS = {{20{rv32inst[31]}}, rv32inst[31:25],rv32inst[11:7]};
assign immU = {rv32inst[31:12], 12'b0};

wire Itype = (opcode == 7'b0010011);
wire Rtype = (opcode == 7'b0110011) && (opfunc7 != 7'b0000001);
wire Ltype = (opcode == 7'b0000011);
wire Stype = (opcode == 7'b0100011);
wire LUItype = (opcode == 7'b0110111) ;
wire AUPICtype = (opcode == 7'b0010111);

assign shiftsel = (opcode == 7'b0100000)? 1 : 0 ; //(sra:srl)
assign addsubsel = (opcode == 7'b0110011) & (opfunc7 == 7'b0100000) & (opfunc3 == 3'b000);
/*
-----------------
define Rtype,Itype,Stype,Utype

*/
wire [`XLEN-1:0] imm;
assign imm = ({32{Itype}} & immI)
    |({32{Ltype}} & immL)
    |({32{Stype}} & immS)
    |({32{LUItype}} & immU)
    |({32{AUPICtype}} & immU)
        ;

always @(*) begin
    if(Rtype)
        optype = 3'b000;
    else if (Itype)
        optype = 3'b001;
    else if (Ltype)
        optype = 3'b010;
    else if (Stype)
        optype = 3'b011;
    else if (LUItype) 
        optype = 3'b100;
    else if (AUPICtype)
        optype = 3'b101;
    else 
        optype = 3'b110;
end

always @(posedge clk_i) begin
    if(rst_i) begin
        pc_o <= 0;
        fwd_raddr1_o <= 0;
        fwd_raddr2_o <= 0;
        rs1_o <= 0;
        rs2_o <= 0;   
        rd_addr_o <= 0;
        rd_we_o <= 0;  
        imm_o <= 0;
        opfunc3_o <= 0;
        optype_o <= 0;
        shiftsel_o <= 0;
        addsubsel_o <= 0;
    end else begin
        pc_o <= pc_i;
        fwd_raddr1_o <= rs1_addr_o;
        fwd_raddr2_o <= rs2_addr_o;
        rd_addr_o <= rd_addr;
        rd_we_o <= reg_we;
        rs1_o <= reg_data1_i;
        rs2_o <= reg_data2_i;
        imm_o <= imm;
        opfunc3_o <= opfunc3;
        optype_o <= optype;
        shiftsel_o <= shiftsel; 
        addsubsel_o <= addsubsel;
    end
end

endmodule
