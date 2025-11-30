#include <iostream>
using namespace std;

class Point
{
    private:
        int xpos, ypos;
    public:
    Point(int x, int y) :  xpos(x), ypos(y){}
    void Setpos(int x, int y)
    {
        xpos = x;
        ypos = y;
    }
    void showposition() const 
    {
        cout<<"[" <<xpos<<", "<<ypos<<"]"<<endl;
    }
};


template <typename T>
class SmartPtr
{
    private:
        T * posptr;
    public:
        SmartPtr(T * ptr) : posptr(ptr){}
        T& operator*() const {return *posptr;}
        T* operator->() const {return posptr;}
        ~SmartPtr() {delete posptr;}
};

int main(void)
{
    SmartPtr<Point> sptr1(new Point(1,2));
    SmartPtr<Point> sptr2(new Point(3,4));
    sptr1->showposition();
    sptr2->showposition();
    sptr1->Setpos(10,20);
    sptr2->Setpos(30,40);
    sptr1->showposition();
    sptr2->showposition();
    return 0;
}