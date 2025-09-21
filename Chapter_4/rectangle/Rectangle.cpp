#include <iostream>
#include "Rectangle.h"
using namespace std;

bool Rectangle::initmembers(const Point &ul, const Point &lr)
{
    if(ul.GetX()>lr.GetX() || ul.GetY()>lr.GetY())
    {
        cout<<"잘못된 위치정보 전달"<<endl;
        return false;
    }
    upleft=ul;
    lowright=lr;
    return true;
}

void Rectangle::showrecinfo() const
{
    cout<<"좌 상단: "<<'[' <<upleft.GetX()<<", ";
    cout<<upleft.GetY()<<']'<<endl;
    cout<<"우 하단: "<<'[' <<lowright.GetX()<<", ";
    cout<<lowright.GetY()<<']'<<endl;
}