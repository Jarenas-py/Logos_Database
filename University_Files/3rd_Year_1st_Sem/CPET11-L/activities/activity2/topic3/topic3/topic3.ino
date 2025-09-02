// Pin mapping for the two digits
int leds_Uno[] = {2, 3, 4, 5, 6, 7, 8};     // First digit (units)
int leds_Dos[] = {22, 23, 24, 25, 26, 27, 28}; // Second digit (tens)

int button_Uno = 9;   // decrement button
int button_Dos = 10;  // increment button

int number = 0; // 0–99 counter

// Digit patterns for common cathode 7-seg display (a–g)
// 1 = segment ON, 0 = OFF
int digits[10][7] = {
  {1,1,1,1,1,1,0}, // 0
  {0,1,1,0,0,0,0}, // 1
  {1,1,0,1,1,0,1}, // 2
  {1,1,1,1,0,0,1}, // 3
  {0,1,1,0,0,1,1}, // 4
  {1,0,1,1,0,1,1}, // 5
  {1,0,1,1,1,1,1}, // 6
  {1,1,1,0,0,0,0}, // 7
  {1,1,1,1,1,1,1}, // 8
  {1,1,1,1,0,1,1}  // 9
};

void setup() {
  for (int i = 0; i < 7; i++) {
    pinMode(leds_Uno[i], OUTPUT);
    pinMode(leds_Dos[i], OUTPUT);
  }

  pinMode(button_Uno, INPUT_PULLUP); // use pull-ups
  pinMode(button_Dos, INPUT_PULLUP);
}

void displayDigit(int pins[], int digit) {
  for (int i = 0; i < 7; i++) {
    digitalWrite(pins[i], digits[digit][i]);
  } 
}

void loop() {
  // Button Uno: decrement
  if (digitalRead(button_Uno) == LOW) {  // active low with INPUT_PULLUP
    number--;
    if (number < 0) number = 99;
    delay(250); // debounce
  }

  // Button Dos: increment
  if (digitalRead(button_Dos) == LOW) {
    number++;
    if (number > 99) number = 0;
    delay(250); // debounce
  }

  int tens = number / 10;
  int ones = number % 10;

  displayDigit(leds_Uno, ones);
  displayDigit(leds_Dos, tens);
}
