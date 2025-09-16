#include <iostream>
using namespace std;

class calculator
{
    private:
    int add;
    int div;
    int min;
    int gob;
    public:
    void init();
    double Add(double a, double b);
    double Min(double a, double b);
    double Div(double a, double b);
    double Gob(double a, double b);
    void showopcount();
};
void calculator::init()
{
    add=0;
    div=0;
    min=0;
    gob=0;
}

double calculator::Add(double a, double b)
{
    add++;
    return a+b;
}

double calculator::Min(double a, double b)
{
    min++;
    return a-b;
}

double calculator::Div(double a, double b)
{
    div++;
    return a/b;
}

double calculator::Gob(double a, double b)
{
    gob++;
    return a*b;
}

void calculator::showopcount()
{
    cout<<"덧셈: "<<add << " 뺄셈: "<<min << " 곱셈: "<<gob << " 나눗셈: "<<div<<endl;
}
int main(void)
{
    calculator cal;
    cal.init();
    cout<<"3.2 + 2.4 = "<<cal.Add(3.2,2.4)<<endl;
    cout<<"3.5 / 1.7 = "<<cal.Div(3.5,1.7)<<endl;
    cout<<"2.2 - 1.5 = "<<cal.Min(2.2,1.5)<<endl;
    cout<< "4.9 / 1.2 = "<<cal.Div(4.9,1.2)<<endl;
    cal.showopcount();
    return 0;
}