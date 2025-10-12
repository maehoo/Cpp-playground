#include <iostream>
#include <cstring>
using namespace std;

class computer
{
    private:
        char owner[50];
    public:
        computer(const char *name)
        {
            strcpy(owner,name);
        }
        void calculate()
        {
            cout<<"요청 내용을 계산합니다."<<endl;
        }
};

class notebookcomp: public computer
{
    private:
        int battery;
    public:
        notebookcomp(const char * name, int initchag)
            : computer(name),battery(initchag)
            {}
        void charging(){battery+=5;}
        void usebattery(){battery -=1;}
        void movingcal()
        {
            if(getbatteryinfo()<1)
            {
                cout<<"충전이 필요합니다."<<endl;
                return;
            }
            cout<<"이동하면서 ";
            calculate();
            usebattery();
        }
        int getbatteryinfo() {return battery;}
};

class tabletnotebook : public notebookcomp
{
    private:
        char regstpenmodel[50];
    public:
        tabletnotebook(const char*name, int initchag, const char *pen)
        :notebookcomp(name,initchag)
        {
            strcpy(regstpenmodel,pen);
        }
        void write(const char * peninfo)
        {
            if(getbatteryinfo()<1)
            {
                cout<<"충전이 필요합니다."<<endl;
                return;
            }
            if(strcmp(regstpenmodel,peninfo)!=0)
            {
                cout<<"등록된 펜이 아닙니다.";
                return;
            }
            cout<<"필기 내용을 처리합니다."<<endl;
            usebattery();
        }
};

int main(void)
{
    notebookcomp nc("이수종",5);
    tabletnotebook tn("ㅈㅅㅇ",5,"ise-231-232");
    nc.movingcal();
    tn.write("ise-231-232");
    return 0;
}