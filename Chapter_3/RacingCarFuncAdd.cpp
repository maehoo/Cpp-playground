#include <iostream>
using namespace std;

#define ID_LEN 20
#define MAX_SPD 200
#define FUEL_STEP 2
#define ACC_STEP 10
#define BRK_STEP 10

struct Car
{
    char gamerID[ID_LEN];
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
            fuelgauge-=FUEL_STEP;

            if(curspeed+ACC_STEP>=MAX_SPD)
            {
                curspeed=MAX_SPD;
                return;
            }

        curspeed+=ACC_STEP;
    }

    void Break()
    {
        if(curspeed<BRK_STEP)
        {
            curspeed=0;
            return;
        }

        curspeed-=BRK_STEP;
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