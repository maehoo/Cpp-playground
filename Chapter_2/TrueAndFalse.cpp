#include <iostream>
using namespace std;


int main(void)
{
    int num=10;
    int i =0;

    cout<<"true: "<<true<<endl;
    cout<<"false: "<<false<<endl;

    while(true)
    {
        cout<<i++<<' ';
        if(i>num)
        {
            break;
        }
    }
    cout<<endl;

    cout << "sizeof 1: " <<sizeof(1)<<endl;
    cout << "sizeof 0: " << sizeof(0) <<endl;
    cout<<"sizeof true: "<<sizeof(true) <<endl;
    cout<<"sizeof false: "<<sizeof(false)<<endl;
    return 0;
    /*
    sizeof 1: 4
    sizeof 0: 4
    sizeof true: 1
    sizeof false: 1
    true는 1이 아니며, false도 0이 아니다. 이 둘은 참과 거짓을 표현하기 위한 1바이트 크기의 데이터이다.
    */
}