#include <iostream>
#include <cstring>
using namespace std;

class gun
{
    private:
        int bullet;
    public:
        gun(int bnum) : bullet(bnum) {}
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
        police(int bnum, int bcuff) : handcuffs(bcuff)
        {
            if(bnum>0)
                pistol = new gun(bnum);
            else
                pistol = NULL;
        }
        police(const police& ref) : handcuffs(ref.handcuffs)
        {
            if(ref.pistol != NULL)
                pistol  = new gun(*(ref.pistol)); // *(ref.pistol)을 보내서 gun 클래스의 gun(const gun&)을 부르는 것이다.
            else   
                pistol = NULL;
        }
        police& operator=(const police& ref)
        {
            cout<<"대입"<<endl;
            if(pistol!= NULL)
                delete pistol;

            if(ref.pistol!=NULL)
                pistol = new gun(*(ref.pistol));
            else
                pistol = NULL;

            handcuffs= ref.handcuffs;
            return *this;
        }

        void puthandcuff()
        {
            cout<<"snap!" <<endl;
            handcuffs--;
        }

        void shot()
        {
            if(pistol == NULL)
                cout<<"gut bbang!"<<endl;
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
    police pman2= pman1;
    pman2.puthandcuff();
    pman2.shot();

    police pman3(2,4);
    pman3 = pman1;
    pman3.puthandcuff();
    pman3.shot();
    return 0;
}
