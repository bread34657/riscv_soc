`include "defines.v"

module program_counter(

    //System Signals
    input wire clk_i,
    input wire rst_i,

    //to rom
    output reg[`XLEN-1:0] pc_o 
);

always @(posedge clk_i) begin
    if (rst_i) begin
        pc_o <= 32'0 ;
    end else begin 
        pc_o <= pc_o +4;
    end
end
endmodule
