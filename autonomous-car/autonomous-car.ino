#include <MultiFunctionShield.h>
#include <AFMotor.h>

AF_DCMotor motor1(1);
AF_DCMotor motor2(2);
AF_DCMotor motor3(3);
AF_DCMotor motor4(4);
// int IR_01 = 5;

void setup()
{
  // pinMode(IR_01, INPUT);
  // pinMode(LED_1_PIN, OUTPUT);
}

void loop()
{
  _setSpeed(70);
  _motorsRun(FORWARD);
  delay(10000);
  _motorsRun(RELEASE);
  delay(1000);

  // if (digitalRead(IR_01) == HIGH)
  // {
  //   digitalWrite(LED_1_PIN, HIGH);
  // }
  // else
  // {
  //   digitalWrite(LED_1_PIN, LOW);
  // }

  // blinkLed(1000);
}

void _setSpeed(int speed)
{
  motor1.setSpeed(speed);
  motor2.setSpeed(speed);
  motor3.setSpeed(speed);
  motor4.setSpeed(speed);
}

void _motorsRun(int direction)
{
  motor1.run(direction);
  motor2.run(direction);
  motor3.run(direction);
  motor4.run(direction);
}

void blinkLed(int time)
{
  digitalWrite(LED_1_PIN, HIGH);
  delay(time);
  digitalWrite(LED_1_PIN, LOW);
  delay(time);
}