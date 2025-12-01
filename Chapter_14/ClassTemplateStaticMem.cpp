#include <iostream>
using namespace std;

template<typename T>
class SimpleStaticMem
{
    private:
        static T mem;
    public:
        void AddMem(T num) {mem+=num;}
        void ShowMem() {cout<<mem<<endl;}
};

template<typename T>
T SimpleStaticMem<T>::mem =0;

int main(void)
{
    SimpleStaticMem<int> obj1;
    SimpleStaticMem<int> obj2;
    obj1.AddMem(2);
    obj2.AddMem(3);
    obj1.ShowMem();
    SimpleStaticMem<long> obj3;
    SimpleStaticMem<long> obj4;
    obj3.AddMem(100);
    obj4.ShowMem();
    return 0;
}
/*
private는 "외부에서 접근(사용)할 수 있냐"를 막는 거지,
“정의(implementation)를 밖에 쓰면 안 된다”는 뜻이 아니다.
즉,
A a;

A::x = 10; ← 이런 “사용”은 private라서 안 됨 (접근 제한)

int A::x = 0; ← 이건 “정의(implementation)”라서 허용됨
*/