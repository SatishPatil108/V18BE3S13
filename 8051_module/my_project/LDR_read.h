unsigned char buf1[6];
void LDR_read()
{
        unsigned int LDR=0; 
        float LDR_DATA=0;
    		lcd_data(' ');
        LDR=read_adc(1,0);
        LDR_DATA=((LDR/4095.0)*100);
	      sprintf(buf1,"%.2f",LDR_DATA);
       	lcd_float(LDR_DATA);
        lcd_data('%');
	      
	      
}	   
   