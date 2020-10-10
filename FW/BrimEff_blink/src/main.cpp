#include <Arduino.h>
#include <HardwareSerial.h>

void setup()
{
  
  Serial.begin(115200);


  pinMode(25,OUTPUT);
  pinMode(26,OUTPUT);
  pinMode(27,OUTPUT);
  pinMode(21,OUTPUT);

  while (!Serial);             // Leonardo: wait for serial monitor
  Serial.println("\nalive");


}
 
 
void loop()
{
  /*
  level shift test
digitalWrite(21,HIGH);
digitalWrite(21,LOW);*/


  
  delay(1000);
  Serial.println("\noff");
  digitalWrite(25,HIGH);
  digitalWrite(26,HIGH);
  digitalWrite(27,HIGH);
  delay(1000);
  Serial.println("\non");
  digitalWrite(25,LOW);
  digitalWrite(26,LOW);
  digitalWrite(27,LOW);
  
}