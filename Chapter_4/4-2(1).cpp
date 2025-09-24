#include <iostream>
using namespace std;

class Point
{
    private:
        int xpos, ypos;
    public:
        void init(int x, int y)
        {
            xpos=x;
            ypos=y;
        }
        void showpointinfo() const
        {
            cout<<"[" <<xpos<<", "<<ypos<<']'<<endl;
        }
};

class Circle
{
    private:
        int rad;
        Point center;
    public:
        void init(int x, int y, int r)
        {
            rad=r;
            center.init(x,y);
        }

        void showcircleinfo() const
        {
            cout<<"radius: "<<rad<<endl;
            center.showpointinfo();
        }
};

class Ring
{
    private:
        Circle incircle;
        Circle outcircle;
    public:
        void init(int x, int y, int r, int X, int Y, int R)
        {
            incircle.init(x,y,r);
            outcircle.init(X,Y,R);
        }
        void showringinfo() const
        {
            cout<<"inner circle info.." <<endl;
            incircle.showcircleinfo();
            cout<<"outter circle info.."<<endl;
            outcircle.showcircleinfo();
        }
};

int main(void)
{
    Ring ring;
    ring.init(1,1,4,2,2,9);
    ring.showringinfo();
    return 0;
}