#include <iostream>
#include <cstring>
using namespace std;

class Girl;

class Boy
{
    private:
        int height;
            friend class Girl;
    public:
    Boy(int len) : height(len)
    {}
    void showyourfriendinfo(Girl &frn);
};

class Girl
{
    private:
        char phnum[20];
    public:
        Girl(const char *num)
        {
            strcpy(phnum,num);
        }
        void showyourfriendinfo(Boy &frn);
        friend class Boy;
};

void Boy::showyourfriendinfo(Girl &frn)
{
    cout<<"her phone number: " << frn.phnum<<endl;
}
void Girl::showyourfriendinfo(Boy&frn)
{
    cout<<"his height: "<<frn.height<<endl;
}

int main(void)
{
    Boy boy(170);
    Girl girl("010-1234-5678");
    boy.showyourfriendinfo(girl);
    girl.showyourfriendinfo(boy);
    return 0;
}