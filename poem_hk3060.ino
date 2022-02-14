#include "SPI.h"
#include "TFT_eSPI.h"

TFT_eSPI tft = TFT_eSPI();

unsigned long drawTime = 0;

void setup(void) {
  // put your setup code here, to run once:

  tft.begin();

  tft.setRotation(1);
}

void loop() {
  // put your main code here, to run repeatedly:
  int x = 0;
  int y = 0;

  tft.setRotation(1);
  tft.fillScreen(TFT_BLACK);
  tft.setCursor(x,y);
  tft.setTextSize(2);
  tft.setTextColor(TFT_WHITE, TFT_BLACK);
  tft.print("We're all");
  tft.println();
  tft.print("travelling through");
  tft.println();
  tft.print("time together");
  tft.println();
  tft.print("every day");
  tft.println();
  tft.print("of our lives");
  delay(4000);
  tft.fillScreen(TFT_BLACK);
  tft.setCursor(x,y+30);
  tft.setTextSize(2);
  tft.print("All we can do is");
  tft.println();
  tft.print("do our best");
  tft.println();
  tft.print("to relish");
  tft.println();
  tft.print("this remarkable ride");
  delay(4000);
  tft.setCursor(x,y+80);
  tft.setTextSize(2);
  tft.fillScreen(TFT_BLACK);
  tft.setTextColor(TFT_RED, TFT_BLACK);
  tft.print("From Movie"); 
  tft.println();
  tft.print("<About Time>");
  delay(4000);
 
  tft.setRotation(2);
  tft.fillScreen(TFT_BLACK);
  tft.setCursor(x,y);
  tft.setTextSize(2);
  tft.setTextColor(TFT_WHITE, TFT_BLACK);
  tft.print("We're all");
  tft.println();
  tft.print("travelling through");
  tft.println();
  tft.print("time");
  tft.println();
  tft.print("together");
  tft.println();
  tft.print("every day");
  tft.println();
  tft.print("of our");
  tft.println();
  tft.print("lives");
  delay(4000);
  tft.fillScreen(TFT_BLACK);
  tft.setCursor(x,y+50);
  tft.setTextSize(2);
  tft.print("All we can do is");
  tft.println();
  tft.print("do our best");
  tft.println();
  tft.print("to relish");
  tft.println();
  tft.print("this");
  tft.println();
  tft.print("remarkable ride");
  delay(4000);
  tft.setCursor(x,y+150);
  tft.setTextSize(2);
  tft.fillScreen(TFT_BLACK);
  tft.setTextColor(TFT_RED, TFT_BLACK);
  tft.print("From Movie"); 
  tft.println();
  tft.print("<About Time>");
  delay(4000);

  tft.setRotation(3);
  tft.fillScreen(TFT_BLACK);
  tft.setCursor(x,y);
  tft.setTextSize(2);
  tft.setTextColor(TFT_WHITE, TFT_BLACK);
  tft.print("We're all");
  tft.println();
  tft.print("travelling through");
  tft.println();
  tft.print("time together");
  tft.println();
  tft.print("every day");
  tft.println();
  tft.print("of our lives");
  delay(4000);
  tft.fillScreen(TFT_BLACK);
  tft.setCursor(x,y+30);
  tft.setTextSize(2);
  tft.print("All we can do is");
  tft.println();
  tft.print("do our best");
  tft.println();
  tft.print("to relish");
  tft.println();
  tft.print("this remarkable ride");
  delay(4000);
  tft.setCursor(x,y+80);
  tft.setTextSize(2);
  tft.fillScreen(TFT_BLACK);
  tft.setTextColor(TFT_RED, TFT_BLACK);
  tft.print("From Movie"); 
  tft.println();
  tft.print("<About Time>");
  delay(4000);
  
  tft.setRotation(4);
  tft.fillScreen(TFT_BLACK);
  tft.setCursor(x,y);
  tft.setTextSize(2);
  tft.setTextColor(TFT_WHITE, TFT_BLACK);
  tft.print("We're all");
  tft.println();
  tft.print("travelling through");
  tft.println();
  tft.print("time together");
  tft.println();
  tft.print("every day");
  tft.println();
  tft.print("of our");
  tft.println();
  tft.print("lives");
  delay(4000);
  tft.fillScreen(TFT_BLACK);
  tft.setCursor(x,y+50);
  tft.setTextSize(2);
  tft.print("All we can do is");
  tft.println();
  tft.print("do our best");
  tft.println();
  tft.print("to relish");
  tft.println();
  tft.print("this remarkable ride");
  delay(4000);
  tft.setCursor(x,y+150);
  tft.setTextSize(2);
  tft.fillScreen(TFT_BLACK);
  tft.setTextColor(TFT_RED, TFT_BLACK);
  tft.print("From Movie"); 
  tft.println();
  tft.print("<About Time>");
  delay(4000); 

}
