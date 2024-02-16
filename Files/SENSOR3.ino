#include "pitches.h";
#define touchPin T2
const int threshold = 80000;
const int threshold2 = 80000;
const int threshold3 = 100000;
const int threshold4 = 120000;
const int threshold5 = 140000;
const int ledPin = 13;
const int ledPin2= 11;
const int buzzer = 10;
int touchValue;
int pitch = 0;
void setup()

{
Serial.begin(115200);
delay(10); // give me time to bring up serial monitor
Serial.println("ESP32 Touch Test");
pinMode(ledPin, OUTPUT);
pinMode(ledPin2, OUTPUT);
pinMode(buzzer, OUTPUT);
}

void loop()
{
touchValue = touchRead (touchPin);
Serial.println(touchRead(T2));  // get value using T1
delay(10);
if (touchValue > threshold) {
    // turn the LED on
    digitalWrite(ledPin, HIGH);
}
// if it's lower than the threshold
else {
    // turn the LED off
    digitalWrite(ledPin, LOW);
}

// if the value is greater than the threshold
if (touchValue > threshold5) {
    // turn the LED on
    digitalWrite(ledPin2, HIGH);
}
// if it's lower than the threshold
else {
    // turn the LED off
    digitalWrite(ledPin2, LOW);
}
if (touchValue > threshold) {
    pitch = NOTE_C2; 
} else if (touchValue > threshold2) {
    pitch = NOTE_AS7;
} else if (touchValue > threshold3) {
    pitch = NOTE_A7;
} else if (touchValue > threshold4) {
    pitch = NOTE_GS7;
} else if (touchValue > threshold5) {
    pitch = NOTE_D8;
} else {
    pitch = 0;

}
if(pitch == 0) {
    noTone(buzzer);
} else {
    tone(buzzer, pitch);
}

if (pitch == 0) {
    noTone(buzzer);
} else {
    tone(buzzer, pitch);
}
delay(10);
}