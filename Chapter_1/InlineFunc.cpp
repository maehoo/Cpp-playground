#include <iostream>

inline int square(int x)
{
    return x*x;
}
int main(void)
{
    std::cout << square(5) << std::endl;
    std::cout << square(12) << std::endl;
    return 0;
}

//inline 함수를 사용할 경우 함수 몸체부분의 9행 square(5)를 5*5로 대체하게 된다.