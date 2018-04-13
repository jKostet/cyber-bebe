#include <Servo.h>

Servo left;

void setup() {
  left.attach(10);
  pinMode(10, OUTPUT);
}

void loop() {
  int pos = 0;
  while (pos < 181) {
    left.write(pos);
    delay(1000);
    pos = pos + 30;
  }
}


void old_loop() {
  left.write(0);
  delay(1000);
  left.write(90);
  delay(1000);
  left.write(180);
  delay(1000);
}

