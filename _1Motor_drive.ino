

#define EN_A 5
#define IN_A_1 6
#define IN_A_2 7
#define LED 13

void setup() {
  pinMode(IN_A_1, OUTPUT);
  pinMode(IN_A_2, OUTPUT);
  pinMode(EN_A, OUTPUT);
  pinMode(LED, OUTPUT);
  analogWrite(EN_A, 0);
  digitalWrite(IN_A_1, LOW);
  digitalWrite(IN_A_2, LOW);
}

void loop() {
  // Spin 5sec Clockwise
  digitalWrite(LED, HIGH);
  analogWrite(EN_A, 255);
  digitalWrite(IN_A_1, HIGH);
  digitalWrite(IN_A_2, LOW);

delay (5000);
// STOP 1sec
  digitalWrite(LED, LOW);
  analogWrite(EN_A, 0);
  digitalWrite(IN_A_1, LOW);
  digitalWrite(IN_A_2, LOW);

  delay(1000);

  // Spin 5sec counter Clockwise
  digitalWrite(LED, HIGH);
  analogWrite(EN_A, 255);
  digitalWrite(IN_A_1, LOW);
  digitalWrite(IN_A_2, HIGH);

delay (5000);
// STOP 1sec
digitalWrite(LED, LOW);
  analogWrite(EN_A, 0);
  digitalWrite(IN_A_1, LOW);
  digitalWrite(IN_A_2, LOW);

  delay(1000);
}



