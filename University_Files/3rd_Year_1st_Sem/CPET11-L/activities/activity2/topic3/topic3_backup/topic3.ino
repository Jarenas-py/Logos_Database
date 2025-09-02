// Segment pins (a-g)
int segPins[7] = {8, 7, 6, 5, 4, 3, 2};
// Digit select pins (common cathodes)
int digitPins[4] = {9, 10, 11, 12};  // left → right
// Buttons
int btnUp = A0;
int btnDown = A1;

// Digit patterns for 0-9 (abcdefg)
byte numbers[10] = {
  B1111110, // 0
  B0110000, // 1
  B1101101, // 2
  B1111001, // 3
  B0110011, // 4
  B1011011, // 5
  B1011111, // 6
  B1110000, // 7
  B1111111, // 8
  B1111011  // 9
};

int counter = 0;

// Button debounce tracking
unsigned long lastPressUp = 0;
unsigned long lastPressDown = 0;
const int debounceDelay = 200; // ms

// For display multiplexing
int currentDigit = 0;

void setup() {
  for (int i = 0; i < 7; i++) pinMode(segPins[i], OUTPUT);
  for (int i = 0; i < 4; i++) {
    pinMode(digitPins[i], OUTPUT);
    digitalWrite(digitPins[i], HIGH); // OFF initially
  }
  pinMode(btnUp, INPUT_PULLUP);
  pinMode(btnDown, INPUT_PULLUP);
}

// Display one digit
void showDigit(int num, int digit) {
  // Turn all digits off
  for (int i = 0; i < 4; i++) digitalWrite(digitPins[i], HIGH);

  // Set segments
  for (int i = 0; i < 7; i++) {
    digitalWrite(segPins[i], (numbers[num] >> (6 - i)) & 1);
  }

  // Enable this digit (LOW = ON for CC)
  digitalWrite(digitPins[digit], LOW);
}

void loop() {
  unsigned long now = millis();

  // Handle button presses (non-blocking)
  if (digitalRead(btnUp) == LOW && (now - lastPressUp > debounceDelay)) {
    counter++;
    if (counter > 99) counter = 0;
    lastPressUp = now;
  }
  if (digitalRead(btnDown) == LOW && (now - lastPressDown > debounceDelay)) {
    counter--;
    if (counter < 0) counter = 99;
    lastPressDown = now;
  }

  // Break number into digits
  int tens = (counter / 10) % 10;
  int ones = counter % 10;

  // --- Multiplex display ---
  if (currentDigit == 0) {
    showDigit(tens, 2);   // tens on 3rd position
  } else if (currentDigit == 1) {
    showDigit(ones, 3);   // ones on 4th position
  }

  currentDigit = (currentDigit + 1) % 2; // alternate
  delay(3); // short refresh delay
}