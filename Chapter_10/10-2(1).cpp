#include <iostream>
using namespace std;

class point
{
    private:
        int xpos, ypos;
    public:
        point(int x=0, int y=0) : xpos(x), ypos(y) {}
        void showposition()
        {
            cout<<"[" << xpos<<", "<<ypos<<"]"<<endl;
        }
        point operator-()
        {
            point pos(-xpos,-ypos);
            return pos;
        }
};

int main(void)
{
    point pos1(3,4);
    point pos2 = -pos1;
    pos1.showposition();
    pos2.showposition();
    return 0;
}