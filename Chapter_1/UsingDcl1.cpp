//std::cout std::cin std::endl

/*
"이름공간 std에 선언된 cout"
"이름공간 std에 선언된 cin"
"이름공간 std에 선언된 endl"


헤더파일<iostream>에 선언되어 있는 cout,cin 그리고 endl은 이름공간 std안에 선언되어 있다.
*/

#include <iostream>

namespace hybrid
{
    void hybfunc(void)
    {
        std::cout<<"so simple function" <<std::endl;
        std::cout <<"in namespace hybrid" << std::endl;
    }
}

int main(void)
{
    using hybrid::hybfunc;
    hybfunc();
    return 0;
}