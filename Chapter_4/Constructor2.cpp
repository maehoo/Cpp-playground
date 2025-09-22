#include <iostream>
using namespace std;

class simpleclass
{
    private:
        int num1;
        int num2;
    public:
        simpleclass(int n1=0, int n2=0)
        {
            num1= n1;
            num2 = n2;
        }
        void showdata() const
        {
            cout<<num1<<' '<<num2<<endl;
        }
};

int main(void)
{
    simpleclass sc1();
    simpleclass mysc=sc1();
    mysc.showdata();
    return 0;
}

simpleclass sc1()
{
    simpleclass sc(20,30);
    return sc;
}
//simpleclass sc1() 뒤에 매개변수를 넣지 않는다면 객체를 생성하는게 아닌 반환형이 simpleclass인 sc1함수를 선언하는게 된다!