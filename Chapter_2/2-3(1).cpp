#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

typedef struct __Point
{
    int xpos;
    int ypos;
} Point;

Point& pntadder(const Point &p1, const Point &p2)
{
    Point * p3 = new Point;
    (*p3).xpos = p1.xpos + p2.xpos;
    (*p3).ypos = p1.ypos + p2.ypos;
    return *p3;
}
//p3는 스택에 있는 포인터 변수이고, 힙에 있는 Point 객체의 첫 바이트 주소를 저장한다.

int main(void)
{
    Point p1={1,2};
    Point p2={3,4};
    Point &p4 = pntadder(p1,p2);
    cout << p4.xpos << p4.ypos<<endl;
    delete &p4;
    //delete <포인터>; 이기 때문에 'p4'가 아닌 '&p4'가 와야 한다.
    return 0;
}