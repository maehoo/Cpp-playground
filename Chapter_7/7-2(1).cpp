#include <iostream>
#include <cstring>
using namespace std;

class rectangle
{
    private:
        int line1;
        int line2;
    public:
        rectangle(int n1, int n2) : line1(n1),line2(n2)
        {}
        void showareainfo()
        {
            cout<<"면적: "<<line1 *line2<<endl;
        }
};

class square : public rectangle
{
    public:
        square(int n) : rectangle(n,n)
        {}
};

int main(void)
{
    rectangle rec(4,3);
    rec.showareainfo();

    square sqr(7);
    sqr.showareainfo();
    return 0;
}