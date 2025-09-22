#include <iostream>
using namespace std;

class sinivelcap
{
    public:
        void take() const
        {
            cout<<"콧물용"<<endl;
        };   
};

class sneezecap
{
    public:
        void take() const
        {
            cout <<"재채기용"<<endl;
        }
};

class snufflecap
{
    public:
    void take() const 
    {
        cout<<"코막힘 용"<<endl;
    }
};

class contac600
{
    private:
        sinivelcap sin;
        sneezecap sne;
        snufflecap  snu;
    public:
        void take() const
        {
            sin.take();
            sne.take();
            snu.take();
        }
};

class coldpatient
{
    public:
        void takecontac600(const contac600 &cap) const { cap.take();}
};

int main(void)
{
    contac600 cap;
    coldpatient sufferer;
    sufferer.takecontac600(cap);
    return 0;
}