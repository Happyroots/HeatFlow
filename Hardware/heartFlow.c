/*****************************

******************************/

sfr P0      = 0x80;
sfr P1      = 0x90;
sfr P2      = 0xA0;
sfr P3      = 0xB0;
sfr P4      = 0xe8;


void Delay100ms(void)	//@12.000MHz
{
	unsigned char data i, j, k;
	i = 5;
	j = 144;
	k = 71;
	do
	{
		do
		{
			while (--k);
		} while (--j);
	} while (--i);
}



void Delay50ms(void)	//@12.000MHz
{
	unsigned char data i, j, k;

	i = 3;
	j = 72;
	k = 161;
	do
	{
		do
		{
			while (--k);
		} while (--j);
	} while (--i);
}


void Delay20ms(void)	//@12.000MHz
{
	unsigned char data i, j;

	i = 234;
	j = 115;
	do
	{
		while (--j);
	} while (--i);
}

void Delay10ms(void)	//@12.000MHz
{
	unsigned char data i, j;

	i = 117;
	j = 184;
	do
	{
		while (--j);
	} while (--i);
}


void Delay5ms(void)	//@12.000MHz
{
	unsigned char data i, j;

	i = 59;
	j = 90;
	do
	{
		while (--j);
	} while (--i);
}


void display1(){ // half blink
    P0 = P1 = P2 = P3 = 0x55;
    P4 = 0x01;
    Delay20ms(); 
    P0 = P1 = P2 = P3 = 0xAA; // 1010 1010
    P4 = 0x00;
		Delay20ms();
}

void display2(){ // blink
    P0 = P1 = P2 = P3 = 0x00; // 0101 0101
    P4 = 0x00;
		Delay20ms();
    P0 = P1 = P2 = P3 = 0xFF; // 1010 1010
    P4 = 0xFF;
		Delay20ms();
}
void display3(){ // light one for circle
   
		
		P0 = P1 = P2 = P3 = P4 = 0xFF; 
	
		P0 &= ~(1 << 0);     Delay20ms();
		P0 &= ~(1 << 1);     Delay20ms();
		P0 &= ~(1 << 2);     Delay20ms();
		P0 &= ~(1 << 3);     Delay20ms();
		P0 &= ~(1 << 4);     Delay20ms();
		P0 &= ~(1 << 5);     Delay20ms();
		P0 &= ~(1 << 6);     Delay20ms();
		P0 &= ~(1 << 7);     Delay20ms();
		
		P2 &= ~(1 << 7);     Delay20ms(); 
		P2 &= ~(1 << 6);     Delay20ms(); 
		P2 &= ~(1 << 5);     Delay20ms(); 
		P2 &= ~(1 << 4);     Delay20ms(); 
		P2 &= ~(1 << 3);     Delay20ms(); 
		P2 &= ~(1 << 2);     Delay20ms(); 
		P2 &= ~(1 << 1);     Delay20ms(); 
		P2 &= ~(1 << 0);     Delay20ms(); 
		
    P4 = 0x00; Delay20ms();
		
		P3 &= ~(1 << 7);     Delay20ms();
		P3 &= ~(1 << 6);     Delay20ms();
		P3 &= ~(1 << 5);     Delay20ms();
		P3 &= ~(1 << 4);     Delay20ms();
		P3 &= ~(1 << 3);     Delay20ms();
		P3 &= ~(1 << 2);     Delay20ms();
		P3 &= ~(1 << 1);     Delay20ms();
		P3 &= ~(1 << 0);     Delay20ms();
		
		P1 &= ~(1 << 7);     Delay20ms();  
		P1 &= ~(1 << 6);     Delay20ms();   
		P1 &= ~(1 << 5);     Delay20ms();   
		P1 &= ~(1 << 4);     Delay20ms();   
		P1 &= ~(1 << 3);     Delay20ms();   
		P1 &= ~(1 << 2);     Delay20ms();   
		P1 &= ~(1 << 1);     Delay20ms();   
		P1 &= ~(1 << 0);     Delay20ms();   


}

