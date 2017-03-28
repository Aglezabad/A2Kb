#include <HID-Project.h>
#include <HID-Settings.h>
#include "Configuration.h"

const size_t rows_length = sizeof(rows)/sizeof(rows[0]);

void setup() {
  for (int i=0; i<rows_length; i++) {
    pinMode(i, OUTPUT);
  }
  NKROKeyboard.begin();
}

void loop() {
  // put your main code here, to run repeatedly:

}

