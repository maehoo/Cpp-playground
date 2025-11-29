#include <iostream>
using namespace std;

template <typename T>
class Point
{
    private:
        T xpos, ypos;
    public:
        Point(T x=0, T y=0);
        void showposition() const;
};

template <typename A>
Point<A>::Point(A x, A y) : xpos(x), ypos(y){}

template <typename B>
void Point<B>::showposition() const
{
    cout<<"["<<xpos<<", "<<ypos<<"]"<<endl;
}

int main(void)
{
    Point<int> pos1(3,4);
    pos1.showposition();

    Point<double> pos2(2.4,3.6);
    pos2.showposition();

    Point<char> pos3('P','F');
    pos3.showposition();
    return 0;   
}
