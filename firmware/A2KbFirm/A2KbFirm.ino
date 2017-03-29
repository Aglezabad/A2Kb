#include <HID-Project.h>
#include "HID-Settings.h"
#include "Configuration.h"

//Variables.
int row = 0;
unsigned char analog_values[analog_pin_cols_length];

//Extra functions
boolean isNthBitSet (unsigned char c, int n) {
  static unsigned char mask[] = {1, 2, 4, 8, 16, 32, 64, 128};
  return ((c & mask[n]) != 0);
}

//Arduino functions
void setup() {
  //Setup row pins.
  for (int i = 0; i < pin_rows_length; i++) {
    pinMode(i, OUTPUT);
  }
  NKROKeyboard.begin();
}

void loop() {
  //Loop; set HIGH to one row pin; read analog values A0, A1, A2; send NKRO chars; set LOW to row pin.
  row %= pin_rows_length;
  digitalWrite(pin_rows[row], HIGH);
  for (int i = 0; i < analog_pin_cols_length; i++) {
    analog_values[i] = lowByte(analogRead(analog_pin_cols[i]));
    for (int j = 0; j < 8; j++) {
      if(isNthBitSet(analog_values[i], j)) {
        
      }
    }
  }

  NKROKeyboard.send();
  NKROKeyboard.releaseAll();
  delay(300);

  digitalWrite(pin_rows[row], LOW);
}


