const int buttonPin= 13;
const int ledPin= 2;

#include <Servo.h>
Servo myservo; //creates servo
const int buttonPin = 2;

int buttonState= 0;

void setup() {
   pinMode(ledPin, OUTPUT);
   pinMode(buttonPin, INPUT);

   myservo.attach(9); //attaches servo
   pinMode(buttonPin, INPUT);

}

void loop() {
 buttonState = digitalRead(buttonPin);
   if (buttonState == HIGH) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }
   if(digitalRead(buttonPin) == HIGH){
      myservo.write(180); //tells the angle, 0-180
   }else{
      myservo,write(0);
   }
}

