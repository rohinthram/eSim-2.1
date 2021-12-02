/* This is cfunc.mod file auto generated by gen_con_info.py
        Developed by Sumanto Kar at IIT Bombay */

                
        #include <stdio.h>
        #include <math.h>
        #include <string.h>
        #include "sim_main_jbasicgates.h"

        
void cm_jbasicgates(ARGS) 
{
	Digital_State_t *_op_yOR, *_op_yOR_old;
	Digital_State_t *_op_yAND, *_op_yAND_old;
	Digital_State_t *_op_yXOR, *_op_yXOR_old;
	Digital_State_t *_op_yNOR, *_op_yNOR_old;
	Digital_State_t *_op_yNAND, *_op_yNAND_old;
	Digital_State_t *_op_yXNOR, *_op_yXNOR_old;

    static int inst_count=0;
    int count=0;
        
    if(INIT)
    {   
        inst_count++;
        PARAM(instance_id)=inst_count;
        foojbasicgates(0,inst_count);
        /* Allocate storage for output ports and set the load for input ports */

        
        port_a=PORT_SIZE(a);

        port_b=PORT_SIZE(b);

        port_yOR=PORT_SIZE(yOR);

        port_yAND=PORT_SIZE(yAND);

        port_yXOR=PORT_SIZE(yXOR);

        port_yNOR=PORT_SIZE(yNOR);

        port_yNAND=PORT_SIZE(yNAND);

        port_yXNOR=PORT_SIZE(yXNOR);
		cm_event_alloc(0,1*sizeof(Digital_State_t));
		cm_event_alloc(1,1*sizeof(Digital_State_t));
		cm_event_alloc(2,1*sizeof(Digital_State_t));
		cm_event_alloc(3,1*sizeof(Digital_State_t));
		cm_event_alloc(4,1*sizeof(Digital_State_t));
		cm_event_alloc(5,1*sizeof(Digital_State_t));
		/* set the load for input ports. */
		int Ii;
		for(Ii=0;Ii<PORT_SIZE(a);Ii++)
		{
			LOAD(a[Ii])=PARAM(input_load); 
		}
		for(Ii=0;Ii<PORT_SIZE(b);Ii++)
		{
			LOAD(b[Ii])=PARAM(input_load); 
		}

		/*Retrieve Storage for output*/
		_op_yOR = _op_yOR_old = (Digital_State_t *) cm_event_get_ptr(0,0);
		_op_yAND = _op_yAND_old = (Digital_State_t *) cm_event_get_ptr(1,0);
		_op_yXOR = _op_yXOR_old = (Digital_State_t *) cm_event_get_ptr(2,0);
		_op_yNOR = _op_yNOR_old = (Digital_State_t *) cm_event_get_ptr(3,0);
		_op_yNAND = _op_yNAND_old = (Digital_State_t *) cm_event_get_ptr(4,0);
		_op_yXNOR = _op_yXNOR_old = (Digital_State_t *) cm_event_get_ptr(5,0);


	}
	else
	{
		_op_yOR = (Digital_State_t *) cm_event_get_ptr(0,0);
		_op_yOR_old = (Digital_State_t *) cm_event_get_ptr(0,1);
		_op_yAND = (Digital_State_t *) cm_event_get_ptr(1,1);
		_op_yAND_old = (Digital_State_t *) cm_event_get_ptr(1,2);
		_op_yXOR = (Digital_State_t *) cm_event_get_ptr(2,2);
		_op_yXOR_old = (Digital_State_t *) cm_event_get_ptr(2,3);
		_op_yNOR = (Digital_State_t *) cm_event_get_ptr(3,3);
		_op_yNOR_old = (Digital_State_t *) cm_event_get_ptr(3,4);
		_op_yNAND = (Digital_State_t *) cm_event_get_ptr(4,4);
		_op_yNAND_old = (Digital_State_t *) cm_event_get_ptr(4,5);
		_op_yXNOR = (Digital_State_t *) cm_event_get_ptr(5,5);
		_op_yXNOR_old = (Digital_State_t *) cm_event_get_ptr(5,6);
	}

	//Formating data for sending it to client
	int Ii;
	count=(int)PARAM(instance_id);

    for(Ii=0;Ii<PORT_SIZE(a);Ii++)
    {
        if( INPUT_STATE(a[Ii])==ZERO )
        {
            temp_a[Ii]=0;            }
        else
        {
            temp_a[Ii]=1;
        }
            }
    for(Ii=0;Ii<PORT_SIZE(b);Ii++)
    {
        if( INPUT_STATE(b[Ii])==ZERO )
        {
            temp_b[Ii]=0;            }
        else
        {
            temp_b[Ii]=1;
        }
            }
	foojbasicgates(1,count);

	/* Scheduling event and processing them */
    for(Ii=0;Ii<PORT_SIZE(yOR);Ii++)
    {
        if(temp_yOR[Ii]==0)
        {
            _op_yOR[Ii]=ZERO;
            }
        else if(temp_yOR[Ii]==1)
        {
            _op_yOR[Ii]=ONE;
            }
        else
        {
            printf("Unknown value\n");
                }

        if(ANALYSIS == DC)
        {
            OUTPUT_STATE(yOR[Ii]) = _op_yOR[Ii];
            }
        else if(_op_yOR[Ii] != _op_yOR_old[Ii])
        {
            OUTPUT_STATE(yOR[Ii]) = _op_yOR[Ii];
            OUTPUT_DELAY(yOR[Ii]) = ((_op_yOR[Ii] == ZERO) ? PARAM(fall_delay) : PARAM(rise_delay));
            }
        else
        {
            OUTPUT_CHANGED(yOR[Ii]) = FALSE;
            }
        OUTPUT_STRENGTH(yOR[Ii]) = STRONG;
    }
	/* Scheduling event and processing them */
    for(Ii=0;Ii<PORT_SIZE(yAND);Ii++)
    {
        if(temp_yAND[Ii]==0)
        {
            _op_yAND[Ii]=ZERO;
            }
        else if(temp_yAND[Ii]==1)
        {
            _op_yAND[Ii]=ONE;
            }
        else
        {
            printf("Unknown value\n");
                }

        if(ANALYSIS == DC)
        {
            OUTPUT_STATE(yAND[Ii]) = _op_yAND[Ii];
            }
        else if(_op_yAND[Ii] != _op_yAND_old[Ii])
        {
            OUTPUT_STATE(yAND[Ii]) = _op_yAND[Ii];
            OUTPUT_DELAY(yAND[Ii]) = ((_op_yAND[Ii] == ZERO) ? PARAM(fall_delay) : PARAM(rise_delay));
            }
        else
        {
            OUTPUT_CHANGED(yAND[Ii]) = FALSE;
            }
        OUTPUT_STRENGTH(yAND[Ii]) = STRONG;
    }
	/* Scheduling event and processing them */
    for(Ii=0;Ii<PORT_SIZE(yXOR);Ii++)
    {
        if(temp_yXOR[Ii]==0)
        {
            _op_yXOR[Ii]=ZERO;
            }
        else if(temp_yXOR[Ii]==1)
        {
            _op_yXOR[Ii]=ONE;
            }
        else
        {
            printf("Unknown value\n");
                }

        if(ANALYSIS == DC)
        {
            OUTPUT_STATE(yXOR[Ii]) = _op_yXOR[Ii];
            }
        else if(_op_yXOR[Ii] != _op_yXOR_old[Ii])
        {
            OUTPUT_STATE(yXOR[Ii]) = _op_yXOR[Ii];
            OUTPUT_DELAY(yXOR[Ii]) = ((_op_yXOR[Ii] == ZERO) ? PARAM(fall_delay) : PARAM(rise_delay));
            }
        else
        {
            OUTPUT_CHANGED(yXOR[Ii]) = FALSE;
            }
        OUTPUT_STRENGTH(yXOR[Ii]) = STRONG;
    }
	/* Scheduling event and processing them */
    for(Ii=0;Ii<PORT_SIZE(yNOR);Ii++)
    {
        if(temp_yNOR[Ii]==0)
        {
            _op_yNOR[Ii]=ZERO;
            }
        else if(temp_yNOR[Ii]==1)
        {
            _op_yNOR[Ii]=ONE;
            }
        else
        {
            printf("Unknown value\n");
                }

        if(ANALYSIS == DC)
        {
            OUTPUT_STATE(yNOR[Ii]) = _op_yNOR[Ii];
            }
        else if(_op_yNOR[Ii] != _op_yNOR_old[Ii])
        {
            OUTPUT_STATE(yNOR[Ii]) = _op_yNOR[Ii];
            OUTPUT_DELAY(yNOR[Ii]) = ((_op_yNOR[Ii] == ZERO) ? PARAM(fall_delay) : PARAM(rise_delay));
            }
        else
        {
            OUTPUT_CHANGED(yNOR[Ii]) = FALSE;
            }
        OUTPUT_STRENGTH(yNOR[Ii]) = STRONG;
    }
	/* Scheduling event and processing them */
    for(Ii=0;Ii<PORT_SIZE(yNAND);Ii++)
    {
        if(temp_yNAND[Ii]==0)
        {
            _op_yNAND[Ii]=ZERO;
            }
        else if(temp_yNAND[Ii]==1)
        {
            _op_yNAND[Ii]=ONE;
            }
        else
        {
            printf("Unknown value\n");
                }

        if(ANALYSIS == DC)
        {
            OUTPUT_STATE(yNAND[Ii]) = _op_yNAND[Ii];
            }
        else if(_op_yNAND[Ii] != _op_yNAND_old[Ii])
        {
            OUTPUT_STATE(yNAND[Ii]) = _op_yNAND[Ii];
            OUTPUT_DELAY(yNAND[Ii]) = ((_op_yNAND[Ii] == ZERO) ? PARAM(fall_delay) : PARAM(rise_delay));
            }
        else
        {
            OUTPUT_CHANGED(yNAND[Ii]) = FALSE;
            }
        OUTPUT_STRENGTH(yNAND[Ii]) = STRONG;
    }
	/* Scheduling event and processing them */
    for(Ii=0;Ii<PORT_SIZE(yXNOR);Ii++)
    {
        if(temp_yXNOR[Ii]==0)
        {
            _op_yXNOR[Ii]=ZERO;
            }
        else if(temp_yXNOR[Ii]==1)
        {
            _op_yXNOR[Ii]=ONE;
            }
        else
        {
            printf("Unknown value\n");
                }

        if(ANALYSIS == DC)
        {
            OUTPUT_STATE(yXNOR[Ii]) = _op_yXNOR[Ii];
            }
        else if(_op_yXNOR[Ii] != _op_yXNOR_old[Ii])
        {
            OUTPUT_STATE(yXNOR[Ii]) = _op_yXNOR[Ii];
            OUTPUT_DELAY(yXNOR[Ii]) = ((_op_yXNOR[Ii] == ZERO) ? PARAM(fall_delay) : PARAM(rise_delay));
            }
        else
        {
            OUTPUT_CHANGED(yXNOR[Ii]) = FALSE;
            }
        OUTPUT_STRENGTH(yXNOR[Ii]) = STRONG;
    }

}