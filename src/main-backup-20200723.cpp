// #include <Arduino.h>
// #include <Encoder.h>

// // int PIN_1 = 6;
// // int PIN_2 = 7;
// // int PIN_PWM = 5;


// // void setup() {
// //   Serial.begin (9600); //Starting the serial communication at 9600 baud rate
// //   //Initializing the motor pins as output
// //   pinMode(PIN_1, OUTPUT);
// //   pinMode(PIN_2, OUTPUT);  
// //   pinMode(PIN_PWM, OUTPUT);  
// // }

// // void loop() {

// //   int incomingByte;

// //   if (Serial.available() > 0) {
// //     incomingByte = Serial.read();
// //   }


// //   if(incomingByte == 'l') {
// //     Serial.println("Left");
// //     digitalWrite(PIN_2, LOW);
// //     digitalWrite(PIN_1, HIGH);
// //     analogWrite(PIN_PWM, 255);
// //   }
// //   else if(incomingByte == 'r') {
// //     Serial.println("Right");
// //     digitalWrite(PIN_2, HIGH);
// //     digitalWrite(PIN_1, LOW);
// //     analogWrite(PIN_PWM, 255);
// //   }
// //   else if(incomingByte == 's') {
// //     Serial.println("Stop");
// //     digitalWrite(PIN_2, LOW);
// //     digitalWrite(PIN_1, LOW);
// //     analogWrite(PIN_PWM, 255);
// //   }

// // }



// // Change these two numbers to the pins connected to your encoder.
// //   Best Performance: both pins have interrupt capability
// //   Good Performance: only the first pin has interrupt capability
// //   Low Performance:  neither pin has interrupt capability
// Encoder myEnc(2,3);
// //   avoid using pins with LEDs attached

// long oldPosition;

// void setup() {
//   Serial.begin(9600);
//   Serial.println("Basic Encoder Test:");
//   oldPosition  = -999;
// }


// void loop() {
//   long newPosition = myEnc.read();
//   if (newPosition != oldPosition) {
//     oldPosition = newPosition;
//     Serial.println(newPosition);
//   }
// }


