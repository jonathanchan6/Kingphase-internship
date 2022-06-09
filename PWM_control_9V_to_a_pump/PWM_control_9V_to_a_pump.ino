#define AIN1 4
#define AIN2 5
int i;

void setup() {
  Serial.begin(9600);
  
  pinMode(AIN1,OUTPUT);
  pinMode(AIN2,OUTPUT);  
}
 
void loop() {
  for(int i=0; i<255; i++){
    analogWrite(AIN1, i);
    delay(10);
    Serial.println(i);
  }
  for(int i=255; i>0; i--){
    analogWrite(AIN1, i);
    delay(10);
    Serial.println(i);

  }
}
