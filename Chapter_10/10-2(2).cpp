#include <iostream>
using namespace std;

class point
{
    private:
        int xpos, ypos;
    public:
        point(int x=0,int y=0): xpos(x),ypos(y) {}
        void showposition()
        {
            cout<<"["<<xpos<<", "<<ypos<<"]"<<endl;
        }
        friend point operator~(const point& pos1);
};

point operator~(const point& pos1)
{
    point pos(pos1.ypos,pos1.xpos);
    return pos;
}


int main(void)
{
    point pos1(3,4);
    (~pos1).showposition();
    pos1.showposition();
    return 0;
}