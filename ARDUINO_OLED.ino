#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>


#define SCREEN_WIDTH 128 // OLED display width, in pixels
#define SCREEN_HEIGHT 64 // OLED display height, in pixels

// Declaration for an SSD1306 display connected to I2C (SDA, SCL pins)
#define OLED_RESET     -1 // Reset pin # (or -1 if sharing Arduino reset pin)
#define SCREEN_ADDRESS 0x3C ///< See datasheet for Address; 0x3D for 128x64, 0x3C for 128x32
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

void setup() {
  // Initialize serial communication
  Serial.begin(9600);

  // Initialize the OLED display
  if (!display.begin(SSD1306_SWITCHCAPVCC, SCREEN_ADDRESS)) {
    Serial.println(F("SSD1306 allocation failed"));
    for (;;); // If initialization fails, stay here
  }

  // Clear the buffer (important for refreshing the screen)
  display.clearDisplay();

  // Run the test function to display some text
  oled();
}

void loop() {
  // Nothing needed here for now
}

void oled(void) {
  display.setTextColor(SSD1306_WHITE); // Set text size to 1 (adjust this for font size compatibility)

  // Clear the display buffer before writing new text
  display.clearDisplay(); // Set text color to white
  display.setTextSize(1);  // Set cursor position (x, y)
  display.setCursor(0, 10); // Print text on the display
  display.print("OLED Working fine!"); // Refresh the display to show the text
  display.display();// Delay for 2 seconds to show the text
  delay(2000); // Optionally, clear and display other content here

  display.clearDisplay();

}
