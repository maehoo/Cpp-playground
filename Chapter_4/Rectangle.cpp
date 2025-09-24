#include <iostream>
using namespace std;

class Point
{
    private:
        int x;
        int y;
    public:
        Point(const int &xpos, const int &ypos);
        int GetX() const;
        int GetY() const;
        bool SetX(int xpos);
        bool SetY(int ypos);
};

Point::Point(const int &xpos, const int &ypos)
{
    x = xpos;
    y = ypos;
}

int Point :: GetX() const
{
    return x;
}

int Point :: GetY() const
{
    return y;
}

bool Point::SetX(int xpos)
{
    if(0>xpos || xpos>100)
    {
        cout<<"벗어난 범위의 값 전달"<<endl;
        return false;
    }
    x=xpos;
    return true;
}

bool Point::SetY(int ypos)
{
    if(0>ypos || ypos>100)
    {
        cout<<"벗어난 벗위의 값 전달"<<endl;
        return false;
    }
    y=ypos;
    return true;
}

class Rectangle
{
    private:
        Point upleft;
        Point lowright;
    public:
        Rectangle(const int &x1, const int &y1, const int &x2, const int &y2);
        void showrecinfo() const;
};

Rectangle::Rectangle (const int &x1, const int &y1, const int &x2, const int &y2):upleft(x1,y1),lowright(x2,y2)
{}

void Rectangle::showrecinfo()const
{
    cout<<"좌 상단: "<<'[' <<upleft.GetX()<<",";
    cout<<upleft.GetY()<<']'<<endl;
    cout<<"우 하단: "<<'[' <<lowright.GetX()<<", ";
    cout<<lowright.GetY()<<']'<<endl<<endl;
}

int main(void)
{
    Rectangle rec(1,1,5,5);
    rec.showrecinfo();
    return 0;
}