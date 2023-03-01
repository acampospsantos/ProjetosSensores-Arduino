
#include <Servo.h>

int pos = 0;

Servo servo1; //Criação de um objeto da biblioteca do Servo

void setup(){
  servo1.attach(8, 500, 2500); //Define que o Servo está conectado a Porta 8
}

void loop(){
  // sweep the servo from 0 to 180 degrees in steps of 1 degrees
  for (pos = 0; pos <= 180; pos = pos + 1) {
    // tell servo to go to position in variable 'pos'
    servo1.write(pos);
    // wait 15 ms for servo to reach the position
    delay(15); // Wait for 15 millisecond(s)
  }
  for (pos = 180; pos >= 0; pos = pos - 1) {
    // tell servo to go to position in variable 'pos'
    servo1.write(pos);
    // wait 15 ms for servo to reach the position
    delay(15); // Wait for 15 millisecond(s)
  }
}