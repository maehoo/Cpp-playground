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

#endif