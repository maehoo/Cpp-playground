#include <iostream>

using namespace std;

int main(void)
{
    int num1=1020;
    int &num2 = num1;

    num2 = 3047;
    cout<<"VAL:"<< num1<<endl;
    cout<<"REF: "<<num2<<endl;

    cout <<"VAL: "<<&num1<<endl;
    cout<< "REF: "<<&num2<<endl;
    return 0;
}
/*
VAL:3047
REF: 3047
VAL: 0x16b113398
REF: 0x16b113398
참조자는 똑같은 메모리 공간에 또다른 이름을 달아주는 역할을 한다.
*/