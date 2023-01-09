`include "defines.v"

module rom (
    //System Signals
    input wire clk_i,

    //from program counter
    input wire [`XLEN-1:0] addr_i,

    //to if
    output reg [`XLEN-1:0] inst_o
);

reg[7:0] mem[`MEM_SIZE-1:0];
wire[`PART_ADDR_WIDTH-1:0] addr4;
assign addr4 = {addr_i[`PART_ADDR_WIDTH-1:2],2'b0};

always @(posedge clk_i) 

    inst_o <= {mem[addr4],mem[addr4+1],mem[addr4+2],mem[addr4+3]};


task writeByte;
        /*verilator public*/
        input integer byte_addr;
        input [7:0] val;
        begin
            reg [`XLEN-1:0] t_addr;
            t_addr = byte_addr - `MEM_OFFSET;
            if (byte_addr >= `MEM_OFFSET &&  byte_addr < `MEM_OFFSET + `MEM_SIZE) begin
            mem[t_addr[`PART_ADDR_WIDTH-1:0]] = val;
        end
        //end
        end
    endtask    
endmodule    
