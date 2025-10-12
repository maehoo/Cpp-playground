#include <iostream>
using namespace std;

class person
{
    public:
        void sleep(){cout<<"sleep"<<endl;}
};

class student : public person
{
    public:
        void study() {cout<<"study"<<endl;}
};

class parttimestudent : public student
{
    public:
        void work() {cout<<"work"<<endl;}
};

int main(void)
{
    person * ptr1 = new  student();
    person * ptr2 = new parttimestudent();
    student * ptr3 = new parttimestudent();
    ptr1 -> sleep();
    ptr2-> sleep();
    ptr3-> study();
    delete ptr1; delete ptr2; delete ptr3;
    return 0;
}