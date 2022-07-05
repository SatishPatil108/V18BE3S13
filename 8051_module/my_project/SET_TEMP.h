float my_settemp()
{
   unsigned int TEMP=0;
   float temperature=0;
   char Count_R=0,Count_C=0;
   /*******Setting the TH value**************/
   i2c_device_write(0x90,0xAC,0x2);// Access configration ,continous conversion.
   i2c_device_write(0x90,0xA1,0x25);// set TH Value.
   /********Setting the TL value **************/
   i2c_device_write(0x90,0xA2,0x00);// set TL Value.
   i2c_device_write(0x90,0xEE,0x00);// Start the Conversion.

   /********* Read the temperature **********************/
   TEMP   =i2c_device_read(0x90,0xAA);// read the Temperature.
   Count_R=i2c_device_read(0x90,0xA8);// Counter Remain.
   Count_C=i2c_device_read(0x90,0xA9);// Count_per_C.
   temperature=(TEMP-0.25+((Count_C - Count_R)/Count_C));
   return temperature;
}
