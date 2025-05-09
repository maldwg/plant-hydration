#ifndef RELAIS_H
#define RELAIS_H
#include <gpiod.h>
#include <string>

class Relais{
    public:
        Relais(int pin, const std::string name);
        std::string name;
        void on();
        void off();
    private:
        int pin;
        gpiod_chip* chip;
        gpiod_line* line;

};
#endif
