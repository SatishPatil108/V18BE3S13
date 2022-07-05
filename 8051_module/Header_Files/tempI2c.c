#include <reg51.h>
#include"delay.h"
#include"lcd_8bit.h"
#include"i2cEve.h"
#include"i2cDev.h"
#include"tempHeader.h"
main()
{		
    	lcdInit();
		initDs1621();
		lcdString("The Current TEMP");
		 
	    tmp=i2cDeviceRead(0x90,0xAA);  //Read last converted temperature value  from temperature register

	    cnt=i2cDeviceRead(0x90,0xA8);   //Read value of count Remain

	    cpc=i2cDeviceRead(0x90,0xA9);  //Reads count_per_C

		myreg=i2cDeviceRead(0x90,0xAC);

		myth=i2cDeviceRead(0x90,0xA1);
		myCtemp=(tmp-0.25)+((cpc-cnt)/cpc);
		lcd_cmd(0xC0+3);
		lcd_float(myCtemp);

/* For Analysis */

//		lcd_cmd(0xC0+8);
//		lcd_int(myreg);
//		lcd_cmd(0xC0+12);
//		lcd_int(myth);


	    delay(1000);
				
}