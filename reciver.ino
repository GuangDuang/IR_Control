#include <IRremote.h>

const int recivePin = 5;

IRrecv reviver(recivePin);
decode_results input;

void setup() {
  Serial.begin(9600);
  reviver.enableIRIn();
}

void loop() {
  if (reviver.decode(&input)) {
    if (input.value == 0xFEA001) {
      Serial.println("1 PUSH");
    }
    if (input.value == 0xFEA002) {
      Serial.println("2 PUSH");
    }
    if (input.value == 0xFEA003) {
      Serial.println("3 PUSH");
    }
    reviver.resume();
  }
}
