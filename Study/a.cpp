#include <iostream>

using namespace std;


int foo()
{
    return 0;
}

namespace header1
{
    int foo()
    {
        cout<<"hello"<<endl;
        return 0;
    }
}

using namespace header1;

int main(void)
{
    foo();
    //header1::foo(); 는 가능!
    return 0;
}
/*
using namespace std;
이 문장이 없을경우 main 함수에서 foo함수를 호출할 때, 모호성의 문제로 컴파일 오류가 발생한다.
*/