int RED=13;
int Yeiiow=12;
int button=4;
int button2=2;
int read=0;
void setup(){
  pinMode(RED,OUTPUT);
  pinMode(button,INPUT);
   pinMode(button2,INPUT);
     pinMode(Yeiiow,OUTPUT);
}

void loop()
{
  read = digitalRead( button);
if(read==HIGH)
  
    {digitalWrite(RED,HIGH);}
  
  else{digitalWrite(RED,LOW);}
  delay(250);
  
   read = digitalRead(button2);
if(read==HIGH)
  
  {digitalWrite(Yeiiow,HIGH);}
  
  else{digitalWrite(Yeiiow,LOW);}
  delay(250);




}
