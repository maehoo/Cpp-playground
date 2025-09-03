#include <iostream>

int main(void)
{
    char name[100];
    char tele[100];
    std::cout << "이름? ";
    std::cin >> name;

    std::cout << "전화번호?";
    std::cin >> tele;
    
    std::cout <<"이름 :" << name<<"\n" << "전화번호:" << tele << std::endl;
    return 0;
}