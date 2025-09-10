#include <iostream>

namespace bestcomimpl
{
    void simplefunc(void)
    {
        std::cout <<"bestcom이 정의한 함수" <<std::endl;
    }
}

namespace progcomimpl
{
    void simplefunc(void)
    {
        std::cout << "progcom이 정의한 함수" << std::endl;
    }
}

int main(void)
{
    bestcomimpl::simplefunc();
    progcomimpl::simplefunc();
    return 0;
}
//::을 범위지정 연산자라고 한다. 