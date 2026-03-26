#include <iostream>
using namespace std;

typedef struct Animal
{
    char name[30];
    int age;

    int health;
    int food;
    int clean;
}Animal;


int main(void)
{
    int arr[3] = {1,2,3};
    int (&ref)[3] = arr;
    //int& ref[3] 의 경우에는 참조자를 3개 가지는 배열이므로 오류가 발생한다.
    //애초에 참조자의 배열은 금지되어 있다.
    
    /*
    이해:
    C++에서 [](배열 연산자) 는 &(참조 연산자) 보다 우선순위가 높다.
    int& ref[3] 라고 쓰면, 컴파일러는 ref[3]를 먼저보고 배열이라고 판단함
    */

    ref[0] = 2;
    ref[1] = 3;
    ref[2] = 1;

    Animal *list[10];
    /*
    현재 list의 배열에는 포인터가 들어가있고 쓰레기값이 들어가있다. 즉 
    포인터이기 때문에 배열당 8바이트만을 사용하여 총 80바이트가 사용되고있다.
    */
    for(int i =0; i<10;i++)
        delete[] list[i];

    Animal list[10];
    /*
    현재 listd의 배열에는 Animal구조체를 10개 스택에 쓰레기값으로 저장하고있다.
    그러므로 구조체가 만약 40바이트라면 현재 400바이트를 차지하고 있는중이다.
    */
    cout<< arr[0] << arr[1] <<  arr[2] <<endl;
    return 0;
}