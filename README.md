# microchallenge_I
Contributors: Anna and Annna

# MicroChallenge: detecting the surroundings 

## Areas of interests:

In our discussions, we found some areas of common interest such as an interest in sensors and a digital alter ego that could represent feedback from surroundings
![Screenshot 2024-02-16 012247](https://github.com/annafedele/microchallenge/assets/147055673/076530db-5d08-4d14-9ed0-afd52bb2289e)
## Research
By intersecting our research, we found a common point in looking for wearables that collect data in certain social contexts, from events to everyday life, also related to the concept of protection. Certain types of sensors can detect changes in our surroundings that affect our bodies and our attitude under the circumstances.
https://cults3d.com/es/modelo-3d/variado/agisis-ultimate-alien-face-hugger-detailed
### Statement:
Series of investigation on electronic wearables that detect the surroundings and the interations with them, and that translate it in a digital visualization 

# Artifact Description:
<img width="428" alt="Captura" src="https://github.com/annafedele/microchallenge/assets/143884501/f04be928-5f72-41e8-8df1-375081164b7e">


## Project planning
<img width="632" alt="Captura1" src="https://github.com/annafedele/microchallenge/assets/143884501/692cab39-8074-425d-96f3-e5d29e28097c">

## Sketches


## Materials and technologies needed

- **Touch Sensor, conductive textile**
- **360 camera**
- **Conductive Biomaterial**
- **Proximity sensor**


https://www.tiktok.com/@espn/video/7153418979409874222?lang=es 
https://www.tiktok.com/@jordi.koalitic/video/7106530718012017926 ç
![image](https://hackmd.io/_uploads/ry_4175op.png)

![image](https://hackmd.io/_uploads/BJXZQm9oa.png)


## Fabrication process

Our fisrt main idea was to create a outfit, composed by a belt and a skin wearable that allow to collect data while the person who is wearing them is constantly reacting with the surroundings, ad then, translating then in a digial identity made of the data.
we started cooking the conductive biomaterial for creating a touch sensor that works even with pressure
Recipe: <br>
  **alginato de Sodio  + CMC Celulosa** <br>
  Agua 200ml <br>
  Alginato de sodio 8g <br>
  CMC Celulosa 12,5g <br>
  Glicerina 10g <br>
  Harina  100 g <br>
  Carbon <br>
After discussing together we realize that for the time we had and the tests we supposed to do with the biomaterial, we decided to dedicate ourselfs to the sensors, as the proximity.

During the first review the professors suggested us to use cameras for recordigns video of the surroundings and have a sort of 360 view (as the cars have in their assets) related also to the topic of safety and protection we want  to address; so, we start investigating with the TTPO cameras.
https://github.com/annafedele/microchallenge/assets/143884501/2e62ab73-343f-420e-96c8-4eee715032ec
<br>

We also tried to make a touch sensor with textiles and the **velostat**: 
*Carbon impregnated black polyethylene film. Conductivity is not affected by humidity or aging*
-Pressure and bend sensor <br>
-Resistance decreases across distance and changes under pressure. <br>
-<500 Ohms/cm v
-Carbon impregnated black polyethylene film. Conductivity is not affected by humidity or aging. <br>

## Fabrication files
### *code that we used:*
```proximity sensor
int TRIG = 2;
int ECHO = 4;
int DURATION;
int DISTANCE;

void setup() {  
  // Sensore ad ultrasuoni
  pinMode(TRIG, OUTPUT);
  pinMode(ECHO, INPUT);
 
  // Seriale
  Serial.begin(9600);
}

void loop() {
  digitalWrite(TRIG, HIGH);
  delay(1);
  digitalWrite(TRIG, LOW);
  DURATION = pulseIn(ECHO, HIGH);
  DISTANCE = DURATION / 58.2;
 
  if (DISTANCE > 0 && DISTANCE < 50) {
    Serial.println(DISTANCE);
    delay(100);
  }
}
```

```touch sensor
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
```


# Learning outcomes
## Results
At the end of the challenge, the difficulties we encountered were not few, because when it comes to investigating and improvising with technology, a lot of testing is required, and especially when you are a novice, it is complicated to make things work in a reasonable time.
<br>
The results we achieved are very good in terms of investigation and discovery of new software for us: we achieved results by connecting the respective sensors to touch trainers to create the visuals we wanted, but we did not achieve the goal of creating an outfit because we spent a lot of time and energy trying to make the technological parts of our project work, which corresponded to at least 80% of the parts.
<br>
## Reflection
The challenge for us was to investigate and make many attempts to achieve the result we had envisaged from the beginning.
It was incredibly useful and satisfying to try some of the practices that we had not experimented with so thoroughly, to understand them and then solve the mistakes, and it led to a growth in our skills but also in our awareness of what can and cannot be done within the given timeframe.
<br>
## Future outcomes
In the future, we would like to continue working on creating a complete outfit that can visualise data in real time and use it in certain social situations to understand how the visualisation of the data transforms and deforms the visuals we create, but also in terms of safety and it is interesting to understand how the surroundings relate to the person (and thus the body) and whether situations of violence or abuse can occur.

Translated with DeepL.com (free version)
## What we could improve




## References + Resources: 
https://youtube.com/watch?v=xesuhh_ZPpY&list=PLg4I7mDs8xeGnVRUS_2si_TmjoE82I342&index=21&t=539s detection the surrounding

https://www.youtube.com/watch?v=NnrWjQ_zO-s&t=1178smorphing the surrounding

https://github.com/LilyGO/ESP32-Camera 

https://youtu.be/-ldPPhnGDVE

https://www.does-work.com/projects/mira-does-unnoticed-identities Does Work Studio-  Unnotices Identities Project. 

https://naylampmechatronics.com/blog/10_tutorial-de-arduino-y-sensor-ultrasonico-hc-sr04.html ultrasonic sensor arduino documentation 

https://youtube.com/watch?v=xesuhh_ZPpY&list=PLg4I7mDs8xeGnVRUS_2si_TmjoE82I342&index=21&t=539s touch designer tutorial: detecting the surrounding 

https://frontiernerds.com/brain-hack project 

https://projecthub.arduino.cc/adithyalokesh17/lets-make-arduino-sing-with-a-buzzer-26d11b let's make arduino sing tutorial. 

https://snapdrop.net/ 