void display4(){ // light from middle
		P0 = P1 = P2 = P3 = P4 = 0xFF;

		P0 &= ~(1 << 0);		P1 &= ~(1 << 0); 	Delay20ms();
		P0 &= ~(1 << 1);		P1 &= ~(1 << 1); 	Delay20ms();
		P0 &= ~(1 << 2);		P1 &= ~(1 << 2); 	Delay20ms();
		P0 &= ~(1 << 3);		P1 &= ~(1 << 3); 	Delay20ms();
		P0 &= ~(1 << 4);		P1 &= ~(1 << 4); 	Delay20ms();
		P0 &= ~(1 << 5);		P1 &= ~(1 << 5); 	Delay20ms();
		P0 &= ~(1 << 6);		P1 &= ~(1 << 6); 	Delay20ms();
		P0 &= ~(1 << 7);		P1 &= ~(1 << 7); 	Delay20ms();
		
		P2 &= ~(1 << 7);		P3 &= ~(1 << 0);	Delay20ms(); 
		P2 &= ~(1 << 6);		P3 &= ~(1 << 1);	Delay20ms(); 
		P2 &= ~(1 << 5);		P3 &= ~(1 << 2);	Delay20ms(); 
		P2 &= ~(1 << 4);		P3 &= ~(1 << 3);	Delay20ms(); 
		P2 &= ~(1 << 3);		P3 &= ~(1 << 4);	Delay20ms(); 
		P2 &= ~(1 << 2);		P3 &= ~(1 << 5);	Delay20ms(); 
		P2 &= ~(1 << 1);		P3 &= ~(1 << 6);	Delay20ms(); 
		P2 &= ~(1 << 0);		P3 &= ~(1 << 7);	Delay20ms(); 
	
		P4 = 0x00; Delay50ms();
   
}


void Delay(unsigned int t)
{
	while(t--);
}

void display5(){ //light to dash and verb
	unsigned char Time,i;
	
	
	for(Time=0;Time<100;Time++)		
	{
		for(i=0;i<10;i++)			
			{
				P0 = P1 = P2 = P3 = P4 = 0x00;
				Delay(Time);			
				P0 = P1 = P2 = P3 = P4 = 0xFF;
				Delay(100-Time);		
			}
		}
		for(Time=100;Time>0;Time--)		
		{
			for(i=0;i<10;i++)			
			{
				P0 = P1 = P2 = P3 = P4 = 0x00;			
				Delay(Time);			
				P0 = P1 = P2 = P3 = P4 = 0xFF;
				Delay(100-Time);		
			}
		}
}



void display6(){ // light from top both side
		P0 = P1 = P2 = P3 = P4 = 0xFF; 
		P3 &= ~(1 << 0);	Delay20ms(); 
		P0 &= ~(1 << 7);	  P3 &= ~(1 << 1);	Delay20ms(); 
		P0 &= ~(1 << 6);		P3 &= ~(1 << 2);	Delay20ms();
		P0 &= ~(1 << 5);		P3 &= ~(1 << 3);	Delay20ms();
		P0 &= ~(1 << 4);		P3 &= ~(1 << 4);	Delay20ms();
		P0 &= ~(1 << 3);		P3 &= ~(1 << 5);	Delay20ms();
		P0 &= ~(1 << 2);		P3 &= ~(1 << 6);	Delay20ms();
		P0 &= ~(1 << 1);		P3 &= ~(1 << 7);	Delay20ms();
		P0 &= ~(1 << 0);		P4 = 0x00; 				Delay50ms();
	
		P2 &= ~(1 << 0);		P1 &= ~(1 << 0); 	Delay20ms();
		P2 &= ~(1 << 1);		P1 &= ~(1 << 1); 	Delay20ms();
		P2 &= ~(1 << 2);		P1 &= ~(1 << 2); 	Delay20ms();
		P2 &= ~(1 << 3);		P1 &= ~(1 << 3); 	Delay20ms();
		P2 &= ~(1 << 4);		P1 &= ~(1 << 4); 	Delay20ms();
		P2 &= ~(1 << 5);		P1 &= ~(1 << 5); 	Delay20ms();
		P2 &= ~(1 << 6);		P1 &= ~(1 << 6); 	Delay20ms();
		P2 &= ~(1 << 7);		P1 &= ~(1 << 7); 	Delay20ms();
		
			
		
}

