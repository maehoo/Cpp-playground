#include <iostream>
using namespace std;

class Point
{
    private:
        int xpos, ypos,Radius;
    public:
        void init(int x, int y,int rad)
        {
            xpos = x;
            ypos = y;
            Radius = rad;
        }
        void showinfo()
        {
            cout << "radius: "<<Radius<<endl;
            cout<< "["<<xpos<<","<<ypos<<"]"<<endl;
        }
};

class Ring
{
    private:
        Point inner;
        Point outter;
    public:
        void init(int a, int b, int c ,int d, int e, int f)
        {
            inner.init(a,b,c);
            outter.init(d,e,f);
        }
        void showringinfo()
        {   
            cout<<"inner circle info"<<endl;
            inner.showinfo();
            cout<<"outter circle info"<<endl;
            outter.showinfo();
        }
};

int main(void)
{
    Ring ring;
    ring.init(1,1,4,2,2,9);
    ring.showringinfo();
    return 0;
}