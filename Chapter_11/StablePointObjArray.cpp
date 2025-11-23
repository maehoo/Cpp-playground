#include <iostream>
#include <cstdlib>
using namespace std;

class point
{
    private:
        int xpos, ypos;
    public:
        point(int x=0, int y=0) : xpos(x), ypos(y) {}
        friend ostream& operator<<(ostream& os, const point& pos);
};

ostream& operator<<(ostream& os, const point& pos)
{
    os<<"[" << pos.xpos<<", "<<pos.ypos<<"]"<<endl;
    return os;
}

class boundcheckintarray
{
    private:
        point * arr;
        int arrlen;

        boundcheckintarray(const boundcheckintarray& arr) {} //boundcheckintarray cpy1(arr);   복사 생성자 방지
        boundcheckintarray& operator=(const boundcheckintarray& arr){return *this;} // arr2 = arr1;  대입연산자 방지
        //기본적으로 얕은복사가 발생하기 때문에 소멸 과정에서 메모리 누수를 방지하기 위해 복사 생성자와 대입연산자를 방지한다.
    public:
        boundcheckintarray(int len) : arrlen(len)
        {
            arr= new point[len];
        }
        point& operator[] (int idx) //1번 operator[]
        {
            if(idx<0 || idx>=arrlen)
            {
                cout<<"Array index out of bound exception" << endl;
                exit(1);
            }
            return arr[idx];
        }
        point operator[] (int idx) const //2번 operator[]
        {
            if(idx<0 || idx>=arrlen)
            {
                cout<<"array index out of bound exception" << endl;
                exit(1);
            }
            return arr[idx];
        }
        int getarrlen() const{return arrlen;}
        ~boundcheckintarray() {delete [] arr;}
};

int main(void)
{
    boundcheckintarray arr(3);
    arr[0] = point(3,4);
    arr[1] = point(5,6);
    arr[2] = point(7,8);

    for(int i =0; i<arr.getarrlen() +1; i++)
        cout<<arr[i];

    return 0;
}
/*
[3, 4]
[5, 6]
[7, 8]
Array index out of bound exception
//1번 operator[] 호출
*/