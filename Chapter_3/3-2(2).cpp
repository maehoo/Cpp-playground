#include <iostream>
using namespace std;

class Printer
{
    private:
    const char * sentence;
    public:
    void init(const char * ptr)
    {
        sentence = ptr;
    }
    void Print()
    {
        cout << sentence<< endl;
    }
};

int main(void)
{
    Printer a;
    a.init("안녕하세요");
    a.Print();
    return 0;
}