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

class Car
{
    private:
    char gamerID[car_const::ID_LEN];
    int fuelgauge;
    int curspeed;

    public:
    void initmembers(const char *ID,int fuel);
    void showcarstate();
    void accel();
    void Break();
};

//strcpy("run99",100)
//"run99"는 문자열 상수이기 때문에 매개변수의 자료형은 const char *ID가되어야한다.
void Car::initmembers(const char*ID, int fuel)
{
    strcpy(gamerID, ID);
    //public에 포함된 initmembers로 private의 gamerID를 초기화 하고 있다.
    fuelgauge = fuel;
    curspeed =0;
}

void Car::showcarstate()
{
    cout<<"소유자 ID: "<<gamerID<<endl;
    cout<<"연료량: "<<fuelgauge<< "%"<<endl;
    cout<<"현재 속도: "<<curspeed<<"km/s"<<endl<<endl;
}

void Car::accel()
{
    if(fuelgauge<=0)
        return;
    else
        fuelgauge -= car_const::FUEL_STEP;

    if((curspeed+car_const::ACC_STEP)>=car_const::MAX_SPD)
    {
        curspeed=car_const::MAX_SPD;
        return;
    }
    curspeed+=car_const::ACC_STEP;
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

int main(void)
{
    Car run99;
    run99.initmembers("run99",100);
    run99.accel();
    run99.accel();
    run99.accel();
    run99.showcarstate();
    run99.Break();
    run99.showcarstate();
    return 0;
}