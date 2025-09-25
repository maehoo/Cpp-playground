#include <iostream>
#include <cstring>
using namespace std;

class Person
{
    private:
        char *name;
        int age;
    public:
        Person(const char *myname, int myage)
        {
            int len= strlen(myname) +1;
            name = new char[len];
            strcpy(name, myname);
            age = myage;
        }

        void showpersoninfo() const
        {
            cout<<"이름: "<<name<<endl;
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
    Person man1("lee",29);
    Person man2 = man1;
    man1.showpersoninfo();
    man2.showpersoninfo();
    return 0;
}
/*
Person::Person(const Person& other)            // 복사 생성자
  : name(other.name), age(other.age) {}        // ← 포인터값만 ‘복사’ (얕은 복사)

Person& Person::operator=(const Person& other) // 복사 대입
{
  name = other.name;                           // ← 이것도 얕은 복사
  age  = other.age;
  return *this;
}
디폴트 생성자가 이렇게 생성되기 때문에 man2의 name이 man1의 name의 주소를 가리키게 되면서 man2의 소멸자가 실행되는 과정에서
delete []name;이 실행되기 때문에 name의 주소는 이미 해제 된 상태에서 man1의 소멸자도 실행되기 때문에 에러가 발생한다.
*/
