const int ledPins[]    = { 2, 4, 6, 8, 10, 12 };
const int buttonPins[] = { 3, 5, 7, 9, 11, 13 };

void setup() {
  setupLeds();
  setupButtons();
};

void loop() {
  onClickTurnOn();
};

void setupLeds() {
  for (int thisLedPin : ledPins) {
    pinMode(thisLedPin, OUTPUT);
  };
};


void setupButtons() {
  for (int thisButtonPin : buttonPins) {
    pinMode(thisButtonPin, INPUT);
  };
};

void onClickTurnOn() {
  for (int thisButtonPin : buttonPins) {
    digitalWrite(
      thisButtonPin-1, 
      digitalRead(
        thisButtonPin
      )
    );
  };
};
