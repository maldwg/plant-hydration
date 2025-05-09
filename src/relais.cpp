#include "relais.h"
#define CHIP_NAME "gpiochip0"
#include <iostream>

Relais::Relais(int inputPin, const std::string name) : 
    pin(inputPin), name(name) {
    chip = gpiod_chip_open_by_name(CHIP_NAME);
    if (!chip) {
        std::cerr << "Failed to open GPIO chip\n";
        exit(1);
    }

    line = gpiod_chip_get_line(chip, pin);
    if (!line) {
        std::cerr << "Failed to get GPIO line " << pin << "\n";
        gpiod_chip_close(chip);
        exit(1);
    }

    if (gpiod_line_request_output(line, "relay", 0) < 0) {
        std::cerr << "Failed to request line as output\n";
        gpiod_chip_close(chip);
        exit(1);
    }
}

void Relais::on(){
    gpiod_line_set_value(line, 0);
}

void Relais::off(){
    gpiod_line_set_value(line, 1);
}