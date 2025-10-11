#include <iostream>
using namespace std;

class sobase
{
    private:
        int basenum;
    public:
        sobase() : basenum(20)
        {
            cout<<"sobase()"<<endl;
        }
        sobase(int n) :basenum(n)
        {
            cout<<"sobase(int n)"<<endl;
        }
        void showbasedata()
        {
            cout<<basenum<<endl;
        }
};

class soderived : public sobase
{
    private:
        int derivnum;
    public:
        soderived() : derivnum(30)
        {
            cout<<"soderived()"<<endl;
        }
        soderived(int n): derivnum(n)
        {
            cout<<"soderived(int n)"<<endl;
        }
        soderived(int n1, int n2):sobase(n1),derivnum(n2)
        {
            cout<<"soderived(int n1, int n2)"<<endl;
        }
        void showderivdata()
        {
            showbasedata();
            cout<<derivnum<<endl;
        }
};

int main(void)
{
    cout<<"case 1...."<<endl;
    soderived dr1;
    dr1.showderivdata();
    cout<<"-----------------------"<<endl;
    cout<<"case 2...."<<endl;
    soderived dr2(12);
    dr2.showderivdata();
    cout<<"------------------------"<<endl;
    cout<<"case 3...."<<endl;
    soderived dr3(23, 24);
    dr3.showderivdata();
    return 0;
}
/*
case 1....
sobase()
soderived()
20
30
-----------------------
case 2....
sobase()
soderived(int n)
20
12
------------------------
case 3....
sobase(int n)
soderived(int n1, int n2)
23
24
*/
//기초 클래스의 생성자가 호출이 먼저된다. 이로 인해 기초 클래스의 멤버변수가 먼저 초기화된다.
//클래스의 멤버는 해당 클래스의 생성자를 통해서 초기화해야 한다.