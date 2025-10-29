#include <iostream>
using namespace std;

class baseone
{
    public:
        void simplefuncone() {cout<<"baseone"<<endl;}
};

class basetwo
{
    public:
        void simplefunctwo() {cout<<"basetwo"<<endl;}
};

class multiderived : public baseone, protected basetwo
{
    public:
        void complexfunc()
        {
            simplefuncone();
            simplefunctwo();
        }
};

int main(void)
{
    multiderived mdr;
    mdr.complexfunc();
    return 0;
}