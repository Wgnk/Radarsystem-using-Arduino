#include <Servo.h>
const int trigPin = 8;
const int echoPin = 9;
long duration;
int distance;
Servo myServo;
Servo myservo1;
Servo myservo2;
#define POT A0
#define BTN 0
void setup() {
  pinMode(trigPin, OUTPUT); 
  pinMode(echoPin, INPUT); 
  Serial.begin(9600);
  myServo.attach(11);
  pinMode(10, OUTPUT); 
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(POT,INPUT);
  pinMode(BTN,INPUT_PULLUP);
  myservo1.attach(A1);
  myservo2.attach(A2);
}
void loop() {
  for (int i = 15; i <= 165; i++) {  
    myServo.write(i);
    delay(120);
    distance = calculateDistance(); 
    Serial.print(i); 
    Serial.print(",");
    Serial.print(distance);
    Serial.print(".");
    if (distance > 40) {
      digitalWrite(13, HIGH);
      digitalWrite(12, LOW);
      digitalWrite(10, LOW);
    } else if (distance >= 0 && distance <= 40) {
      digitalWrite(13, LOW);
      digitalWrite(12, HIGH);
      digitalWrite(10, HIGH);
    }
  }
  for (int i = 165; i > 15; i--) {  
    myServo.write(i);
    delay(120);
    distance = calculateDistance();
    Serial.print(i); 
    Serial.print(",");
    Serial.print(distance); 
    Serial.print(".");
    if (distance > 40) {
      digitalWrite(13, HIGH);
      digitalWrite(12, LOW);
      digitalWrite(10, LOW);
    } else if (distance >= 0 && distance <= 40) {
      digitalWrite(13, LOW);
      digitalWrite(12, HIGH);
      digitalWrite(10, HIGH);
    }
  }
  int ba=analogRead(POT);
  int missile=map(ba,0,1023,0,180);
  myservo1.write(missile);
  int launch=digitalRead(BTN);
  if(launch==LOW)
  {
    myservo2.write(90);
  }
  else
  {
    myservo2.write(0);
  }
  delay(500);
}
int calculateDistance() { 
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH); 
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2;
  return distance;
}
