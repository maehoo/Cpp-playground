#include <iostream>
#include <cstring>
using namespace std;

class myfriendinfo
{
    private:
        char * name;
        int age;
    public:
        myfriendinfo(const char * myname, int myage): age(myage)
        {
            name = new char[strlen(myname) +1];
            strcpy(name,myname);
        }
        void showmyfriendinfo()
        {
            cout<<"이름: "<<name<<endl;
            cout<<"나이: "<<age<<endl;
        }
        ~myfriendinfo()
        {
            delete []name;
            cout<<"delete myfriendinfo"<<endl;
        }
};

class myfrienddetailinfo : public myfriendinfo
{
    private:
        char * addr;
        char * phone;
    public:
        myfrienddetailinfo(const char * myname, int myage, const char * addr, const char * myphone): myfriendinfo(myname,myage)
        {
            this->addr = new char[strlen(addr) +1];
            phone = new char[strlen(myphone) +1];
            strcpy(this->addr,addr);
            strcpy(phone, myphone);
        }
        void showmyfrienddetailinfo()
        {
            showmyfriendinfo();
            cout<<"주소: "<<addr<<endl;
            cout<<"전화: "<<phone<<endl<<endl;
        }
        ~myfrienddetailinfo()
        {
            delete[] addr;
            delete[] phone;
            cout<<"delete myfrienddetailinfo"<<endl;
        }
};

int main(void)
{
    myfrienddetailinfo a("hong",23,"제주도","010-1111-1111");
    a.showmyfrienddetailinfo();
    return 0;
}