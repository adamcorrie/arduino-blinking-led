/*
 * Better Blinking LED
 * 
 * Connect an LED and a suitable current-limiting resistor
 * between Pin 13 and GND. Or use the built-in LED. Up to you.
 * 
 * The LED will blink on and off.
 * 
 * Created by Adam Corrie on 27/07/2019
 * Licensed under the GNU General Public License v3.0
 * 
 */

#define ledPin 13 // define ledPin as Pin 13

int blinkDelay = 1000; // variable to set delay time in ms

void setup() {
  pinMode(ledPin, OUTPUT); // configure ledPin as an OUTPUT pin
}

void loop() {
  digitalWrite(ledPin, HIGH); // set ledPin to HIGH
  delay(blinkDelay); // wait
  digitalWrite(ledPin, LOW); // set ledPin to LOW
  delay(blinkDelay); // wait
}
