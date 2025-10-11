#include <iostream>
using namespace std;

class countryarea
{
    public:
        const static int russia = 1707540;
        const static int canada = 998467;
        const static int china = 957290;
        const static int south_korea = 9922;
};
//const 멤버변수의 초기화는 이니셜라이저를 통해야만 한다. 
/*

잘못된 예:
class ConstExample {
private:
    const int num;
public:
    ConstExample(int n) {
        num = n; // 이미 생성된 const 멤버에 대입하려 함
    }
};

옳은 예:
class ConstExample {
private:
    const int num;
public:
    ConstExample(int n) : num(n) {  //  생성과 동시에 초기화
    }
};

*/
int main(void)
{
    cout<<"러시아 면적: "<<countryarea::russia<<"km"<<endl;
    cout<<"캐나다 면적: "<<countryarea::canada<<"km"<<endl;
    cout<<"중국 면적: "<<countryarea::china<<"km"<<endl;
    cout<<"한국 면적: "<<countryarea::south_korea<<"km"<<endl;
    return 0;
}
//const static 멤버변수는, 클래스가 정의될 때 지정된 값이 유지되는 상수이기 때문에
//위 예제에서 보이는 바와 같이 초기화가 가능하도록 문법으로 정의하고 있다.