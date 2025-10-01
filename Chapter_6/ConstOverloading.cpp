#include <iostream>
using namespace std;

class sosimple
{
    private:
        int num;
    public:
        sosimple(int n) : num(n)
        {}
        sosimple& addnum(int n)
        {
            num+=n;
            return *this;
        }
        void simplefunc()
        {
            cout<<"simplefunc: "<<num<<endl;
        }
        void simplefunc() const
        {
            cout<<"const simplefunc: "<<num<<endl;
        }
};

void yourfunc(const sosimple &obj)
{
    obj.simplefunc();
}

int main(void)
{
    sosimple obj1(2);
    const sosimple obj2(7);

    obj1.simplefunc();
    obj2.simplefunc();

    yourfunc(obj1);
    yourfunc(obj2);
    return 0;
}
/*
simplefunc: 2
const simplefunc: 7
const simplefunc: 2   인자가 const객체가 아니고, 매개변수가 const 참조자임에도 함수호출은 const 함수를 호출한다.
const simplefunc: 7
*/