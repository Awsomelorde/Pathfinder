/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://docs.arduino.cc/hardware/

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman

  This example code is in the public domain.

  https://docs.arduino.cc/built-in-examples/basics/Blink/
*/

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);  // change state of the LED by setting the pin to the HIGH voltage level
  delay(1000);                      // wait for a second
  digitalWrite(LED_BUILTIN, LOW);   // change state of the LED by setting the pin to the LOW voltage level
  delay(1000);                      // wait for a second
}
int BUT1 = D0;

int BUT2 = D1;

int BUT3 = D2;


int LED1 = D3;

int LED2 = D4;

int LED3 = D5;
void setup() {

pinMode(BUT1, INPUT_PULLUP);

pinMode(BUT2, INPUT_PULLUP);

pinMode(BUT3, INPUT_PULLUP);


pinMode(LED1, OUTPUT);

pinMode(LED2, OUTPUT);

pinMode(LED3, OUTPUT);


long startTime = millis();

}

void loop() {

long but1time;
long but2time;

long but3time = 0;
if (digitalRead(BUT1) == HIGH) {

but1time = millis(); digitalWrite(LED1, HIGH);
} else {

digitalWrite(LED1, LOW);
}
if (digitalRead (BUT2) == HIGH) {

but2time = millis();
}
if (abs(but2time - but1time) <= 2000) {

digitalWrite(LED2, HIGH);

} else {

digitalWrite(LED2, LOW);

}if (digitalRead (BUT3) == HIGH) {

but3time++;
} else {

but3time = 0 ;
}
if (but3time >= 800 ) {

digitalWrite (LED3, HIGH);
} else {

digitalWrite (LED3, LOW);
}


}