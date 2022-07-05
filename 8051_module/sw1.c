#include<reg51.h>
sbit LED=P2^7;
sbit sw=P1^0;
main()
{
	while(1)
	{
		if(sw==0)
			LED=0;
		else
			LED=1;
	}
}
		   