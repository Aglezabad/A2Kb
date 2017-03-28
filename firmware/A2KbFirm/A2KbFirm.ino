#include <HID-Project.h>
#include <HID-Settings.h>
#include "Configuration.h"

const size_t pin_rows_length = sizeof(pin_rows)/sizeof(pin_rows[0]);
const size_t analog_pin_cols_length = sizeof(analog_pin_cols)/sizeof(&analog_pin_cols[0]);

void setup() {
  //Setup row pins.
  for (int i=0; i<pin_rows_length; i++) {
    pinMode(i, OUTPUT);
  }
  //Setup ADC values variables (only one byte is used).
  unsigned char analog_values_byte[analog_pin_cols_length];
  NKROKeyboard.begin();
}

void loop() {
  // put your main code here, to run repeatedly:

}

