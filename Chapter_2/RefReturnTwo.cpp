#include <iostream>
using namespace std;

int& refretfuncone(int &ref)
{
    ref++;
    return ref;
}

int main(void)
{
    int num1=1;
    int num2=refretfuncone(num1);

    num1++;
    num2+=100;
    cout<<"num1: "<<num1<<endl;
    cout <<"num2: "<<num2<<endl;
    return 0;
}
/*
int refretfunctwo(int &ref)
반환형이 int일 때와 int&일 경우의 차이


refretfuncone의 경우 
int num2= refretfuncone(num1); (O)
int &num2 = refretfuncone(num1); (O)


refretfunctwo의 경우
int num2 = refretfunctwo(num1); (O)
int& num2 = refretfunctwo(num1); (X)

의 차이가 있다
*/