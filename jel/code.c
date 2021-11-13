#define Trig 2
#define Echo 3
#include <Servo.h>
Servo myservo;
Servo myservo1;
long duration;
int distance;
void setup() {
myservo.attach(A0);
myservo1.attach(A1);
pinMode(Trig, OUTPUT);
pinMode(Echo, INPUT);
}
void loop() {
digitalWrite(Trig, LOW);
delayMicroseconds(5);
digitalWrite(Trig, HIGH);
delayMicroseconds(10);
digitalWrite(Trig, LOW);
duration = pulseIn(Echo, HIGH);
distance = duration * 0.034 / 2;
if (distance <= 20)
{

myservo.write(50);
myservo1.write(0);
delay(2000);

}
else {
myservo.write(0);
myservo1.write(50);
delay(500);
}
} 