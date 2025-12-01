#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

int Stoi(const char * str)
{
    int len = strlen(str);
    int num=0;

    for(int i=0;i<len; i++)
    {
        if(str[i]<'0' || str[i]>'9')
            throw str[i];
        num+=(int)(pow((double)10,(len-1)-i) * (str[i]+(7-'7')));
    }
    return num;
}

int main(void)
{
    char str1[100];
    char str2[200];

    while(1)
    {
        cout<<"두 개의 숫자 입력:  ";
        cin>>str1>>str2;

        try
        {
            cout<<str1<<" + "<<str2<<" = "<<Stoi(str1) + Stoi(str2)<<endl;
            break;    
        }
        catch(char ch)
        {
            cout<<"문자 "<<ch<<"가 입력되었습니다."<<endl;
            cout<<"재입력 진행합니다."<<endl<<endl;
        }
    }
    cout<<"프로그램을 종료합니다."<<endl;
    return 0;
}
/*
두 개의 숫자 입력:  123 3A5
123 + 3A5 = 문자 A가 입력되었습니다.
재입력 진행합니다.

두 개의 숫자 입력:  28f 211
28f + 211 = 문자 f가 입력되었습니다.
재입력 진행합니다.

두 개의 숫자 입력:  231 891
231 + 891 = 1122
프로그램을 종료합니다.
*/