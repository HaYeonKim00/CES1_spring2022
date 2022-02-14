# CES1_spring2022
CES1_spring 2022 is a code for ESP32 that screens a line from a movie called "About Time".

## Usage
```c
# Setting the starting point to (0,0) 
tft.setCursor(0,0)

# Setting the background color black
tft.fillScreen(TFT_BLACK)

# Prints the line inside " "
tft.print("")

# Prints a new line
tft.println()

# Setting text color to white
tft.setTextColor(TFT_WHITE)

# Rotating based on the number
tft.setRotation(1)

# Keeps the printed lines
delay(4000);

```
## Video
[CES1_spring2022](https://youtu.be/DSexa4EQFC8)
