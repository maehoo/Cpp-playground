#include <iostream>
using namespace std;

class twonumber
{
    private:
        int num1;
        int num2;
    public:
        twonumber(int num1, int num2)
        {
            this->num1 = num1;
            this->num2 = num2;
        }
        /*
        twonumber(int num1, int num2):num1(num1),num2(num2)
        {}
        */
        void showtwonumber()
        {
            cout<<this->num1<<endl;
            cout<<this->num2<<endl;
        }
};

int main(void)
{
    twonumber two(2,4);
    two.showtwonumber();
    return 0;
}