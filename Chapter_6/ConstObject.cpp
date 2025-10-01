#include <iostream>
using namespace std;

class sosimple
{
    private:
        int num;
    public:
        sosimple(int n) : num(n)
        {}
        sosimple& addnum(int n)
        {
            num+=n;
            return *this;
        }
        void showdata() const
        {
            cout<<"num: "<<num<<endl;
        }
};

int main(void)
{
    const sosimple obj (7);
    //obj.addnum(20); 멤버함수 addnum은 const 함수가 아니기 때문에 호출이 불가능하다.
    obj.showdata();
    return 0;
}