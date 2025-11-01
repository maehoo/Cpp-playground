#include <iostream>
using namespace std;

class point
{
    private:
        int xpos, ypos;
    public:
        point(int x=0, int y=0) : xpos(x) , ypos(y) {}
        void showposition() const
        {
            cout<<"["<<xpos<<", "<<ypos<<"]"<<endl;
        }
        friend ostream& operator<<(ostream&,const point&);
};

ostream& operator<<(ostream& os, const point& pos)
{
    os<<"["<<pos.xpos<<", "<<pos.ypos<<"]"<<endl;
    return os;
}


int main(void)
{
    point pos1(1,3);
    cout<<pos1;
    point pos2(101,303);
    cout<<pos2;
    return 0;
}