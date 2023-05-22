/*

    PRINTING TO THE LCD SCREEN WITH THE BUTTON
    @github.com/berhanozturk

*/

#include <LiquidCrystal.h>

const int bot1 =  4; //First Button
const int bot2 =  3; //Second Button
const int led1 =  5; //Led pin

LiquidCrystal lcd(13,12,11,10,9,8);

void setup() {
  
  lcd.begin(16,2); //start the 16x2 LCD
  lcd.print("WELCOME"); // First text
  pinMode(bot1,INPUT); //set the 1st button as input 
  pinMode(bot2,INPUT); //set the 2nd button as input
  pinMode(led1,OUTPUT); //set the led as output

}

void loop() {
  //When the 1st button is pressed, the led will be active and "Button 1" will be written.
  if(digitalRead(bot1) == HIGH){
    digitalWrite(led1,HIGH);
    lcd.clear();
    lcd.print("BUTTON 1");
  }
  //if the first button is not pressed, do nothing
  else
    digitalWrite(led1,LOW);
  //When the 1st button is pressed, the led will be active and "Button 2" will be written.
  if(digitalRead(bot2) == HIGH){
    digitalWrite(led1,HIGH);
    lcd.clear();
    lcd.print("BUTTON 2");
  }
  //if the second button is not pressed, do nothing
  else
    digitalWrite(led1,LOW);

  delay(100);

}
