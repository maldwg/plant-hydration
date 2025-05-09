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
    // relaisList.push_back(Relais(0, "Relais 0"));
    // relaisList.push_back(Relais(1, "Relais 1"));
    // relaisList.push_back(Relais(2, "Relais 2"));
    // relaisList.push_back(Relais(3, "Relais 3"));
    // relaisList.push_back(Relais(4, "Relais 4"));
    // relaisList.push_back(Relais(5, "Relais 5"));
    // relaisList.push_back(Relais(6, "Relais 6"));
    // relaisList.push_back(Relais(7, "Relais 7"));
    // relaisList.push_back(Relais(8, "Relais 8"));
    // relaisList.push_back(Relais(9, "Relais 9"));
    // relaisList.push_back(Relais(10, "Relais 10"));
    // relaisList.push_back(Relais(11, "Relais 11"));
    // relaisList.push_back(Relais(12, "Relais 12"));
    relaisList.push_back(Relais(16, "Relais 1"));

    relaisList.push_back(Relais(13, "Relais 2"));
    // relaisList.push_back(Relais(14, "Relais 14"));
    // relaisList.push_back(Relais(15, "Relais 15"));
    // relaisList.push_back(Relais(17, "Relais 17"));
    // relaisList.push_back(Relais(18, "Relais 18"));
    relaisList.push_back(Relais(19, "Relais 3"));
    // relaisList.push_back(Relais(20, "Relais 20"));
    // relaisList.push_back(Relais(21, "Relais 21"));
    // relaisList.push_back(Relais(22, "Relais 22"));
    // relaisList.push_back(Relais(23, "Relais 23"));
    // relaisList.push_back(Relais(24, "Relais 24"));
    // relaisList.push_back(Relais(25, "Relais 25"));
    relaisList.push_back(Relais(26, "Relais 4"));
    // relaisList.push_back(Relais(27, "Relais 27"));
    
    while(true){
        for(Relais rel : relaisList){
            rel.on();
            sleep(1);
            rel.off();
            sleep(1);
    }
    }


    cout << "Finished!";
    return 0;

}
// 1 16
// 2 18
// 3 28
// 4 26