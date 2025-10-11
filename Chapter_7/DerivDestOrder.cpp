#include <iostream>
using namespace std;

class sobase
{
    private:
        int basenum;
    public:
        sobase(int n):basenum(n)
        {
            cout<<"sobase(): "<<basenum<<endl;
        }
        ~sobase()
        {
            cout<<"~sobase():"<<basenum<<endl;
        }
};


class soderived : public sobase
{
    private:
        int derivnum;
    public:
        soderived(int n) :sobase(n) ,derivnum(n)
        {
            cout<<"soderived() : "<<derivnum<<endl;
        }
        ~soderived()
        {
            cout<<"~soderived() : "<<derivnum<<endl;
        }
};

int main(void)
{
    soderived drv1(15);
    soderived drv2(27);
    return 0;
}
/*
sobase(): 15
soderived() : 15
sobase(): 27
soderived() : 27
~soderived() : 27
~sobase():27
~soderived() : 15
~sobase():15
*/
//스택에 생성된 객체의 소멸순서는 생성순서와 반대이다.