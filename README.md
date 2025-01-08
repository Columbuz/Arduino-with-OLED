+---------------------+
|      Start           |  
+---------------------+
+---------------------+
| Initialize Serial   | //Serial.begin(9600)
| Communication (9600)|
+---------------------+
+-------------------------------+
| Initialize OLED Display        |  Call display.begin(SSD1306_SWITCHCAPVCC, SCREEN_ADDRESS). 
| (Check for successful init)    |  If initialization fails, display an error message and stop execution.
+-------------------------------+
+---------------------+
| Clear the Display   | display.clearDisplay()
+---------------------+
+-------------------------+ //display.setTextColor(SSD1306_WHITE)
| Set Text Properties     | //display.setTextSize(1)
| (Color, Size, Position) | //display.setCursor(0, 10)
+-------------------------+
+-----------------------------+
| Display "OLED Working fine!" | //display.print("OLED Working fine!")
+-----------------------------+
+--------------------------+
| Refresh the Display      | //Call display.display() to show the text on the screen.
+--------------------------+
+---------------------------+
| Wait for 2 Seconds        |  //delay(2000) to keep the message visible for 2 seconds.
+---------------------------+
+---------------------+
| Clear the Display   | //Call display.clearDisplay() to clear the screen for future updates.
+---------------------+
+---------------------+
|        End          |
+---------------------+
