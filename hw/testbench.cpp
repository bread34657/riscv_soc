#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "Valu4.h"
#include "verilated_vcd_c.h"

vluint64_t main_time = 0; 

double sc_time_stamp(int len)
 {
     return (main_time%len);
 }

int main(int argc,char **argv)
{
     char opStr[4][10]={"and","or","add","zero"};
     Verilated::commandArgs(argc,argv);
     Verilated::traceEverOn(true); 

     VerilatedVcdC* tfp = new VerilatedVcdC(); 

     Valu4 *top = new Valu4("top");
     top->trace(tfp, 0);
     tfp->open("wave.vcd"); 

     while(sc_time_stamp(20) < 19 && !Verilated::gotFinish())
     {                                                                                                                          
        int a = rand() & 0xF;
        int b = rand() & 0xF;
        int op = 0x2;
        top->alua_i = a;
        top->alub_i = b;
        top->aluc_in=0;
        top->aluop_i = op;
        top->eval();
        printf("time=%ld, a = %d, b = %d, op = %s, result=%d\n",
        main_time, a,b,opStr[op] , top->aluresult);
        tfp->dump(main_time); //dump wave
        main_time++; 
     }
     top->final();
     tfp->close();
     delete top;
     return 0;
}