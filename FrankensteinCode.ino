#include <Servo.h>

Servo firstServo;
Servo secondServo;

int button1Pin = 8; // Pin for the first button
int button2Pin = 10; // Pin for the second button
int button3Pin= 11;
int button4Pin= 12;
int button5Pin = 9; // Pin for the third button
int led1Pin= 4;
int led2Pin=5;

int firstServoPin = 2; // Pin for the first servo
int secondServoPin = 3; 
int lastButtonState = 0; // Pin for the second servo

void setup() {
    pinMode(button1Pin, INPUT);
    pinMode(button2Pin, INPUT);
    pinMode(button3Pin, INPUT);
    pinMode(button4Pin, INPUT);
    pinMode(button5Pin, INPUT);
    pinMode(led1Pin, OUTPUT);
    pinMode(led2Pin, OUTPUT);
    
    firstServo.attach(firstServoPin);
    secondServo.attach(secondServoPin);

    
}

void loop() {
    // Read the state of the buttons
    int button1State = digitalRead(button1Pin);
    int button2State = digitalRead(button2Pin);
    int button3State = digitalRead(button3Pin);
    int button4State= digitalRead(button4Pin);
    int button5State= digitalRead(button5Pin);
    
    // Control the first servo
    if (button1State == LOW){
      firstServo.write(0);
    }
    
    if (button1State == HIGH) {
        // First button is high (pressed), set first servo to 100 degrees
        firstServo.write(100);
        
    } 
    if (button2State == HIGH ) {
        // Second button
        firstServo.write(125);

    }
    if (button3State == HIGH){
        firstServo.write(150);
    }
    if (button4State == HIGH){
        firstServo.write(180);
    }
    // }if (lastButtonState == 0);
    //    firstServo.write(0);

    
    
    // Control the second servo
    if (button5State == HIGH) {
        // 5th button is on (pressed), set second servo to 180 degrees
        digitalWrite(led1Pin,HIGH);
        delay(500);
        digitalWrite(led2Pin,LOW);
        delay(500);
        digitalWrite (led1Pin,LOW);
        delay(500);
       digitalWrite (led2Pin,HIGH);
        secondServo.write(180);
        
    }
}

