//graveyard shovel
const int buttonPin1= 1;
const int ledPin= 2;

#include <Servo.h>
Servo myservo; //creates servo

//book placed on desk
const int buttonPin2= 3;

//body parts removed from grave
const int buttonPin3= 4;
const int buttonPin4= 5;
const int buttonPin5= 6;

//cables connected so that switching table is activated
const int buttonPin6= 7

int buttonState= 0;

void setup() {
   pinMode(ledPin, OUTPUT);
   pinMode(buttonPin1, INPUT);

   myservo.attach(9); //attaches servo
   pinMode(buttonPin2, INPUT);
   myservo.attach(10); //for our second servo that'll switch the table.

   

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

