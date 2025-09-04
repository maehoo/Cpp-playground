#include <iostream>
/*
int simplefunc(int a=10)
{
    return a+1;
}
int simplefunc(void)
{
    return 10;
}
*/


//문제점은 simplefunc()로 함수를 호출 할 경우 위의 함수도 부를 수 있고 밑의 함수도 부를 수 있어서
//두 함수 조건을 모두 만족시키기 때문에 컴파일 에러가 발생할 것이다.