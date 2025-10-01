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
        void showdata()
        {
            cout<<"num: "<<num<<endl;
        }
};

void simplefuncobj(sosimple ob)
{
    ob.showdata();
}

int main(void)
{
    sosimple obj(7);
    cout<<"함수호출 전"<<endl;
    simplefuncobj(obj);
    cout<<"함수호출 후"<<endl;
    return 0;
}
/*
함수호출 전
called sosimple(const sosimple& copy)
num: 7
함수호출 후

매개변수 ob가 obj로 초기화되면서 복사생성자 sosimple(const sosimple& copy) 가 실행되면서 
called sosimple(const sosimple& copy) 문장이 출력됨.
*/