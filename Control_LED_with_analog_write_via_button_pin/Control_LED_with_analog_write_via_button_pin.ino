/*const int buttonPin = 2;
const int ledPin = 8;
int buttonState ;
int val = 0;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  buttonState = analogRead(buttonPin);
  analogWrite(ledPin, buttonState > 250 );
  Serial.println(buttonState);//val to show the LED turns on
}*/

int ledPin = 8;      // LED connected to digital pin 8
int analogPin = 2;   // potentiometer connected to analog pin 3
int val;         // variable to store the read value

void setup() {
  pinMode(ledPin, OUTPUT);  // sets the pin as output
  Serial.begin(9600);
}

void loop() {
  val = digitalRead(analogPin);  // read the input pin
  if (val == HIGH){
    digitalWrite(ledPin, HIGH);
  }else {
    digitalWrite(ledPin, LOW);
  }
}
