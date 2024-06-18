int buttonPin = 36; // GPIO pin number for button input

void setup() {
  M5.begin();
  pinMode(buttonPin, INPUT);
  M5.Lcd.setRotation(1);
  M5.Lcd.fillScreen(TFT_BLACK);
}

void loop() {
  int buttonState = digitalRead(buttonPin);
  if (buttonState == HIGH) {
    M5.Lcd.setTextColor(TFT_GREEN, TFT_BLACK);
    M5.Lcd.setCursor(50, 100);
    M5.Lcd.print("Button Pressed");
  } else {
    M5.Lcd.fillScreen(TFT_BLACK);
  }
}
