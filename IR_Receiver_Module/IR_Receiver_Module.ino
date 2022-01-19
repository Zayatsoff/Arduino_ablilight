#include <IRremote.h>
#include "IR.h"

const int MAX_TIME = 150 ;// max ms between codes
const int BLUE = 3;
const int GREEN = 5;
const int RED = 6;
long lastPressTime = 0;
int state = LOW;

int IR_RECEIVE_PIN = 11; // Receive on pin 11

void setup()
{
  pinMode(RED,OUTPUT);
  pinMode(GREEN,OUTPUT);
  pinMode(BLUE,OUTPUT);
  IrReceiver.begin(IR_RECEIVE_PIN, DISABLE_LED_FEEDBACK); // Start the receiver, disable feedback LED, take LED feedback pin from the internal boards definition
}

void loop() {
  if (IrReceiver.decode()) {
    if (IrReceiver.decodedIRData.command == KEY_POWER) {  // Can check for a specific button here e.g. if (IrReceiver.decodedIRData.command == 0x11)or 1/0 {
      if (state == LOW) { 
        state = HIGH;  // Button pressed, so set state to HIGH
        digitalWrite(RED, 255);
      }
      lastPressTime = millis();
    }
    else if (IrReceiver.decodedIRData.command == KEY_0) {
       if (state == LOW) { 
        state = HIGH;  // Button pressed, so set state to HIGH
        digitalWrite(BLUE, 255);
      }
      lastPressTime = millis();
    }
    IrReceiver.resume(); // Receive the next value
  }
  if (state == HIGH && millis() - lastPressTime > MAX_TIME) {
    state = LOW; // Haven't heard from the button for a while, so not pressed
    digitalWrite(RED, 0);
    digitalWrite(GREEN, 0);
    digitalWrite(BLUE, 0);
  }
}
