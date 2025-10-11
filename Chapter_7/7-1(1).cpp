#include <iostream>
#include <cstring>
using namespace std;

class car
{
    private:
        int gasolinegauge;
    public:
        car(){}
        car(int n): gasolinegauge(n){} 
        int getgasgauge()
        {
            return gasolinegauge;
        }
};

class hybridcar : public car
{
    private:
        int electricgauge;
    public:
        hybridcar(){}
        hybridcar(int n1,int n2) : electricgauge(n1),car(n2){}
        int getelecgauge()
        {
            return electricgauge;
        }
};

class hybridwatercar : public hybridcar
{
    private:
        int watergauge;
    public:
        hybridwatercar(){}
        hybridwatercar(int n1, int n2 , int n3) : watergauge(n1),hybridcar(n2,n3){}
        void showcurrentgauge()
        {
            cout<<"잔여 가솔린: "<<getgasgauge()<<endl;
            cout<<"잔여 전기량: "<<getelecgauge()<<endl;
            cout<<"잔여 워터량: "<<watergauge<<endl;
        }
};

int main(void)
{
    hybridwatercar a(10,20,30);
    a.showcurrentgauge();
    return 0;
}

