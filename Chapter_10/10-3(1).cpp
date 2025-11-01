#include <iostream>
using namespace std;

class point
{
    private:
        int xpos, ypos;
    public:
        point(int x=0, int y=0) : xpos(x) , ypos(y) {}
        void showposition() const
        {
            cout<<"["<<xpos<<","<<ypos<<"]"<<endl;
        }
        friend ostream& operator<<(ostream&, const point&);
        friend istream& operator>>(istream&, point&);
};

ostream& operator<<(ostream& os, const point& pos)
{
    os<<"["<<pos.xpos<<", "<<pos.ypos<<"]"<<endl;
    return os;
}

istream& operator>>(istream& is, point& pos)
{
    is>>pos.xpos>>pos.ypos;
    return is;
}


int main(void)
{
    point pos1;
    cout<<"x,y 좌표 순으로 입력: ";
    cin>>pos1;
    cout<<pos1;

    point pos2;
    cout<<"x,y 좌표 순으로 입력: ";
    cin>>pos2;
    cout<<pos2;
    return 0;
}