#include <iostream>
using namespace std;

class number
{
    private:
        int num;
    public:
        number(int n=0) : num(n)
        {
            cout<<"number(int n=0)"<<endl;
        }
        number& operator=(const number& ref)
        {
            cout<<"operator=()"<<endl;
            num = ref.num;
            return *this;
        }
        void shownumber() {cout<<num<<endl;}
};

int main(void)
{
    number num;
    num=30;
    num.shownumber();
    return 0;
}
/*
1단계 . num=number(30) 임시객체 생성
2단계 . num.operator=(number(30)) 임시객체를 대상으로 하는 대입 연산자의 호출
*/

/*
컴파일 결과
number(int n=0)
number(int n=0)
operator=()
30
*/