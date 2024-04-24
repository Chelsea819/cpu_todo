/*************************************************************************
  > File Name: sim_main.cpp
  > Author: Chelsea
  > Mail: 1938166340@qq.com
  > Created Time: 2023年07月13日 星期四 11时16分41秒
  > Created Time: 2023年07月13日 星期四 11时16分41秒
 ************************************************************************/
#include <verilated.h>
#include "Vmul_top.h"
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
	
	// signed
	// for(int i = 0; i < 100; i ++){
	// 	a = rand()%(0x00000000fffffff);
	// 	b = -1 * rand()%(0x00000000ffffffff);
	// 	dut.A = a;
	// 	dut.B = b;
	// 	dut.c0 = 0;

	// 	dut.eval();

	// 	m_trace->dump(sim_time);
	// 	sim_time++;
	// 	sprintf(buf,"%lld+%lld=[%lld]---",a, b, dut.S);
	// 	sscanf(buf,"%lld+%lld=[%lld]---",&a_c, &b_c, &s_c);


	// 	printf("%s",buf);
	// 	printf("[%lld]-----", a + b);
	// 	if((a + b) == s_c) printf("对！\n");
	// 	else printf("错误！！！\n");
	// }

	// unsigned
	for(int i = 0; i < 100; i ++){
		a = rand()%(0x00000000ffffffff);
		b = rand()%(0x00000000ffffffff);
		dut.ai = a;
		dut.bi = b;
		dut.sign = 0;

		dut.eval();

		m_trace->dump(sim_time);
		sim_time++;
		
		sprintf(buf,"%lld-%lld=[0x%016x]---",a, b, dut.low);
		sscanf(buf,"%lld-%lld=[%lld]---",&a_c, &b_c, &s_c);


		printf("%s",buf);
		printf("[%lld]--[%lld]-----", a * b);
		if((a * b) == s_c) printf("对！\n");
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



