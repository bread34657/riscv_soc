`include "defines.v"

module inst_fetch
    (
    //System Signals
    input wire clk_i,
    input wire rst_i,
    //from rom
    input wire [`XLEN-1:0]pc_i,
    input wire [`XLEN-1:0]inst_i,
    //to id
    output reg[`XLEN-1:0] pc_o,
    output reg[`XLEN-1:0] inst_o
    );

always @(posedge clk_i) begin

    if(rst_i)begin
        inst_o <= 32'0;
        pc_o <= 32'0;
    end else begin 
        pc_o <= pc_i;
        inst_o <= inst_i; 
    end 
end 

endmodule
