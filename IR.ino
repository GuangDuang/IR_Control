#include <IRremote.h>
 

const int inputPin1 = 7;
const int inputPin2 = 8;
const int inputPin3 = 9;
 
 
IRsend sender;
 
void setup()
{
  pinMode(inputPin1, INPUT);
  pinMode(inputPin2, INPUT);
  pinMode(inputPin3, INPUT);
}
 
void loop() {
  
  if (digitalRead(inputPin1) == HIGH) {
    sender.sendNEC(0xFEA001, 32);
  }
  if (digitalRead(inputPin2) == HIGH) {
    sender.sendNEC(0xFEA002, 32); 
  }
  if (digitalRead(inputPin3) == HIGH) {
    sender.sendNEC(0xFEA003, 32); 
  }
  delay(200);
 
} 
