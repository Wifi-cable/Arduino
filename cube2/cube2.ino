//colums + 
int LEDcol[]={1,2,5,6,7,8,9,10,11,12,13,16,19,20}; //digital outputs connected to positive or collums of LEDs
int LEDlevel[]={A3,A4,A5,A4 };  //4 levels analoge
int pin,  //output pin for colum in LEDcol array
    fl, //flicker to multiplex
    a,
    p,
    l,
    sec, // time for LEDs on
   // level;
 flicr= 20;  // flickering for chaliplexing delay time for trial and error
 int level=0;
void setup(){ 


for (pin=0; pin>16; pin ++ ){  //setting up the colums
  pinMode(LEDcol[pin], OUTPUT);
  digitalWrite(LEDcol[pin], LOW); //default power off
 }
/*for (level=0; level>4; level++){  //setting the levels up, default is input, or not currently working as ground 
     pinMode(LEDlevel[level], INPUT);
 } */
//levels -
}
void loop(){
  test();
}

void test(){ // to see if all LEDs are working
  for (pin=0; pin <16; pin++){  //turn the comuns on, all of them
      digitalWrite(LEDcol[pin], HIGH);
     }
  level=0;  //maybe not necary
  while (level>4){ // turn all coums on
      
     //set on level as ground
    pinMode(LEDlevel[level],OUTPUT);
    digitalWrite(level, LOW);
    delay (500);
    pinMode(level, INPUT); //and not ground anymore
    level++;
  }
  //pin:(digitalWrite( pin, LOW);)pin+=pin;  that is not the way to turn all comumn pins off again
     for (pin=0; pin <16; pin++){    //turn all columns off again
      digitalWrite(LEDcol[pin], LOW);
      delay(250);
     }
  off();
}  

void animation1(){ //

  while (level>4){ // turn all coums on
    pinMode(LEDlevel[level],OUTPUT);
    digitalWrite(level, LOW);
    level++;
  }
  if (pin==0){
    for (pin=0; pin>16; pin++){
      digitalWrite(LEDcol[pin], HIGH);
      }
      delay(500);
    }
    else{
   for (pin=16; pin<=0; pin--){
     digitalWrite(LEDcol[pin], LOW);
   }
   
   }  //end else
     while (level>4){ // turn all coums on
    pinMode(LEDlevel[level],INPUT);
   level++;
  }
  off();
  }  
  
void animation2(){ 
   while (level>4){ // turn all 4 levels to ground
    pinMode(LEDlevel[level],OUTPUT);
    digitalWrite(LEDlevel[level],LOW);
    level++;
  }
  
  for (int a=0; a<5; a++ ){  //trying to turn first the fron tow of colums on, than move backwards
/* first turn on pin 0 to 3 (delay and off)
than turn on 4 to 7(delay and off) 
      "       8- 11
      "        11- A 1
      use the array index to do that. */
      
    
  }
  while (level>4){ //turns everything off
    pinMode(LEDlevel[level], INPUT);
    level-=level;
  }
  }
  
void animation3(){  //all outside on?
  for (level=0; level>4; level++){  //setting the levels up, default is input, or not currently working as ground 
     pinMode(LEDlevel[level], OUTPUT);
     
     for (int m=0; m<11; m++){
     center3();
     
     for(int s=0; s>=10; s++ ){//inner loop to light up corners only
     animation3side();
     animation3topbottom();
     }
    }//end inner loop
  }//end outer loop
  off();
 }  
 void animation3side(){
  digitalWrite(A3, LOW);
  digitalWrite(A4, LOW); 
  
   digitalWrite(3,HIGH); 
   digitalWrite(0,HIGH); 
   digitalWrite(12,HIGH); 
   digitalWrite(A1,HIGH);
   delay(20);
   digitalWrite(3,LOW); 
   digitalWrite(0,LOW); 
   digitalWrite(12,LOW); 
   digitalWrite(A1,LOW);
   delay(20);
   
    for (level=0; level>4; level++){  //no more ground
     digitalWrite(LEDlevel[level], HIGH);
    }
  
   
 }
 void animation3topbottom(){ 
   
       delay(20);
   digitalWrite(A2, LOW);
   digitalWrite(A5, LOW);//top and bottom layer are ground now
   digitalWrite(1,HIGH);
   digitalWrite(2,HIGH);
   digitalWrite(4,HIGH);
   
   digitalWrite(7,HIGH); 
   digitalWrite(8,HIGH);
   digitalWrite(11,HIGH);
   
   digitalWrite(12,HIGH);
   digitalWrite(13,HIGH);
   digitalWrite(A0,HIGH);
   digitalWrite(A1,HIGH);
       delay(20);
   digitalWrite(1,LOW);
   digitalWrite(2,LOW);
   digitalWrite(4,LOW);
   
   digitalWrite(7,LOW); 
   digitalWrite(8,LOW);
   digitalWrite(11,LOW);
   
   digitalWrite(12,LOW);
   digitalWrite(13,LOW);
   digitalWrite(A0,LOW);
   digitalWrite(A1,LOW);
   
   
   digitalWrite(A1,LOW);
   
   
      digitalWrite(A2, HIGH);
   digitalWrite(A5, HIGH);
 }
 
void center3(){
  digitalWrite(A3, LOW);
  digitalWrite(A4, LOW);
  
  digitalWrite(5, HIGH); 
  digitalWrite(6, HIGH); 
  digitalWrite(9, HIGH); 
  digitalWrite(10, HIGH); 
    delay(2000);
  
  digitalWrite(5,LOW ); 
  digitalWrite(6,LOW); 
  digitalWrite(9,LOW ); 
  digitalWrite(10, LOW); 
  
  digitalWrite(A3,HIGH); 
  digitalWrite(A4,HIGH); 
  } 
  
