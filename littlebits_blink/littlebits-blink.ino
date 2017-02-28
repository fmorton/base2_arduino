
const int pin = 5;
const int on = HIGH;
const int off = LOW;

void setup() {
  pinMode(pin, OUTPUT);
}

int blink(int pin, int state, int millis) {
  digitalWrite(pin, state);
  delay(millis);
}

void loop() {
  blink(pin, on, random(500));
  blink(pin, off, random(3000));
}
