`include "defines.v"


module pipectrl(    
    //from id 
    input wire loaduse_hazard_i,
    //from exe
    input wire [`XLEN-1:0] jump_addr_i,
    input wire je_i,
    input wire mtype_stall_i,
    //from csr
    input wire trap_taken_i,
    input wire [`XLEN-1:0] trap_entry_i,
    input wire system_ret_i,
    input wire [`XLEN-1:0] system_retaddr_i,
    //to pc
    output reg stallpc_o,
    output reg je_o,
    output reg [`XLEN-1:0] jump_addr_o,
    output reg trap_taken_o,
    output reg [`XLEN-1:0] trap_entry_o,
    output reg system_ret_o,
    output reg [`XLEN-1:0] system_retaddr_o,
    //to if
    output reg stallif_o,
    output reg flushif_o,
    //to id
    output reg flushid_o,
    output reg stallid_o,
    //to exe
    output reg stallexe_o,
    output reg flushexe_o,
    //to mem
    output reg stallmem_o,
    output reg flushmem_o,
    //to wb
    output reg stallwb_o
);

assign jump_addr_o = jump_addr_i;
assign je_o = je_i;
assign trap_entry_o = trap_entry_i;
assign trap_taken_o = trap_taken_i;
assign system_ret_o = system_ret_i;
assign system_retaddr_o = system_retaddr_i;

assign stallpc_o = loaduse_hazard_i | mtype_stall_i;
assign stallif_o = loaduse_hazard_i | mtype_stall_i;
assign stallid_o = mtype_stall_i;
assign stallexe_o = mtype_stall_i;
assign stallmem_o = mtype_stall_i;
assign stallwb_o = mtype_stall_i;

assign flushif_o = je_i | trap_taken_i | system_ret_i;
assign flushid_o = loaduse_hazard_i | je_i | trap_taken_i | system_ret_i ;
assign flushexe_o = trap_taken_i | system_ret_i;
assign flushmem_o = trap_taken_i | system_ret_i;



endmodule
