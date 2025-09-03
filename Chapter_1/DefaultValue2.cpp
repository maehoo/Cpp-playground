#include <iostream>

int Adder(int num1=1, int num2 =2);

int main(void)
{
    std::cout<< Adder() << std::endl;
    std::cout << Adder(5) << std::endl;
    std::cout << Adder(3,5) << std::endl;
    return 0;
}

int Adder(int num1, int num2)
{
    return num1+num2;
}

//함수의 선언이 별도로 필요한 경우에는 매개변수의 디폴트 값은 함수의 선언부분에'만' 위치시켜야 한다.
//정의 부분에 디폴트 값을 설정할 경우 컴파일 오류가 발생한다.
