#include <MultiFunctionShield.h>

int IR_01 = 5;

void setup()
{
  pinMode(IR_01, INPUT);
  pinMode(LED_1_PIN, OUTPUT);
}

void loop()
{
  if (digitalRead(IR_01) == HIGH)
  {
    digitalWrite(LED_1_PIN, HIGH);
  }
  else
  {
    digitalWrite(LED_1_PIN, LOW);
  }

  // blinkLed(1000);
}

void blinkLed(int time)
{
  digitalWrite(LED_1_PIN, HIGH);
  delay(time);
  digitalWrite(LED_1_PIN, LOW);
  delay(time);
}