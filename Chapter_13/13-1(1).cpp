#include <iostream>
using namespace std;

class Point
{
    private:
        int xpos, ypos;
    public:
        Point(int x=0,int y=0) : xpos(x),ypos(y)
        {}
        void showposition() const
        {
            cout<<"["<<xpos<<", "<<ypos<<"]"<<endl;
        }
};

template<typename T>
void Swap(T& a, T& b)
{
    T temp = a;
    a= b;
    b = temp;
}

int main(void)
{
    Point pos1(3,4);
    Point pos2(10,20);
    Swap<Point>(pos1, pos2);
    pos1.showposition();
    pos2.showposition();
    return 0;
}