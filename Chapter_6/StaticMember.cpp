#include <iostream>
using namespace std;


class sosimple
{
    private:
        static int simobjcnt;
        /*
        C++에서는 static 멤버 변수를 클래스 내부에서 초기화할 수 없다.
        이유는 static 멤버는 모든 객체가 공유하는 하나의 전역적 데이터이기 때문이다.
        그래서 클래스 정의 안이 아니라 클래스 외부에서 한 번만 정의 및 초기화해야 한다.
        */
    public:
        sosimple()
        {
            simobjcnt++;
            cout<<simobjcnt<<"번째 sosimple 객체"<<endl;
        }
};
int sosimple::simobjcnt=0;
//static변수는 객체가 생성될 때 동시에 생성되는 변수가 아니고, 이미 메모리 공간에 할당이 이뤄진 변수기 때문에 객체 안에서 초기화가 이루어지면 안된다.
class socomplex
{
    private:
        static int cmxobjcnt;
    public:
        socomplex()
        {
            cmxobjcnt++;
            cout<<cmxobjcnt<<"번째 socomplex 객체"<<endl;
        }
        socomplex(socomplex &copy)
        {
            cmxobjcnt++;
            cout<<cmxobjcnt<<"번째 socomplex 객체"<<endl;
        }
};
int socomplex::cmxobjcnt=0;
int main(void)
{
    sosimple sim1;
    sosimple sim2;

    socomplex com1;
    socomplex com2=com1;
    socomplex();
    return 0;
}