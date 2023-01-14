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
    input wire optype_i,
    //from forwarding
    input wire [`XLEN-1:0] op1_i,
    input wire [`XLEN-1:0] op2_i,
    //to memory & sforwarding
    output reg [4:0] rd_addr_o,
    output reg [`XLEN-1:0] rd_data_o,
    output reg rd_we_o
);
wire [`XLEN-1:0] rs1;
wire [`XLEN-1:0] rs2;
assign rs1 = op1_i;
assign rs2 = (optype_i)? imm_i:op2_i;
reg [`XLEN-1:0] op_result;

always@(*) begin
    if (optype_i) begin
        case(opfunc3_i)
            3'b110: op_result = rs1|rs2;
            default: op_result = 0;
        endcase
    end else begin

    end
end

always@(posedge clk_i) begin
    if (rst_i) begin
        rd_addr_o <= 0;
        rd_data_o <= 0;
        rd_we_o <= 0;
    end else begin
        rd_addr_o <= rd_addr_i;
        rd_data_o <= op_result;
        rd_we_o <= rd_we_i;
    end
end    

endmodule