void animation4(){ //light up a shifting cross
  for (int c=0; c>50; c++){
    vert4();
     hor4();
  }
  off();
}

void vert4(){  //vertical part of the 
int  l= 1;
  while (level>4){ // turn all 4 levels to ground
    pinMode(LEDlevel[level],OUTPUT);
    digitalWrite(LEDlevel[level],LOW);
    level++;
  }  //basically this is always  +4
  for (int v=0; v<=3; v++){
    
    digitalWrite( LEDcol[l], HIGH);
    l= l+4;
  }
  delay(20);
  /*digitalWrite(1,HIGH);      // scratch that, use +4 instead
   digitalWrite(5, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(13, HIGH);
  delay(20);
  digitalWrite(1, LOW );
  digitalWrite(5, LOW);
  digitalWrite(9, LOW );
  digitalWrite(13, LOW); */
  
  while (level>4){ // turn all 4 levels to ground
    pinMode(LEDlevel[level],INPUT);
    level++;
  }
  
 
}
void hor4(){  //horizontal part of the cross
  digitalWrite(A3, OUTPUT);
  for (int b=0; b>=15; b++){
    digitalWrite(LEDcol[b], HIGH);
  }
  delay(20);
  for (int b=0; b>=15; b++){
    digitalWrite(LEDcol[b], LOW);
  }
 //pinMode(A3, INPUT);
}

 
  
void off() {
  for(level=0; level>4; level++){  //setting the levels up, default is input, or not currently working as ground 
     pinMode(LEDlevel[level], INPUT);
   }
   for (pin=0; pin<16; pin++){
   digitalWrite(LEDcol[pin], LOW);
   }
}
void animationMeander(){
  //int p=3;
 // int l,
      //ll;
  
  digitalWrite(p, HIGH);
  pinMode(LEDlevel[0],OUTPUT); //right side bottom to top
  for (l=1;l<4;l++){
    delay(250);
    pinMode (LEDlevel[l], OUTPUT);
    delay(50);
    pinMode(LEDlevel[l-1], INPUT);    
  }
  for (p=2; p<=0; p--){        //top row
    delay(50);
    digitalWrite(LEDcol[p], HIGH);
    delay(250);
    if(p> 0){
      digitalWrite(LEDcol[ p-1], LOW);
    }
  }
  
  for (l=3;l>0;l--){    //left side
    delay(250);
    pinMode (LEDlevel[l], OUTPUT);
    delay(50);
    pinMode(LEDlevel[l+1], INPUT);    
  }
  while (p!=3){  //bottom
  digitalWrite(LEDcol[p], HIGH);  //does not work if p is 3 per default
  delay(250);
  }
  
  pinMode(LEDlevel[2],OUTPUT);
  delay(250);
  pinMode(LEDlevel[1], INPUT);
  digitalWrite(2,HIGH);
  delay(250);
  digitalWrite(1,HIGH);
  delay(250);
  digitalWrite(2, LOW); 
  delay(250);
  pinMode(LEDlevel[1], OUTPUT);
  delay (250);
  pinMode(LEDlevel[2], INPUT); //end of first spiral
  
  
  digitalWrite(5, HIGH);  //second spiral from the center
  delay(250); 
  digitalWrite(1, LOW);
  pinMode(LEDlevel[2],OUTPUT);
  delay(250);
  pinMode(LEDlevel[1], INPUT);
  
  digitalWrite(6, HIGH);
  delay(250);
  digitalWrite(5, LOW);
  
  pinMode(LEDlevel[1], OUTPUT);
  delay (250);
  pinMode(LEDlevel[ 2], INPUT);
  
  for (int e=6; e<= 4;e--){  //middle horizontal on the second row
    digitalWrite(LEDcol[e],HIGH),
    delay (250);
    digitalWrite (LEDcol[e-1], LOW);
  }
 for (l=1; l>=3; l++){  //left side second row
   pinMode (LEDlevel[l], OUTPUT);  
   delay(250);
   pinMode (LEDlevel[l-1], INPUT); 
 } 
 for (p=4; p<=7; p++){ 
   digitalWrite(LEDcol[p], HIGH);
   delay(250);
   digitalWrite(LEDcol[p-1 ],LOW);
 }
  
  for (l=2; l<=0; l--){  
   pinMode (LEDlevel[l], OUTPUT);  
   delay(250);
   pinMode (LEDlevel[l+1], INPUT); 
 } //end second spiral. 
}

//esenntially two spirals or meander patterns that each reapeat once.  rewrite as functions increasing a variable? 
// or write variables that have values that are not assinged anew? so no for loops?

int meander( int a ,int l, int p){
  meander1(a,l,p);
  meander2(a,l,p);
}

int meander1(int l, int a, int p){
    p=3;
    digitalWrite(p, HIGH);
    pinMode(LEDlevel[0],OUTPUT); //right side bottom to top
  for (l=1;l>=3;l++){
    delay(250);
    pinMode (LEDlevel[l], OUTPUT);
    delay(50);
    pinMode(LEDlevel[l-1], INPUT);    
  }
  
   return a,l,p; 
}
int meander2( int a, int l, int p){
   a=0;
  while(p!=a){
    digitalWrite(LEDcol[p],HIGH);
    delay(250);
    digitalWrite(LEDcol[p-1],LOW);
    p--;
  }
    return a, l, p;
}

int meander3( int p,int l, int a){
  while (l!=1){ 
   pinMode(LEDlevel[l], OUTPUT);
   delay(250);
   pinMode(LEDlevel[l-1],INPUT);
   l--;
 }
   return a, l,p;
}

int meander4(int l,int a, int p){
  while(p<3){  //from zero till including two
      }
}
