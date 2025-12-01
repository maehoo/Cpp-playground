#include <iostream>
using namespace std;

void Simplefuncone();
void Simplefunctwo();
void Simplefuncthree();

int main(void)
{
    try
    {
        Simplefuncone();
    }
    catch(int expn)
    {
        cout<<"예외코드 : "<<expn<<endl;
    }
    return 0;
}

void Simplefuncone()
{
    cout<<"Simplefuncone(void)"<<endl;
    Simplefunctwo();
}

void Simplefunctwo()
{
    cout<<"Simplefunctwo(void)"<<endl;
    Simplefuncthree();
}

void Simplefuncthree()
{
    cout<<"Simeplefuncthree(void)"<<endl;
    throw -1;
}
/*
    호출된 함수의 역순으로 예외 데이터가 전달된다.
    예외 데이터 전달 과정
    simplefuncthree() -> simplefunctwo() -> simplefuncone() -> main
*/