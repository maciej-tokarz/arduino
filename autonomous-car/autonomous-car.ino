#include <MultiFunctionShield.h>

int IR_01 = 5;
int LED = 10;

void setup()
{
  pinMode(IR_01, INPUT);
  pinMode(LED, OUTPUT);
}

void loop()
{
  if (digitalRead(IR_01) == HIGH)
  {
    digitalWrite(LED, HIGH);
  }
  else
  {
    digitalWrite(LED, LOW);
  }

  // blinkLed(1000);
}

void blinkLed(int time)
{
  digitalWrite(LED, HIGH);
  delay(time);
  digitalWrite(LED, LOW);
  delay(time);
}