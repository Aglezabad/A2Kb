#ifndef CONFIGURATION_H_
#define CONFIGURATION_H_

//Digital pins set to OUTPUT for rows.
const int pin_rows[] = {2,3,4,5,6,7};
const size_t pin_rows_length = sizeof(pin_rows)/sizeof(pin_rows[0]);

//Analog pins (if used as analog inputs) for reading the columns.
const int analog_pin_cols[] = {0,1,2};
const size_t analog_pin_cols_length = sizeof(analog_pin_cols)/sizeof(analog_pin_cols[0]);

#endif

