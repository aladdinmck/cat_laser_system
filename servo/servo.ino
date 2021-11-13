#include <Servo.h>

Servo servo_1;
Servo servo_2;

int pos1 = 0;
int pos2 = 0;

void setup() {
  servo_1.attach(9);
  servo_2.attach(10);
    Serial.begin(9600);

}


void loop () {
  for (pos1 = 95, pos2 = 95; pos1 <= 150 && pos2 <= 150; pos1++, pos2++) {
    servo_1.write(pos1);
    servo_2.write(pos2);
    delay(1000);  
  }    

  for (pos1 = 150, pos2 = 150; pos1 > 95 && pos2 > 95; pos1--, pos2--) {
     servo_1.write(pos1);
     servo_2.write(pos2);
     delay(1000);
  }
 
}
