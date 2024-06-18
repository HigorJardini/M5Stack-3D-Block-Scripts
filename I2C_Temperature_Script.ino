#include <Wire.h>

void setup() {
  M5.begin();
  Wire.begin(); // Initialize I2C communication
  M5.Lcd.setRotation(1);
  M5.Lcd.fillScreen(TFT_BLACK);
}

void loop() {
  Wire.beginTransmission(0x48); // Address of the temperature sensor
  Wire.write(0); // Request temperature data
  Wire.endTransmission();
  Wire.requestFrom(0x48, 2); // Request 2 bytes of data

  if (Wire.available()) {
    int tempData = Wire.read() << 8 | Wire.read();
    float temperature = tempData * 0.0078125; // Convert to Celsius
    M5.Lcd.setTextColor(TFT_WHITE, TFT_BLACK);
    M5.Lcd.setCursor(50, 100);
    M5.Lcd.printf("Temp: %.2f C", temperature);
  }
  delay(1000);
}
