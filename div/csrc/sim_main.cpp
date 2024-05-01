/*************************************************************************
  > File Name: sim_main.cpp
  > Author: Chelsea
  > Mail: 1938166340@qq.com
  > Created Time: 2023年07月13日 星期四 11时16分41秒
  > Created Time: 2023年07月13日 星期四 11时16分41秒
 ************************************************************************/
#include <verilated.h>
#include "Vdiv.h"
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
	char *buf =(char *)malloc(1024);
	long long int a2 = 0, b2 = 0;
	long long int a1 = 0, b1 = 0;
	long long int r1 = 0, s1 = 0;
	long long int m1 = 0, m2 = 0;
	dut.sign = 1;

	dut.clk = 0;
	dut.rst_n = 0;
	dut.eval();
	m_trace->dump(sim_time);
	sim_time++;

	dut.clk ^= 1;
	dut.eval();
	m_trace->dump(sim_time);
	sim_time++;

	dut.rst_n = 1;
	dut.clk ^= 1;
	dut.eval();
	m_trace->dump(sim_time);
	sim_time++;

	dut.clk ^= 1;
	a2 = 19;
	b2 = -36;
	dut.x = a2;
	dut.y = b2;
	dut.valid = 1;

	dut.eval();

	m_trace->dump(sim_time);
	sim_time++;

	for(int i = 0; i < 10000; i ++){
		if(dut.finish != 1){
			dut.clk ^= 1;
			dut.eval();
			m_trace->dump(sim_time);
			sim_time++;	 
			continue;
		}
		else if(dut.finish == 1 && dut.clk == 1){
			sprintf(buf,"%lld / %lld = [%lld]--[%lld]---[%lld]--[%lld]",a2, b2, dut.result,a2/b2,dut.rem,a2%b2);
			sscanf(buf,"%lld / %lld = [%lld]--[%lld]---[%lld]--[%lld]",&a1, &b1, &s1,&m1, &r1,&m2);
			// printf("%s",buf);
			if(s1 == m1 && r1 == m2){printf("%s---Success!\n",buf); }
			else
				printf("%s---Fail!\n",buf);

			dut.clk ^= 1;
			a2 = rand()%(0xffffffffffffffff);
			b2 = rand()%(0xffffffffffffffff) * -1;
			dut.x = a2;
			dut.y = b2;
			dut.valid = 1;

			dut.eval();

			m_trace->dump(sim_time);
			sim_time++;
		}
		else{
			dut.clk ^= 1;
			dut.eval();
			m_trace->dump(sim_time);
			sim_time++;	 
			continue;
		}

	}
	while(1){
		if(dut.finish == 1 && dut.clk == 1){
			break;
		}
			dut.clk ^= 1;
			dut.eval();
			m_trace->dump(sim_time);
			sim_time++;	 
		// 	continue;
		// }
	}

	dut.clk ^= 1;
	a2 = 19;
	b2 = -36;
	dut.x = a2;
	dut.y = b2;
	dut.valid = 1;

	dut.eval();

	m_trace->dump(sim_time);
	sim_time++;

	for(int i = 0; i < 10000; i ++){
		if(dut.finish != 1){
			dut.clk ^= 1;
			dut.eval();
			m_trace->dump(sim_time);
			sim_time++;	 
			continue;
		}
		else if(dut.finish == 1 && dut.clk == 1){
			sprintf(buf,"%lld / %lld = [%lld]--[%lld]---[%lld]--[%lld]",a2, b2, dut.result,a2/b2,dut.rem,a2%b2);
			sscanf(buf,"%lld / %lld = [%lld]--[%lld]---[%lld]--[%lld]",&a1, &b1, &s1,&m1, &r1,&m2);
			// printf("%s",buf);
			if(s1 == m1 && r1 == m2){printf("%s---Success!\n",buf); }
			else
				printf("%s---Fail!\n",buf);

			dut.clk ^= 1;
			a2 = rand()%(0xffffffffffffffff);
			b2 = rand()%(0xffffffffffffffff);
			dut.x = a2;
			dut.y = b2;
			dut.valid = 1;

			dut.eval();

			m_trace->dump(sim_time);
			sim_time++;
		}
		else{
			dut.clk ^= 1;
			dut.eval();
			m_trace->dump(sim_time);
			sim_time++;	 
			continue;
		}

	}

	while(1){
		if(dut.finish == 1 && dut.clk == 1){
			break;
		}
			dut.clk ^= 1;
			dut.eval();
			m_trace->dump(sim_time);
			sim_time++;	 
		// 	continue;
		// }
	}

	dut.clk ^= 1;
	a2 = 19;
	b2 = -36;
	dut.x = a2;
	dut.y = b2;
	dut.valid = 1;

	dut.eval();

	m_trace->dump(sim_time);
	sim_time++;

	for(int i = 0; i < 10000; i ++){
		if(dut.finish != 1){
			dut.clk ^= 1;
			dut.eval();
			m_trace->dump(sim_time);
			sim_time++;	 
			continue;
		}
		else if(dut.finish == 1 && dut.clk == 1){
			sprintf(buf,"%lld / %lld = [%lld]--[%lld]---[%lld]--[%lld]",a2, b2, dut.result,a2/b2,dut.rem,a2%b2);
			sscanf(buf,"%lld / %lld = [%lld]--[%lld]---[%lld]--[%lld]",&a1, &b1, &s1,&m1, &r1,&m2);
			// printf("%s",buf);
			if(s1 == m1 && r1 == m2){ printf("%s---Success!\n",buf);}
			else
				printf("%s---Fail!\n",buf);

			dut.clk ^= 1;
			a2 = rand()%(0xffffffffffffffff) * -1;
			b2 = rand()%(0xffffffffffffffff) * -1;
			dut.x = a2;
			dut.y = b2;
			dut.valid = 1;

			dut.eval();

			m_trace->dump(sim_time);
			sim_time++;
		}
		else{
			dut.clk ^= 1;
			dut.eval();
			m_trace->dump(sim_time);
			sim_time++;	 
			continue;
		}

	}

	while(1){
		if(dut.finish == 1 && dut.clk == 1){
			break;
		}
			dut.clk ^= 1;
			dut.eval();
			m_trace->dump(sim_time);
			sim_time++;	 
		// 	continue;
		// }
	}

	dut.clk ^= 1;
	a2 = 19;
	b2 = -36;
	dut.x = a2;
	dut.y = b2;
	dut.valid = 1;

	dut.eval();

	m_trace->dump(sim_time);
	sim_time++;

	for(int i = 0; i < 10000; i ++){
		if(dut.finish != 1){
			dut.clk ^= 1;
			dut.eval();
			m_trace->dump(sim_time);
			sim_time++;	 
			continue;
		}
		else if(dut.finish == 1 && dut.clk == 1){
			sprintf(buf,"%lld / %lld = [%lld]--[%lld]---[%lld]--[%lld]",a2, b2, dut.result,a2/b2,dut.rem,a2%b2);
			sscanf(buf,"%lld / %lld = [%lld]--[%lld]---[%lld]--[%lld]",&a1, &b1, &s1,&m1, &r1,&m2);
			// printf("%s",buf);
			if(s1 == m1 && r1 == m2){printf("%s---Success!\n",buf); }
			else
				printf("%s---Fail!\n",buf);

			dut.clk ^= 1;
			a2 = rand()%(0xffffffffffffffff) * -1;
			b2 = rand()%(0xffffffffffffffff);
			dut.x = a2;
			dut.y = b2;
			dut.valid = 1;

			dut.eval();

			m_trace->dump(sim_time);
			sim_time++;
		}
		else{
			dut.clk ^= 1;
			dut.eval();
			m_trace->dump(sim_time);
			sim_time++;	 
			continue;
		}

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

	uint64_t a2_u = 0, b2_u = 0;
	uint64_t a1_u = 0, b1_u = 0;
	uint64_t r1_u = 0, s1_u = 0;
	uint64_t m1_u = 0, m2_u = 0;

	dut.sign = 0;

	dut.clk = 0;
	dut.rst_n = 0;
	dut.eval();
	m_trace->dump(sim_time);
	sim_time++;

	dut.clk ^= 1;
	dut.eval();
	m_trace->dump(sim_time);
	sim_time++;

	dut.rst_n = 1;
	dut.clk ^= 1;
	dut.eval();
	m_trace->dump(sim_time);
	sim_time++;

	dut.clk ^= 1;
	a2_u = 19;
	b2_u = -36;
	dut.x = a2_u;
	dut.y = b2_u;
	dut.valid = 1;

	dut.eval();

	m_trace->dump(sim_time);
	sim_time++;

	for(int i = 0; i < 10000; i ++){
		if(dut.finish != 1){
			dut.clk ^= 1;
			dut.eval();
			m_trace->dump(sim_time);
			sim_time++;	 
			continue;
		}
		else if(dut.finish == 1 && dut.clk == 1){
			sprintf(buf,"0x%x / 0x%x = [0x%x]--[0x%x]---[0x%x]--[0x%x]",a2_u, b2_u, dut.result,a2_u/b2_u,dut.rem,a2_u%b2_u);
			sscanf(buf,"0x%x / 0x%x = [0x%x]--[0x%x]---[0x%x]--[0x%x]",&a1_u, &b1_u, &s1_u,&m1_u, &r1_u,&m2_u);
			// printf("%s",buf);
			if(s1_u == m1_u && r1_u == m2_u){printf("%s---Success!\n",buf); }
			else
				printf("%s---Fail!\n",buf);

			dut.clk ^= 1;
			a2_u = rand()%(0x0fffffffffffffff) + 0xffffffffffffffff;
			b2_u = rand()%(0xffffffffffffffff);
			dut.x = a2_u;
			dut.y = b2_u;
			dut.valid = 1;

			dut.eval();

			m_trace->dump(sim_time);
			sim_time++;
		}
		else{
			dut.clk ^= 1;
			dut.eval();
			m_trace->dump(sim_time);
			sim_time++;	 
			continue;
		}

	}
	while(1){
		if(dut.finish == 1 && dut.clk == 1){
			break;
		}
			dut.clk ^= 1;
			dut.eval();
			m_trace->dump(sim_time);
			sim_time++;	 
		// 	continue;
		// }
	}

	dut.clk ^= 1;
	a2_u = 19;
	b2_u = -36;
	dut.x = a2_u;
	dut.y = b2_u;
	dut.valid = 1;

	dut.eval();

	m_trace->dump(sim_time);
	sim_time++;

	for(int i = 0; i < 10000; i ++){
		if(dut.finish != 1){
			dut.clk ^= 1;
			dut.eval();
			m_trace->dump(sim_time);
			sim_time++;	 
			continue;
		}
		else if(dut.finish == 1 && dut.clk == 1){
			sprintf(buf,"0x%x / 0x%x = [0x%x]--[0x%x]---[0x%x]--[0x%x]",a2_u, b2_u, dut.result,a2_u/b2_u,dut.rem,a2_u%b2_u);
			sscanf(buf,"0x%x / 0x%x = [0x%x]--[0x%x]---[0x%x]--[0x%x]",&a1_u, &b1_u, &s1_u,&m1_u, &r1_u,&m2_u);
			// printf("%s",buf);
			if(s1_u == m1_u && r1_u == m2_u){printf("%s---Success!\n",buf); }
			else
				printf("%s---Fail!\n",buf);

			dut.clk ^= 1;
			a2_u = rand()%(0x0fffffffffffffff) + 0xffffffffffffffff;
			b2_u = rand()%(0xffffffffffffffff) + 0xffffffffffffffff;
			dut.x = a2_u;
			dut.y = b2_u;
			dut.valid = 1;

			dut.eval();

			m_trace->dump(sim_time);
			sim_time++;
		}
		else{
			dut.clk ^= 1;
			dut.eval();
			m_trace->dump(sim_time);
			sim_time++;	 
			continue;
		}

	}

	while(1){
		if(dut.finish == 1 && dut.clk == 1){
			break;
		}
			dut.clk ^= 1;
			dut.eval();
			m_trace->dump(sim_time);
			sim_time++;	 
		// 	continue;
		// }
	}

	dut.clk ^= 1;
	a2_u = 19;
	b2_u = -36;
	dut.x = a2_u;
	dut.y = b2_u;
	dut.valid = 1;

	dut.eval();

	m_trace->dump(sim_time);
	sim_time++;

	for(int i = 0; i < 10000; i ++){
		if(dut.finish != 1){
			dut.clk ^= 1;
			dut.eval();
			m_trace->dump(sim_time);
			sim_time++;	 
			continue;
		}
		else if(dut.finish == 1 && dut.clk == 1){
			sprintf(buf,"0x%x / 0x%x = [0x%x]--[0x%x]---[0x%x]--[0x%x]",a2_u, b2_u, dut.result,a2_u/b2_u,dut.rem,a2_u%b2_u);
			sscanf(buf,"0x%x / 0x%x = [0x%x]--[0x%x]---[0x%x]--[0x%x]",&a1_u, &b1_u, &s1_u,&m1_u, &r1_u,&m2_u);
			// printf("%s",buf);
			if(s1_u == m1_u && r1_u == m2_u){ printf("%s---Success!\n",buf);}
			else
				printf("%s---Fail!\n",buf);

			dut.clk ^= 1;
			a2_u = rand()%(0x0fffffffffffffff);
			b2_u = rand()%(0xffffffffffffffff) + 0xffffffffffffffff;
			dut.x = a2_u;
			dut.y = b2_u;
			dut.valid = 1;

			dut.eval();

			m_trace->dump(sim_time);
			sim_time++;
		}
		else{
			dut.clk ^= 1;
			dut.eval();
			m_trace->dump(sim_time);
			sim_time++;	 
			continue;
		}

	}

	while(1){
		if(dut.finish == 1 && dut.clk == 1){
			break;
		}
			dut.clk ^= 1;
			dut.eval();
			m_trace->dump(sim_time);
			sim_time++;	 
		// 	continue;
		// }
	}

	dut.clk ^= 1;
	a2_u = 19;
	b2_u = -36;
	dut.x = a2_u;
	dut.y = b2_u;
	dut.valid = 1;

	dut.eval();

	m_trace->dump(sim_time);
	sim_time++;

	for(int i = 0; i < 10000; i ++){
		if(dut.finish != 1){
			dut.clk ^= 1;
			dut.eval();
			m_trace->dump(sim_time);
			sim_time++;	 
			continue;
		}
		else if(dut.finish == 1 && dut.clk == 1){
			sprintf(buf,"0x%x / 0x%x = [0x%x]--[0x%x]---[0x%x]--[0x%x]",a2_u, b2_u, dut.result,a2_u/b2_u,dut.rem,a2_u%b2_u);
			sscanf(buf,"0x%x / 0x%x = [0x%x]--[0x%x]---[0x%x]--[0x%x]",&a1_u, &b1_u, &s1_u,&m1_u, &r1_u,&m2_u);
			// printf("%s",buf);
			if(s1_u == m1_u && r1_u == m2_u){printf("%s---Success!\n",buf); }
			else
				printf("%s---Fail!\n",buf);

			dut.clk ^= 1;
			a2_u = rand()%(0xffffffffffffffff);
			b2_u = rand()%(0xffffffffffffffff);
			dut.x = a2_u;
			dut.y = b2_u;
			dut.valid = 1;

			dut.eval();

			m_trace->dump(sim_time);
			sim_time++;
		}
		else{
			dut.clk ^= 1;
			dut.eval();
			m_trace->dump(sim_time);
			sim_time++;	 
			continue;
		}

	}


	free(buf);
	dut.final();
	m_trace->close();	//关闭波形跟踪文件
	exit(EXIT_SUCCESS);
}



