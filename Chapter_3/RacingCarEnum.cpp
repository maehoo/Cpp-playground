#include <iostream>
using namespace std;

namespace car_const
{
    enum
    {
         ID_LEN =20,
         MAX_SPD =200,
         FUEL_STEP= 2,
         ACC_STEP =10,
         BRK_STEP =10
    };
}

struct Car
{
    char gamerID[car_const::ID_LEN];
    int fuelgauge;
    int curspeed;

    void showcarstate()
    {
        cout<<"소유자 ID: "<<gamerID<<endl;
        cout<<"연료량:  "<<fuelgauge<<endl;
        cout<<"현재속도: "<<curspeed<<"km/s"<<endl<<endl;
    }

    void accel()
    {
        if(fuelgauge<=0)
            return;
        else   
            fuelgauge-=car_const::FUEL_STEP;

            if(curspeed+car_const::ACC_STEP>=car_const::MAX_SPD)
            {
                curspeed=car_const::MAX_SPD;
                return;
            }

        curspeed+=car_const::ACC_STEP;
    }

    void Break()
    {
        if(curspeed<car_const::BRK_STEP)
        {
            curspeed=0;
            return;
        }

        curspeed-=car_const::BRK_STEP;
    }
};


int main(void)
{
    Car run99={"run99", 100, 0};
    run99.accel();
    run99.accel();
    run99.showcarstate();
    run99.Break();
    run99.showcarstate();

    Car sped77={"sped77",100,0};
    sped77.accel();
    sped77.Break();
    sped77.showcarstate();
    
    return 0;
}