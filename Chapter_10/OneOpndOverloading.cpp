#include <iostream>
using namespace std;

class point
{
    private:
        int xpos, ypos;
    public:
        point(int x=0, int y=0) : xpos(x) , ypos(y){}
        void showposition() const
        {
            cout<<"[" << xpos<<", "<<ypos<<']'<<endl;
        }
        point& operator++()
        {
            xpos+=1;
            ypos+=1;
            return *this;
        }
        friend point& operator--(point &ref);
};

point& operator--(point &ref)
{
    ref.xpos-=1;
    ref.ypos-=1;
    return ref;
}

int main(void)
{
    point pos(1,2);
    ++pos;
    pos.showposition();
    --pos;
    pos.showposition();

    ++(++pos);
    pos.showposition();
    --(--pos);
    pos.showposition();
    return 0;
}