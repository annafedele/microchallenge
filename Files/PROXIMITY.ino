// ULTRASONIC SENSOR
int TRIG = 2;
int ECHO = 4;
int DURATION;
int DISTANCE;
 
 
 
void setup() {  
 
  // ULTRASONIC SENSOR
  pinMode(TRIG, OUTPUT);
  pinMode(ECHO, INPUT);
 
  // SERIAL
  Serial.begin(9600);
  
}
 
 
void loop() {
 
  digitalWrite(TRIG,HIGH);
  delay(1);
  digitalWrite(TRIG,LOW);
  DURATION = pulseIn(ECHO,HIGH);
  DISTANCE = DURATION / 58.2;
 
  if(DISTANCE > 0 && DISTANCE < 50 ){
    Serial.println(DISTANCE);
    delay(100);
  }
 
}