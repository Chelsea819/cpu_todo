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
#include <string.h>

// #define MAX_SIM_TIME 100
vluint64_t sim_time = 0;

TOP_NAME dut;


int main(int argc, char** argv, char** env) {
	Verilated::traceEverOn(true); //设置 Verilated 追踪模式为开启,这将使得仿真期间生成波形跟踪文件
    VerilatedVcdC *m_trace = new VerilatedVcdC;
	dut.trace(m_trace, 5);               
	m_trace->open("waveform.vcd");
	srand((unsigned)time(NULL));
	long unsigned int a = 0;
	long unsigned int b = 0;
	long long a2 = 0;
	long long b2 = 0;
	char *buf = (char *)malloc(1024);
	char *buf2 = (char *)malloc(1024);

	long unsigned int a_c = 0;
	long unsigned int b_c = 0;
	long unsigned int s_c = 0;

	long long a_c2 = 0;
	long long b_c2 = 0;
	long long s_c2 = 0;

	for(int i = 0; i < 1000; i ++){
		a2 = rand()%(0xffffffffffffffff) * -1;
		b2 = rand()%(0x0fffffffffffffff) * -1;
		dut.ai = a2;
		dut.bi = b2;
		dut.sign = 1;

		dut.eval();

		m_trace->dump(sim_time);
		sim_time++;
		
		sprintf(buf,"%lld * %lld = [%lld]---",a2, b2, dut.low);
		sscanf(buf,"%lld * %lld=[%lld]---",&a_c2, &b_c2, &s_c2);

		sprintf(buf2,"%lld * %lld = [%lld]---",a2, b2, a2*b2);


		// printf("%s",buf);
		// printf("[%lld]--", a2 * b2);
		if(strcmp(buf,buf2) == 0) {}
		
		else printf("错误 ！！！！\n");

		// printf("%lld - %lld  = [%lld]--[%lld] [%lld]\n",a,b, dut.result,(a - b), (dut.a + dut.b + 1));
	}

	for(int i = 0; i < 1000; i ++){
		a2 = rand()%(0xffffffffffffffff);
		b2 = rand()%(0x0fffffffffffffff) * -1;
		dut.ai = a2;
		dut.bi = b2;
		dut.sign = 1;

		dut.eval();

		m_trace->dump(sim_time);
		sim_time++;
		
		sprintf(buf,"%lld * %lld = [%lld]---",a2, b2, dut.low);
		sscanf(buf,"%lld * %lld=[%lld]---",&a_c2, &b_c2, &s_c2);

		sprintf(buf2,"%lld * %lld = [%lld]---",a2, b2, a2*b2);


		// printf("%s",buf);
		// printf("[%lld]--", a2 * b2);
		if(strcmp(buf,buf2) == 0) {}
		
		else printf("错误 ！！！！\n");

		// printf("%lld - %lld  = [%lld]--[%lld] [%lld]\n",a,b, dut.result,(a - b), (dut.a + dut.b + 1));
	}

	for(int i = 0; i < 1000; i ++){
		a2 = rand()%(0xffffffffffffffff) * -1;
		b2 = rand()%(0xffffffffffffffff);
		dut.ai = a2;
		dut.bi = b2;
		dut.sign = 1;

		dut.eval();

		m_trace->dump(sim_time);
		sim_time++;
		
		sprintf(buf,"%lld * %lld = [%lld]---",a2, b2, dut.low);
		sscanf(buf,"%lld * %lld=[%lld]---",&a_c2, &b_c2, &s_c2);

		sprintf(buf2,"%lld * %lld = [%lld]---",a2, b2, a2*b2);


		// printf("%s",buf);
		// printf("[%lld]--", a2 * b2);
		if(strcmp(buf,buf2) == 0) {}
		
		else printf("错误 ！！！！\n");

		// printf("%lld - %lld  = [%lld]--[%lld] [%lld]\n",a,b, dut.result,(a - b), (dut.a + dut.b + 1));
	}
	
	for(int i = 0; i < 1000; i ++){
		a2 = rand()%(0xffffffffffffffff);
		b2 = rand()%(0xffffffffffffffff);
		dut.ai = a2;
		dut.bi = b2;
		dut.sign = 1;

		dut.eval();

		m_trace->dump(sim_time);
		sim_time++;
		
		sprintf(buf,"%lld * %lld = [%lld]---",a2, b2, dut.low);
		sscanf(buf,"%lld * %lld=[%lld]---",&a_c2, &b_c2, &s_c2);

		sprintf(buf2,"%lld * %lld = [%lld]---",a2, b2, a2*b2);


		// printf("%s",buf);
		// printf("[%lld]--", a2 * b2);
		if(strcmp(buf,buf2) == 0) {}
		
		else printf("错误 ！！！！\n");

		// printf("%lld - %lld  = [%lld]--[%lld] [%lld]\n",a,b, dut.result,(a - b), (dut.a + dut.b + 1));
	}
	// unsigned

	for(int i = 0; i < 1000; i ++){
		a = rand()%(0xffffffffffffffff);
		b = rand()%(0xffffffffffffffff);
		dut.ai = a;
		dut.bi = b;
		dut.sign = 0;

		dut.eval();

		m_trace->dump(sim_time);
		sim_time++;
		
		sprintf(buf,"0x%016lx * 0x%016lx = [0x%016lx]---",a, b, dut.low);
		sscanf(buf,"0x%016lx * 0x%016lx=[0x%016lx]---",&a_c, &b_c, &s_c);

		sprintf(buf2,"0x%016lx * 0x%016lx = [0x%016lx]---",a, b, a*b);


		// printf("%s",buf);
		// printf("[0x%016lx]--", a * b);
		if(strcmp(buf,buf2) == 0) {}
		
		else printf("错误 ！！！！\n");

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



