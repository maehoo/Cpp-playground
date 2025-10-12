#include <iostream>
#include <cstring>
using namespace std;

class gun
{
    private:
        int bullet;
    public:
        gun(int bnum) : bullet(bnum)
        {}
        void shot()
        {
            cout<<"BBANG!"<<endl;
            bullet--;
        }
};

class police
{
    private:
        int handcuffs;
        gun * pistol;
    public:
        police(int bnum, int bcuff)
        : handcuffs(bcuff)
        {
            if(bnum > 0)
                pistol = new gun(bnum);
            else
                pistol = NULL;
        }
        void shot()
        {
            if(pistol == NULL)
                cout<<"hut BBANG!"<<endl;
            else
                pistol->shot();
        }
        ~police()
        {
            if(pistol!=NULL)
                delete pistol;
        }
};

int main(void)
{
    police pman1(5,3);
    pman1.shot();
    pman1.puthandcuff();

    police pman2(0,3);
    pman2.shot();
    pman2.puthandcuff();
    return 0;
}