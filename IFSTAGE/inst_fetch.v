`include "defines.v"

module inst_fetch
    (
    //System Signals
    input wire clk_i,
    input wire rst_i,
    //from program_counter
    //input wire [`XLEN-1:0]pc_i,
    //from rom
    //input wire [`XLEN-1:0]inst_i,
    //to id
    //output reg[`XLEN-1:0] pc_o,
    output reg[`XLEN-1:0] inst_o
    );

/*always @(posedge clk_i) begin

    if(rst_i)begin
        inst_o <= 32'0;
        pc_o <= 32'0;
    end else begin 
        pc_o <= pc_i;
        inst_o <= inst_i; 
    end 
end */
    wire[`XLEN-1:0] pc_wire;

    program_counter program_counter0(
        .clk_i(clk_i),
        .rst_i(rst_i),
        .pc_o(pc_wire)
    );

    rom rom0(
        .clk_i(clk_i),
        .addr_i(pc_wire),
        .inst_o(inst_o)
    );
endmodule
