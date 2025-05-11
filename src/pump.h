#ifndef PUMP_H
#define PUMP_H
#include "relais.h"
class Pump{
    public:
        Pump(Relais relais);
        void pumpWater(int durationInSeconds);
    private:
        Relais relais;

};

#endif