#include <iostream>
using namespace std;

class temporary
{
    private:
        int num;
    public:
        temporary(int n) : num(n)
        {
            cout<<"create obj: "<<num<<endl;
        }
        ~temporary()
        {
            cout<<"destroy obj: "<<num<<endl;
        }
        void showtempinfo()
        {
            cout<<"my num is "<<num<<endl;
        }
};

int main(void)
{
    temporary(100);
    cout<<"after make" <<endl<<endl;
    temporary(200).showtempinfo();
    cout<<"after make!" <<endl<<endl;
    const temporary &ref = temporary(300);
    cout<<"end of main!" <<endl <<endl;
    return 0;
}