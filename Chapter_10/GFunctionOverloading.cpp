#include <iostream>
using namespace std;

class point
{
    private:
        int xpos, ypos;
    public:
        point(int x=0, int y=0) : xpos(x) , ypos(y)
        {}
        void showposition() const
        {
            cout<<"[" <<xpos<<", "<<ypos<<']'<<endl;
        }
        friend point operator+(const point &pos1, const point &pos2);//전역함수에서 xpos,ypos에 접근하기 위해서 friend 선언을 하였다.
};

point operator+(const point &pos1, const point &pos2)
{
    point pos(pos1.xpos+pos2.xpos, pos1.ypos+pos2.ypos);
    return pos;
}


int main(void)
{
    point pos1(3,4);
    point pos2(10,20);
    point pos3=pos1+pos2;

    pos1.showposition();
    pos2.showposition();
    pos3.showposition();
    return 0;
}