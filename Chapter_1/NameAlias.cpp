#include <iostream>
using namespace std;

namespace AAA
{
    namespace BBB
    {
        namespace CCC
        {
            int num1;
            int num2;
        }
    }
}

int main(void)
{
    AAA::BBB::CCC::num1 = 20;
    AAA::BBB::CCC::num2 = 30;

    
    namespace ABC=AAA::BBB::CCC;
    cout<<ABC::num1<<endl;
    cout<<ABC::num2<<endl;
    

    /*
    using namespace AAA::BBB::CCC;
    cout<<num1<<endl;
    cout<<num2<<endl;
    이 경우 만약 똑같은 이름의 변수나 함수가 존재한다면 이름 모호성 오류가 발생하기 때문에 
    using namespace std; 같이 모든 것을 가져오는 것은 권장하지 않는다.
    */

    /*
    using AAA::BBB::CCC::num1;
    using AAA::BBB::CCC::num2;

    cout<<num1<<endl;
    cout<<num2<<endl;
    */
}