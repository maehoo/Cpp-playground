#include <iostream>
using namespace std;


int main(void)
{
    int a = 1;
    try
    {
        if(a ==1)
        {
            int expn = 10;
            throw expn;
        }
    }
    catch(...)
    {
        cout<<"뭔가 잡힘 "<<endl;
    }
    return 0;
}
/*
catch(...)의 이해
어떤 예외든 다 잡지만 예외 객체나 지역 변수에 접근할 방법이 없다.
예를 들어서 
현재 코드에서 예외가 발생하여 catch(...)가 발동되지만 expn이라는 변수를 사용하는 것은 불가능하다.
비슷하게 객체를 보내도 그 객체를 사용할 수 없음을 의미한다.
그러나 throw a가 됐을때에는 main함수의 일반함수인 a를 사용하는 것이기 때문에 사용이 가능하다.
*/