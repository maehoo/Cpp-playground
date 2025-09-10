#include <iostream>


namespace bestcomimpl
{
    void simplefunc(void);
}

namespace progcomimpl
{
    void simplefunc(void);
}

int main(void)
{
    bestcomimpl::simplefunc();
    progcomimpl::simplefunc();
}

void bestcomimpl::simplefunc(void)
{
    std::cout << "bestcom이 정의한 함수" <<std::endl;
}

void progcomimpl::simplefunc(void)
{
    std::cout <<"progcom이 정의한 함수"<<std::endl;
}
