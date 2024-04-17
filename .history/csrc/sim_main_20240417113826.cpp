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
	srand((unsigned)time(NULL));
	long long a = 0;
	long long b = 0;
	char *buf = (char *)malloc(1024);

	long long a_c = 0;
	long long b_c = 0;
	long long s_c = 0;
	
	// dut.clk = 0; 
	// dut.eval();
	// dut.rst = 1;
	// 加法
	for(int i = 0; i < 100; i ++){
		a = rand()%(0x00ffffffffffffff);
		b = rand()%(0x00ffffffffffffff);
		dut.a = a;
		dut.b = b;
		dut.c0 = 0;

		dut.eval();

		m_trace->dump(sim_time);
		sim_time++;
		sprintf(buf,"%lld+%lld=[%lld]---",a, b, dut.result);
		sscanf(buf,"%lld+%lld=[%lld]---",&a_c, &b_c, &s_c);


		printf("%s",buf);
		printf("[%lld]-----", a + b);
		if((a + b) == s_c) printf("对！\n");
		else printf("错误！！！\n");
	}

	// 加法
	for(int i = 0; i < 100; i ++){
		a = rand()%(0x00ffffffffffffff);
		b = rand()%(0x00ffffffffffffff);
		dut.a = a;
		dut.b = ~b;
		dut.c0 = 1;

		dut.eval();

		m_trace->dump(sim_time);
		sim_time++;

		sprintf(buf,"%lld-%lld=[%lld]---",a, b, dut.result);
		sscanf(buf,"%lld-%lld=[%lld]---",&a_c, &b_c, &s_c);


		printf("%s",buf);
		printf("[%lld]--[%lld]-----\n", a + b, (dut.a + dut.b + 1));
		if((a - b) == s_c) printf("对！\n");
		else printf("错误！！！！\n");

		// printf("%lld - %lld  = [%lld]--[%lld] [%lld]\n",a,b, dut.result,(a - b), (dut.a + dut.b + 1));
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
	free(buf);
	dut.final();
	m_trace->close();	//关闭波形跟踪文件
	exit(EXIT_SUCCESS);
}



