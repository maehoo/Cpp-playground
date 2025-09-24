#include <iostream>
using namespace std;

class sosimple
{
    private:
        int num1;
        int num2;
    public:
        sosimple(int n1, int n2) : num1(n1),num2(n2)
        {}
        sosimple(sosimple &copy) : num1(copy.num1) , num2(copy.num2)
        {
            cout<<"called sosimple(sosimple &copy)" <<endl;
        }
        void showsimpledata()
        {
            cout<<num1<<endl;
            cout<<num2<<endl;
        }
};


int main(void)
{
    sosimple sim1(15,30);
    cout<<"생성 및 초기화 직전"<<endl;
    sosimple sim2=sim1; // sosimple sim2(sim1);
    cout<<"생성 및 초기화 직후"<<endl;
    sim2.showsimpledata();
    return 0;
}