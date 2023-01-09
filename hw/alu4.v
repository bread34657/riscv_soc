
module alu4(
    input wire [3:0]alua_i,
    input wire [3:0]alub_i,
    input wire aluc_in,
    input wire [1:0]aluop_i ,
    output reg [3:0]aluresult,
    output reg c_out4
);
wire [2:0] c_connet;

alu1 alu01(
    .a_i(alua_i[0]),
    .b_i(alub_i[0]),
    .c_in(aluc_in),
    .op_i(aluop_i),
    .result(aluresult[0]),
    .c_out(c_connet[0])
    );

alu1 alu02(
    .a_i(alua_i[1]),
    .b_i(alub_i[1]),
    .c_in(c_connet[0]),
    .op_i(aluop_i),
    .result(aluresult[1]),
    .c_out(c_connet[1])
    );

alu1 alu03(
    .a_i(alua_i[2]),
    .b_i(alub_i[2]),
    .c_in(c_connet[1]),
    .op_i(aluop_i),
    .result(aluresult[2]),
    .c_out(c_connet[2])
    );

alu1 alu04(
    .a_i(alua_i[3]),
    .b_i(alub_i[3]),
    .c_in(c_connet[2]),
    .op_i(aluop_i),
    .result(aluresult[3]),
    .c_out(c_out4)
    );

endmodule