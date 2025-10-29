#include <iostream>
using namespace std;

class AAA
{
    private:
        int num1;
    public:
        virtual void func1(){cout<<"func1"<<endl;}
        virtual void func2(){cout<<"func2"<<endl;}
};


class BBB : public AAA
{
    private:
        int num2;
    public:
        virtual void func1(){cout<<"BBB::func1"<<endl;}
        void func3(){cout<<"func3"<<endl;}
};

int main(void)
{
    AAA * aptr = new AAA();
    aptr->func1();

    BBB * bptr = new BBB();
    bptr->func1();
    return 0;
}

/*
BBB클래스의 가상함수 테이블을 보면, 오버라이딩 된 AAA 클래스의 func1 함수에 대한 정보가 없음을 알 수 있다. 그래서 BBB 클래스의 func1 
함수가 대신 호출되는데, 이것이 바로 가상함수의 호출원리다.
*/