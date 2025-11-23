#include <iostream>
#include <cstdlib>
using namespace std;

class boundcheckintarray
{
    private:
        int * arr;
        int arrlen;
        boundcheckintarray(const boundcheckintarray& arr) {}
        boundcheckintarray& operator=(const boundcheckintarray& arr){return *this;}
    public:
        boundcheckintarray(int len) : arrlen(len)
        {
            arr= new int[len];
        }
        int& operator[] (int idx)
        {
            if(idx<0 || idx>=arrlen)
            {
                cout<<"array index out of bound exception" << endl;
                exit(1);
            }
            return arr[idx];
        }
        int& operator[] (int idx) const
        {
            if(idx <0 || idx>=arrlen)
            {
                cout<<"Array index out of bound exception" << endl;
                exit(1);
            }
            return arr[idx];
        }
        int getarrlen() const{return arrlen;}
        ~boundcheckintarray() {delete [] arr;}
};

void showalldata(const boundcheckintarray& ref)
{
    int len= ref.getarrlen();
    for(int idx = 0; idx<len; idx ++)
        cout<<ref[idx]<<endl; // 매개변수가 const 이기 때문에 ref[idx] 과정에서 함수가 const로 선언되어 있지 않으면 오류가 발생한다.
    //그러므로 const를 이용하여 오버로딩을 만들어 해결한다.
}

int main(void)
{
    boundcheckintarray arr(5);
    for(int i =0; i<5; i++)
        arr[i] = (i+1) * 11;

    showalldata(arr);
    return 0;
}