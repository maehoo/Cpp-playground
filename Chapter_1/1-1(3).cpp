#include <iostream>

int main(void)
{
    int num;
    std::cout << "숫자 입력 : " ;
    std::cin >> num ;
    int num2=1;
    for(;num2<=9;num2++)
    {
        std::cout << num << " x " << num2 << " = " << num*num2<< std::endl;
    }
    return 0;
}