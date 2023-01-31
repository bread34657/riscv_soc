`include "defines.v"


module pipectrl(    
    //from id 
    input wire loaduse_hazard_i,

    //to pc & if
    output reg loaduse_hazard_o,
    //to id
    output reg flushid_o
    //to exe
);

assign loaduse_hazard_o = loaduse_hazard_i;
assign flushid_o = loaduse_hazard_i;


endmodule
