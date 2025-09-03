#include <iostream>

int main(void)
{
    int val1;
    std::cout<< "첫 번째 숫자입력: ";
    std::cin >>val1;

    int val2;
    std::cout<<"두 번째 숫자입력: ";
    std::cin>> val2;

    int result = val1 + val2;
    std::cout<< "덧셈 결과: "<< result << std::endl;

    //키보드로부터의 데이터 입력에는 std::cin >> 연산자가 필요하다.
    char str[100];
    std::cin >> str;
    std::cout << str<< std::endl;
    return 0;
}