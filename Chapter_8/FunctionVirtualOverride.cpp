#include <iostream>
using namespace std;

class First
{
    public:
        virtual void myfunc() {cout<<"firstfunc"<<endl;}
};


class Second : public First
{
    public:
        virtual void myfunc() {cout<<"secondfunc"<<endl;}
};

class Third : public Second
{
    public:
        virtual void myfunc() {cout<<"thridfunc"<<endl;}
};
//first 클래스의 myfunc 함수가 virtual로 선언되었으니, second,third 클래스의 함수에는 굳이 virtual
//선언을 추가하지 않아도 가상함수가 된다. 그러나 이렇게 virtual 선언을 넣어서 함수가 가상함수임을 알리는 것이 좋다.
int main(void)
{
    Third * tptr = new Third();
    Second * sptr = tptr;
    First * fptr = sptr;

    fptr ->myfunc();
    sptr -> myfunc();
    tptr->myfunc();
    delete tptr;
    return 0;
}
//virtual 사용이유: 부모 포인터/참조로 가리키더라도, 실제 객체(자식)의 동작을 실행하고 싶어서