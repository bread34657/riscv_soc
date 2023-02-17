`include "defines.v"

module mem(
    input wire rst_i,
    input wire clk_i,
    //from pipectrl
    input wire stall_i,
    //from exe 
    input wire [4:0]rd_addr_i,
    input wire [`XLEN-1:0] rd_data_i,
    input wire rd_we_i,
    input wire [`XLEN-1:0] mem_addr_i,
    input wire mem_re_i,
    input wire mem_we_i,
    input wire [2:0]opfunc3_i,
    //from ram
    input wire [`XLEN-1:0] ram_data_i,
    //to ram 
    output reg [`XLEN-1:0] ram_addr_o,
    output reg [`XLEN-1:0] ram_data_o,
    output reg ram_we_o,
    output reg ram_re_o,
    //to wb & forwarding
    output reg [4:0]rd_addr_o,
    output reg [`XLEN-1:0] rd_data_o,
    output reg rd_we_o
    //isa test 
    //output reg halt_o
);

// always @(posedge clk_i) begin
//     //for isa test
//     if (mem_we_i && opfunc3_i == 3'b010 && mem_addr_i == `HALT_ADDR)
//         halt_o <= 1'b1;
//     else
//         halt_o <= halt_o;
// end

wire[1:0] ram_addr_offset;
assign ram_addr_offset = mem_addr_i[1:0] & 2'b11; //0,1,2,3
assign ram_re_o = mem_re_i;
assign ram_we_o = mem_we_i;
reg [`XLEN-1:0] rd_data;

always@(*) begin
    if(mem_re_i)begin
        ram_addr_o = mem_addr_i;
        case(opfunc3_i)
            3'b000:begin //LB
                case(ram_addr_offset)
                    2'b00:rd_data = {{24{ram_data_i[7]}}, ram_data_i[7:0]};
                    2'b01:rd_data = {{24{ram_data_i[15]}}, ram_data_i[15:8]};
                    2'b10:rd_data = {{24{ram_data_i[23]}}, ram_data_i[23:16]};
                    2'b11:rd_data = {{24{ram_data_i[31]}}, ram_data_i[31:24]};
                endcase
            end
            3'b001:begin //LH
                case(ram_addr_offset)
                    2'b00:rd_data = {{16{ram_data_i[15]}}, ram_data_i[15:0]};
                    2'b10:rd_data = {{16{ram_data_i[31]}}, ram_data_i[31:16]};
                    default:rd_data = 0;
                endcase
            end
            3'b010:begin //LW
                rd_data = ram_data_i;
            end
            3'b100:begin //LBU
                case(ram_addr_offset)
                    2'b00:rd_data = {24'b0, ram_data_i[7:0]};
                    2'b01:rd_data = {24'b0, ram_data_i[15:8]};
                    2'b10:rd_data = {24'b0, ram_data_i[23:16]};
                    2'b11:rd_data = {24'b0, ram_data_i[31:24]};
                endcase
            end
            3'b101:begin //LHU
                case(ram_addr_offset)
                    2'b00:rd_data = {16'b0, ram_data_i[15:0]};
                    2'b10:rd_data = {16'b0, ram_data_i[31:16]};
                    default:rd_data = 0;
                endcase
            end 
            default:begin
                rd_data = 0;
                ram_addr_o = 0;
            end
        endcase
    end else begin
        rd_data = rd_data_i;
    end
end

always @(*) begin
    if(mem_we_i) begin
        ram_addr_o = mem_addr_i;
        case(opfunc3_i)
            3'b000:begin //SB
                case(ram_addr_offset)
                    2'b00:ram_data_o = {ram_data_i[31:8],rd_data_i[7:0]};
                    2'b01:ram_data_o = {ram_data_i[31:16],rd_data_i[7:0], ram_data_i[7:0]};
                    2'b10:ram_data_o = {ram_data_i[31:24],rd_data_i[7:0], ram_data_i[15:0]};
                    2'b11:ram_data_o = {rd_data_i[7:0],ram_data_i[23:0]};
                endcase
            end
            3'b001:begin //SH
                case(ram_addr_offset)
                    2'b00:ram_data_o = {ram_data_i[31:16],rd_data_i[15:0]};
                    2'b10:ram_data_o = {rd_data_i[15:0],ram_data_i[15:0]};
                    default:ram_data_o = 0;
                endcase
            end
            3'b010:begin //SW
                ram_data_o = rd_data_i;
            end
            default:ram_data_o = 0;
        endcase
    end
end

always @(posedge clk_i) begin
    if(rst_i) begin
        rd_addr_o <= 0;
        rd_data_o <= 0;
        rd_we_o <= 0;
    end else if (stall_i) begin
        rd_addr_o <= rd_addr_o;
        rd_data_o <= rd_data_o;
        rd_we_o <= rd_we_o ;
    end else begin
        rd_addr_o <= rd_addr_i;
        rd_data_o <= rd_data;
        rd_we_o <= rd_we_i ;
    end 
end
endmodule