void display7(){  //light from left middle 
			P0 = P1 = P2 = P3 = P4 = 0xFF; 
		P3 &= ~(1 << 0);	Delay20ms(); 
		P1 &= ~(1 << 7);	  P3 &= ~(1 << 1);	Delay20ms(); 
		P1 &= ~(1 << 6);		P3 &= ~(1 << 2);	Delay20ms();
		P1 &= ~(1 << 5);		P3 &= ~(1 << 3);	Delay20ms();
		P1 &= ~(1 << 4);		P3 &= ~(1 << 4);	Delay20ms();
		P1 &= ~(1 << 3);		P3 &= ~(1 << 5);	Delay20ms();
		P1 &= ~(1 << 2);		P3 &= ~(1 << 6);	Delay20ms();
		P1 &= ~(1 << 1);		P3 &= ~(1 << 7);	Delay20ms();
		P1 &= ~(1 << 0);		P4 = 0x00; 				Delay20ms();
	
		P0 &= ~(1 << 0);		P2 &= ~(1 << 0);	Delay20ms();
		P0 &= ~(1 << 1);		P2 &= ~(1 << 1);	Delay20ms();
		P0 &= ~(1 << 2);		P2 &= ~(1 << 2);	Delay20ms();
		P0 &= ~(1 << 3);		P2 &= ~(1 << 3);	Delay20ms();
		P0 &= ~(1 << 4);		P2 &= ~(1 << 4);	Delay20ms();
		P0 &= ~(1 << 5);		P2 &= ~(1 << 5);	Delay20ms();
		P0 &= ~(1 << 6);		P2 &= ~(1 << 6);	Delay20ms();
		P0 &= ~(1 << 7);		P2 &= ~(1 << 7);	Delay20ms();

}

void display8(){ // light like horse
		P3 &= ~(1 << 0); P2 &= ~(1 << 7);	P0 &= ~(1 << 0); P4 = 0x00; 
		P1 = 0xFE;	Delay10ms(); 
			
		P1 = 0xFF;  
		P0 = 0xFE;	Delay10ms();
		P0 = 0xFD;	Delay10ms();
		P0 = 0xFB;	Delay10ms();
		P0 = 0xF7;	Delay10ms();
		P0 = 0xEF;	Delay10ms();
		P0 = 0xDF;	Delay10ms();
		P0 = 0xBF;	Delay10ms();
		P0 = 0x7F;	Delay10ms();
		
		P0 = 0xFF;	
		P2 = 0x7F;	Delay10ms();
		P2 = 0xBF;	Delay10ms();
		P2 = 0xDF;	Delay10ms();
		P2 = 0xEF;	Delay10ms();
		P2 = 0xF7;	Delay10ms();
		P2 = 0xFB;	Delay10ms();
		P2 = 0xFD;	Delay10ms();
		P2 = 0xFE;	Delay10ms();
		
		P2 = 0xFF;	P4 = 0x00;  Delay10ms();
		
		P4 = 0xFF;  
		P3 = 0x7E;	Delay10ms();
		P3 = 0xBE;	Delay10ms();
		P3 = 0xDE;	Delay10ms();
		P3 = 0xEE;	Delay10ms();
		P3 = 0xF6;	Delay10ms();
		P3 = 0xFA;	Delay10ms();
		P3 = 0xFC;	Delay10ms();
		P3 = 0xFE;	Delay10ms();	
		
		P3 = 0xFF;  
		P1 = 0x7F;	Delay10ms();
		P1 = 0xBF;	Delay10ms();
		P1 = 0xDF;	Delay10ms();
		P1 = 0xEF;	Delay10ms();
		P1 = 0xFB;	Delay10ms();
		P1 = 0xFD;	Delay10ms();
		P1 = 0xFE;	Delay10ms();
		P1 = 0xFF;	Delay10ms();	

}

