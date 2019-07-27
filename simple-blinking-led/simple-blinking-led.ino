/*
 * Simple Blinking LED
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

void setup() {
  pinMode(13, OUTPUT); // configure Pin 13 as an OUTPUT pin
}

void loop() {
  digitalWrite(13, HIGH); // set Pin 13 to HIGH (5V)
  delay(1000); // wait 1000ms
  digitalWrite(13, LOW); // set Pin 13 to LOW (0V)
  delay(1000); // wait 1000ms
}
