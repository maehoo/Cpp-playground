#include <iostream>
using namespace std;

class simpleclass
{
    private:
        int num1;
        int num2;
    public:
        simpleclass()
        {
            num1=0;
            num2=0;
        }
        simpleclass(int n)
        {
            num1 = n;
            num2 = 0;
        }
        simpleclass(int n1, int n2)
        {
            num1=n1;
            num2 = n2;
        }

        void showdata() const
        {
            cout<<num1<<' '<<num2<<endl;
        }
};

int main(void)
{
    simpleclass sc1;
    sc1.showdata();

    simpleclass sc2(100);
    sc2.showdata();

    simpleclass sc3(100,200);
    sc3.showdata();
    return 0;
}