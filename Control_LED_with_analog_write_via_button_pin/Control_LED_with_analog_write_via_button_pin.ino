const int buttonPin = 2;
const int ledPin = 8;
int buttonState ;
int val = 0;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  buttonState = digitalRead(buttonPin);

  //val = analogRead(A0);
  if (buttonState == HIGH) {
    val = val + 1;
    digitalWrite(ledPin, HIGH);
  }
  else {
    val = val;
    digitalWrite(ledPin, LOW);
  }

  Serial.println(val);
}
