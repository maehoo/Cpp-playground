#include <iostream>
using namespace std;

class point;

class pointop
{
    private:
        int opcnt;
    public:
        pointop() : opcnt(0)
        {}

        point pointadd(const point&,const point&);
        point pointsub(const point&,const point&);
        ~pointop()
        {
            cout<<"operation times: "<<opcnt<<endl;
        }
};

class point
{
    private:
        int x;
        int y;
    public:
        point(const int &xpos, const int &ypos) : x(xpos), y(ypos)
        {}
        friend point pointop::pointadd(const point &,const point&);//pointop의 private 함수에 접근가능
        friend point pointop::pointsub(const point&,const point&);
        friend void showpointpos(const point&);
};

point pointop::pointadd(const point& pnt1,const point& pnt2)
{
    opcnt++;
    return point(pnt1.x+pnt2.x,pnt1.y+pnt2.y);
}

point pointop::pointsub(const point& pnt1, const point& pnt2)
{
    opcnt++;
    return point(pnt1.x-pnt2.x,pnt1.y-pnt2.y);
}

int main(void)
{
    point pos1(1,2);
    point pos2(2,4);
    pointop op;
    showpointpos(op.pointadd(pos1,pos2));
    showpointpos(op.pointsub(pos2,pos1));
    return 0;
}

void showpointpos(const point& pos)
{
    cout<<"x: "<<pos.x<<", ";
    cout<<"y: "<<pos.y<<endl;
}