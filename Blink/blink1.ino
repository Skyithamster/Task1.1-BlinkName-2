int ledPin = 13; // LED connected to digital pin 13

// Duration in milliseconds
int dotTime = 200;      // Duration of a dot
int dashTime = 600;     // Duration of a dash
int betweenElements = 200; // Time between dots/dashes
int betweenLetters = 600;  // Time between letters
int betweenWords = 1400;   // Time between words (Not used for "Tim" but useful for larger sentences)

void setup() {
  pinMode(ledPin, OUTPUT);
}

void dot() {
  digitalWrite(ledPin, HIGH);
  delay(dotTime);
  digitalWrite(ledPin, LOW);
  delay(betweenElements);
}

void dash() {
  digitalWrite(ledPin, HIGH);
  delay(dashTime);
  digitalWrite(ledPin, LOW);
  delay(betweenElements);
}

void letterT() {
  dash();
  delay(betweenLetters);
}

void letterI() {
  dot(); dot();
  delay(betweenLetters);
}

void letterM() {
  dash(); dash();
  delay(betweenLetters);
}


void loop() {
  letterT();
  letterI();
  letterM();
  delay(betweenWords); // Wait a bit before repeating
}

