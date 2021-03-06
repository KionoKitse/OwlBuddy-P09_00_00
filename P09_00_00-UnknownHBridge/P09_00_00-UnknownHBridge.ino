/*
 //Servo driver pinout 
 http://www.kcsemitech.com/upLoad/down/month_1902/201902261540192521.pdf

  //Probed data
  (1,?)    (8,Out)
  (2,UL)    (7,GND)
  (3,VL)    (6,GND)
  (4,VCC)   (5,Out)     

  //Confirmed data
  (1,?)      (8,OutA)
  (2,InA)    (7,GND)
  (3,InB)    (6,?)
  (4,VCC)    (5,OutB) 

  //Found H Bridge datasheets
  * SI9986 (VCC 3.8-13.2V) (In 2-?)
  * L9110 (VCC 2.5-12V) (In 2.5-9V) 
  * BD621x (VCC 3-5.5V) (In 2-?V) 
*/
//Define pins
#define DriveA       10  //Drive motor H bridge Pin02 White 
#define DriveB       11  //Drive motot H bridge Pin03 Blue

void setup() {
  Serial.begin(9600);
  delay(5000);
  
}

void loop() {
  TestMotor();
}

void TestMotor(){
  //Counter clockwise
  digitalWrite(DriveA,LOW);
  digitalWrite(DriveB,HIGH);
  delay (1000);
  digitalWrite(DriveB,LOW);
  delay(500);
  //Clockwise
  digitalWrite(DriveB,LOW);
  digitalWrite(DriveA,HIGH);
  delay (1000);
  digitalWrite(DriveA,LOW);
  delay(500);
}
//Function that reads the output values connected to the motor leads
void ReadOutputs(){
  Serial.print(analogRead(A4));
  Serial.print(" ");
  Serial.println(analogRead(A5));
}
