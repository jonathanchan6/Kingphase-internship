#include <PID_v1.h>
#define AIN1 4
#define AIN2 5

double input;
double vol;
double setpoint;
double Kp=0, Ki=0, Kd=0;

PID myPID(&input, &vol, &setpoint,Kp, Ki, Kd, DIRECT); 

void setup() {
  Serial.begin(9600);
  setpoint = 2.05;
  myPID.SetMode(AUTOMATIC);
  myPID.SetTunings(Kp, Ki, Kd);
  pinMode(AIN1,OUTPUT);
  pinMode(AIN2,OUTPUT);
  pinMode(A0, INPUT);
}

void loop() {
  
  input = map(analogRead(A0), 0, 1024, 0, 255);
  vol = (input * 5.0 )/1024.0 ;
  myPID.Compute();
  /*i f (vol < 2.05){
    digitalWrite(AIN2,LOW);
  }
  else{
      digitalWrite(AIN2,HIGH);
  }*/
  Serial.print("Voltage :");
  Serial.println(vol);
}
