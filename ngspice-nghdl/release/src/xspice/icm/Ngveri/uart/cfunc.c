#include "ngspice/cm.h"
extern void cm_uart(Mif_Private_t *);
/* This is cfunc.mod file auto generated by gen_con_info.py
        Developed by Sumanto Kar at IIT Bombay */

                
        #include <stdio.h>
        #include <math.h>
        #include <string.h>
        #include "sim_main_uart.h"

        
void cm_uart(Mif_Private_t *mif_private) 
{
	Digital_State_t *_op_tx_out, *_op_tx_out_old;
	Digital_State_t *_op_tx_empty, *_op_tx_empty_old;
	Digital_State_t *_op_rx_data, *_op_rx_data_old;
	Digital_State_t *_op_rx_empty, *_op_rx_empty_old;

    static int inst_count=0;
    int count=0;
        
    if(mif_private->circuit.init)
    {   
        inst_count++;
        mif_private->param[0]->element[0].rvalue=inst_count;
        foouart(0,inst_count);
        /* Allocate storage for output ports and set the load for input ports */

        
        port_reset=mif_private->conn[0]->size;

        port_txclk=mif_private->conn[1]->size;

        port_ld_tx_data=mif_private->conn[2]->size;

        port_tx_data=mif_private->conn[3]->size;

        port_tx_enable=mif_private->conn[4]->size;

        port_rxclk=mif_private->conn[5]->size;

        port_uld_rx_data=mif_private->conn[6]->size;

        port_rx_enable=mif_private->conn[7]->size;

        port_rx_in=mif_private->conn[8]->size;

        port_tx_out=mif_private->conn[9]->size;

        port_tx_empty=mif_private->conn[10]->size;

        port_rx_data=mif_private->conn[11]->size;

        port_rx_empty=mif_private->conn[12]->size;
		cm_event_alloc(0,1*sizeof(Digital_State_t));
		cm_event_alloc(1,1*sizeof(Digital_State_t));
		cm_event_alloc(2,8*sizeof(Digital_State_t));
		cm_event_alloc(3,1*sizeof(Digital_State_t));
		/* set the load for input ports. */
		int Ii;
		for(Ii=0;Ii<mif_private->conn[0]->size;Ii++)
		{
			mif_private->conn[0]->port[Ii]->load=mif_private->param[1]->element[0].rvalue; 
		}
		for(Ii=0;Ii<mif_private->conn[1]->size;Ii++)
		{
			mif_private->conn[1]->port[Ii]->load=mif_private->param[1]->element[0].rvalue; 
		}
		for(Ii=0;Ii<mif_private->conn[2]->size;Ii++)
		{
			mif_private->conn[2]->port[Ii]->load=mif_private->param[1]->element[0].rvalue; 
		}
		for(Ii=0;Ii<mif_private->conn[3]->size;Ii++)
		{
			mif_private->conn[3]->port[Ii]->load=mif_private->param[1]->element[0].rvalue; 
		}
		for(Ii=0;Ii<mif_private->conn[4]->size;Ii++)
		{
			mif_private->conn[4]->port[Ii]->load=mif_private->param[1]->element[0].rvalue; 
		}
		for(Ii=0;Ii<mif_private->conn[5]->size;Ii++)
		{
			mif_private->conn[5]->port[Ii]->load=mif_private->param[1]->element[0].rvalue; 
		}
		for(Ii=0;Ii<mif_private->conn[6]->size;Ii++)
		{
			mif_private->conn[6]->port[Ii]->load=mif_private->param[1]->element[0].rvalue; 
		}
		for(Ii=0;Ii<mif_private->conn[7]->size;Ii++)
		{
			mif_private->conn[7]->port[Ii]->load=mif_private->param[1]->element[0].rvalue; 
		}
		for(Ii=0;Ii<mif_private->conn[8]->size;Ii++)
		{
			mif_private->conn[8]->port[Ii]->load=mif_private->param[1]->element[0].rvalue; 
		}

		/*Retrieve Storage for output*/
		_op_tx_out = _op_tx_out_old = (Digital_State_t *) cm_event_get_ptr(0,0);
		_op_tx_empty = _op_tx_empty_old = (Digital_State_t *) cm_event_get_ptr(1,0);
		_op_rx_data = _op_rx_data_old = (Digital_State_t *) cm_event_get_ptr(2,0);
		_op_rx_empty = _op_rx_empty_old = (Digital_State_t *) cm_event_get_ptr(3,0);


	}
	else
	{
		_op_tx_out = (Digital_State_t *) cm_event_get_ptr(0,0);
		_op_tx_out_old = (Digital_State_t *) cm_event_get_ptr(0,1);
		_op_tx_empty = (Digital_State_t *) cm_event_get_ptr(1,1);
		_op_tx_empty_old = (Digital_State_t *) cm_event_get_ptr(1,2);
		_op_rx_data = (Digital_State_t *) cm_event_get_ptr(2,2);
		_op_rx_data_old = (Digital_State_t *) cm_event_get_ptr(2,3);
		_op_rx_empty = (Digital_State_t *) cm_event_get_ptr(3,3);
		_op_rx_empty_old = (Digital_State_t *) cm_event_get_ptr(3,4);
	}

	//Formating data for sending it to client
	int Ii;
	count=(int)mif_private->param[0]->element[0].rvalue;

    for(Ii=0;Ii<mif_private->conn[0]->size;Ii++)
    {
        if( ((Digital_t*)(mif_private->conn[0]->port[Ii]->input.pvalue))->state==ZERO )
        {
            temp_reset[Ii]=0;            }
        else
        {
            temp_reset[Ii]=1;
        }
            }
    for(Ii=0;Ii<mif_private->conn[1]->size;Ii++)
    {
        if( ((Digital_t*)(mif_private->conn[1]->port[Ii]->input.pvalue))->state==ZERO )
        {
            temp_txclk[Ii]=0;            }
        else
        {
            temp_txclk[Ii]=1;
        }
            }
    for(Ii=0;Ii<mif_private->conn[2]->size;Ii++)
    {
        if( ((Digital_t*)(mif_private->conn[2]->port[Ii]->input.pvalue))->state==ZERO )
        {
            temp_ld_tx_data[Ii]=0;            }
        else
        {
            temp_ld_tx_data[Ii]=1;
        }
            }
    for(Ii=0;Ii<mif_private->conn[3]->size;Ii++)
    {
        if( ((Digital_t*)(mif_private->conn[3]->port[Ii]->input.pvalue))->state==ZERO )
        {
            temp_tx_data[Ii]=0;            }
        else
        {
            temp_tx_data[Ii]=1;
        }
            }
    for(Ii=0;Ii<mif_private->conn[4]->size;Ii++)
    {
        if( ((Digital_t*)(mif_private->conn[4]->port[Ii]->input.pvalue))->state==ZERO )
        {
            temp_tx_enable[Ii]=0;            }
        else
        {
            temp_tx_enable[Ii]=1;
        }
            }
    for(Ii=0;Ii<mif_private->conn[5]->size;Ii++)
    {
        if( ((Digital_t*)(mif_private->conn[5]->port[Ii]->input.pvalue))->state==ZERO )
        {
            temp_rxclk[Ii]=0;            }
        else
        {
            temp_rxclk[Ii]=1;
        }
            }
    for(Ii=0;Ii<mif_private->conn[6]->size;Ii++)
    {
        if( ((Digital_t*)(mif_private->conn[6]->port[Ii]->input.pvalue))->state==ZERO )
        {
            temp_uld_rx_data[Ii]=0;            }
        else
        {
            temp_uld_rx_data[Ii]=1;
        }
            }
    for(Ii=0;Ii<mif_private->conn[7]->size;Ii++)
    {
        if( ((Digital_t*)(mif_private->conn[7]->port[Ii]->input.pvalue))->state==ZERO )
        {
            temp_rx_enable[Ii]=0;            }
        else
        {
            temp_rx_enable[Ii]=1;
        }
            }
    for(Ii=0;Ii<mif_private->conn[8]->size;Ii++)
    {
        if( ((Digital_t*)(mif_private->conn[8]->port[Ii]->input.pvalue))->state==ZERO )
        {
            temp_rx_in[Ii]=0;            }
        else
        {
            temp_rx_in[Ii]=1;
        }
            }
	foouart(1,count);

	/* Scheduling event and processing them */
    for(Ii=0;Ii<mif_private->conn[9]->size;Ii++)
    {
        if(temp_tx_out[Ii]==0)
        {
            _op_tx_out[Ii]=ZERO;
            }
        else if(temp_tx_out[Ii]==1)
        {
            _op_tx_out[Ii]=ONE;
            }
        else
        {
            printf("Unknown value\n");
                }

        if(mif_private->circuit.anal_type == DC)
        {
            ((Digital_t*)(mif_private->conn[9]->port[Ii]->output.pvalue))->state = _op_tx_out[Ii];
            }
        else if(_op_tx_out[Ii] != _op_tx_out_old[Ii])
        {
            ((Digital_t*)(mif_private->conn[9]->port[Ii]->output.pvalue))->state = _op_tx_out[Ii];
            mif_private->conn[9]->port[Ii]->delay = ((_op_tx_out[Ii] == ZERO) ? mif_private->param[3]->element[0].rvalue : mif_private->param[2]->element[0].rvalue);
            }
        else
        {
            mif_private->conn[9]->port[Ii]->changed = FALSE;
            }
        ((Digital_t*)(mif_private->conn[9]->port[Ii]->output.pvalue))->strength = STRONG;
    }
	/* Scheduling event and processing them */
    for(Ii=0;Ii<mif_private->conn[10]->size;Ii++)
    {
        if(temp_tx_empty[Ii]==0)
        {
            _op_tx_empty[Ii]=ZERO;
            }
        else if(temp_tx_empty[Ii]==1)
        {
            _op_tx_empty[Ii]=ONE;
            }
        else
        {
            printf("Unknown value\n");
                }

        if(mif_private->circuit.anal_type == DC)
        {
            ((Digital_t*)(mif_private->conn[10]->port[Ii]->output.pvalue))->state = _op_tx_empty[Ii];
            }
        else if(_op_tx_empty[Ii] != _op_tx_empty_old[Ii])
        {
            ((Digital_t*)(mif_private->conn[10]->port[Ii]->output.pvalue))->state = _op_tx_empty[Ii];
            mif_private->conn[10]->port[Ii]->delay = ((_op_tx_empty[Ii] == ZERO) ? mif_private->param[3]->element[0].rvalue : mif_private->param[2]->element[0].rvalue);
            }
        else
        {
            mif_private->conn[10]->port[Ii]->changed = FALSE;
            }
        ((Digital_t*)(mif_private->conn[10]->port[Ii]->output.pvalue))->strength = STRONG;
    }
	/* Scheduling event and processing them */
    for(Ii=0;Ii<mif_private->conn[11]->size;Ii++)
    {
        if(temp_rx_data[Ii]==0)
        {
            _op_rx_data[Ii]=ZERO;
            }
        else if(temp_rx_data[Ii]==1)
        {
            _op_rx_data[Ii]=ONE;
            }
        else
        {
            printf("Unknown value\n");
                }

        if(mif_private->circuit.anal_type == DC)
        {
            ((Digital_t*)(mif_private->conn[11]->port[Ii]->output.pvalue))->state = _op_rx_data[Ii];
            }
        else if(_op_rx_data[Ii] != _op_rx_data_old[Ii])
        {
            ((Digital_t*)(mif_private->conn[11]->port[Ii]->output.pvalue))->state = _op_rx_data[Ii];
            mif_private->conn[11]->port[Ii]->delay = ((_op_rx_data[Ii] == ZERO) ? mif_private->param[3]->element[0].rvalue : mif_private->param[2]->element[0].rvalue);
            }
        else
        {
            mif_private->conn[11]->port[Ii]->changed = FALSE;
            }
        ((Digital_t*)(mif_private->conn[11]->port[Ii]->output.pvalue))->strength = STRONG;
    }
	/* Scheduling event and processing them */
    for(Ii=0;Ii<mif_private->conn[12]->size;Ii++)
    {
        if(temp_rx_empty[Ii]==0)
        {
            _op_rx_empty[Ii]=ZERO;
            }
        else if(temp_rx_empty[Ii]==1)
        {
            _op_rx_empty[Ii]=ONE;
            }
        else
        {
            printf("Unknown value\n");
                }

        if(mif_private->circuit.anal_type == DC)
        {
            ((Digital_t*)(mif_private->conn[12]->port[Ii]->output.pvalue))->state = _op_rx_empty[Ii];
            }
        else if(_op_rx_empty[Ii] != _op_rx_empty_old[Ii])
        {
            ((Digital_t*)(mif_private->conn[12]->port[Ii]->output.pvalue))->state = _op_rx_empty[Ii];
            mif_private->conn[12]->port[Ii]->delay = ((_op_rx_empty[Ii] == ZERO) ? mif_private->param[3]->element[0].rvalue : mif_private->param[2]->element[0].rvalue);
            }
        else
        {
            mif_private->conn[12]->port[Ii]->changed = FALSE;
            }
        ((Digital_t*)(mif_private->conn[12]->port[Ii]->output.pvalue))->strength = STRONG;
    }

}