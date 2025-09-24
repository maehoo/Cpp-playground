#include <iostream>
#include <cstring>
using namespace std;

class Person
{
    private:
        char * name;
        int age;
    public:
        Person(const char *myname, int myage)
        {
            int len = strlen(myname) +1;
            name = new char[len];
            strcpy(name, myname);
            age = myage;
        }

        void showpersoninfo() const
        {
            cout<<"이름: "<<name<< endl;
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
    Person man1("lee dong woo", 29);
    Person man2("jang dong gun",41);

    man1.showpersoninfo();
    man2.showpersoninfo();
    return 0;
}
/*
man1, man2는 main 함수의 지역 변수 (스택에 저장).

main이 끝날 때, 스코프를 벗어나면서 지역변수들이 자동으로 소멸한다.

이때 C++이 소멸자 ~Person()을 자동 호출해 준다.

man2 → man1 순서로 소멸자 호출 (스택은 후입선출이므로 생성의 역순으로 파괴됨).

그래서 "called destructor!" 메시지가 두 번 출력된다.
*/