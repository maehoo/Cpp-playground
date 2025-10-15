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