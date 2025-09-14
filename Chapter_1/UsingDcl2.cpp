#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main(void)
{
    int num=20;
    cout<<"hello world" <<endl;
    cout<<"hello " << "world" <<endl;
    cout << num << ' '<< 'A'; //c++에서 작은따옴표는 단 하나의 문자만을 담을 때 사용되도록 약속되어 있어서 공백이 뒤에 들어간다면 'warning'이 발생한다.
    cout << ' '<<3.14<<endl;
    return 0;
}
/*
using도 지역변수의 선언과 마찬가지로 선언된 이후부터 효력을 발휘하며, 선언된 지역을 벗어나면, 선언의 효력은 잃게 된다.
따라서 프로그램 전체영역에 효력을 미치게 하려면 전역변수와 마찬가지로 함수 밖에 선언해야 한다.
*/