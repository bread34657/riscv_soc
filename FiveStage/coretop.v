`include "defines.v"

module coretop (
    input wire rst_i,
    input wire clk_i

);
//pc_rom
wire[`XLEN-1:0] pc_wire;
//rom_if
wire [`XLEN-1:0] romif_inst;
wire [`XLEN-1:0] romif_pc;
//if_id
wire[`XLEN-1:0] ifid_inst;
wire[`XLEN-1:0] ifid_pc;
//reg_id
wire[`XLEN-1:0] regid_data1;
wire[`XLEN-1:0] regid_data2;
//id_regfwd
wire[4:0] idregfwd_addr1;
wire[4:0] idregfwd_addr2;
//id_exe
wire[`XLEN-1:0] idexe_pc;
wire[`XLEN-1:0] idexe_imm;
wire[4:0] idexe_rdaddr;
wire idexe_we;
wire idexe_optype;
wire [2:0]idexe_opfunc3;
//id_forward
wire[`XLEN-1:0] idfwd_op1;
wire[`XLEN-1:0] idfwd_op2;
//forward_exe
wire[`XLEN-1:0] fwdexe_op1;
wire[`XLEN-1:0] fwdexe_op2;
//exe_mem
wire[4:0] exemem_rdaddr;
wire[`XLEN-1:0]exemem_rddata;
wire exemem_we;
//mem_wb
wire[4:0] memwb_rdaddr;
wire[`XLEN-1:0]memwb_rddata;
wire memwb_we;
//wb_reg
wire[4:0] wbreg_rdaddr;
wire[`XLEN-1:0]wbreg_rddata;
wire wbreg_we;

program_counter program_counter0(
    .clk_i(clk_i),
    .rst_i(rst_i),
    .pc_o(pc_wire)
);

rom rom0(
    .clk_i(clk_i),
    .addr_i(pc_wire),
    .inst_o(romif_inst),
    .pc_o(romif_pc)
);

inst_fetch inst_fetch0(
    .clk_i(clk_i),
    .rst_i(rst_i),
    //from rom 
    .inst_i(romif_inst),
    .pc_i(romif_pc), 
    //to id
    .inst_o(ifid_inst),
    .pc_o(ifid_pc)
);

regfiles regfiles0(
    .clk_i(clk_i),
    .rst_i(rst_i),
    //from id
    .rs1_addr_i(idregfwd_addr1),
    .rs2_addr_i(idregfwd_addr2),
    //from wb
    .rd_addr_i(wbreg_rdaddr),
    .rd_data_i(wbreg_rddata),
    .rd_we_i(wbreg_we),
    //to id
    .rs1_data_o(regid_data1),
    .rs2_data_o(regid_data2)
);

decode decode0(
    .clk_i(clk_i),
    .rst_i(rst_i),
    //from id
    .inst_i(ifid_inst),
    .pc_i(ifid_pc),
    //from reg
    .reg_data1_i(regid_data1),
    .reg_data2_i(regid_data2),
    //to reg
    .reg_addr1_o(idregfwd_addr1),
    .reg_addr2_o(idregfwd_addr2),
    //to exe
    .pc_o(idexe_pc),
    .imm_o(idexe_imm),
    .rd_addr_o(idexe_rdaddr),
    .rd_we_o(idexe_we),
    .optype_o(idexe_optype),
    .opfunc3_o(idexe_opfunc3),
    //to forwarding
    .op1_o(idfwd_op1),
    .op2_o(idfwd_op2)
);
exe exe0(
    .clk_i(clk_i),
    .rst_i(rst_i),
    //from decode
    .pc_i(idexe_pc),
    .imm_i(idexe_imm),
    .rd_addr_i(idexe_rdaddr),
    .rd_we_i(idexe_we),
    .optype_i(idexe_optype),
    .opfunc3_i(idexe_opfunc3),
    //to mem
    .rd_addr_o(exemem_rdaddr),
    .rd_data_o(exemem_rddata),
    .rd_we_o(exemem_we),
    //from forwarding
    .op1_i(fwdexe_op1),
    .op2_i(fwdexe_op2)
);
mem mem0(
    .clk_i(clk_i),
    .rst_i(rst_i),
    //from exe 
    .rd_addr_i(exemem_rdaddr),
    .rd_data_i(exemem_rddata),
    .rd_we_i(exemem_we),
    //to wb & forwardind
    .rd_addr_o(memwb_rdaddr),
    .rd_data_o(memwb_rddata),
    .rd_we_o(memwb_we)
);
writeback writeback0(
    .clk_i(clk_i),
    .rst_i(rst_i),
    //from exe 
    .rd_addr_i(memwb_rdaddr),
    .rd_data_i(memwb_rddata),
    .rd_we_i(memwb_we),
    //to reg & forwarding
    .rd_addr_o(wbreg_rdaddr),
    .rd_data_o(wbreg_rddata),
    .rd_we_o(wbreg_we)
);
forwarding forwarding0(
    //from id
    .op1_addr_i(idregfwd_addr1),
    .op2_addr_i(idregfwd_addr2),
    .op1_data_i(idfwd_op1),
    .op2_data_i(idfwd_op2),
    //from exe 
    .exe_rdaddr_i(exemem_rdaddr),
    .exe_rddata_i(exemem_rddata),
    .exe_rdwe(exemem_we),
    //from mem
    .mem_rdaddr_i(memwb_rdaddr),
    .mem_rddata_i(memwb_rddata),
    .mem_rdwe(memwb_we),
    //from wb
    .wb_rdaddr_i(wbreg_rdaddr),
    .wb_rddata_i(wbreg_rddata),
    .wb_rdwe(wbreg_we),
    //to exe
    .op1_data_o(fwdexe_op1),
    .op2_data_o(fwdexe_op2)
);
endmodule
