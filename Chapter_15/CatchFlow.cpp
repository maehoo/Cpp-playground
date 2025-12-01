#include <iostream>
using namespace std;

class AAA
{
    public:
        void showyou() {cout<<"AAA exception!"<<endl;}
};

class BBB : public AAA
{
    public:
        void showyou() {cout<<"BBB exception!"<<endl;}
};

class CCC : public BBB
{
    public:
        void showyou() {cout<<"CCC exception!"<<endl;}
};

void ExceptionGenerator(int expn)
{
    if(expn == 1)
        throw AAA();
    else if(expn==2)
        throw BBB();
    else
        throw CCC();
}


int main(void)
{
    try
    {
        ExceptionGenerator(3);
        ExceptionGenerator(2);
        ExceptionGenerator(1);
    }
    catch(CCC& expn)
    {
        cout<<"catch(CCC& expn)"<<endl;
        expn.showyou();
    } 
    catch(BBB& expn)
    {
        cout<<"catch(BBB& expn)"<<endl;
        expn.showyou();
    }
    catch(AAA& expn)
    {
        cout<<"catch(AAA& expn)"<<endl;
        expn.showyou();
    }


}