void display9(){// dim from top middle
		P0 = P1 = P2 = P3 = P4 = 0x00;

		P0 = 0x01;		P1 = 0x01; 	Delay20ms();
		P0 = 0x03;		P1 = 0x03; 	Delay20ms();
		P0 = 0x07;		P1 = 0x07; 	Delay20ms();
		P0 = 0x0F;		P1 = 0x0F; 	Delay20ms();
		P0 = 0x1F;		P1 = 0x1F; 	Delay20ms();
		P0 = 0x3F;		P1 = 0x3F; 	Delay20ms();
		P0 = 0x7F;		P1 = 0x7F; 	Delay20ms();
		P0 = 0xFF;		P1 = 0xFF; 	Delay20ms();
		
		P2 = 0x80;		P3 = 0x01;	Delay20ms(); 
		P2 = 0xC0;		P3 = 0x03;	Delay20ms(); 
		P2 = 0xE0;		P3 = 0x07;	Delay20ms(); 
		P2 = 0xF0;		P3 = 0x0F;	Delay20ms(); 
		P2 = 0xF8;		P3 = 0x1F;	Delay20ms(); 
		P2 = 0xFC;		P3 = 0x3F;	Delay20ms(); 
		P2 = 0xFE;		P3 = 0x7F;	Delay20ms(); 
		P2 = 0xFF;		P3 = 0xFF;	Delay20ms(); 
	
		P4 = 0x01; Delay50ms();
}

void display10(){// light from bottom middle right side

    P2 &= ~(1 << 0);	Delay20ms();
	  P2 &= ~(1 << 1);	Delay20ms();
	  P2 &= ~(1 << 2);	Delay20ms();
	  P2 &= ~(1 << 3);	Delay20ms();
	  P2 &= ~(1 << 4);	Delay20ms();
	  P2 &= ~(1 << 5);	Delay20ms();
	  P2 &= ~(1 << 6);	Delay20ms();
	  P2 &= ~(1 << 7);	Delay20ms();
	  
		P0 &= ~(1 << 7);  Delay20ms();
		P0 &= ~(1 << 6);  Delay20ms();
		P0 &= ~(1 << 5);  Delay20ms();
		P0 &= ~(1 << 4);  Delay20ms();
		P0 &= ~(1 << 3);  Delay20ms();
		P0 &= ~(1 << 2);  Delay20ms();
		P0 &= ~(1 << 1);  Delay20ms();
		P0 &= ~(1 << 0);  Delay20ms();
    
		P1 &= ~(1 << 0); 	Delay20ms();
		P1 &= ~(1 << 1); 	Delay20ms();
		P1 &= ~(1 << 2); 	Delay20ms();
		P1 &= ~(1 << 3); 	Delay20ms();
		P1 &= ~(1 << 4); 	Delay20ms();
		P1 &= ~(1 << 5); 	Delay20ms();
		P1 &= ~(1 << 6); 	Delay20ms();
		P1 &= ~(1 << 7); 	Delay20ms();
		 
		P3 &= ~(1 << 0);	Delay20ms();
		P3 &= ~(1 << 1);	Delay20ms();
		P3 &= ~(1 << 2);	Delay20ms();
		P3 &= ~(1 << 3);	Delay20ms();
		P3 &= ~(1 << 4);	Delay20ms();
		P3 &= ~(1 << 5);	Delay20ms();
		P3 &= ~(1 << 6);	Delay20ms();
		P3 &= ~(1 << 7);	Delay20ms();
		 
		P4 = 0x00; Delay20ms();
		 
		 
}

