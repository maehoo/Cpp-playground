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

class police : public gun
{
    private:
        int handcuffs;
    public:
        police(int bnum, int bcuff) : gun(bnum) ,handcuffs(bcuff)
        {}
        void puthandcuff()
        {
            cout<<"SNAP!"<<endl;
            handcuffs--;
        }
};

int main(void)
{
    police pman(5,3);
    pman.shot();
    pman.puthandcuff();
    return 0;
}