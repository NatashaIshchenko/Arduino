#include <Servo.h>

Servo motor;

void setup() {
  motor.attach(9);
}

void loop() {
  # поворачивется на отметку 4 градуса
  motor.write(4);
  delay(2000);

  # поворачивется на отметку 45 градуса
  motor.write(45);
  delay(2000);
  
  # поворачивется на отметку 90 градусов
  motor.write(90);
  delay(2000);

  # поворачивется на отметку 135 градуса
  motor.write(135);
  delay(2000);

  # поворачивется на отметку 180 градусов
  motor.write(180);
  delay(2000);
}
