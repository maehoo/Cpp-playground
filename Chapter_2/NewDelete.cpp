#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

char * makestradr(int len)
{
    //char * str = (char*)malloc(sizeof(char)*len);
    char * str = new char[len];
    return str;
}

int main(void)
{
    char *str = makestradr(20);
    strcpy(str, "i am so happy~");
    cout << str<<endl;
    //free(str);
    delete []str;
    return 0;
}