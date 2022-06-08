#include <Adafruit_GFX.h>    // Core graphics library
#include <Adafruit_ST7735.h> // Hardware-specific library for ST7735
#include <Adafruit_ST7789.h> // Hardware-specific library for ST7789
#include <SPI.h>

#if defined(ARDUINO_FEATHER_ESP32) // Feather Huzzah32
  #define TFT_CS         14
  #define TFT_RST        15
  #define TFT_DC         32

#elif defined(ESP8266)
  #define TFT_CS         4
  #define TFT_RST        16                                            
  #define TFT_DC         5

#else
  // For the breakout board, you can use any 2 or 3 pins.
  // These pins will also work for the 1.8" TFT shield.
  #define TFT_CS        10
  #define TFT_RST        8 // Or set to -1 and connect to Arduino RESET pin
  #define TFT_DC         9
#endif

Adafruit_ST7735 tft = Adafruit_ST7735(TFT_CS, TFT_DC, TFT_RST);

void setup(void) {
  Serial.begin(9600);
  Serial.print(F("1155142863"));

  tft.initR(INITR_BLACKTAB);      // Init ST7735S chip, black tab

  tft.initR(INITR_MINI160x80);  // Init ST7735S mini display

  // tft print function!
  tft.setRotation(1);//rotate
  tftPrintTest();
}


void loop() {
  tft.invertDisplay(true);
  delay(500);
}

void tftPrintTest() {
  tft.setTextWrap(false);
  tft.fillScreen(ST77XX_WHITE);//background colour
  tft.setCursor(0, 30);
  tft.setTextColor(ST77XX_BLACK);
  tft.setTextSize(2);
  tft.println("Jonathan SID:");//text colour
  tft.setTextColor(ST77XX_BLACK);
  tft.setTextSize(2);
  tft.println("1155142863");//text colour
}
