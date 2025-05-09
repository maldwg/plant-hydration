#include "sensor.h"
#include <gpiod.h>
#include "relais.h"
#include <list>
#include <iostream>
#include <unistd.h> // for sleep

#define CHIP_NAME "gpiochip0"

using namespace std;

int main(){
    list<Relais> relaisList;
    relaisList.push_back(Relais(25));
    relaisList.push_back(Relais(24));
    relaisList.push_back(Relais(23));
    relaisList.push_back(Relais(27));

    for(Relais& rel : relaisList){
            rel.on();
            sleep(2);
            rel.off();
    }

    cout << "Finished!";
    return 0;

}