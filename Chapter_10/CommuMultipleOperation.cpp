#include <iostream>
using namespace std;

class point
{
    private:
        int xpos, ypos;
    public:
        point(int x=0,int y=0) : xpos(x) , ypos(y)
        {}
        void showposition() const
        {
            cout<<"["<<xpos<<", "<<ypos<<"]" <<endl;
        }
        point operator*(int times)
        {
            point pos(xpos*times, ypos*times);
            return pos;
        }
        friend point operator*(int times, point & ref);
};

point operator*(int times, point& ref)
{
    return ref*times;
}
//교환법칙을 위한 전역함수

int main(void)
{
    point pos(1,2);
    point cpy;

    cpy= 3*pos;
    cpy.showposition();

    cpy=2*pos*3;
    cpy.showposition();
    return 0;
}