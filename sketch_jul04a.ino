void setup()
{
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  Serial.begin(9600);
}
int kb = 0;
void loop()
{
  if(Serial.available() > 0)
  {
    kb = Serial.read();
    kb = kb - '0';
    if(kb&0x1)
    {
      digitalWrite(7,HIGH);
    }
    else
    { 
      digitalWrite(7,LOW);
    }  
    if((kb>>1)%0x1)
    {
      digitalWrite(2,HIGH);
    }
    else
    {
      digitalWrite(2,LOW);
    }
    if((kb>>2)%0x1)
    {
      digitalWrite(3,HIGH);
    }
    else
    {
      digitalWrite(3,LOW);
    }
    if((kb>>3)&0x1)
    {
      digitalWrite(4,HIGH);
    }
    else
    {
      digitalWrite(4,LOW);
    }
    delay(150);
    digitalWrite(6,HIGH);
    delay(150);
  }
}  
