// #include <Arduino.h>
// #include <Encoder.h>

// long MAX_TURN_LEFT = 300;
// long MAX_TURN_RIGHT = -300;

// int PIN_1 = 6;
// int PIN_2 = 7;
// int PIN_PWM = 5;

// long oldPosition;

// Encoder myEnc(2,3);


// void turnLeft();
// void turnRight();
// void turnStop();

// void turnLeftFull();
// void turnRightFull();

// void setup() {
//   Serial.begin(9600);
//   pinMode(PIN_1, OUTPUT);
//   pinMode(PIN_2, OUTPUT);  
//   pinMode(PIN_PWM, OUTPUT); 
//   oldPosition  = -999;
// }


// void loop() {
//   int incomingByte;

//   if (Serial.available() > 0) {
//     incomingByte = Serial.read();
//   }

//   if(incomingByte == 'l') {
//     turnLeftFull();
//   }
//   else if(incomingByte == 'r') {
//     turnRightFull();
//   }
//   else if(incomingByte == 's') {
//     turnStop();
//   }
// }


// void turnLeft() {
//   digitalWrite(PIN_2, LOW);
//   digitalWrite(PIN_1, HIGH);
//   analogWrite(PIN_PWM, 255);
// }

// void turnRight() {
//   Serial.println("Right");
//   digitalWrite(PIN_2, HIGH);
//   digitalWrite(PIN_1, LOW);
//   analogWrite(PIN_PWM, 255);
// }

// void turnStop() {
//   digitalWrite(PIN_2, LOW);
//   digitalWrite(PIN_1, LOW);
//   analogWrite(PIN_PWM, 255);
//   Serial.println("Stop");
// }

// void turnLeftFull() {
//   long newPosition = myEnc.read();
//   turnLeft();
//   while(newPosition >= MAX_TURN_LEFT) {
//     newPosition = myEnc.read();
//   }
//   turnStop();
// }

// void turnRightFull() {
//   long newPosition = myEnc.read();
  
//   while(newPosition >= MAX_TURN_RIGHT) {
//     turnRight();
//     newPosition = myEnc.read();  
//     Serial.println(newPosition);
//   }
//   turnStop();
// }