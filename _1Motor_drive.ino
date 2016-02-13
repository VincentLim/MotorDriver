#include <MotorDriver.h>

#define EN_A 5
#define IN_A_1 6
#define IN_A_2 7
#define LED 13

MotorDriver motor1(EN_A, IN_A_1, IN_A_2);

void setup() {
  
  pinMode(LED, OUTPUT);
  
}

void loop() {
  // Spin 5sec Clockwise
  digitalWrite(LED, HIGH);
  motor1.run(255, 1);

delay (5000);
// STOP 1sec
  digitalWrite(LED, LOW);
 motor1.brake();

  delay(1000);

  // Spin 5sec counter Clockwise
  digitalWrite(LED, HIGH);
  motor1.run(255, -1);

delay (5000);
// STOP 1sec
digitalWrite(LED, LOW);
  motor1.brake();

  delay(1000);
}



