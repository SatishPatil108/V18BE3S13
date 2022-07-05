unsigned char buf[6];
void temp_read()
{
    float v=0;
		my_RTC_readtime();
		v=my_settemp();
		lcd_cmd(0xC0);
		lcd_string("TE=");
		lcd_float(v);   
	  sprintf(buf,"%.2f",v);
		delay_ms(100);
}