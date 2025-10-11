#include <iostream>
using namespace std;

class sosimple
{
    private:
        int num1;
        mutable int num2;
    public:
        sosimple(int n1, int n2):num1(n1),num2(n2)
        {}
        void showsimpledata() const//함수 뒤의 const 는 "나는 이 객체의 상태를 읽기만 하고, 절대 변경하지 않겠다."라는 의미를 가지고 있다.
        {
            cout<<num1<<", "<<num2<<endl;
        }
        void copytonum2() const
        {
            num2=num1;
        }
};

int main(void)
{
    sosimple sm(1,2);
    sm.showsimpledata();
    sm.copytonum2();
    sm.showsimpledata();
    return 0;
}