int led = 13; // pin no. on arduino board
int ir = A0; // analog input pin 
int val = 0; //val to determine the light on or off 

void setup() { 
// set the input & output pins here 
pinMode(led, OUTPUT); 
pinMode(ir, INPUT); 
Serial.begin(9600);/ opens serial port/
} 

void loop() { 
 int val = analogRead(ir);
 
 if (val > 256) { //since when obstacle detected, val > 256
 digitalWrite(led, HIGH); 
 } 

  else { 
 digitalWrite(led, LOW); 
 } 
 Serial.println(val);
}
