#ifndef RELAIS_H
#define RELAIS_H
#include <gpiod.h>


class Relais{
    public:
        Relais(int pin);
        void on();
        void off();
    private:
        int pin;
        gpiod_chip* chip;
        gpiod_line* line;

};
#endif
