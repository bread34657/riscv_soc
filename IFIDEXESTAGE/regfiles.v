`include "defines.v"

module regfiles(
    //System Signals
    input wire rst_i,
    input wire clk_i,
    //from decode
    input wire [4:0]rs1_addr_i,
    input wire [4:0]rs2_addr_i,
    //to decode
    output reg [`XLEN-1:0] rs1_data_o,
    output reg [`XLEN-1:0] rs2_data_o
);

reg [`XLEN-1:0] x[0:`REG_NUM-1];
wire [`XLEN-1 : 0] ra  = x[ 1]; // return address, ra.
wire [`XLEN-1 : 0] sp  = x[ 2]; // stack pointer, sp.
wire [`XLEN-1 : 0] gp  = x[ 3]; // global pointer, gp.
wire [`XLEN-1 : 0] tp  = x[ 4]; // thread pointer, tp.
wire [`XLEN-1 : 0] t0  = x[ 5]; // temporary register, t0
wire [`XLEN-1 : 0] t1  = x[ 6]; // temporary register, t1
wire [`XLEN-1 : 0] t2  = x[ 7]; // temporary register, t2
wire [`XLEN-1 : 0] s0  = x[ 8]; // register store, s0
wire [`XLEN-1 : 0] s1  = x[ 9]; // register store, s1
wire [`XLEN-1 : 0] a0  = x[10]; // function argument/return value a0
wire [`XLEN-1 : 0] a1  = x[11]; // function argument, a1
wire [`XLEN-1 : 0] a2  = x[12]; // function argument, a2
wire [`XLEN-1 : 0] a3  = x[13]; // function argument, a3
wire [`XLEN-1 : 0] a4  = x[14]; // function argument, a4
wire [`XLEN-1 : 0] a5  = x[15]; // function argument, a5
wire [`XLEN-1 : 0] a6  = x[16]; // function argument, a6
wire [`XLEN-1 : 0] a7  = x[17]; // function argument, a7
wire [`XLEN-1 : 0] s2  = x[18]; // register store, s2
wire [`XLEN-1 : 0] s3  = x[19]; // register store, s3
wire [`XLEN-1 : 0] s4  = x[20]; // register store, s4
wire [`XLEN-1 : 0] s5  = x[21]; // register store, s5
wire [`XLEN-1 : 0] s6  = x[22]; // register store, s6
wire [`XLEN-1 : 0] s7  = x[23]; // register store, s7
wire [`XLEN-1 : 0] s8  = x[24]; // register store, s8
wire [`XLEN-1 : 0] s9  = x[25]; // register store, s9
wire [`XLEN-1 : 0] s10 = x[26]; // register store, s10
wire [`XLEN-1 : 0] s11 = x[27]; // register store, s11
wire [`XLEN-1 : 0] t3  = x[28]; // temporary register, t3
wire [`XLEN-1 : 0] t4  = x[29]; // temporary register, t4
wire [`XLEN-1 : 0] t5  = x[30]; // temporary register, t5
wire [`XLEN-1 : 0] t6  = x[31]; // temporary register, t6

integer i;
initial begin
    for (i=0;i<`REG_NUM;i=i+1)
        x[i] = 0;
end

//wire we = rd_we_i & ( | rd_addr_i);  //x0 can't be written
//assign rs1_data_o = (we & (rs1_addr_i == rd_addr_i)) ? rd_data_i : x[rs1_addr_i];
//assign rs2_data_o = (we & (rs2_addr_i == rd_addr_i)) ? rd_data_i : x[rs2_addr_i];

assign rs1_data_o =  x[rs1_addr_i];
assign rs2_data_o =  x[rs2_addr_i];

endmodule
