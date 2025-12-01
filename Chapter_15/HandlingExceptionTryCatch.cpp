#include <iostream>
using namespace std;

int main(void)
{
    int num1, num2;
    cout<<"두 개의 숫자 입력: ";
    cin>>num1>>num2;

    try
    {
        if(num2==0)
            throw num2;
        cout<<"나눗셈의 몫: "<<num1/num2<<endl;
        cout<<"나눗셈의 나머지: "<<num1%num2<<endl;
    }
    catch(int expn)
    {
        cout<<"제수는 "<<expn<<"이 될 수 없습니다."<<endl;
        cout<<"프로그램을 다시 실행하세요."<<endl;
    }
    cout<<"end of main"<<endl;
    return 0;
}
/*
예외가 발생하지 않으면, catch 블록은 그냥 건너 뛰고 그 다음 행이 실행된다.
예외가 발생하게 되면, 발생한 지점 이후의 나머지 try 영역을 건너뛰게 된다.
*/