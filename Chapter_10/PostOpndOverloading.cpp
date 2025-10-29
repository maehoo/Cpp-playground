#include <iostream>
using namespace std;

class point
{
    private:
        int xpos, ypos;
    public:
        point(int x=0,int y=0) : xpos(x) ,ypos(y) {}
        void showposition() const
        {
            cout<<"[" << xpos<<", "<<ypos<<"]"<<endl;
        }
        point& operator++()
        {
            xpos+=1;
            ypos+=1;
            return *this;
        }
        const point operator++(int)
        {
            const point retobj(xpos,ypos);
            xpos+=1;
            ypos+=1;
            return retobj;//원래 값을 저장해놓은 retobj를 반환하고 객체의 xpos와 ypos는 1씩 증가시킨다.
        }
        friend point& operator--(point &ref);
        friend const point operator--(point &ref,int);
};

point& operator--(point &ref)
{
    ref.xpos-=1;
    ref.ypos-=1;
    return ref;
}

const point operator--(point &ref, int)
{
    const point retobj(ref);
    ref.xpos-=1;
    ref.ypos-=1;
    return retobj;
}

int main(void)
{
    point pos(3,5);
    point cpy;
    cpy=pos--;
    cpy.showposition();
    pos.showposition();

    cpy=pos++;
    cpy.showposition();
    pos.showposition();
    return 0;
}