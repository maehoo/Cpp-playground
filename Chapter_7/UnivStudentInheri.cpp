#include <iostream>
#include <cstring>
using namespace std;

class person
{
    private:
        int age;
        char name[50];
    public:
        person(int myage,const char *myname) : age(myage)
        {
            strcpy(name,myname);
        }
        void whatyourname() const
        {
            cout<<"my name is "<<name<<endl;
        }
        void howoldareyou() const
        {
            cout<<"I'm "<<age<<" years old" << endl;
        }
};

class univstudent : public person
{
    private:
        char major[50];
    public:
        univstudent(const char * myname, int myage, const char * mymajor):person(myage,myname)
        {
            strcpy(major, mymajor);
        }
        void whoareyou() const
        {
            whatyourname();
            howoldareyou();
            cout<<"my major is "<<major<<endl<<endl;
        }
};

int main(void)
{
    univstudent ustd1("lee",22,"computer eng.");
    ustd1.whoareyou();

    univstudent ustd2("yoon",21,"electronic eng.");
    ustd2.whoareyou();
    return 0;
}
//상속이 이뤄진 person의 private변수에 직접 접근이 불가능하기 때문에 person 클래스에 정의된 public 함수를
//통해서 간접적으로 접근을 해야 한다. '정보의 은닉'은 하나의 객체 내에서도 진행이 된다.