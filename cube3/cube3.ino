int LEDcol[]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,A0,A1}; //digital outputs connected to positive or collums of LEDs
//int LEDcol[]={1,2,5,6,7,8,9,10,11,12,13,14,15,16,19,20}; //digital outputs connected to positive or collums of LEDs
int LEDlevel[]={A2,A3,A4,A5 };  //4 levels analog

void setup()
{
    for (int pin=0; pin<=15; pin++)
    {  //setting up the colums
	pinMode(LEDcol[pin], OUTPUT);
    }
}

void loop()
{
    pinTest();
    off();
}

void off() 
{
    for(int level=0; level<4; level++)
    {  //setting the levels up, default is input, or not currently working as ground 
	pinMode(LEDlevel[level], INPUT);
	digitalWrite(LEDlevel[level],LOW);
    }
    for (int pin=0; pin<16; pin++)
    {
	digitalWrite(LEDcol[pin], LOW);
    }
}

void pinTest()
{
    for (int z=0; z<=3; z++)
    {
	pinMode(LEDlevel[z], OUTPUT);
	for(int y=0; y<=15; y++)
	{
	    digitalWrite(LEDcol[y], HIGH);
	    delay(500);
	    digitalWrite(LEDcol[y], LOW);
	    delay(250);
	}
	pinMode(LEDlevel[z], INPUT);
	delay(250);
    }
}
