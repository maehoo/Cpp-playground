#include <iostream>

void myfunc(void)
{
    std::cout << "myfunc(void) called" << std:: endl;
}

void myfunc(char c)
{
    std::cout << "myfunc(char c) called" << std::endl;
}

void myfunc(int a, int b)
{
    std::cout<< "myfunc(int a, int b) called" << std::endl;
}

int main(void)
{
    myfunc();
    myfunc('A');
    myfunc(12,13);
    return 0;
    //매개변수의 자료형 또는 개수가 다르면 함수 이름이 똑같아도 C++은 구분할 수 있다.
    //반환형은 함수호출 시, 호출되는 함수를 구분하는 기준이 될 수 없다.
}
