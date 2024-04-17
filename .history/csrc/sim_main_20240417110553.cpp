/*************************************************************************
  > File Name: sim_main.cpp
  > Author: Chelsea
  > Mail: 1938166340@qq.com
  > Created Time: 2023年07月13日 星期四 11时16分41秒
  > Created Time: 2023年07月13日 星期四 11时16分41秒
 ************************************************************************/
#include <verilated.h>
#include "Vadd.h"
#include <verilated_vcd_c.h>
#include <time.h>
#include <stdlib.h>

// #define MAX_SIM_TIME 100
vluint64_t sim_time = 0;

TOP_NAME dut;


int main(int argc, char** argv, char** env) {
	Verilated::traceEverOn(true); //设置 Verilated 追踪模式为开启,这将使得仿真期间生成波形跟踪文件
    VerilatedVcdC *m_trace = new VerilatedVcdC;
	dut.trace(m_trace, 5);               
	m_trace->open("waveform.vcd");
	int a = 0;
	srand((unsigned)time(NULL));
	
	// dut.clk = 0; 
	// dut.eval();
	// dut.rst = 1;
	// 加法
	for(int i = 0; i < 100; i ++){
		dut.a = rand()%(0x0111111111111111);
		dut.b = rand()%(0x0111111111111111);
		dut.c0 = 0;

		dut.eval();

		m_trace->dump(sim_time);
		sim_time++;

		printf("result = [%ld]--[%ld]\n",(long)dut.result,(long)(dut.a + dut.a));
	}

	// 加法
	for(int i = 0; i < 100; i ++){
		dut.a = 0b0111;
		dut.b = 0b1111;
		dut.c0 = 1;

		dut.eval();

		m_trace->dump(sim_time);
		sim_time++;

		printf("result = [%d]\n",dut.result);
	}

	// dut.clk = 1;
	// dut.eval(); 
	// dut.rst = 0;
	// dut.eval();

	/* Start engine. */
	// while(sim_time <= MAX_SIM_TIME){
    //     dut.clk ^= 1;
    //     dut.eval(); 
    //     m_trace->dump(sim_time);
	//     sim_time++; 
    // }

	dut.final();
	m_trace->close();	//关闭波形跟踪文件
	exit(EXIT_SUCCESS);
}



