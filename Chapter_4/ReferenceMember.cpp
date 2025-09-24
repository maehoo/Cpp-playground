#include <iostream>
using namespace std;

class aaa
{
    public:
    aaa()
    {
        cout<<"empty object"<<endl;
    }
    void showyourname()
    {
        cout<<"I'm class aaa"<<endl;
    }
};

class bbb
{
    private:
    aaa &ref;
    const int &num;
    public:
    bbb(aaa &r, const int &n): ref(r),num(n)
    {}
    void showyourname()
    {
        ref.showyourname();
        cout<<"and" << endl;
        cout<< "i ref num" <<num<<endl;
    }
};

int main(void)
{
    aaa obj1;
    bbb obj2(obj1, 20);
    obj2.showyourname();
    return 0;
}