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
//id_reg
wire[4:0] idreg_addr1;
wire[4:0] idreg_addr2;
wire[`XLEN-1:0] regid_data1;
wire[`XLEN-1:0] regid_data2;
//id_exe
wire[`XLEN-1:0] idexe_pc;
wire[`XLEN-1:0] idexe_op1;
wire[`XLEN-1:0] idexe_op2;
wire[`XLEN-1:0] idexe_imm;
wire[4:0] idexe_rdaddr;
wire idexe_we;

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
decode decode0(
    .clk_i(clk_i),
    .rst_i(rst_i),
    //from id
    .inst_i(ifid_inst),
    .pc_i(ifid_pc),
    //to decode
    .pc_o(idexe_pc),
    .op1_o(idexe_op1),
    .op2_o(idexe_op2),
    .imm_o(idexe_imm),
    .rd_addr_o(idexe_rdaddr),
    .rd_we_o(idexe_we)
);
regfiles regfiles0(
    .clk_i(clk_i),
    .rst_i(rst_i),
    //from id
    .rs1_addr_i(idreg_addr1),
    .rs2_addr_i(idreg_addr2),
    //to id
    .rs1_data_o(regid_data1),
    .rs2_data_o(regid_data2)
);

endmodule