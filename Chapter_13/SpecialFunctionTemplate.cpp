#include <iostream>
#include <cstring>
using namespace std;

template <typename T>
T Max(T a, T b)
{
    return a>b ? a : b;
}

template<>
char * Max(char * a, char * b)
{
    cout<<"char * max<char*>(char * a, char * b)"<<endl;
    return strlen(a) > strlen(b) ? a : b;
}

template<>
const char * Max(const char * a, const char *b)
{
    cout<<"const char * max<const char *>(const char *a, const char *b)"<<endl;
    return strcmp(a,b) > 0? a : b;
}
//char *형 const char * 형 Max함수를 따로 만들어서 매개변수가 저 자료형일 경우에는 이 함수들을 부르라는 형태를 만들 수 있는데 이것을 함수 템플릿 특수화라고 부른다.
int main(void)
{
    cout<< Max(11,15)<<endl;
    cout<<Max('T','Q') << endl;
    cout<<Max(3.5,7.5)<<endl;
    cout<<Max("simple","best")<<endl;

    char str1[]="simple";
    char str2[] = "best";
    cout<<Max(str1,str2) <<endl;
    return 0;
}
/*
char str[] = "simple";
->  동적할당 X.
    컴파일 시에 크기 바이트 7바이트로 정해짐.
    스택에 저장되고, 끝나면 자동으로 사라짐.
char * p = new char[7];
->  동적할당 O.
    힙에서 메모리 빌려옴.
    직접 메모리를 해제해야함.
*/