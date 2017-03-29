#include <HID-Project.h>
#include <HID-Settings.h>
#include "Configuration.h"

//Constants.
const size_t pin_rows_length = sizeof(pin_rows)/sizeof(pin_rows[0]);
const size_t analog_pin_cols_length = sizeof(analog_pin_cols)/sizeof(analog_pin_cols[0]);

//Variables.
int row = 0;
unsigned char analog_values_byte[analog_pin_cols_length];

void setup() {
  //Setup row pins.
  for (int i=0; i<pin_rows_length; i++) {
    pinMode(i, OUTPUT);
  }
  NKROKeyboard.begin();
}

void loop() {
  //Loop; set HIGH to one row pin; read analog values A0, A1, A2; send NKRO chars; set LOW to row pin.
  row %= pin_rows_length;
  digitalWrite(pin_rows[row], HIGH);
  for (int i=0; i<analog_pin_cols_length; i++) {
    analog_values_byte[i] = analogRead(analog_pin_cols[i]) & 0xff;  
  }
  digitalWrite(pin_rows[row], LOW);
}

