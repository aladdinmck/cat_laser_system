#include <Servo.h>

//laser pin setup
int laserPin = 8;                // choose the pin for the LED

Servo servo_1;
Servo servo_2;

int pos1 = 95;
int pos2 = 95;

void setup() {
  // put your setup code here, to run once:
  pinMode(laserPin, OUTPUT);      // declare LED as output

  servo_1.attach(9);
  servo_2.attach(10);
 
  Serial.begin(9600);

}

void loop() {
  digitalWrite(8, HIGH);
  delay(50);

  for (pos1 = 95, pos2 = 95; pos1 <= 150 && pos2 <= 150; pos1++, pos2++) {
    servo_1.write(pos1);
    servo_2.write(pos2);
    delay(25);  
  }    

  for (pos1 = 150, pos2 = 150; pos1 > 95 && pos2 > 95; pos1--, pos2--) {
     servo_1.write(pos1);
     servo_2.write(pos2);
     delay(25);
  }

}
