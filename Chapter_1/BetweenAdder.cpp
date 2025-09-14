#include <iostream>

int main(void)
{
    int val1, val2;
    int result =0;
    std::cout<< "두 개의 숫자입력: ";
    std::cin >> val1>>val2;

    if(val1<val2)
    {
        for(int i =val1+1; i<val2; i++)
            result +=i;
    }
    else
    {
        for(int i = val2+1; i<val1; i++)
            result +=i;
    }
    std:: cout << "두 수 사이의 정수 합: " << result << std::endl;
    return 0;

    //연속적인 데이터의 입력을 요구할 수 있다.
    //첫 번째 입력되는 정수 '변수1'에 저장되고, 두 번째 입력되는 정수가 '변수2'에 저장된다. 첫 번째와 두 번째의 경계는 탭, 스페이스 바,
    //엔터 키의 입력과 같은 공백에 의해 나눠진다.
}