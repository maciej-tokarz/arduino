#include <MultiFunctionShield.h>

#define trigPin 5
#define echoPin 6

MultiFunctionShield MFS;

void setup()
{
  Serial.begin(9600);
  MFS.begin();
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

void loop()
{
  int distance = calculateDistance();
  MFS.Display(distance / 10);
  delay(500);
}

int calculateDistance()
{
  long time;
  long distance;

  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  time = pulseIn(echoPin, HIGH);
  distance = time / 58;

  return distance;
}