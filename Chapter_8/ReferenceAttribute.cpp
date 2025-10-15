#include <iostream>
using namespace std;

class first
{
    public:
        void firstfunc() {cout<<"firstfunc()"<<endl;}
        virtual void simplefunc(){cout<<"first's simplefunc()"<<endl;}

};

class second: public first
{
    public:
        void secondfunc(){ cout<<"secondfunc()"<<endl;}
        virtual void simplefunc() {cout<<"second's simplefunc()"<<endl;}
};

class third: public second
{
    public:
        void thirdfunc() {cout<<"thirdfunc()"<<endl;}
        virtual void simplefunc(){cout<<"third's simplefunc()"<<endl;}
};


int main(void)
{
    third obj;
    obj.firstfunc();
    obj.secondfunc();
    obj.thirdfunc();
    obj.simplefunc();

    second & sref = obj;
    sref.firstfunc();
    sref.secondfunc();
    sref.simplefunc();

    first & fref =obj;
    fref.firstfunc();
    fref.simplefunc();
    return 0;
}