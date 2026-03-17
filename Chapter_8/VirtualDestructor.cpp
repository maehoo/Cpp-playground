#include <iostream>
using namespace std;

class first
{
    private:
        char * strone;
    public:
        first(const char * str)
        {
            strone = new char[strlen(str) + 1];

        }
        virtual ~first()
        {
            cout<<"~first()"<<endl;
            delete [] strone;
        }
};

class second : public first
{
    private:
        char * strtwo;
    public:
        second(const char * str1, const char * str2) : first(str1)
        {
            strtwo = new char [strlen(str2) +1];
        }
        ~second()
        {
            cout<<"~second()"<<endl;
            delete []strtwo;
        }
};

int main(void)
{
    first * ptr = new second("simple", "complex");
    delete ptr;
    return 0;
}
/*
virtual을 소멸자에 붙이지 않는 경우 실행 결과:
~first()
virtual을 소멸자에 붙일 경우 실행 결과:
~second()
~first()
*/