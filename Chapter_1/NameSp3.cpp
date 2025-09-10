#include <iostream>

namespace bestcomimpl
{
    void simplefunc(void);
}

namespace bestcomimpl
{
    void prettyfunc(void);
}

namespace progcomimpl
{
    void simplefunc(void);
}

int main(void)
{
    bestcomimpl::simplefunc();
    return 0;
}

void bestcomimpl::simplefunc(void)
{
    std::cout <<"bestcom이 정의한 함수" << std::endl;
    prettyfunc();
    progcomimpl::simplefunc();
}

void bestcomimpl::prettyfunc(void)
{
    std::cout<<"so pretty"<<std::endl;
}

void progcomimpl::simplefunc(void)
{
    std::cout<<"progcom이 정의한 함수" << std::endl;
}
//동일한 이름공간에 정의된 함수를 호출할 때에는 이름공간을 명시할 필요가 없다.