void display11(){ // dim from bottom middle

	  P0 = P1 = P2 = P3 = P4 = 0x00;

    P4 = 0x01; Delay20ms();
	
    P2 = 0x01; P3 = 0x80; Delay20ms();
    P2 = 0x03; P3 = 0xC0; Delay20ms();
    P2 = 0x07; P3 = 0xE0; Delay20ms();
    P2 = 0x0F; P3 = 0xF0; Delay20ms();
    P2 = 0x1F; P3 = 0xF8; Delay20ms();
    P2 = 0x3F; P3 = 0xFC; Delay20ms();
    P2 = 0x7F; P3 = 0xFE; Delay20ms();
    P2 = 0xFF; P3 = 0xFF; Delay20ms();
    
    P0 = 0x80; P1 = 0x80; Delay20ms();
    P0 = 0xC0; P1 = 0xC0; Delay20ms();
    P0 = 0xE0; P1 = 0xE0; Delay20ms();
    P0 = 0xF0; P1 = 0xF0; Delay20ms();
    P0 = 0xF8; P1 = 0xF8; Delay20ms();
    P0 = 0xFC; P1 = 0xFC; Delay20ms();
    P0 = 0xFE; P1 = 0xFE; Delay20ms();
    P0 = 0xFF; P1 = 0xFF; Delay20ms();
		//Delay50ms(); 
    
}


void display12(){ // light two led for circle
	P0 = 0xFC;            Delay5ms();
	P0 = 0xF3;            Delay5ms();
	P0 = 0xCF;            Delay5ms();
	P0 = 0x3F;            Delay5ms();
	P0 = 0xFF; P2 = 0x3F; Delay5ms();
	P2 = 0xCF;            Delay5ms();     
  P2 = 0xF3;            Delay5ms();
	P2 = 0xFC;            Delay5ms();
	P2 = 0xFF; P4 = 0x00; Delay5ms();
	P4 = 0xFF; P3 = 0x3F; Delay5ms();
	P3 = 0xCF;            Delay5ms();     
  P3 = 0xF3;            Delay5ms();
	P3 = 0xFC;            Delay5ms(); 
	P3 = 0xFF; P1 = 0x3F; Delay5ms();
	P1 = 0xCF;            Delay5ms();     
  P1 = 0xF3;            Delay5ms();
	P1 = 0xFC;            Delay5ms(); 
	P1 = 0xFF;            Delay5ms(); 
	
}

void display13(){ // light half 
	P0 = P1 = P2 = P3 = 0xFF;
	P0 = P3 = 0x00; Delay100ms(); 
	P1 = P2 = P4 = 0x00;  Delay100ms(); 
}



