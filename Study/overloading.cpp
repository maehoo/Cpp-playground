#include <iostream>
using namespace std;

void print(int x) 
{
    cout<< " int : "<< x << endl;
}

void print( double x ) 
{
    cout<< "double : " <<x <<endl;  
}


int main(void)
{
    int a=  1;
    char b = 'c';
    double c = 3.2f;

    print(a);
    print(b);//자신과 최대로 근접한 함수를 찾게 된다.

    print(c);
    return 0;
}

/*
함수 오버로딩 과정

1단계:
    자신과 타입이 정확히 일치하는 함수를 찾는다.

2단계:
    char, unsigned , char, short 는 int로 변환된다.
    unsigned short 는 int 의 크기에 따라 int 혹은 unsigned int로 변환된다.
    float 는 double로 변환된다.
    enum 은 int로 변환된다.
    
3단계:
위와 같이 변환해도 일치하는 것이 없다면 아래의 좀더 포괄적인 형변환을 통해 일치하는 함수를 찾는다.
    임의의 숫자 타입은 다른 숫자 타입으로 변환된다. ex) float -> int
    enum도 임의의 숫자 타입으로 변환된다. ex) enum ->double
    0은 포인터 타입이나 숫자 타입으로 변환된 0은 포인터 타입이나 숫자 타입으로 변환된다.
    포인터는 void 포인터로 변환된다.
*/

/*
#include <iostream>

void print(int x) { std::cout << " int : "<< x << std::endl;}
void print(char x) { std::cout<< "double: "<<x<<std::endl;}

int main(void)
{
    int a = 1;
    char b = 'c';
    double c = 3.2f;

    print(a);
    print(b);
    print(c);
    return 0;
}
*/

/*
위 소스를 컴파일하면 오류가 발생한다.
pirnt(c)를 실행하였을 때 1단계에서 일치하는 것이 없다.
2단계에서 마찬가지로 double의 캐스팅에 관련된 내용이 없어 일치하는 것이 없다.
3단계에서는 '임의의 숫자 타입이 임의의 숫자 타입'으로 변환되서 생각되기 때문에 double은 char도 int도 될 수 있다.
따라서 두개 이상의 가능한 일치가 존재하여서 오류가 발생하게 된다.
*/