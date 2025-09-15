#include <iostream>
using namespace std;

struct Point
{
    int xpos;
    int ypos;

    void movepos(int x, int y)
    {
        xpos+= x;
        ypos+= y;
        return;
    }

    void addpoint(const Point &pos)
    {
        xpos += pos.xpos;
        ypos += pos.ypos;
        return;
    }

    void showposition()
    {
        cout<<"[" <<xpos<<","<<ypos<<"]"<<endl;
    }
};


int main(void)
{
    Point pos1 = {12,4};
    Point pos2 = {20,30};

    pos1.movepos(-7,10);
    pos1.showposition();

    pos1.addpoint(pos2);
    pos1.showposition();
    return 0;
}