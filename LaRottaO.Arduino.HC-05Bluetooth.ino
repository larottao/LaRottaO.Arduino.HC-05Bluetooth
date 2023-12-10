//Send a message from an Arduino Nano to a HC-05 Module.
//To receive use Kai Morich's Serial Bluetooh terminal on your Android Phone

#include <SoftwareSerial.h>

SoftwareSerial bluetoothSerial(2, 3);

void setup() {
  Serial.begin(9600);
  bluetoothSerial.begin(9600); 
}

void loop() {  
  Serial.println("Puto el que lo lea");
  delay(1000);
}
