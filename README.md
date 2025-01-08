+---------------------+
|      Start           |  
+---------------------+
         |
         v
+---------------------+
| Initialize Serial   | //Serial.begin(9600)
| Communication (9600)|
+---------------------+
         |
         v
+-------------------------------+
| Initialize OLED Display        |  Call display.begin(SSD1306_SWITCHCAPVCC, SCREEN_ADDRESS). 
| (Check for successful init)    |  If initialization fails, display an error message and stop execution.
+-------------------------------+
         |
         v
+---------------------+
| Clear the Display   | display.clearDisplay()
+---------------------+
         |
         v
+-------------------------+ //display.setTextColor(SSD1306_WHITE)
| Set Text Properties     | //display.setTextSize(1)
| (Color, Size, Position) | //display.setCursor(0, 10)
+-------------------------+
         |
         v
+-----------------------------+
| Display "OLED Working fine!" | //display.print("OLED Working fine!")
+-----------------------------+
         |
         v
+--------------------------+
| Refresh the Display      | //Call display.display() to show the text on the screen.
+--------------------------+
         |
         v
+---------------------------+
| Wait for 2 Seconds        |  //delay(2000) to keep the message visible for 2 seconds.
+---------------------------+
         |
         v
+---------------------+
| Clear the Display   | //Call display.clearDisplay() to clear the screen for future updates.
+---------------------+
         |
         v
+---------------------+
|        End          |
+---------------------+
