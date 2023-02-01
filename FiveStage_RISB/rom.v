`include "defines.v"

module rom (
    //System Signals
    input wire clk_i,

    //from program counter
    input wire [`XLEN-1:0] addr_i,
    //from mem
    input wire [`XLEN-1:0] ram_addr_i,
    input wire [`XLEN-1:0] ram_data_i,
    input wire mem_we_i,
    //to mem
    output reg [`XLEN-1:0] ram_data_o,
    //to if
    output reg [`XLEN-1:0] pc_o,
    output reg [`XLEN-1:0] inst_o

);

reg[7:0] mem[0:`MEM_SIZE-1];
wire[`PART_ADDR_WIDTH-1:0] addr4;
assign addr4 = {addr_i[`PART_ADDR_WIDTH-1:2],2'b0};

wire[`PART_ADDR_WIDTH-1:0] ramaddr4;
assign ramaddr4 = {ram_addr_i[`PART_ADDR_WIDTH-1:2],2'b0};


always @(*) begin  //inst
    pc_o = addr_i;
    inst_o = {mem[addr4],mem[addr4+1],mem[addr4+2],mem[addr4+3]};
end

always @(*) begin //ram load
    ram_data_o = {mem[ramaddr4],mem[ramaddr4+1],mem[ramaddr4+2],mem[ramaddr4+3]};
end

always @(posedge clk_i) begin
    if(mem_we_i)begin
            mem[ramaddr4] <= ram_data_i[31:24];
            mem[ramaddr4+1] <= ram_data_i[23:16]; 
            mem[ramaddr4+2] <= ram_data_i[15:8];
            mem[ramaddr4+3] <= ram_data_i[7:0];
    end
end

task writeByte;
        /*verilator public*/
        input integer byte_addr;
        input [7:0] val;
        begin
            mem[byte_addr[`PART_ADDR_WIDTH-1:0]] = val;
        end
    endtask    
endmodule    
