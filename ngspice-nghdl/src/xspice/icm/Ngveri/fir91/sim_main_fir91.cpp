/* This is cfunc.mod file auto generated by gen_con_info.py
        Developed by Sumanto Kar at IIT Bombay */

        
        #include <memory>
        #include <verilated.h>
        #include "Vfir91.h"
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
        extern "C" int temp_reset_n[1024];
        extern "C" int port_reset_n;
        extern "C" int temp_ast_sink_data[1024];
        extern "C" int port_ast_sink_data;
        extern "C" int temp_coef_set[1024];
        extern "C" int port_coef_set;
        extern "C" int temp_ast_sink_valid[1024];
        extern "C" int port_ast_sink_valid;
        extern "C" int temp_ast_source_ready[1024];
        extern "C" int port_ast_source_ready;
        extern "C" int temp_ast_sink_error[1024];
        extern "C" int port_ast_sink_error;
        extern "C" int temp_coef_set_in[1024];
        extern "C" int port_coef_set_in;
        extern "C" int temp_coef_we[1024];
        extern "C" int port_coef_we;
        extern "C" int temp_coef_in[1024];
        extern "C" int port_coef_in;
        extern "C" int temp_ast_source_data[1024];
        extern "C" int port_ast_source_data;
        extern "C" int temp_ast_sink_ready[1024];
        extern "C" int port_ast_sink_ready;
        extern "C" int temp_ast_source_valid[1024];
        extern "C" int port_ast_source_valid;
        extern "C" int temp_ast_source_error[1024];
        extern "C" int port_ast_source_error;
        extern "C" int foofir91(int,int);
        
        void int2arrfir91(int  num, int array[], int n)
        {   
            for (int i = 0; i < n && num>=0; i++) 
            {
                array[n-i-1] = num % 2;
                num /= 2;
                }
        }
        int arr2intfir91(int array[],int n)
        {   
            int i,k=0;
            for (i = 0; i < n; i++) 
                k = 2 * k + array[i];
            return k;
        }
        
        int foofir91(int init,int count) 
        {
            static VerilatedContext* contextp = new VerilatedContext;
            static Vfir91* fir91[1024];
            count--;
            if (init==0) 
            {
                fir91[count]=new Vfir91{contextp};
                contextp->traceEverOn(true);
            }
            else
            {
                contextp->timeInc(1);
                printf("=============fir91 : New Iteration===========");
                printf("\nInstance : %d\n",count);
                printf("\nInside foo before eval.....\n");
				printf("clk=%d\n", fir91[count] ->clk);
				printf("reset_n=%d\n", fir91[count] ->reset_n);
				printf("ast_sink_data=%d\n", fir91[count] ->ast_sink_data);
				printf("coef_set=%d\n", fir91[count] ->coef_set);
				printf("ast_sink_valid=%d\n", fir91[count] ->ast_sink_valid);
				printf("ast_source_ready=%d\n", fir91[count] ->ast_source_ready);
				printf("ast_sink_error=%d\n", fir91[count] ->ast_sink_error);
				printf("coef_set_in=%d\n", fir91[count] ->coef_set_in);
				printf("coef_we=%d\n", fir91[count] ->coef_we);
				printf("coef_in=%d\n", fir91[count] ->coef_in);
				printf("ast_source_data=%d\n", fir91[count] ->ast_source_data);
				printf("ast_sink_ready=%d\n", fir91[count] ->ast_sink_ready);
				printf("ast_source_valid=%d\n", fir91[count] ->ast_source_valid);
				printf("ast_source_error=%d\n", fir91[count] ->ast_source_error);
				fir91[count]->clk = arr2intfir91(temp_clk, port_clk);
				fir91[count]->reset_n = arr2intfir91(temp_reset_n, port_reset_n);
				fir91[count]->ast_sink_data = arr2intfir91(temp_ast_sink_data, port_ast_sink_data);
				fir91[count]->coef_set = arr2intfir91(temp_coef_set, port_coef_set);
				fir91[count]->ast_sink_valid = arr2intfir91(temp_ast_sink_valid, port_ast_sink_valid);
				fir91[count]->ast_source_ready = arr2intfir91(temp_ast_source_ready, port_ast_source_ready);
				fir91[count]->ast_sink_error = arr2intfir91(temp_ast_sink_error, port_ast_sink_error);
				fir91[count]->coef_set_in = arr2intfir91(temp_coef_set_in, port_coef_set_in);
				fir91[count]->coef_we = arr2intfir91(temp_coef_we, port_coef_we);
				fir91[count]->coef_in = arr2intfir91(temp_coef_in, port_coef_in);
				fir91[count]->eval();

                printf("\nInside foo after eval.....\n");
				printf("clk=%d\n", fir91[count] ->clk);
				printf("reset_n=%d\n", fir91[count] ->reset_n);
				printf("ast_sink_data=%d\n", fir91[count] ->ast_sink_data);
				printf("coef_set=%d\n", fir91[count] ->coef_set);
				printf("ast_sink_valid=%d\n", fir91[count] ->ast_sink_valid);
				printf("ast_source_ready=%d\n", fir91[count] ->ast_source_ready);
				printf("ast_sink_error=%d\n", fir91[count] ->ast_sink_error);
				printf("coef_set_in=%d\n", fir91[count] ->coef_set_in);
				printf("coef_we=%d\n", fir91[count] ->coef_we);
				printf("coef_in=%d\n", fir91[count] ->coef_in);
				printf("ast_source_data=%d\n", fir91[count] ->ast_source_data);
				printf("ast_sink_ready=%d\n", fir91[count] ->ast_sink_ready);
				printf("ast_source_valid=%d\n", fir91[count] ->ast_source_valid);
				printf("ast_source_error=%d\n", fir91[count] ->ast_source_error);
				int2arrfir91(fir91[count] -> ast_source_data, temp_ast_source_data, port_ast_source_data);
				int2arrfir91(fir91[count] -> ast_sink_ready, temp_ast_sink_ready, port_ast_sink_ready);
				int2arrfir91(fir91[count] -> ast_source_valid, temp_ast_source_valid, port_ast_source_valid);
				int2arrfir91(fir91[count] -> ast_source_error, temp_ast_source_error, port_ast_source_error);

            }
            return 0;
        }