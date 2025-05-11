#ifndef PLANT_H
#define PLANT_H
#include "pump.h"
#include "sensor.h"
#include <list>

 class Plant{
    public:
        Plant(int optimalSoilHumidity, Pump plantPump, std::list<Sensor> sensorList);
        void hydrate();
        bool hydrationIsNecessary();
        int lastHydration;
    private:
        int getSoilHumidity();
        int optimalSoilHumidity;
        Pump plantPump;
        std::list<Sensor> sensorList;

 };

 #endif