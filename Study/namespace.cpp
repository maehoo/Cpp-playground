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

namespace
{
    int onlyinthisfile()
    {
        return 0;
    }
    int a =0;
}

using namespace header1;

int main(void)
{
    //foo(); 오류 발생
    header1::foo(); //이 경우는 가능!
    /*
    using namespace std;
    이 문장이 없을경우 main 함수에서 foo함수를 호출할 때, 모호성의 문제로 컴파일 오류가 발생한다.
*/

    a = 5;
    cout<<a<<endl;
    /*
    namespace의 이름을 붙이지 않을 경우 해당 !!파일!! 안에서만 접근이 가능하다. 
    */
    return 0;
}

