#include <iostream>

int val =100;
using namespace std;
void simplefunc(void)
{
    int val=20;
    val +=3;
    ::val += 7;
    cout << val << '\n'<<::val<< endl;
}

int main(void)
{
    simplefunc();   
    return 0;
}
/*
결과
23
107
*/
//전역변수 val에 접근하려면 '범위지정 연산자'를 사용하면 된다.