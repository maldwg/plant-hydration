#include "plant.h"
#include <list>

using namespace std;
Plant::Plant(int optimalSoilHumidity, Pump plantPump, list<Sensor> sensorlist):
        optimalSoilHumidity(optimalSoilHumidity), plantPump(plantPump), sensorList(sensorList)
    {

    }

void Plant::hydrate(){

}

bool Plant::hydrationIsNecessary(){

}