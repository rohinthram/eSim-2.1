/* This is cfunc.mod file auto generated by gen_con_info.py
        Developed by Sumanto Kar at IIT Bombay */

        
        #include <memory>
        #include <verilated.h>
        #include "Vparallel_crc.h"
        #include <stdio.h>
        #include <stdio.h>
        #include <fstream>
        #include <stdlib.h>
        #include <string>
        #include <iostream>
        #include <cstring>
        using namespace std;
        
        extern "C" int temp_clk[1024];
        extern "C" int port_clk;
        extern "C" int temp_reset[1024];
        extern "C" int port_reset;
        extern "C" int temp_enable[1024];
        extern "C" int port_enable;
        extern "C" int temp_init[1024];
        extern "C" int port_init;
        extern "C" int temp_data_in[1024];
        extern "C" int port_data_in;
        extern "C" int temp_crc_out[1024];
        extern "C" int port_crc_out;
        extern "C" int fooparallel_crc(int,int);
        
        void int2arrparallel_crc(int  num, int array[], int n)
        {   
            for (int i = 0; i < n && num>=0; i++) 
            {
                array[n-i-1] = num % 2;
                num /= 2;
                }
        }
        int arr2intparallel_crc(int array[],int n)
        {   
            int i,k=0;
            for (i = 0; i < n; i++) 
                k = 2 * k + array[i];
            return k;
        }
        
        int fooparallel_crc(int init,int count) 
        {
            static VerilatedContext* contextp = new VerilatedContext;
            static Vparallel_crc* parallel_crc[1024];
            count--;
            if (init==0) 
            {
                parallel_crc[count]=new Vparallel_crc{contextp};
                contextp->traceEverOn(true);
            }
            else
            {
                contextp->timeInc(1);
                printf("=============parallel_crc : New Iteration===========");
                printf("\nInstance : %d\n",count);
                printf("\nInside foo before eval.....\n");
				printf("clk=%d\n", parallel_crc[count] ->clk);
				printf("reset=%d\n", parallel_crc[count] ->reset);
				printf("enable=%d\n", parallel_crc[count] ->enable);
				printf("init=%d\n", parallel_crc[count] ->init);
				printf("data_in=%d\n", parallel_crc[count] ->data_in);
				printf("crc_out=%d\n", parallel_crc[count] ->crc_out);
				parallel_crc[count]->clk = arr2intparallel_crc(temp_clk, port_clk);
				parallel_crc[count]->reset = arr2intparallel_crc(temp_reset, port_reset);
				parallel_crc[count]->enable = arr2intparallel_crc(temp_enable, port_enable);
				parallel_crc[count]->init = arr2intparallel_crc(temp_init, port_init);
				parallel_crc[count]->data_in = arr2intparallel_crc(temp_data_in, port_data_in);
				parallel_crc[count]->eval();

                printf("\nInside foo after eval.....\n");
				printf("clk=%d\n", parallel_crc[count] ->clk);
				printf("reset=%d\n", parallel_crc[count] ->reset);
				printf("enable=%d\n", parallel_crc[count] ->enable);
				printf("init=%d\n", parallel_crc[count] ->init);
				printf("data_in=%d\n", parallel_crc[count] ->data_in);
				printf("crc_out=%d\n", parallel_crc[count] ->crc_out);
				int2arrparallel_crc(parallel_crc[count] -> crc_out, temp_crc_out, port_crc_out);

            }
            return 0;
        }