#include "sensor.h"
#include <iostream>

#define CHIP_NAME "gpiochip0"

Sensor::Sensor(int pin) : pin(pin){
    chip = gpiod_chip_open_by_name(CHIP_NAME);
    line = gpiod_chip_get_line(chip, pin);}

int Sensor::readHumidity(){
    return gpiod_line_get_value(line);
}