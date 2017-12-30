/*
  LED Blinking
  This code is used to blink the BUILTIN LED.

  LED --> pin 13
*/

// Initialize a variable, with pin number 13
int pin = 13;
void setup() {
  // put your setup code here, to run once:
  // Make the pin as an OUTPUT pin
  pinMode(pin, OUTPUT);
  // can also be written as pinMode(pin, 1) OR pinMode(pin, HIGH)

}

void loop() {
  // put your main code here, to run repeatedly:
  // Makes the LED ON
  digitalWrite(pin, HIGH);
  // can also be written as digitalWrite(pin, 1)
  //glow it for 1 second
  delay(1000);
  // make the LED OFF
  digitalWrite(pin, LOW);
  // can also be written as digitalWrite(pin, 1)
  // switch off for 1 second
  delay(1000);


}
