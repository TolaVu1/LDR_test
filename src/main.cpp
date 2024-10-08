#include <Arduino.h>

const int LDR_PIN = 34;  

void setup() {
  Serial.begin(115200);
}

void loop() {
  int ldrValue = analogRead(LDR_PIN); 

  Serial.print(">LDR: ");                 
  Serial.println(ldrValue);            
  
  delay(1000);
}
