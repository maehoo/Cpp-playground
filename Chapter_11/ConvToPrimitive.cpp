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
            num=ref.num;
            return *this;
        }
        operator int() // 형 변환 연산자의 오버로딩
        {
            return num;
        }
        void shownumber() 
        {
            cout<<num<<endl;
        }
};

int main(void)
{
    number num1;
    num1=30;
    number num2=num1+20; 
    num2.shownumber();
    return 0;
}
/* 33번행
1단계. num1이 자료형 num으로 변환되어 30이 됨.
2단걔. 합결과인 50이 형 변환으로 number이 됨.
3단계. operator= 함수가 호출됨.
*/

/*
number(int n=0)
number(int n=0)
operator=()
number(int n=0)
50
*/