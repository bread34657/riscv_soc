`include "defines.v"

module exe (
    input wire rst_i,  
    input wire clk_i,
    //from decode
    input wire [`XLEN-1:0] pc_i,
    input wire [`XLEN-1:0] imm_i,
    input wire [4:0]rd_addr_i,
    input wire rd_we_i,
    input wire [2:0] opfunc3_i,
    input wire [2:0] optype_i,
    input wire shiftsel_i,
    input wire addsubsel_i,
    input wire mem_re_i,
    input wire mem_we_i,
    //from forwarding
    input wire [`XLEN-1:0] rs1_i,
    input wire [`XLEN-1:0] rs2_i,
    //to memory & forwarding
    output reg [4:0] rd_addr_o,
    output reg [`XLEN-1:0] rd_data_o,
    output reg rd_we_o,
    output reg [`XLEN-1:0] mem_addr_o,
    output reg mem_re_o,
    output reg mem_we_o,
    output reg [2:0] opfunc3_o
);
wire [`XLEN-1:0] op1,op2;
assign op1 = (optype_i == 4)? 0:rs1_i;
assign op2 = (optype_i == 1 || optype_i == 4)? imm_i:rs2_i;
reg [`XLEN-1:0] op_result;
wire [`XLEN-1:0] mem_addr;
assign mem_addr = rs1_i + imm_i;


always @(*) begin
    if (optype_i == 0 || optype_i == 1 || optype_i == 4) begin //Rtype,Itype,LUItype
        case(opfunc3_i)
            3'b000: op_result = (addsubsel_i)? op1 + (~op2 +1'b1) : op1 + op2 ; //sub:add
            3'b001: op_result = op1 << op2[4:0]; //sll
            3'b010: op_result = ($signed(op1) < $signed(op2))? 1 : 0; //slt
            3'b011: op_result = (op1 < op2)? 1 : 0; //sltu
            3'b100: op_result = op1 ^ op2; //xor
            3'b110: op_result = op1 | op2; //or
            3'b111: op_result = op1 & op2; //and
            3'b101: op_result = (shiftsel_i)? ($signed(op1) >>> op2[4:0]) : ($signed(op1) >> op2[4:0]); //sra:srl
        endcase
    end else if (optype_i == 3)begin //Stype
        op_result = op2;
    end else if (optype_i == 5)begin //AUPICtype
        op_result = imm_i + pc_i;
    end else begin
        op_result = 0;
    end
end

always@(posedge clk_i) begin
    if (rst_i) begin
        rd_addr_o <= 0;
        rd_data_o <= 0;
        rd_we_o <= 0;
        mem_addr_o <= 0;
        mem_re_o <= 0 ;
        mem_we_o <= 0 ;
        opfunc3_o <= 0;
    end else begin
        rd_addr_o <= rd_addr_i;
        rd_data_o <= op_result;
        rd_we_o <= rd_we_i;
        mem_addr_o <= mem_addr;
        mem_re_o <= mem_re_i;
        mem_we_o <= mem_we_i ;
        opfunc3_o <= opfunc3_i;
    end
end    

endmodule
