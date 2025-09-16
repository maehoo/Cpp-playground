#include <iostream>
#include <cstring>
#include "Car.h"
using namespace std;

void Car::initmembers(const char * ID, int fuel)
{
    strcpy(gamerID,ID);
    fuelgauge=fuel;
    curspeed=0;
}

void Car::showcarstate()
{
    cout << "소유주 ID: "<<gamerID<<endl;
    cout<<"연료량: "<<fuelgauge<< "%"<<endl;
    cout<<"현재속도: "<<curspeed<<"km/s"<<endl<<endl;
}

void Car::accel()
{
    if(fuelgauge<=0)
    return;
    else
    fuelgauge-=car_const::FUEL_STEP;

    if((curspeed+car_const::ACC_STEP)>= car_const::MAX_SPD)
    {
        curspeed = car_const::MAX_SPD;
        return;
    }
    curspeed += car_const::ACC_STEP;
}

void Car::Break()
{
    if(curspeed<car_const::BRK_STEP)
    {
        curspeed=0;
        return;
    }

    curspeed-=car_const::BRK_STEP;
}