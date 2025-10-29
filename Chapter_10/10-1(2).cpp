#include <iostream>
using namespace std;

class point
{
    private:
        int xpos, ypos;
    public:
        point(int x=0, int y=0) : xpos(x) , ypos(y) {}

        void showposition()
        {
            cout<<"[" << xpos<<", "<<ypos<<"]"<<endl;
        }
        point& operator+=(const point &pos1)
        {
            xpos += pos1.xpos;
            ypos += pos1.ypos;
            return *this;//
        }
        point& operator-=(const point &pos1)
        {
            xpos -= pos1.xpos;
            ypos -= pos1.ypos;
            return *this;
        }
};

int main(void)
{
    point pos1(3,4);
    point pos2(10,20);
    pos1.showposition();
    pos1+=pos2;
    pos1.showposition();
    pos1-=pos2;
    pos1.showposition();
    pos2.showposition();
    return 0;
}