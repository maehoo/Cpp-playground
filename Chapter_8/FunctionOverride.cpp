#include <iostream>
using namespace std;

class First
{
    public:
        void myfunc() {cout<<"firstfunc"<<endl;}
};


class Second : public First
{
    public:
        void myfunc() {cout<<"secondfunc"<<endl;}
};

class Third : public Second
{
    public:
        void myfunc() {cout<<"thridfunc"<<endl;}
};

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

/*
first형 포인터 변수를 이용하면 first 클래스에 정의된 myfunc 함수가 호출되고, 
second형 포인터 변수를 이용하면 second 클래스에 정의된 myfunc 함수가 호출되고,
third형 포인터 변수를 이용하면 third 클래스에 정의된 myfunc 함수가 호출된다.
*/