void display14(){ // light quter
		P0 = P1 = P2 = P3 = P4 = 0xFF;


		P1 &= ~(1 << 0);  Delay20ms();
		P1 &= ~(1 << 1);  Delay20ms();
		P1 &= ~(1 << 2);  Delay20ms();
		P1 &= ~(1 << 3);  Delay20ms();
		P1 &= ~(1 << 4);  Delay20ms();
		P1 &= ~(1 << 5);  Delay20ms();
		P1 &= ~(1 << 6);  Delay20ms();
		P1 &= ~(1 << 7);  Delay20ms();
		
		
		P1 = 0x80; Delay20ms(); 
		P1 = 0xC0; Delay20ms(); 
		P1 = 0xE0; Delay20ms(); 
		P1 = 0xF0; Delay20ms(); 
		P1 = 0xF8; Delay20ms(); 
		P1 = 0xFC; Delay20ms(); 
		P1 = 0xFE; Delay20ms(); 
		P1 = 0xFF; Delay20ms(); 
    
		P3 &= ~(1 << 0);  Delay20ms();
		P3 &= ~(1 << 1);  Delay20ms();
		P3 &= ~(1 << 2);  Delay20ms();
		P3 &= ~(1 << 3);  Delay20ms();
		P3 &= ~(1 << 4);  Delay20ms();
		P3 &= ~(1 << 5);  Delay20ms();
		P3 &= ~(1 << 6);  Delay20ms();
		P3 &= ~(1 << 7);  Delay20ms();
		P3 = 0x80; Delay20ms(); 
		P3 = 0xC0; Delay20ms(); 
		P3 = 0xE0; Delay20ms(); 
		P3 = 0xF0; Delay20ms(); 
		P3 = 0xF8; Delay20ms(); 
		P3 = 0xFC; Delay20ms(); 
		P3 = 0xFE; Delay20ms(); 
		P3 = 0xFF; Delay20ms();

		P4 = 0x00;  Delay20ms();
		P2 &= ~(1 << 0);  Delay20ms();
		P2 &= ~(1 << 1);  Delay20ms();
		P2 &= ~(1 << 2);  Delay20ms();
		P2 &= ~(1 << 3);  Delay20ms();
		P2 &= ~(1 << 4);  Delay20ms();
		P2 &= ~(1 << 5);  Delay20ms();
		P2 &= ~(1 << 6);  Delay20ms();
		P2 &= ~(1 << 7);  Delay20ms();
		P4 = 0x01; Delay20ms();
		P2 = 0x80; Delay20ms(); 
		P2 = 0xC0; Delay20ms(); 
		P2 = 0xE0; Delay20ms(); 
		P2 = 0xF0; Delay20ms(); 
		P2 = 0xF8; Delay20ms(); 
		P2 = 0xFC; Delay20ms(); 
		P2 = 0xFE; Delay20ms(); 
		P2 = 0xFF; Delay20ms();
    
    
		
		P0 &= ~(1 << 7);  Delay20ms();
		P0 &= ~(1 << 6);  Delay20ms();
		P0 &= ~(1 << 5);  Delay20ms();
		P0 &= ~(1 << 4);  Delay20ms();
		P0 &= ~(1 << 3);  Delay20ms();
		P0 &= ~(1 << 2);  Delay20ms();
		P0 &= ~(1 << 1);  Delay20ms();
		P0 &= ~(1 << 0);  Delay20ms();
		P0 = 0x01; Delay20ms(); 
		P0 = 0x03; Delay20ms(); 
		P0 = 0x07; Delay20ms(); 
		P0 = 0x0F; Delay20ms(); 
		P0 = 0x1F; Delay20ms(); 
		P0 = 0x3F; Delay20ms(); 
		P0 = 0x7F; Delay20ms(); 
		P0 = 0xFF; Delay20ms();
		

	
}

void display15(){ // light quter asyn
	
		P1 &= ~(1 << 0);  P3 &= ~(1 << 0);  P2 &= ~(1 << 0);  P0 &= ~(1 << 7);  P4 = 0x00;Delay20ms();
		P1 &= ~(1 << 1);  P3 &= ~(1 << 1);  P2 &= ~(1 << 1);  P0 &= ~(1 << 6);  Delay20ms();
		P1 &= ~(1 << 2);  P3 &= ~(1 << 2);  P2 &= ~(1 << 2);  P0 &= ~(1 << 5);  Delay20ms();
		P1 &= ~(1 << 3);  P3 &= ~(1 << 3);  P2 &= ~(1 << 3);  P0 &= ~(1 << 4);  Delay20ms();
		P1 &= ~(1 << 4);  P3 &= ~(1 << 4);  P2 &= ~(1 << 4);  P0 &= ~(1 << 3);  Delay20ms();
		P1 &= ~(1 << 5);  P3 &= ~(1 << 5);  P2 &= ~(1 << 5);  P0 &= ~(1 << 2);  Delay20ms();
		P1 &= ~(1 << 6);  P3 &= ~(1 << 6);  P2 &= ~(1 << 6);  P0 &= ~(1 << 1);  Delay20ms();
		P1 &= ~(1 << 7);  P3 &= ~(1 << 7);  P2 &= ~(1 << 7);  P0 &= ~(1 << 0);  Delay20ms();
		
		
		P1 = 0x80; P3 = 0x80; P2 = 0x80; P0 = 0x01; P4 = 0x01; Delay20ms(); 
		P1 = 0xC0; P3 = 0xC0; P2 = 0xC0; P0 = 0x03; Delay20ms(); 
		P1 = 0xE0; P3 = 0xE0; P2 = 0xE0; P0 = 0x07; Delay20ms(); 
		P1 = 0xF0; P3 = 0xF0; P2 = 0xF0; P0 = 0x0F; Delay20ms(); 
		P1 = 0xF8; P3 = 0xF8; P2 = 0xF8; P0 = 0x1F; Delay20ms(); 
		P1 = 0xFC; P3 = 0xFC; P2 = 0xFC; P0 = 0x3F; Delay20ms(); 
		P1 = 0xFE; P3 = 0xFE; P2 = 0xFE; P0 = 0x7F; Delay20ms(); 
		P1 = 0xFF; P3 = 0xFF; P2 = 0xFF; P0 = 0xFF; Delay20ms(); 

}


