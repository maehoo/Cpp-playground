#include <iostream>
using namespace std;

template <typename T, int len>
class SimpleArray
{
    private:
        T arr[len];
    public:
        T& operator[] (int idx) {return arr[idx];}
        SimpleArray<T,len>& operator=(const SimpleArray<T,len>& ref)
        {
            for(int i=0;i<len;i++)
                arr[i] = ref.arr[i];
            return *this;
        }
};

int main(void)
{
    SimpleArray<int,5> i5arr1;
    for(int i=0; i<5;i++)
        i5arr1[i] = i*10;

    SimpleArray<int,5> i5arr2;
    i5arr2 = i5arr1;
    for(int i=0; i<5;i++)
        cout<<i5arr2[i]<<", ";
    cout<<endl;

    SimpleArray<int,7> i7arr1;
    for(int i=0;i<7;i++)
        i7arr1[i] = i*10;

    SimpleArray<int,7> i7arr2;
    i7arr2=i7arr1;
    for(int i=0; i<7;i++)
        cout<<i7arr2[i] <<", ";
    cout<<endl;
    return 0;    
}
/*
SimpleArray<int,5>와 SimpleArray<int,7>은 서로 다른 형(type)이다.
그러므로 i5arr1 = i7arr1은 컴파일 에러가 발생한다.
생성자를 이용하면 길이가 같은 배열에 대해서만 대입을 허용하기 위해서 추가적인 코드의 삽입이 불가피한데
템플릿 매개변수를 이용하면 이를 쉽게 해결할 수 있다.
*/