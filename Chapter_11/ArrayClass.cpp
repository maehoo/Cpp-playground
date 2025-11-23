#include <iostream>
#include <cstdlib>
using namespace std;

class boundcheckintarray
{
    private:
        int * arr;
        int arrlen;
    public:
        boundcheckintarray(int len) : arrlen(len)
        {
            arr = new int[len];
        }
        int& operator[] (int idx)
        {
            if(idx<0 || idx>=arrlen)
            {
                cout<<"Array index out of bound exception" << endl;
                //exit(1);
            }
            return arr[idx];
        }
        ~boundcheckintarray()
        {
            delete[]arr;
        }
};

int main(void)
{
    boundcheckintarray array(5);
    for(int i=0; i<5;i++)
    {
        array[i] = (i+1) * 11;
    }
    for(int i=0;i<7;i++)
        cout<<array[i]<<endl; //array[i] 의 반환값은 int&이기 때문에 문제 X 함수의 반환값이 void라면 오류 발생
    return 0;
}
/*
exit(1)을 생략할경우
11
22
33
44
55
Array index out of bound exception
0
Array index out of bound exception
0

exit(1)을 생략하지 않을경우
11
22
33
44
55
Array index out of bound exception
*/