#include <iostream>
#include <cstring>
using namespace std;

class sosimple
{
    private:
        int num;
    public:
        sosimple(int n) : num(n)
        {
            cout<<"num=" <<num<<",";
            cout<<"address="<<this<<endl;
        }
        void showsimpledata()
        {
            cout<<num<<endl;
        }
        sosimple * getthispointer()
        {
            return this;
        }
};

int main(void)
{
    sosimple sim1(100);
    sosimple * ptr1 = sim1.getthispointer();
    cout<<ptr1<<",";
    ptr1->showsimpledata();

    sosimple sim2(200);
    sosimple * ptr2 = sim2.getthispointer();
    cout<<ptr2<<", ";
    ptr2->showsimpledata();
    return 0;
}
/*
출력값:

num=100,address=0x16d3633a8
0x16d3633a8,100
num=200,address=0x16d36339c
0x16d36339c, 200


this 포인터는 객체자신의 주소 값을 의미한다.
*/