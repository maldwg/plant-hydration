#ifndef SENSOR_H
#define SENSOR_H

#include <gpiod.h>

class Sensor{
    public:
        Sensor(int pin);
        int readHumidity();
    private:
        int pin;
        gpiod_chip* chip;
        gpiod_line* line;

};

#endif