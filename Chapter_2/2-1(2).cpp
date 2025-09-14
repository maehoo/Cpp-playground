//RefSwap.cpp

/*
#include <iostream>
using namespace std;

void swapbyref2(int &ref1, int &ref2)
{
    int temp=ref1;
    ref1=ref2;
    ref2=temp;
}

int main(void)
{
    int val1=10;
    int val2=20;

    swapbyref2(val1,val2);
    cout<<"val1: "<<val1<<endl;
    cout<<"val2: "<<val2<<endl;
    return 0;
}
*/

/*
swapbyref2(23,45); (컴파일 에러 발생 이유)
로 호출하게 되면 참조자는 상수를 참조할 수 없기 때문에 오류가 발생하게 된다.
*/