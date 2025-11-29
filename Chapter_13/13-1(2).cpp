#include <iostream>
using namespace std;

template<typename T>
T SumArray(T* arr,int len)
{
    T sum=0;
    for(int i=0;i<len;i++)
        sum+=*(arr+i); 
    /*
    복습
    처음: *(arr+(i*sizeof(T)))라고 생각한 이유 -> arr의 자료형에 따라 sizeof(T) 만큼 i번 뛰어넘어라 라고 생각했다.
    하지만 arr의 자료형에 따라 arr+i만해도 arr의 자료형만큼 i바이트 뛰어넘는다 ex) int형일때 arr+1 (4바이트 이동) arr+2 (8바이트 이동) double형일때 arr+1 (8바이트 이동) arr+2 (16바이트 이동)
    */
    return sum;
}

int main(void)
{
    int a[3] = {1,2,3};
    double b[3] = {1.2,3.4,5.6};
    cout<<SumArray<int>(a,3)<<endl;
    cout<<SumArray<double>(b,3)<<endl;
    return 0;
}