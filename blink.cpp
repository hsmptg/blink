#include "blink.h"

// LED da placa
int led = 13;

void setup() {
	pinMode(led, OUTPUT);
}

void loop() {
	digitalWrite(led, HIGH);
	delay(100);
	digitalWrite(led, LOW);
	delay(100);
	digitalWrite(led, HIGH);
	delay(100);
	digitalWrite(led, LOW);
	delay(700);
}
