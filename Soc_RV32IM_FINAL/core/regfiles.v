`include "defines.v"

module regfiles(
    //System Signals
    input wire rst_i,
    input wire clk_i,
    //from decode
    input wire [4:0]rs1_addr_i,
    input wire [4:0]rs2_addr_i,
    //from wb
    input wire [4:0]rd_addr_i,
    input wire [`XLEN-1:0] rd_data_i,
    input wire rd_we_i,
    //to decode
    output reg [`XLEN-1:0] rs1_data_o,
    output reg [`XLEN-1:0] rs2_data_o
);

reg [`XLEN-1:0] x[0:31];

wire we = rd_we_i & (|rd_addr_i);  //x0 can't be written
assign rs1_data_o = (we & (rs1_addr_i == rd_addr_i)) ? rd_data_i : x[rs1_addr_i];
assign rs2_data_o = (we & (rs2_addr_i == rd_addr_i)) ? rd_data_i : x[rs2_addr_i];

integer i;

always @(posedge clk_i)begin
    if(rst_i)begin
        for (i=0;i<32;i=i+1)
        x[i] <= 0;
    end else begin
        if(we) begin
            x[rd_addr_i] <= rd_data_i;
        end
    end
end

task readRegister;
    /*verilator public*/
    input integer raddr;
    output integer val;
    begin
        val = x[raddr[4:0]];
    end
endtask    

endmodule
