#include "relais.h"
#define CHIP_NAME "gpiochip0"

Relais::Relais(int inputPin) : pin(inputPin) {
    chip = gpiod_chip_open_by_name(CHIP_NAME);
    line = gpiod_chip_get_line(chip, pin);
}

void Relais::on(){
    gpiod_line_set_value(line, 1);
}

void Relais::off(){
    gpiod_line_set_value(line, 0);
}