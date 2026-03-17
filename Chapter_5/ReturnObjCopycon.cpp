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

sosimple simplefuncobj(sosimple ob) //ob객체가 생성되고 obj의 인자로 초기화 된다.
{
    cout<<"return 이전"<<endl;
    return ob;// ob객체는 소멸되고 임시객체를 반환한다
}

int main(void)
{
    sosimple obj(7);
    simplefuncobj(obj).addnum(30).showdata();//simplefuncobj(obj)의 반환값으로 ob가 나온것이 아닌 임시객체가 반환되어 있는것이다.
    //따라서 함수호출이 완료되고 나면, 지역적으로 선언된 객체 ob는 소멸되고 obj 객체와 임시객체만 남는다.
    obj.showdata();
    return 0;
}
/*
called sosimple(const sosimple& copy)
return 이전
called sosimple(const sosimple& copy)
num: 37
num: 7
*/