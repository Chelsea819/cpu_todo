/*************************************************************************
  > File Name: sim_main.cpp
  > Author: Chelsea
  > Mail: 1938166340@qq.com
  > Created Time: 2023年07月13日 星期四 11时16分41秒
  > Created Time: 2023年07月13日 星期四 11时16分41秒
 ************************************************************************/
#include <verilated.h>
#include "Vopenmips_min_sopc.h"
#include <verilated_vcd_c.h>

#define MAX_SIM_TIME 1000
vluint64_t sim_time = 0;

TOP_NAME dut;


int main(int argc, char** argv, char** env) {
	Verilated::traceEverOn(true); //设置 Verilated 追踪模式为开启,这将使得仿真期间生成波形跟踪文件
    VerilatedVcdC *m_trace = new VerilatedVcdC;
	dut.trace(m_trace, 5);               
	m_trace->open("waveform.vcd");
	
	dut.clk = 0; 
	dut.eval();
	dut.rst = 1;
	dut.eval();

	m_trace->dump(sim_time);
	sim_time++;

	dut.clk = 1;
	dut.eval(); 
	dut.rst = 0;
	dut.eval();

	/* Start engine. */
	while(sim_time <= MAX_SIM_TIME){
        dut.clk ^= 1;
        dut.eval(); 
        m_trace->dump(sim_time);
	    sim_time++; 
    }

	dut.final();
	m_trace->close();	//关闭波形跟踪文件
	exit(EXIT_SUCCESS);
}



