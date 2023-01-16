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
//rom_mem
wire [`XLEN-1:0] rommem_ramdata;
//if_id
wire[`XLEN-1:0] ifid_inst;
wire[`XLEN-1:0] ifid_pc;
//reg_id
wire[`XLEN-1:0] regid_data1;
wire[`XLEN-1:0] regid_data2;
//id_reg
wire[4:0] idreg_addr1;
wire[4:0] idreg_addr2;
//id_exe
wire[`XLEN-1:0] idexe_pc;
wire[`XLEN-1:0] idexe_imm;
wire[4:0] idexe_rdaddr;
wire idexe_we;
wire [2:0]idexe_optype;
wire [2:0]idexe_opfunc3;
wire idexe_shiftsel;
wire idexe_addsubsel;
//id_forward
wire[`XLEN-1:0] idfwd_rs1;
wire[`XLEN-1:0] idfwd_rs2;
wire [4:0] idfwd_addr1;
wire [4:0] idfwd_addr2;
//forward_exe
wire[`XLEN-1:0] fwdexe_rs1;
wire[`XLEN-1:0] fwdexe_rs2;
//exe_mem
wire[4:0] exemem_rdaddr;
wire[`XLEN-1:0]exemem_rddata;
wire exemem_we;
wire [`XLEN-1:0] exemem_memaddr;
wire exemem_memre;
wire exemem_memwe;
wire [2:0]exemem_opfunc3;
//mem_wb
wire[4:0] memwb_rdaddr;
wire[`XLEN-1:0] memwb_rddata;
wire memwb_we;
//mem_rom
wire [`XLEN-1:0] memrom_ramaddr;
wire [`XLEN-1:0] memrom_ramdata;
wire memrom_memwe;
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
    .pc_o(romif_pc),
    //from mem
    .ram_addr_i(memrom_ramaddr),
    .ram_data_i(memrom_ramdata),
    .mem_we_i(memrom_memwe),
    //to mem
    .ram_data_o(rommem_ramdata)
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
    .rs1_addr_i(idreg_addr1),
    .rs2_addr_i(idreg_addr2),
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
    .rs1_addr_o(idreg_addr1),
    .rs2_addr_o(idreg_addr2),
    //to exe
    .pc_o(idexe_pc),
    .imm_o(idexe_imm),
    .rd_addr_o(idexe_rdaddr),
    .rd_we_o(idexe_we),
    .optype_o(idexe_optype),
    .opfunc3_o(idexe_opfunc3),
    .shiftsel_o(idexe_shiftsel),
    .addsubsel_o(idexe_addsubsel),
    //to forwarding
    .rs1_o(idfwd_rs1),
    .rs2_o(idfwd_rs2),
    .fwd_raddr1_o(idfwd_addr1),
    .fwd_raddr2_o(idfwd_addr2)
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
    .shiftsel_i(idexe_shiftsel),
    .addsubsel_i(idexe_addsubsel),
    //to mem
    .rd_addr_o(exemem_rdaddr),
    .rd_data_o(exemem_rddata),
    .rd_we_o(exemem_we),
    .mem_addr_o(exemem_memaddr),
    .mem_re_o(exemem_memre),
    .mem_we_o(exemem_memwe),
    .opfunc3_o(exemem_opfunc3),
    //from forwarding
    .rs1_i(fwdexe_rs1),
    .rs2_i(fwdexe_rs2)
);
mem mem0(
    .clk_i(clk_i),
    .rst_i(rst_i),
    //from exe 
    .rd_addr_i(exemem_rdaddr),
    .rd_data_i(exemem_rddata),
    .rd_we_i(exemem_we),
    .mem_addr_i(exemem_memaddr),
    .mem_re_i(exemem_memre),
    .mem_we_i(exemem_memwe),
    .opfunc3_i(exemem_opfunc3),
    //from rom 
    .ram_data_i(rommem_ramdata),
    //to rom
    .ram_addr_o(memrom_ramaddr),
    .ram_data_o(memrom_ramdata),
    .ram_we_o(memrom_memwe),
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
    .rs1_addr_i(idfwd_addr1),
    .rs2_addr_i(idfwd_addr2),
    .rs1_data_i(idfwd_rs1),
    .rs2_data_i(idfwd_rs2),
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
    .rs1_data_o(fwdexe_rs1),
    .rs2_data_o(fwdexe_rs2)
);
endmodule
