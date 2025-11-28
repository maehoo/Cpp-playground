#include <iostream>
using namespace std;

class boundcheckintarray
{
    private:
        int * arr;
        int arrlen;
        boundcheckintarray(const boundcheckintarray& arr){}
        boundcheckintarray& operator=(const boundcheckintarray& arr){return *this;}
    public:
        boundcheckintarray(int len) : arrlen(len)
        {
            arr = new int[len];
        }
        int& operator[] (int idx)
        {
            if(idx<0 || idx>=arrlen)
            {
                cout<<"Array index out of bound exception"<<endl;
                exit(1);
            }
            return arr[idx];
        }
        int operator[] (int idx) const
        {
            if(idx<0 || idx>= arrlen)
            {
                cout<<"Array index out of bound exception"<<endl;
                exit(1);
            }
            return arr[idx];
        }
        int getarrlen() const
        {
            return arrlen;
        }
        ~boundcheckintarray()
        {
            delete []arr;
        }
};

typedef boundcheckintarray* boundcheckintarrayptr;

class boundcheck2dintarray
{
    private:
        boundcheckintarray ** arr;
        int arrlen;
        boundcheck2dintarray(const boundcheck2dintarray& arr){}
        boundcheck2dintarray& operator=(const boundcheck2dintarray& arr) { return *this;}
    public:
        boundcheck2dintarray(int col, int row) : arrlen(col)
        {
            arr =new boundcheckintarrayptr[col];
            for(int i=0;i<col;i++)
                arr[i] = new boundcheckintarray(row);
        }
        boundcheckintarray& operator[] (int idx)
        {
            if(idx<0 || idx>=arrlen)
            {
                cout<<"Array index out of bound exception"<<endl;
                exit(1);
            }
            return *(arr[idx]);
        }
        ~boundcheck2dintarray()
        {
            for(int i=0; i<arrlen;i++)
            {
                delete arr[i];
            }
            delete []arr;
        }
};

int main(void)
{
    boundcheck2dintarray arr2d(3,4);

    for(int n=0;n<3;n++)
    {
        for(int m=0;m<4;m++)
            arr2d[n][m] = n+m;
    }
    for(int n=0; n<3; n++)
    {
        for(int m=0;m<4;m++)
            cout<<arr2d[n][m] <<' ';
        cout<<endl;
    }
    return 0;
}
