//#define resPin\
//	13
int resPin=13;
void setup() 
{
  pinMode(resPin,OUTPUT);
}
void loop()
{
  digitalWrite(resPin,HIGH);
  delay(500);
  digitalWrite(resPin,LOW);
  delay(500);
}
