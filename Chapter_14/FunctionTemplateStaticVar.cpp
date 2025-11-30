#include <iostream>
using namespace std;

template <typename T>
void ShowStaticValue()
{
    static T num=0;
    num+=1;
    cout<<num<<" ";
}

int main(void)
{
    ShowStaticValue<int>();
    ShowStaticValue<int>();
    ShowStaticValue<int>();
    cout<<endl;
    ShowStaticValue<long>();
    ShowStaticValue<long>();
    ShowStaticValue<long>();
    cout<<endl;
    ShowStaticValue<double>();
    ShowStaticValue<double>();
    ShowStaticValue<double>();
    return 0;
}
/*
1 2 3
1 2 3
1 2 3
static 지역변수도 템플릿 함수 별로 각각 존재하게 된다.
*/