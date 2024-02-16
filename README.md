# MicroChallenge: detecting the surroundings 
Contributors: Anna and Annna

## Areas of interests:

In our discussions, we found some areas of common interest such as an interest in sensors and a digital alter ego that could represent feedback from surroundings.
![Screenshot 2024-02-16 012247](https://github.com/annafedele/microchallenge/assets/147055673/076530db-5d08-4d14-9ed0-afd52bb2289e)
## Research
By intersecting our research, we found a common point in looking for wearables that collect data in certain social contexts, from events to everyday life, also related to the concept of protection. Certain types of sensors can detect changes in our surroundings that affect our bodies and our attitude under the circumstances.

### Statement:
Series of investigation on electronic wearables that detect the surroundings and the interations with them, and that translate it in a digital visualization 

# Artifact Description:
<img width="428" alt="Captura" src="https://github.com/annafedele/microchallenge/assets/143884501/f04be928-5f72-41e8-8df1-375081164b7e">


## Project planning
<img width="632" alt="Captura1" src="https://github.com/annafedele/microchallenge/assets/143884501/692cab39-8074-425d-96f3-e5d29e28097c">

## Sketches

![Immagine WhatsApp 2024-02-16 ore 15.11.08_62eae79c](https://hackmd.io/_uploads/r1VHTkaoT.jpg)


## Materials and technologies needed

- **Touch Sensor: Conductive textile**

![image](https://hackmd.io/_uploads/ry_4175op.png)

![image](https://hackmd.io/_uploads/BJXZQm9oa.png)

![image](https://hackmd.io/_uploads/B10YqJ6oa.png)

https://docs.google.com/presentation/d/1v8qUhaarRCpX2TFIQKuj19j48BwxF2szUg2qXhQy8u8/edit#slide=id.g43aa799330_0_357

![image](https://hackmd.io/_uploads/ByDa916sT.png)


- **TTGO Camera**

![image](https://hackmd.io/_uploads/Sk0Z51asT.png)

![image](https://hackmd.io/_uploads/r19mq1aj6.png)


https://www.tiktok.com/@espn/video/7153418979409874222?lang=es 

https://www.tiktok.com/@jordi.koalitic/video/7106530718012017926 
![image](https://hackmd.io/_uploads/rkxiAChiT.png)



https://www.youtube.com/watch?v=LtBzbDm66wU&list=PLg4I7mDs8xeGnVRUS_2si_TmjoE82I342&index=44
Steps for use:

1. Connect to the camera's Wi-Fi network.
 ![image](https://hackmd.io/_uploads/HJtsb1pja.png)

2. In the web browser, navigate to: 2.2.2.1
![image](https://hackmd.io/_uploads/H1Fffkpsa.png)

3. url of the stream: http://2.2.2.1:81/stream 


- **Touch Sensor: Conductive Biomaterial**
- **Proximity sensor**

![image](https://hackmd.io/_uploads/HkVdp0hsa.png)

In many of our projects, we have the need to sense our environment, to know if there is an obstacle in front and at what distance it is located. The HC-SR04 sensor allows us to do this.

The HC-SR04 sensor is a distance sensor that uses ultrasonic transducers to detect objects.
Its operation consists of emitting an ultrasonic sound through one of its transducers, and waiting for the sound to bounce off any present object; the echo is captured by the second transducer. The distance is proportional to the time it takes for the echo to arrive.
- **Resin Printing**
- **Pla Printing**



## Fabrication process


Our first main idea was to create a outfit, composed by a belt and a skin wearable that allow to collect data while the person who is wearing them is constantly reacting with the surroundings, ad then, translating then in a digial identity made of the data.

### Touch Sensor: Conducive Biomaterial: 
We started cooking the conductive biomaterial for creating a touch sensor that works even with pressure
Recipe: <br>
  **alginato de Sodio  + CMC Celulosa** <br>
  Agua 200ml <br>
  Alginato de sodio 8g <br>
  CMC Celulosa 12,5g <br>
  Glicerina 10g <br>
  Harina  100 g <br>
  Carbon <br>
  
  ![Immagine WhatsApp 2024-02-16 ore 14.06.41_16d6837b](https://hackmd.io/_uploads/rJT1kJpsa.jpg)

After discussing together we realize that for the time we had and the tests we supposed to do with the biomaterial, we decided to dedicate ourselfs to the sensors, as the proximity.

During the first review the professors suggested us to use cameras for recordigns video of the surroundings and have a sort of 360 view (as the cars have in their assets) related also to the topic of safety and protection we want  to address; so, we start investigating with the TTPO cameras.
https://github.com/annafedele/microchallenge/assets/143884501/2e62ab73-343f-420e-96c8-4eee715032ec
<br>

### Touch Sensor: Conductive Textile:

We also tried to make a touch sensor with textiles and the **velostat**: 
*Carbon impregnated black polyethylene film. Conductivity is not affected by humidity or aging*
-Pressure and bend sensor <br>
-Resistance decreases across distance and changes under pressure. <br>
-<500 Ohms/cm v
-Carbon impregnated black polyethylene film. Conductivity is not affected by humidity or aging. <br>

For creating the touch sensor we use also the conductive tape, that we stick on the fabric of both sides, for indicating the positive and negative pole and then a layer of foam for isolating the two poles.
![Immagine WhatsApp 2024-02-16 ore 14.36.24_bbe75f6e](https://hackmd.io/_uploads/HybwSJ6sT.jpg)


We applied a hole in the foam for creating the "button" and the layer of velostat, so we the button is pressed the ciurcut can run releasing data.

![Immagine WhatsApp 2024-02-16 ore 14.33.16_3f48ff7c](https://hackmd.io/_uploads/rkwPrJasa.jpg)


### TTGO Camera: 
We use a TTGO Camera to detect, view, and analyze the things around us. We found it interesting to use as it provides us with a different perspective on ourselves that we cannot achieve from our first-person view.

The original idea was to connect the camera to a 3D program in order to visualize and play. We wanted to connect the camera live to TouchDesigner.

We encountered many issues with just visualizing the camera in its original program. 
We used the URL ( http://2.2.2.1:81/stream ) to connect the IP to TouchDesigner,

![image](https://hackmd.io/_uploads/HkZiwk6jT.png)
To obtain that link: press Control + Shift + I, select the camera, and it will provide you with the URL link.

using the Video Stream in TOP in Touch Designer. 

https://derivative.ca/UserGuide/Video_Stream_In_TOP *Video Stream In Top Node Documentation.*


However, even after many attempts, we were unable to find a solution. 



### Proximity Sensor:
We use the proximity sensor to detect the distance of objects and people. <br>
![Immagine WhatsApp 2024-02-16 ore 15.04.38_c08ef5ad](https://hackmd.io/_uploads/BJL12yaia.jpg)
We manage to connect the data that the sensor give in the serial monotior of arduino with touch designer: at first we imported the data and then we transformed in values. With touchdesigner it is possible to apply the variation of values to some features of the geometry you model so at the beginning we apply the modification to the geometry and the to the texture.
![Screenshot 2024-02-16 150956](https://hackmd.io/_uploads/BJUA2kpsp.png)


### Resin Printing: 

![Immagine WhatsApp 2024-02-16 ore 12.25.51_4751c72a](https://hackmd.io/_uploads/Hky5rk6jp.jpg)

### PLA Printing:

![Immagine WhatsApp 2024-02-16 ore 01.13.28_02e54080](https://hackmd.io/_uploads/rJMKTR3ja.jpg)

## Fabrication files
### *code that we used for proximity sensor*
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
### *code that we used for touch sensor:*
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


![Screenshot 2024-02-16 145537](https://hackmd.io/_uploads/Hk0yc1Ti6.png)

![Screenshot 2024-02-16 145815](https://hackmd.io/_uploads/rkKO91Tja.png)


The results we achieved are very good in terms of investigation and discovery of new software for us: we achieved results by connecting the respective sensors to touch trainers to create the visuals we wanted, but we did not achieve the goal of creating an outfit because we spent a lot of time and energy trying to make the technological parts of our project work, which corresponded to at least 80% of the parts.
<br>
![Immagine WhatsApp 2024-02-16 ore 12.25.52_f8c7eccb](https://hackmd.io/_uploads/B1pmR0hs6.jpg)




![Immagine WhatsApp 2024-02-16 ore 14.06.40_2b78e59b](https://hackmd.io/_uploads/HkfP0Rhjp.jpg)


## Reflection
The challenge for us was to investigate and make many attempts to achieve the result we had envisaged from the beginning.
It was incredibly useful and satisfying to try some of the practices that we had not experimented with so thoroughly, to understand them and then solve the mistakes, and it led to a growth in our skills but also in our awareness of what can and cannot be done within the given timeframe.
<br>
## Future outcomes
In the future, we would like to continue working on creating a complete outfit that can visualise data in real time and use it in certain social situations to understand how the visualisation of the data transforms and deforms the visuals we create, but also in terms of safety and it is interesting to understand how the surroundings relate to the person (and thus the body) and whether situations of violence or abuse can occur.

## What we could improve

Having only a few days to realise a project combining the interests of two people, we were constantly trying to find a compromise, but at the same time we lost the project flow a little because as we continued with the experiments we modified the idea according to our results.
In addition, the technological factor of understanding and interacting with sensors and programmes slowed down our design process and was binding on the fate of the project, in fact we did not achieve the goal of creating a single device but a series of explorations with different devices.



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
https://github.com/LilyGO/esp32-camera-bme280 TTGO Camera Documentation. 

https://cults3d.com/es/modelo-3d/variado/agisis-ultimate-alien-face-hugger-detailed resin model

https://www.youtube.com/watch?v=LtBzbDm66wU&list=PLg4I7mDs8xeGnVRUS_2si_TmjoE82I342&index=44 Video Example of Camera RT with Touch Designer. 
