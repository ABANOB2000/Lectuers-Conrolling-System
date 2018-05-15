int led=13;
int val;
int s=6;
int r=7;
int l=8;
void setup() {
 
  // put your setup code here, to run once
  pinMode(led,OUTPUT);
  pinMode(l,OUTPUT);
  pinMode(r,OUTPUT);
  pinMode(s,OUTPUT);
  Serial.begin(9600);
}

void loop() {
 

  // put your main code here, to run repeatedly:
   val=Serial.read();

  switch(val)
  {
	 case '1':
	  SYSTEM();
	 break;
	 case '2':
	  DOOROPEN();
	 break;
	 case '3':
	  DOORCLOSE();
	 break;
 }
}
  
  void SYSTEM()
{
   analogWrite(s,255);
digitalWrite(l,HIGH);
digitalWrite(r,LOW);
delay(4000);
digitalWrite(l,LOW);
digitalWrite(r,LOW);
delay(6000);
analogWrite(s,160);
digitalWrite(l,LOW);
digitalWrite(r,HIGH);
delay(4500);
digitalWrite(l,LOW);
digitalWrite(r,LOW);
  }
    void DOORCLOSE()
{
   analogWrite(s,160);
digitalWrite(l,LOW);
digitalWrite(r,HIGH);
delay(4500);
digitalWrite(l,LOW);
digitalWrite(r,LOW);
}
  void DOOROPEN()
{
   analogWrite(s,255);
digitalWrite(l,HIGH);
digitalWrite(r,LOW);
delay(4000);
digitalWrite(l,LOW);
digitalWrite(r,LOW);
  }
