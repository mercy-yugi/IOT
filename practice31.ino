// C++ code
//
int red=10;
int yellow=11;
int green=12;
void setup()
{
  pinMode(red,OUTPUT);
  pinMode(yellow,OUTPUT);
  pinMode(green,OUTPUT);
}
void loop()
{
  digitalWrite(red,HIGH);
  delay(1000);
  digitalWrite(red, LOW);
  delay(1000);

  digitalWrite(yellow,HIGH);
  delay(1000);
  digitalWrite(yellow, LOW);
  delay(1000);
  
  digitalWrite(green,HIGH);
  delay(1000);
  digitalWrite(green, LOW);
  delay(1000);
  
  digitalWrite(yellow,HIGH);
  delay(1000);
  digitalWrite(yellow, LOW);
  delay(1000);
  

}