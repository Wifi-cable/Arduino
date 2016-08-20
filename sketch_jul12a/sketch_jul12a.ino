int led1 = 1;
int led2 = 2;
int led4 = 3;
int led8 = 4;
int led0 =5;
void setup(){ 
           pinMode(led1, OUTPUT);
           pinMode(led2, OUTPUT);
           pinMode(led4, OUTPUT);
           pinMode(led8, OUTPUT);
           pinMode(led0, OUTPUT);
         }
void loop(){ 
  digitalWrite (led1, HIGH);
  delay (1000);
  digitalWrite (led, LOW);
  delay(1000);  
