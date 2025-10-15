#include <iostream>
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
        virtual int getpay() const = 0;
        virtual void showsalaryinfo() const =0;
        virtual ~employee ()
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

namespace risk_level
{
    enum {risk_a = 30, risk_b = 20, risk_c = 10};
}
class foreignsalesworker : public salesworker
{
    private:
        const int risklevel;
    public:
        foreignsalesworker(const char * name, int money, double ratio, int risk) : salesworker(name,money,ratio), risklevel(risk)
        {}
        int getriskpay() const
        {
            return (int)(salesworker::getpay() * (risklevel/100.0));
        }
        int getpay() const
        {
            return salesworker::getpay() + getriskpay();
        }
        void showsalaryinfo() const
        {
            showyourname();
            cout<<"salary: "<<salesworker::getpay()<<endl;
            cout<<"risk pay: " <<getriskpay()<<endl;
            cout<<"sum: "<<getpay()<<endl<<endl;
        }
};

int main(void)
{
    employeehandler handler;

   foreignsalesworker * fseller1 = new foreignsalesworker("hong", 1000,0.1,risk_level::risk_a);
   fseller1->addsalesresult(7000);
   handler.addemployee(fseller1);

   foreignsalesworker * fseller2 = new foreignsalesworker("yoon", 1000, 0.1,risk_level::risk_b);
   fseller2->addsalesresult(7000);
   handler.addemployee(fseller2);

   foreignsalesworker * fseller3 = new foreignsalesworker("lee", 1000,0.1,risk_level::risk_c);
   fseller3->addsalesresult(7000);
   handler.addemployee(fseller3);

   handler.showallsalaryinfo();
   return 0;
}