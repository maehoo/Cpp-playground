#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

char * makestradr(int len)
{
    char *str = (char *) malloc(sizeof(char) * len);
    return str;
}
//함수가 끝나면 str(포인터 변수)은 스택에서 사라지지만,
//힙에 잡힌 블록은 free()하기 전까지 남아있다.

int main(void)
{
    char *str=makestradr(20);
    strcpy(str, "i am so happy~");
    cout<<str<<endl;
    free(str);
    return 0;
}