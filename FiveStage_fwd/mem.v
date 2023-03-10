`include "defines.v"

module mem(
    input wire rst_i,
    input wire clk_i,
    //from exe 
    input wire [4:0]rd_addr_i,
    input wire [`XLEN-1:0] rd_data_i,
    input wire rd_we_i,
    //to wb & forwarding
    output reg [4:0]rd_addr_o,
    output reg [`XLEN-1:0] rd_data_o,
    output reg rd_we_o
);

always @(posedge clk_i) begin
    if(rst_i) begin
        rd_addr_o <= 0;
        rd_data_o <= 0;
        rd_we_o <= 0;
    end else begin
        rd_addr_o <= rd_addr_i;
        rd_data_o <= rd_data_i;
        rd_we_o <= rd_we_i ;
    end 
end
endmodule
