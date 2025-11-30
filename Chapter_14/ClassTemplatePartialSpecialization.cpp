#include <iostream>
using namespace std;

template <typename T1, typename T2>
class MySimple
{
    public:
        void whoareyou()
        {
            cout<<"size of T1: "<<sizeof(T1)<<endl;
            cout<<"size of T2: "<<sizeof(T2)<<endl;
            cout<<"<typename T1 , typename T2>"<<endl;
        }
};

template<>
class MySimple<int, double>
{
    public:
        void whoareyou()
        {
            cout<<"size of int: "<<sizeof(int)<<endl;
            cout<<"size of double: "<<sizeof(double)<<endl;
            cout<<"<int,double>"<<endl; 
        }
};

template <typename T1>
class MySimple<T1, double>
{
    public:
        void whoareyou()
        {
            cout<<"size of T1: "<<sizeof(T1)<<endl;
            cout<<"size of double: "<<sizeof(double)<<endl;
            cout<<"<T1, double>"<<endl;
        }
};

int main(void)
{
    MySimple<char,double> obj1;
    obj1.whoareyou();
    MySimple<int,long> obj2;
    obj2.whoareyou();
    MySimple<int,double> obj3;
    obj3.whoareyou();
    return 0;
}
/*
28행 ~ 38행을 주석처리 했을 경우
size of T1: 1
size of T2: 8
<typename T1 , typename T2>
size of T1: 4
size of T2: 8
<typename T1 , typename T2>
size of int: 4
size of double: 8
<int,double>

주석처리 해제 했을 경우

*/