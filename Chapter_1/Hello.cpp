#include <iostream>

int main(void)
{
    int num =20;
    std::cout<<"Hello World!" << std:: endl;
    std::cout<<"Hello" << "World!" <<std:: endl;
    std::cout<< num <<' '<< 'A';
    std::cout<< ' ' << 3.14<<std::endl;
    return 0;
    
    // 헤더파일의 확장자 .h를 뺀다. 
    // std::cout 후에 출력대상이 온다.
    // std::endl 은 개행이다.
}