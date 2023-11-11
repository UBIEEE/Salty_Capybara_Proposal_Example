#define echoPin\
	3
#define trigPin\
	5
long duration;
void setup()
{
  pinMode(echoPin,OUTPUT);
  pinMode(trigPin,INPUT);
  delay(500);
  Serial.begin(9600);
}
void loop()
{
  digitalWrite(trigPin,LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);
  delayMicroseconds(10);
  duration = pulseIn(echoPin, HIGH);
  Serial.println(duration);
}
