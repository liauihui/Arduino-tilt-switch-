#include <SoftwareSerial.h>

static const int tiltSwitchPin = 2;             // tiltSwitch Pin 
static const int ledBoardPin =  LED_BUILTIN;    // built-in the LED pin

void setup() {
  Serial.begin(9600);
  pinMode(ledBoardPin, OUTPUT);
  pinMode(tiltSwitchPin, INPUT);    // Signal_in
}

//=====================================
void loop() {
  
  int tiltState = digitalRead(tiltSwitchPin);

  if ( HIGH == tiltState ) {
    digitalWrite(ledBoardPin, HIGH);  // Onboard LED
  } else {
    digitalWrite(ledBoardPin, LOW);
  }

}

