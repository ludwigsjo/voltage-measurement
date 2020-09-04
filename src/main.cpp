#include <Arduino.h>

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int value = analogRead(A0);
  float voltage =5.0 * value / 1024;
  Serial.println(voltage);
  delay(100);

  if (voltage > 1.5) {
    digitalWrite(12, HIGH);
    digitalWrite(13, LOW);
  } else {
    digitalWrite(13, HIGH);
    digitalWrite(12, LOW);
  }
}