void display16(){ // blink B half and T half
	P4 = 0x00;  P0 = P1 = 0xFF; P2 = P3 = 0x00;  Delay50ms(); 
	P4 = 0xFF;  P2 = P3 = 0xFF; P0 = P1 = 0x00;  Delay50ms(); 
}

void display17(){ // blink B L half and T R half
	P4 = 0x00;  P2 = P1 = 0xFF; P0 = P3 = 0x00;  Delay100ms(); 
	P4 = 0xFF;  P0 = P3 = 0xFF; P2 = P1 = 0x00;  Delay100ms(); 
}


void display18(){ //  light a quter
	P0 = P1 = P2 = P3 = P4 = 0xFF;
	P0 = 0x00;   Delay100ms(); 
	P0 = 0xFF;  P2 = 0x00; P4 = 0x00;  Delay50ms();  
	P2 = 0xFF;  P4 = 0xFF; P3 = 0x00;   Delay50ms();  
	P3 = 0xFF;  P1 = 0x00;   Delay50ms();  
}

void display19(){ //  light sigle side  twice
		P0 = P1 = P2 = P3 = P4 = 0xFF;
	    
		P4 = 0x00;  Delay40ms();
		
    P2 &= ~(1 << 0);	Delay20ms();
	  P2 &= ~(1 << 1);	Delay20ms();
	  P2 &= ~(1 << 2);	Delay20ms();
	  P2 &= ~(1 << 3);	Delay20ms();
	  P2 &= ~(1 << 4);	Delay20ms();
	  P2 &= ~(1 << 5);	Delay20ms();
	  P2 &= ~(1 << 6);	Delay20ms();
	  P2 &= ~(1 << 7);	Delay40ms();
	  
		P0 &= ~(1 << 7);  Delay20ms();
		P0 &= ~(1 << 6);  Delay20ms();
		P0 &= ~(1 << 5);  Delay20ms();
		P0 &= ~(1 << 4);  Delay20ms();
		P0 &= ~(1 << 3);  Delay20ms();
		P0 &= ~(1 << 2);  Delay20ms();
		P0 &= ~(1 << 1);  Delay20ms();
		P0 &= ~(1 << 0);  Delay40ms();

		P3 &= ~(1 << 7);	Delay20ms();
		P3 &= ~(1 << 6);	Delay20ms();
		P3 &= ~(1 << 5);	Delay20ms();
		P3 &= ~(1 << 4);	Delay20ms();
		P3 &= ~(1 << 3);	Delay20ms();
		P3 &= ~(1 << 2);	Delay20ms();
		P3 &= ~(1 << 1);	Delay20ms();
		P3 &= ~(1 << 0);	Delay40ms();
		
		P1 &= ~(1 << 7); 	Delay20ms();
		P1 &= ~(1 << 6); 	Delay20ms();
		P1 &= ~(1 << 5); 	Delay20ms();
		P1 &= ~(1 << 4); 	Delay20ms();
		P1 &= ~(1 << 3); 	Delay20ms();
		P1 &= ~(1 << 2); 	Delay20ms();
		P1 &= ~(1 << 1); 	Delay20ms();
		P1 &= ~(1 << 0); 	Delay40ms();
		

}

