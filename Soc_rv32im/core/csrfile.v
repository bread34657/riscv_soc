module csrfile (
    input wire clk_i,
    input wire rst_i,
    //from id
    input wire [11:0] csr_raddr_i,
    //from wb
    input wire csr_we_i,
    input wire [11:0] csr_waddr_i,
    input wire [`XLEN-1:0] csr_wdata_i,
    //to id
    output reg [`XLEN-1:0] csr_rdata_o
);

//          Machine information Register
`define MVENDORID   12'hF11     //manufacturer id
`define MARCHID     12'hF12     //architecture id
`define MIMPID      12'hF13     //cpu version id
`define MHARTID     12'hF14     //cpu hart id

//              Machine Trap Setup
`define MSTATUS     12'h300     //cpu status
`define MISA        12'h301     //extension support
`define MEDELEG     12'h302     //choose lower mode to handle exception
`define MIDELEG     12'h303     //choose lower mode to handle interrupt
`define MIE         12'h304     //interrpt enable    
`define MTVEC       12'h305     //trap handler base addr
`define MCOUNTEREN  12'h306     //hpm(hardware performance monitor)counter use in lower mode enable

//            Machine Trap Handling
`define MSCRATCH    12'h340     //scratch register
`define MEPC        12'h341     //excepton pc addr
`define MCAUSE      12'h342     //trap cause
`define MTVAL       12'h343     //bad addr or instruction
`define MIP         12'h344     //interrupt pending

//            Machine Counter/Timers
`define MCYCLE      12'hB00     //machine cycle counter
`define MINSTRET    12'hB02     //machine instruction-retired counter
`define MCYCLEH     12'hB80     //upper 32bit of mcycle
`define MINSTRETH   12'hB82     //upper 32bit of minstret

//            User Counter/Timers
`define CYCLE       12'hC00     //cycle counter for RDCYCLE instruction 
`define TIME        12'hC01     //timer for RDTIME instruction         
`define CYCLEH      12'hC80

//RO
wire [`XLEN-1:0] mvendorid = 0;
wire [`XLEN-1:0] marchid = 0;
wire [`XLEN-1:0] mimpid = 0;
wire [`XLEN-1:0] mhartid = 0;

//    
reg [`XLEN-1:0] misa;
wire [1:0]  mxl = 2'b01 ; // machine XLEN
wire [25:0] mextensions = 26'b00000000000001000100000000; // ISA extensions - IM
assign misa = {mxl, 4'b0, mextensions};
//
reg [`XLEN-1:0] mstatus;
reg [`XLEN-1:0] mie;
//reg [`XLEN-1:0] medeleg;
//reg [`XLEN-1:0] mideleg;
reg [`XLEN-1:0] mtvec;
reg [`XLEN-1:0] mcounteren;
reg [`XLEN-1:0] mscratch; //ok
reg [`XLEN-1:0] mepc;
reg [`XLEN-1:0] mcause;
reg [`XLEN-1:0] mtval;
reg [`XLEN-1:0] mip;
reg [63:0] mcycle;  //ok
//reg [63:0] minstret;
//reg [`XLEN-1:0] minstreth; 

always @(posedge clk_i) begin //mcycle
    if (rst_i) begin
        mcycle <= 64'b0;
    end else if (csr_we_i) begin
        case (csr_waddr_i)
            `MCYCLE :
                mcycle [31:0] <= csr_wdata_i;
            `MCYCLEH :
                mcycle [63:32] <= csr_wdata_i;
            default : mcycle <= mcycle;
        endcase
    end else begin
        mcycle <= mcycle + 1;
    end
end

always @(posedge clk_i) begin //mstatus
    if (rst_i) begin
        mstatus <= 0;
    end else if (csr_we_i && csr_waddr_i == `MSTATUS) begin
        mstatus <= csr_wdata_i; 
    end else begin
        mstatus <= mstatus;
    end
end

always @(posedge clk_i) begin //mtvec
    if (rst_i) begin
        mtvec <= 0;
    end else if (csr_we_i && csr_waddr_i == `MTVEC) begin
        mtvec <= csr_wdata_i; 
    end else begin
        mtvec <= mtvec;
    end
end

always @(posedge clk_i) begin //mtval
    if (rst_i) begin
        mtval <= 0;
    end else if (csr_we_i && csr_waddr_i == `MTVAL) begin
        mtval <= csr_wdata_i; 
    end else begin
        mtval <= mtval;
    end
end

always @(posedge clk_i) begin //mie
    if (rst_i) begin
        mie <= 0;
    end else if (csr_we_i && csr_waddr_i == `MIE) begin
        mie <= csr_wdata_i; 
    end else begin
        mie <= mie;
    end
end

always @(posedge clk_i) begin //mip
    if (rst_i) begin
        mip <= 0;
    end else if (csr_we_i && csr_waddr_i == `MIP) begin
        mip <= csr_wdata_i; 
    end else begin
        mip <= mip;
    end
end

always @(posedge clk_i) begin //mepc
    if (rst_i) begin
        mepc <= 0;
    end else if (csr_we_i && csr_waddr_i == `MEPC) begin
        mepc <= csr_wdata_i; 
    end else begin
        mepc <= mepc;
    end
end

always @(posedge clk_i) begin //mcause
    if (rst_i) begin
        mcause <= 0;
    end else if (csr_we_i && csr_waddr_i == `MCAUSE) begin
        mcause <= csr_wdata_i; 
    end else begin
        mcause <= mcause;
    end
end

always @(posedge clk_i) begin //mscratch
    if (rst_i) begin
        mscratch <= 0;
    end else if (csr_we_i && csr_waddr_i == `MSCRATCH) begin
        mscratch <= csr_wdata_i; 
    end else begin
        mscratch <= mscratch;
    end
end

always @(posedge clk_i) begin //mcounteren
    if (rst_i) begin
        mcounteren <= 0;
    end else if (csr_we_i && csr_waddr_i == `MCOUNTEREN) begin
        mcounteren <= csr_wdata_i; 
    end else begin
        mcounteren <= mcounteren;
    end
end


always @ (*) begin //read
    if ((csr_waddr_i == csr_raddr_i) && (csr_we_i)) begin  // bypass the write port to the read port
        csr_rdata_o = csr_wdata_i;
    end else begin
        case (csr_raddr_i)
            `MVENDORID: csr_rdata_o = mvendorid;

            `MARCHID: csr_rdata_o = marchid;

            `MIMPID: csr_rdata_o = mimpid;

            `MHARTID: csr_rdata_o = mhartid;

            `MISA: csr_rdata_o = misa;

            `MCYCLE, `CYCLE: csr_rdata_o = mcycle[31:0];

            `MCYCLEH, `CYCLEH: csr_rdata_o = mcycle[63:32];

            `MSTATUS: csr_rdata_o = mstatus;

            `MIE: csr_rdata_o = mie;

            `MTVEC: csr_rdata_o = mtvec;

            `MSCRATCH: csr_rdata_o = mscratch;

            `MEPC: csr_rdata_o = mepc;

            `MCAUSE: csr_rdata_o = mcause;

            `MIP: csr_rdata_o = mip;

            `MTVAL: csr_rdata_o = mtval;

            default: csr_rdata_o = 0;
        endcase  
    end 
end 

endmodule
