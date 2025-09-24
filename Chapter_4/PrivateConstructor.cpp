#include <iostream>
using namespace std;

class aaa
{
    private:
        int num;
    public:
        aaa() : num(0){}
        aaa& createinitobj(int n) const
        {
            aaa *ptr = new aaa(n);
            return *ptr;
            /*
            int, double, struct, class … 자료형이 뭐든지 스택에 선언하면 지역변수라서 함수 끝나면 사라지고,
            new로 만들면 힙에 올라가서 delete 하기 전까지는 살아있다
            */
        }
        void shownum() const{ cout << num<<endl;}
        private:
        aaa(int n) : num(n) {}
};

int main(void)
{
    aaa base;
    base.shownum();
    aaa &obj1 = base.createinitobj(3);
    obj1.shownum();

    aaa &obj2=base.createinitobj(12);
    obj2.shownum();

    delete &obj1;
    delete &obj2;//이 때의 &은 주소를 나타낸다.
}