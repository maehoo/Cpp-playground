#include <iostream>
#include <cstring>
using namespace std;

class person
{
    private:
        char * name;
    public:
        person(const char * myname)
        {
            name = new char[strlen(myname)+1];
            strcpy(name,myname);
        }
        ~person()
        {
            delete[]name;
            cout<<"del person"<<endl;
        }
        void whatyourname() const
        {
            cout<<"my name is "<<name<<endl;
        }
};

class univstudent : public person
{
    private:
        char * major;
    public:
        univstudent(const char * myname, const char * mymajor):person(myname)
        {
            major = new char[strlen(mymajor) +1];
            strcpy(major,mymajor);
        }
        ~univstudent()
        {
            delete []major;
            cout<<"del univstudent"<<endl;
        }
        void whoareyou() const
        {
            whatyourname();
            cout<<"my major is "<<major<<endl<<endl;
        }
};

int main(void)
{
    univstudent st1("kim", "mathematics");
    st1.whoareyou();
    univstudent st2("hong", "physics");
    st2.whoareyou();
    return 0;
}
/*
my name is kim
my major is mathematics

my name is hong
my major is physics

del univstudent
del person
del univstudent
del person
*/