#include <iostream>

namespace parent
{
    int num=2;
    namespace subone
    {
        int num=3;
    }
    namespace subtwo
    {
        int num=4;
    }
}

int main(void)
{
    std::cout <<parent::num <<std::endl;
    std::cout <<parent::subone::num<<std::endl;
    std::cout <<parent::subtwo::num <<std::endl;
    return 0;
}
/*
결과
2
3
4
이름공간은 중첩이 가능하다.

*/