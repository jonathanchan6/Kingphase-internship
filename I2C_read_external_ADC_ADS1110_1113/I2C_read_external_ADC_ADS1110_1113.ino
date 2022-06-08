#include <ADS1110.h> //librar                          

const byte DEV_ADDR = 0x48;            // DEC: 72 - I2C address of the ADC1110 (CHANGE AS NEEDED)

ADS1110 ads1110(DEV_ADDR);

int currentData;

void setup() {
    Serial.begin(9600);
    Wire.begin();
    getTitle();
}

void getTitle() {
    Serial.print(F("\nIR Sensor Data via external ADC\n"));
}

void loop() {
  currentData = ads1110.getData(); // get data from the ADC
        Serial.print(F("\nData :\t\t "));
        Serial.print(currentData);
        Serial.print(F("\n"));
        delay(100);
  }
