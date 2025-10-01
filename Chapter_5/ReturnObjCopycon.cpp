#include <iostream>
using namespace std;

class sosimple
{
    private:
         int num;
    public:
        sosimple(int n) : num(n)
        {}
        sosimple(const sosimple& copy) : num(copy.num)
        {
            cout<<"called sosimple(const sosimple& copy)"<<endl;
        }
        sosimple& addnum(int n)
        {
            num += n;
            return *this;
        }
        void showdata()
        {
            cout<<"num: "<<num<<endl;
        }
};

sosimple simplefuncobj(sosimple ob)
{
    cout<<"return 이전"<<endl;
    return ob;
}

int main(void)
{
    sosimple obj(7);
    simplefuncobj(obj).addnum(30).showdata();
    obj.showdata();
    return 0;
}