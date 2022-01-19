//www.elegoo.com
//2016.12.08

#include "pitches.h"
int buttonApin = 2;

void setup() 
{
   pinMode(buttonApin, INPUT_PULLUP);  
}

void loop() 
{
  if (digitalRead(buttonApin) == LOW){
      tone(8,NOTE_C4,200);
      delay(350);
      tone(8,NOTE_C4,200);
      delay(300);
      tone(8,NOTE_D4,200);
       delay(500);
      tone(8,NOTE_C4,200);
      delay(500);
      tone(8,NOTE_F4,200);
      delay(500);
      tone(8,NOTE_E4,200);
      
      delay(1000);
      
      tone(8,NOTE_C4,200);
      delay(350);
      tone(8,NOTE_C4,200);
      delay(300);
      tone(8,NOTE_D4,200);
       delay(500);
      tone(8,NOTE_C4,200);
      delay(500);
      tone(8,NOTE_A4,200);
      delay(500);
      tone(8,NOTE_G4,200);

      delay(1000);
      
      tone(8,NOTE_C4,200);
      delay(350);
      tone(8,NOTE_C4,200);
      delay(300);
      tone(8,NOTE_C5,200);
      delay(500);
      tone(8,NOTE_A4,200);
      delay(500);
      tone(8,NOTE_F4,200);
      delay(500);
      tone(8,NOTE_E4,200);
       delay(500);
       tone(8,NOTE_D4,200);
  }
}
