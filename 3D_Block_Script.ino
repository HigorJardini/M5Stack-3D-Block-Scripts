#include <M5Stack.h>
#include <TFT_eSPI.h>

void setup() {
  // Initialize the M5Stack object
  M5.begin();
  M5.Power.begin();
  
  // Set the screen rotation
  M5.Lcd.setRotation(1);

  // Clear the screen
  M5.Lcd.fillScreen(TFT_BLACK);
  
  // Draw a green 3D block
  M5.Lcd.fillRect(100, 50, 100, 100, TFT_GREEN);
  M5.Lcd.drawRect(100, 50, 100, 100, TFT_DARKGREEN);
  M5.Lcd.drawRect(101, 51, 98, 98, TFT_DARKGREEN);
  
  // Draw the text below the block
  M5.Lcd.setTextColor(TFT_WHITE);
  M5.Lcd.setTextSize(2);
  M5.Lcd.setCursor(110, 160);
  M5.Lcd.print("higorjardini.dev");
}

void loop() {
  // Empty loop
}
