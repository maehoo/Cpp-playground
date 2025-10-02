#include <iostream>
using namespace std;

void counter()
{
    static int cnt;
    cnt++;
    cout<<"cureent cnt: "<<cnt<<endl;
}

int main(void)
{
    for(int i=0;i<10;i++)
    {
        counter();
    }
    return 0;
}
/*
cureent cnt: 1
cureent cnt: 2
cureent cnt: 3
cureent cnt: 4
cureent cnt: 5
cureent cnt: 6
cureent cnt: 7
cureent cnt: 8
cureent cnt: 9
cureent cnt: 10

전역변수에 선언된 static의 의미
->선언된 파일 내에서만 참조를 허용하겠다는 의미
함수 내에 선언된 static의 의미
->한번만 초기화되고, 지역변수와 달리 함수를 빠져나가도 소멸되지 않는다.

*/