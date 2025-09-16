#ifndef Car_H
#define Car_H


namespace car_const
{
    enum
    {
        ID_LEN=20,
        MAX_SPD=200,
        FUEL_STEP=2,
        ACC_STEP=10,
        BRK_STEP=10
    };
}

class Car
{
    private:
        char gamerID[car_const::ID_LEN];
        int fuelgauge;
        int curspeed;
    public:
        void initmembers(const char * ID, int fuel);
        void showcarstate();
        void accel();
        void Break();
};
//inline 함수: “그 함수를 쓰는 모든 .cpp에서 정의가 보이도록 해야 한다.” → 헤더에 둬라.

#endif