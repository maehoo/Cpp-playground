#include <iostream>
using namespace std;

void Divide(int num1, int num2)
{
    try
    {
        if(num2==0)
            throw 0;
        cout<<"몫: "<<num1/num2<<endl;
        cout<<"나머지: "<<num1%num2<<endl;
    }
    catch(int expn)
    {
        cout<<"first catch: "<<expn<<endl;
        throw;
    }
}

int main(void)
{
    try
    {
        Divide(9,2);
        Divide(4,0);
    }
    catch(int expn)
    {
        cout<<"second catch: "<<expn<<endl;
    }
}
/*
몫: 4
나머지: 1
first catch: 0
second catch: 0
*/

//catch 블록에 전달된 예외는 다시 던져질 수 있다.