void display20(){ //  light sigle side  twice
		P0 = P1 = P2 = P3 = P4 = 0xFF;

		P0 &= ~(1 << 0);  Delay20ms();
		P0 &= ~(1 << 1);  Delay20ms();
		P0 &= ~(1 << 2);  Delay20ms();
		P0 &= ~(1 << 3);  Delay20ms();
		P0 &= ~(1 << 4);  Delay20ms();
		P0 &= ~(1 << 5);  Delay20ms();
		P0 &= ~(1 << 6);  Delay20ms();
		P0 &= ~(1 << 7);  Delay40ms();
	
    P2 &= ~(1 << 7);	Delay20ms();
	  P2 &= ~(1 << 6);	Delay20ms();
	  P2 &= ~(1 << 5);	Delay20ms();
	  P2 &= ~(1 << 4);	Delay20ms();
	  P2 &= ~(1 << 3);	Delay20ms();
	  P2 &= ~(1 << 2);	Delay20ms();
	  P2 &= ~(1 << 1);	Delay20ms();
	  P2 &= ~(1 << 0);	Delay20ms();
		P4 = 0x00;  Delay40ms();
	  
		P1 &= ~(1 << 0); 	Delay20ms();
		P1 &= ~(1 << 1); 	Delay20ms();
		P1 &= ~(1 << 2); 	Delay20ms();
		P1 &= ~(1 << 3); 	Delay20ms();
		P1 &= ~(1 << 4); 	Delay20ms();
		P1 &= ~(1 << 5); 	Delay20ms();
		P1 &= ~(1 << 6); 	Delay20ms();
		P1 &= ~(1 << 7); 	Delay40ms();

		P3 &= ~(1 << 0);	Delay20ms();
		P3 &= ~(1 << 1);	Delay20ms();
		P3 &= ~(1 << 2);	Delay20ms();
		P3 &= ~(1 << 3);	Delay20ms();
		P3 &= ~(1 << 4);	Delay20ms();
		P3 &= ~(1 << 5);	Delay20ms();
		P3 &= ~(1 << 6);	Delay20ms();
		P3 &= ~(1 << 7);	Delay20ms();			
		Delay40ms();

}




void main()         
{
	int i = 0;
    while(1)
    {
			P0 = P1 = P2 = P3 = 0x00; //test LED	
			for(i = 0; i < 20; i ++){
				display1();// half blink
			}
			for(i = 0; i < 20; i ++){
				display2();//blink
			}
			display3(); // light one for circle
			display4(); // light from middle

			
			display6(); //light from both
			display7(); //light from left middle
			
			for(i = 0; i < 20; i ++){
				display1();// half blink
			}
			for(i = 0; i < 2; i ++){
				display5();//breath
			}
			
			for(i = 0; i < 3; i ++){	
				display8();  // light like horse
			}
			
			display9();  // dim from middle	
			display10(); // light from bottom middle right side
			display11(); //dim from bottom middle
			for(i = 0; i < 3; i ++){
				display12(); // light two for circle
			}
			for(i = 0; i < 2; i ++){
				display13();  // light half 
			}
			
			for(i = 0; i < 20; i ++){
				display1();// half blink
			}

			display14(); // light quter
			for(i = 0; i < 3; i ++){
				display15(); // light quter asyn
			}
			for(i = 0; i < 3; i ++){
				display16(); // blink B half and T half
			}
			for(i = 0; i < 3; i ++){
				display17(); // blink B L half and T R half
			}
			for(i = 0; i < 3; i ++){
				display18(); //  light a quter
			}
			display19(); //  light sigle side  twice
			display20(); //  light sigle side  twice
    }
    
    return;
}
		
