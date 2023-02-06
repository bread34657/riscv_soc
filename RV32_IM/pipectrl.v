`include "defines.v"


module pipectrl(    
    //from id 
    input wire loaduse_hazard_i,
    //from exe
    input wire [`XLEN-1:0] jump_addr_i,
    input wire je_i,
    input wire mtype_stall_i,
    //to pc
    output reg stallpc_o,
    output reg je_o,
    output reg [`XLEN-1:0] jump_addr_o,
    //to if
    output reg stallif_o,
    output reg flushif_o,
    //to id
    output reg flushid_o,
    output reg stallid_o,
    //to exe
    output reg stallexe_o,
    //to mem
    output reg stallmem_o,
    //to wb
    output reg stallwb_o
);

assign jump_addr_o = jump_addr_i;
assign je_o = je_i;
assign stallpc_o = loaduse_hazard_i | mtype_stall_i;
assign stallif_o = loaduse_hazard_i | mtype_stall_i;
assign stallid_o = mtype_stall_i;
assign stallexe_o = mtype_stall_i;
assign stallmem_o = mtype_stall_i;
assign stallwb_o = mtype_stall_i;

assign flushif_o = je_i;
assign flushid_o = loaduse_hazard_i | je_i;


endmodule
