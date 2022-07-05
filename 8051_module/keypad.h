sbit R0=P2^4;
sbit R1=P2^5;
sbit R2=P2^6;
sbit R3=P2^7;


sbit C0=P2^0;
sbit C1=P2^1;
sbit C2=P2^2;
sbit C3=P2^3;

code unsigned char key_lookup_table[4][4]={'1','2','3','+',
										   '4','5','6','-',
									   	   '7','8','9','*',
										   'C','0','=','/'};
unsigned char keyscan()
{
	unsigned char row,col;
	R0=R1=R2=R3=0;
	C0=C1=C2=C3=1;

	while((C0&C1&C2&C3)==1);//waiting for key press
	delay_ms(100);

	/* checking row 0 */
	R0=0;
	R1=R2=R3=1;
	if((C0&C1&C2&C3)==0)
	{
		row=0;
		goto colcheck;
	}

	/* checking row 1 */
	R1=0;
	R0=R2=R3=1;

	if((C0&C1&C2&C3)==0)
	{
		row=1;
		goto colcheck;
	}

	/* checking row 2 */
	R2=0;
	R0=R1=R3=1;

	if((C0&C1&C2&C3)==0)
	{
		row=2;
		goto colcheck;
	}
	
	/* checking row 3 */
	R3=0;
	R0=R1=R2=1;

	if((C0&C1&C2&C3)==0)
	{
		row=3;
		goto colcheck;
	}
	
	/* column check */

	colcheck:
	if(C0==0)
	col=0;
	else if(C1==0)
	col=1;
	else if(C2==0)
	col=2;
	else if(C3==0)
	col=3;	

	while((C0&C1&C2&C3)==0);// waiting for switch release

	return (key_lookup_table[row][col]);
}