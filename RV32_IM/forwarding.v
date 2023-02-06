`include "defines.v"

module forwarding (
    //from decode
    input wire [4:0] rs1_addr_i,
    input wire [4:0] rs2_addr_i,
    input wire [`XLEN-1:0] rs1_data_i,
    input wire [`XLEN-1:0] rs2_data_i,
    //from exe
    input wire [4:0]exe_rdaddr_i,
    input wire [`XLEN-1:0]exe_rddata_i,
    input wire exe_rdwe,
    //from mem
    input wire [4:0]mem_rdaddr_i,
    input wire [`XLEN-1:0]mem_rddata_i,
    input wire mem_rdwe,
    //from wb
    input wire [4:0]wb_rdaddr_i,
    input wire [`XLEN-1:0]wb_rddata_i,
    input wire wb_rdwe,
    //to exe
    output reg [`XLEN-1:0] rs1_data_o,
    output reg [`XLEN-1:0] rs2_data_o
);

wire exeid_addr1_same,exeid_addr2_same;
wire exe_addr_not0;
wire memid_addr1_same,memid_addr2_same;
wire mem_addr_not0;
wire wbid_addr1_same,wbid_addr2_same;
wire wb_addr_not0;

assign exeid_addr1_same = (rs1_addr_i == exe_rdaddr_i);
assign exeid_addr2_same = (rs2_addr_i == exe_rdaddr_i);
assign memid_addr1_same = (rs1_addr_i == mem_rdaddr_i);
assign memid_addr2_same = (rs2_addr_i == mem_rdaddr_i);
assign wbid_addr1_same = (rs1_addr_i == wb_rdaddr_i);
assign wbid_addr2_same = (rs2_addr_i == wb_rdaddr_i);

assign exe_addr_not0 = (|exe_rdaddr_i);
assign mem_addr_not0 = (|mem_rdaddr_i);
assign wb_addr_not0 = (|wb_rdaddr_i);

wire exedata1_forward,exedata2_forward;
wire memdata1_forward,memdata2_forward;
wire wbdata1_forward,wbdata2_forward;

assign exedata1_forward = (exe_rdwe & exe_addr_not0 & exeid_addr1_same);
assign exedata2_forward = (exe_rdwe & exe_addr_not0 & exeid_addr2_same);
assign memdata1_forward = (mem_rdwe & mem_addr_not0 & memid_addr1_same);
assign memdata2_forward = (mem_rdwe & mem_addr_not0 & memid_addr2_same);
assign wbdata1_forward = (wb_rdwe & wb_addr_not0 & wbid_addr1_same);
assign wbdata2_forward = (wb_rdwe & wb_addr_not0 & wbid_addr2_same);

always @(*) begin
    if(exedata1_forward) begin
        rs1_data_o = exe_rddata_i; 
    end else if(memdata1_forward) begin
        rs1_data_o = mem_rddata_i;
    end else if(wbdata1_forward) begin
        rs1_data_o = wb_rddata_i;
    end else begin
        rs1_data_o = rs1_data_i;
    end
end

always @(*) begin
    if(exedata2_forward) begin
        rs2_data_o = exe_rddata_i; 
    end else if(memdata2_forward) begin
        rs2_data_o = mem_rddata_i;
    end else if(wbdata2_forward)begin
        rs2_data_o = wb_rddata_i;
    end else begin
        rs2_data_o = rs2_data_i;
    end
end

endmodule
