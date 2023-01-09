module  alu1(
    input wire a_i,
    input wire b_i,
    input wire c_in,
    input wire [1:0]op_i ,
    output reg result,
    output reg c_out
);
reg result_reg;
assign c_out = (a_i & b_i)|(c_in & (a_i ^ b_i));
assign result = result_reg ;

always @(*) begin
    case(op_i)
        2'b00: result_reg = a_i & b_i;
	    2'b01: result_reg = a_i | b_i;
	    2'b10: result_reg = a_i + b_i+c_in;
	    2'b11: result_reg = 0;
    endcase
end
endmodule