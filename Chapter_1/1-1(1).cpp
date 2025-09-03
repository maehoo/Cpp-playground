#include <iostream>

int main(void)
{
    int arr[5];
    int num;
    int num2 =0;
    for(num=1;num<=5;num++)
    {
        std::cout << num << "번째 정수 입력:";
        std::cin >> arr[num2];
        num2++; 
    }
    int sum =0;
    for(num2=0;num2<=4;num2++)
    {
        sum+= arr[num2];
    }
    std::cout << "합계: " << sum;
    return 0;
}