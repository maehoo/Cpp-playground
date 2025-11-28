#include <iostream>
using namespace std;

class Sortrule
{
    public:
        virtual bool operator()(int num1, int num2) const =0;
};

class AscendingSort : public Sortrule
{
    public:
        bool operator()(int num1, int num2) const
        {
            if(num1> num2)
                return true;
            else
                return false;
        }
};

class DescendingSort : public Sortrule
{
    public:
        bool operator()(int num1, int num2) const
        {
            if(num1<num2)
                return true;
            else
                return false;
        }
};

class DataStorage
{
    private:
        int * arr;
        int idx;
        const int Maxlen;
    public:
        DataStorage(int arrlen) : idx(0), Maxlen(arrlen)
        {
            arr = new int[Maxlen];
        }
        void AddData(int num)
        {
            if(Maxlen<=idx)
            {
                cout<<"더 이상 저장이 불가능합니다."<<endl;
                return;
            }
            arr[idx++]=num;
        }
        void showalldata()
        {
            for(int i =0; i<idx;i++)
                cout<<arr[i]<<' ';
            cout<<endl;
        }
        void SortData(const Sortrule& functor)
        {
            for(int i=0;i<(idx-1);i++)
            {
                for(int j=0; j<(idx-1)-i;j++)
                {
                    if(functor(arr[j],arr[j+1]))
                    {
                        int temp=arr[j];
                        arr[j] = arr[j+1];
                        arr[j+1]= temp;
                    }
                }
            }
        }
};

int main(void)
{
    DataStorage storage(5);
    storage.AddData(40);
    storage.AddData(30);
    storage.AddData(50);
    storage.AddData(20);
    storage.AddData(10);

    storage.SortData(AscendingSort());
    storage.showalldata();

    storage.SortData(DescendingSort());
    storage.showalldata();
    return 0;
    //매개변수형이 Sortrule의 참조형이므로, Sortrule 클래스를 상속하는 Ascendingsort 클래스와 Descendingsort 클래스의 객체는 인자로 전달 가능하다.
    //그리고 Sortrule의 operator() 함수는 virtual로 선언되었으니, 유도 클래스의 operator() 함수가 대신 호출된다.
}