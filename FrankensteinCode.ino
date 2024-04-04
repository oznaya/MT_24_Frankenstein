const int buttonPin1= 13;
const int ledPin= 2;

#include <Servo.h>
Servo myservo; //creates servo
const int buttonPin2= 3;

int buttonState= 0;

void setup() {
   pinMode(ledPin, OUTPUT);
   pinMode(buttonPin1, INPUT);

   myservo.attach(9); //attaches servo
   pinMode(buttonPin2, INPUT);

}

void loop() {
 buttonState = digitalRead(buttonPin1);
   if (buttonState == HIGH) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }
   if(digitalRead(buttonPin2) == HIGH){
      myservo.write(180); //tells the angle, 0-180
   }else{
      myservo,write(0);
   }
}

