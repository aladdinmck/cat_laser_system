#include <Servo.h>

Servo servo_1;
Servo servo_2;

int pos1 = 0;
int pos2 = 0;

void setup() {
  servo_1.attach(9);
  servo_2.attach(10);
}


void loop () {
  for (pos1 = 0, pos2 = 0; pos1 <= 180 && pos2 <= 180; pos1++, pos2++) {
    servo_1.write(pos1);
    servo_2.write(pos2);
    delay(15);  
  }    

  for (pos1 = 180, pos2 = 180; pos1 > 0 && pos2 > 0; pos1--, pos2--) {
     servo_1.write(pos1);
     servo_2.write(pos2);
     delay(15);
  }
 
}
