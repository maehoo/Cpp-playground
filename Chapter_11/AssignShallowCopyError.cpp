#include <iostream>
#include <cstring>
using namespace std;

class person
{
    private:
        char * name;
        int age;
    public:
        person(const char * myname, int myage)
        {
            int len = strlen(myname) + 1;
            name = new char[len];
            strcpy(name,myname);
            age=myage;
        }
        void showpersoninfo() const
        {
            cout<<"이름: "<<name<<endl;
            cout<<"나이: "<<age<<endl;
        }
        ~person()
        {
            delete []name;
            cout<<"called destructor!"<<endl;
        }
        person& operator=(const person& pos)
        {
            delete []name;
            int len = strlen(pos.name) +1;
            name =  new char[len];
            strcpy(name,pos.name);
            age=pos.age;
            return *this;
        }
};
//대입연산자 함수를 만들지 않고 디폴트 대입연산자만으로 실행을 하게 되면 문자열에서 얕은 복사가 일어나면서 메모리 누수가 일어난다. 그러므로 대입 연산자 오버로딩 과정에서
//문자열을 복사하고 싶다면 직접 코딩을 해야한다.

int main(void)
{
    person man1("lee dong woo",29);
    person man2("yoon ji yul", 22);
    man2=man1;

    man1.showpersoninfo();
    man2.showpersoninfo();
    return 0;
}