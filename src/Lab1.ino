/*
 * Project Lab1
 * Description:
 * Author:
 * Date:
 */

// setup() runs once, when the device is first turned on.
void setup() {
  // Put initialization like pinMode and begin functions here.
pinMode(D5, OUTPUT);

}

// loop() runs over and over again, as quickly as it can execute.
void loop() {
  digitalWrite(D5, HIGH);
delay(500);
  digitalWrite(D5, LOW);
delay(500);
  // The core of your code will likely live here.

