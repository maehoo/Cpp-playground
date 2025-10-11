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