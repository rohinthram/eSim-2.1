/* This is cfunc.mod file auto generated by gen_con_info.py
        Developed by Sumanto Kar at IIT Bombay */

        
        #include <memory>
        #include <verilated.h>
        #include "Vcounter64bit.h"
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
        extern "C" int temp_rst[1024];
        extern "C" int port_rst;
        extern "C" int temp_out[1024];
        extern "C" int port_out;
        extern "C" int foocounter64bit(int,int);
        
        void int2arrcounter64bit(int  num, int array[], int n)
        {   
            for (int i = 0; i < n && num>=0; i++) 
            {
                array[n-i-1] = num % 2;
                num /= 2;
                }
        }
        int arr2intcounter64bit(int array[],int n)
        {   
            int i,k=0;
            for (i = 0; i < n; i++) 
                k = 2 * k + array[i];
            return k;
        }
        
        int foocounter64bit(int init,int count) 
        {
            static VerilatedContext* contextp = new VerilatedContext;
            static Vcounter64bit* counter64bit[1024];
            count--;
            if (init==0) 
            {
                counter64bit[count]=new Vcounter64bit{contextp};
                contextp->traceEverOn(true);
            }
            else
            {
                contextp->timeInc(1);
                printf("=============counter64bit : New Iteration===========");
                printf("\nInstance : %d\n",count);
                printf("\nInside foo before eval.....\n");
				printf("clk=%d\n", counter64bit[count] ->clk);
				printf("rst=%d\n", counter64bit[count] ->rst);
				printf("out=%d\n", counter64bit[count] ->out);
				counter64bit[count]->clk = arr2intcounter64bit(temp_clk, port_clk);
				counter64bit[count]->rst = arr2intcounter64bit(temp_rst, port_rst);
				counter64bit[count]->eval();

                printf("\nInside foo after eval.....\n");
				printf("clk=%d\n", counter64bit[count] ->clk);
				printf("rst=%d\n", counter64bit[count] ->rst);
				printf("out=%d\n", counter64bit[count] ->out);
				int2arrcounter64bit(counter64bit[count] -> out, temp_out, port_out);

            }
            return 0;
        }