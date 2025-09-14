#include <iostream>
using namespace std;

void add(int &num1)
{
    num1 +=1;
}

void func(int &num2)
{
    num2 = -num2;
}
int main(void)
{
    int num=10;
     add(num);
    cout<<num<<endl;
    func(num);
    cout<<num<<endl;
    return 0;
}