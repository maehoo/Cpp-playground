#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    string str1= "i like ";
    string str2= "string class";
    string str3 = str1+str2;

    cout<<str1<<endl;
    cout<<str2<<endl;
    cout<<str3<<endl;

    str1+=str2;
    if(str1==str3)
        cout<<"동일 문자열!"<<endl;
    else
        cout<<"동일하지  않은 문자열!"<<endl;


    string str4;
    cout<<"문자열 입력: ";
    cin>>str4;
    cout<<"입력한 문자열: "<<str4<<endl;
    return 0;
}
/*
i like
string class
i like string class
동일 문자열!
문자열 입력: hi hello
입력한 문자열: hi
*/
//스페이스바 또는 개행을 기준으로 입력이 끝난다.