#include <iostream>
using namespace std;

class Point
{
    private:
        int xpos, ypos;
    public:
        Point (int x, int y): xpos(x),ypos(y)
        {}
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
        Circle(int x, int y, int r):rad(r) , center(x,y){}
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
        Ring(int x, int y, int r, int X, int Y, int R): incircle(x,y,r),outcircle(X,Y,R){}
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
    Ring ring(1,1,4,2,2,9);
    ring.showringinfo();
    return 0;
}