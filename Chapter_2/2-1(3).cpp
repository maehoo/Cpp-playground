#include <iostream>
using namespace std;

void swappointer(int *(&ref1) , int *(&ref2))
{
    int * temp =ref2;
    ref2 = ref1;
    ref1 = temp;
}
int main(void)
{
    int num1=5;
    int *ptr1 = &num1;
    int num2 = 10;
    int *ptr2 = &num2;

    swappointer(ptr1, ptr2);
    cout << *ptr1<<endl;
    cout <<*ptr2<<endl;
    return 0;
}