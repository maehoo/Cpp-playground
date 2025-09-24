#include <iostream>
using namespace std;

class selfref
{
    private:
        int num;
    public:
        selfref(int n) :num(n)
        {
            cout<<"객체생성"<<endl;
        }
        selfref& adder(int n)
        {
            num+=n;
            return *this;
        }
        selfref& showtwonumber()
        {
            cout<<num<<endl;
            return *this;
        }
};

int main(void)
{
    selfref obj(3);
    selfref &ref=obj.adder(2);

    obj.showtwonumber();
    ref.showtwonumber();

    ref.adder(1).showtwonumber().adder(2).showtwonumber();
    /*
    객체 ref의 adder 함수가 호출된다. adder 함수는 참조 값을 반환하므로, 반환된 참조 값을 이용해서 다시 
    showtwonumber 함수를 호출하게 된다. 마찬가지로 반환된 참조 값을 이용해서 adder를 호출하고, 또 showtwonumber을
    호출하는 문장이다.
    */
    return 0;
}