
#include "Mouse.h"

const int mouseButton = 2;

void setup() {
  // initialize the buttons' inputs:
  pinMode(mouseButton, INPUT);
  pinMode(mouseButton, INPUT_PULLUP);
  Mouse.begin();

  // initialize mouse control:
}

void loop() {
  // read the buttons:
  int clickState = digitalRead(mouseButton);

  // if the mouse button is pressed:
  if (clickState == LOW) {

    Mouse.click(MOUSE_LEFT);
    delay(2000);
  }

}
