#include <iostream>
using namespace std;

class point
{
    private:
        int xpos, ypos;
    public:
        point(int x=0,int y=0) : xpos(x) , ypos(y) {}
        void showposition()
        {
            cout<<"["<<xpos<<", "<<ypos<<"]"<<endl;
        }
        friend bool operator==(const point &pos1, const point &pos2);
        friend bool operator!=(const point &pos1, const point &pos2);
};

bool operator==(const point &pos1, const point &pos2)
{
    if((pos1.xpos ==pos2.xpos) && (pos1.ypos == pos2.ypos))
        return true;
    else
        return false;
}

bool operator!=(const point &pos1, const point &pos2)
{
    return !(pos1 == pos2);
}


int main(void)
{
    point pos1(3,4);
    point pos2(10,20);

    if(pos1 == pos2)
        cout<<"equal"<<endl;
    else
        cout<<"not equal"<<endl;

    if(pos1 != pos2)
        cout<<"not equal"<<endl;
    else
        cout<<"equal"<<endl;
    return 0;
}