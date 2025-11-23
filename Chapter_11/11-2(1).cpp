#include <iostream>
#include <cstdlib>
using namespace std;

class point
{
    private:
        int xpos, ypos;
    public:
        point(int x=0, int y=0) : xpos(x) , ypos(y) {}
        friend ostream& operator<<(ostream &os, const point & pos);
        friend ostream& operator<<(ostream &os, const point * pos);
        /*
        const point * &pos로 매개변수를 설정하게 되면 안되는 이유
        참조자로 선언을 하려면 매개변수로 보내는 인자까지도 const point * 형이어야 하는데 받는 매개변수는 point * 형이기 때문에 서로 자료형이 맞지 않는다.
        그러므로 컴파일러는 const void *로 변환 시켜 잘못된 결과값이 나오게 된다.
        */
};

ostream& operator<<(ostream& os, const point *pos)
{
    os<<"["<<(*pos).xpos<<", "<<(*pos).ypos<<"]"<<endl;
    return os;
}
ostream& operator<<(ostream& os, const point & pos)
{
    os<<"["<<pos.xpos<<", "<<pos.ypos<<"]"<<endl;
    return os;
}

typedef point * POINT_PTR;

class boundcheckpointptrarray
{
    private:
        POINT_PTR * arr;
        int arrlen;

        boundcheckpointptrarray(const boundcheckpointptrarray& arr) {}
        boundcheckpointptrarray& operator= (const boundcheckpointptrarray& arr) {return *this;}

    public:
        boundcheckpointptrarray(int len ) : arrlen(len)
        {
            arr= new POINT_PTR[len];
        }
        POINT_PTR& operator[] (int idx)
        {
            if(idx<0 || idx>=arrlen)
            {
                cout<<"array index out of bound exception"<<endl;
                exit(1);
            }
            return arr[idx];
        }

        POINT_PTR operator[] (int idx) const
        {
            if(idx<0 || idx>= arrlen)
            {
                cout<<"Array index out of bound exception"<<endl;
                exit(1);
            }
            return arr[idx];
        }
        int getarrlen() const { return arrlen;}
        ~boundcheckpointptrarray() { delete []arr;}
};

int main(void)
{
    boundcheckpointptrarray arr(3);
    arr[0] = new point(3,4);
    arr[1] = new point(5,6);
    arr[2] = new point(7,8);

    for(int i = 0; i<arr.getarrlen();i++)
        cout<<arr[i];
    delete arr[0];
    delete arr[1];
    delete arr[2];
    return 0;
}