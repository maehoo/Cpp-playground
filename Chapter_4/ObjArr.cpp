#include <iostream>
#include <cstring>
using namespace std;

class Person
{
    private:
        char *name;
        int age;
    public:
        Person(char *myname,int myage)
        {
            int len = strlen(myname) +1;
            name = new char[len];
            strcpy(name,myname);
            age= myage;
        }
        Person()
        {
            name = NULL;
            age=0;
            cout<<"called person()"<<endl;
        }
        void setpersoninfo(char * myname, int myage)
        {
            name = myname;
            age = myage;
        }
        void showpersoninfo()const
        {
            cout<<"이름: "<<name<<",";
            cout<<"나이: "<<age<<endl;
        }
        ~Person()
        {
            delete []name;
            cout<<"called destructor!"<<endl;
        }
};

int main(void)
{
    Person parr[3];
    char namestr[100];
    char *strptr;
    int age;
    int len;

    for(int i=0;i<3;i++)
    {
        cout<<"이름: ";
        cin>>namestr;
        cout<<"나이: ";
        cin>>age;
        len=strlen(namestr) +1;
        strptr = new char[len];
        strcpy(strptr,namestr);
        parr[i].setpersoninfo(strptr,age);
    }
    parr[0].showpersoninfo();
    parr[1].showpersoninfo();
    parr[2].showpersoninfo();
    return 0;
    //배열만 사용한다면 첫번째 생성자는 필요없다.
}
/*
class Person {
    int age;
};
Person parr[3];  // (가능) 컴파일러가 자동으로 디폴트 생성자 만들어줌

class Person {
public:
    Person() { age = 0; }
};
Person parr[3];  //  (가능) 명시적 디폴트 생성자 호출됨

class Person {
public:
    Person(int a) { age = a; }
};
Person parr[3];  // (불가능) 에러 인자 없는 생성자가 없음

*/