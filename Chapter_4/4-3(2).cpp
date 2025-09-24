#include <iostream>
#include <cstring>
using namespace std;

namespace comp_pos
{
enum
{
    clerk,
    senior,
    assist,
    manager
};
}


class namecard
{
    private:
        char *name;
        char *company;
        char *phonenumber;
        int a;
    public:
        namecard(const char *myname, const char *mycompany,const char * myphonenumber,int A):a(A)
        {
            int b = strlen(myname)+1;
            name = new char[b];
            strcpy(name,myname);

            b = strlen(mycompany) +1;
            company = new char[b];
            strcpy(company,mycompany);

            b = strlen(myphonenumber) +1;
            phonenumber = new char[b];
            strcpy(phonenumber,myphonenumber);

        }
        void shownamecardinfo()
        {
            cout<<"이름: "<<name<<endl;
            cout<<"회사: "<<company<<endl;
            cout<<"전화번호: "<<phonenumber<<endl;
            switch (a)
            {
                case 0:
                cout<< "직급: 사원"<<endl;
                break;
                case 1:
                cout<< "직급: 주임" <<endl;
                break;
                case 2:
                cout<<"직급: 대리" <<endl;
                break;
                case 3:
                cout<<"직급: 과장"<<endl;
                break;
            }
        }
        ~namecard()
        {
            delete [] name;
            delete []company;
            delete []phonenumber;
        }
};
int main(void)
{
    namecard manclerk("lee","abceng","010-1111-2222",comp_pos::clerk);
    namecard mansenior("hong" , "orangeeng" , "010-3333-4444",comp_pos::senior);
    namecard manassist("kim","sogoodcomp","010-5555-6666",comp_pos::assist);
    manclerk.shownamecardinfo();
    mansenior.shownamecardinfo();
    manassist.shownamecardinfo();
    return 0;
}