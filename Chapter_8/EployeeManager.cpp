#include <iostream>
#include <cstring>
using namespace std;


class employee
{
    private:
        char name[100];
    public:
        employee(const char * name)
        {
            strcpy(this->name,name);
        }
        void showyourname() const
        {
            cout<<"name: "<<name<<endl;
        }
        virtual int getpay() const
        {
            return 0;
        }
        virtual void showsalaryinfo() const
        {}
};

class permanentworker : public employee
{
    private:
        int salary;
    public:
        permanentworker(const char * name, int money) : employee(name), salary(money)
        {}
        int getpay() const
        {
            return salary;
        }
        void showsalaryinfo() const
        {
            showyourname();
            cout<<"salary: "<<getpay()<<endl<<endl;
        }
};
class temporaryworker : public employee
{
    private:
        int worktime;
        int payperhour;
    public:
        temporaryworker(const char * name, int pay): employee(name), worktime(0) , payperhour(pay)
        {}
        void addworktime(int time)
        {
            worktime+= time;
        }
        int getpay() const
        {
            return worktime * payperhour;
        }
        void showsalaryinfo() const
        {
            showyourname();
            cout<<"salary: "<<getpay()<<endl<<endl;
        }
};
class salesworker : public permanentworker
{
    private:
        int salesresult;
        double bonusratio;
    public:
        salesworker(const char * name, int money, double ratio) : permanentworker(name,money), salesresult(0), bonusratio(ratio)
        {}
        void addsalesresult(int value)
        {
            salesresult+=value;
        }
        int getpay() const
        {
            return permanentworker::getpay() + (int)(salesresult*bonusratio);
        }
        void showsalaryinfo() const
        {
            showyourname();
            cout<<"salary: "<<getpay()<<endl<<endl;
        }
        
};

class employeehandler
{
    private:
        employee * emplist[50];
        int empnum;
    public:
        employeehandler() : empnum(0)
        {}
        void addemployee(employee* emp)
        {
            emplist[empnum++]=emp;
        }
        void showallsalaryinfo() const
        {
            
            for(int i = 0; i<empnum;i++)
                emplist[i] -> showsalaryinfo();
        //virtual 가상 함수를 이용하여 문제를 해결함.
        }
        void showtotalsalary() const
        {
            int sum=0;
            
            for(int i = 0;i<empnum;i++)
                sum+=emplist[i] ->getpay();
            
            cout<<"salary sum: "<<sum<<endl;
        }
        ~employeehandler()
        {
            for(int i=0;i<empnum;i++)
                delete emplist[i];
        }
};

int main(void)
{
    employeehandler handler;

    handler.addemployee(new permanentworker("KIM",1000));
    handler.addemployee(new permanentworker("LEE",1500));
    handler.addemployee(new permanentworker("JUN",2000));

    temporaryworker * alba = new temporaryworker("jung" , 700);
    alba->addworktime(5);
    handler.addemployee(alba);

    salesworker * seller = new salesworker("hong", 1000, 0.1);
    seller->addsalesresult(7000);
    handler.addemployee(seller);

    handler.showallsalaryinfo();

    handler.showtotalsalary();
    return 0;
}