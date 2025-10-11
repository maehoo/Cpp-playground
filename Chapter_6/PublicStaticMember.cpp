#include <iostream>
using namespace std;

class sosimple
{
    public:
        static int simobjcnt;
        sosimple()
        {
            simobjcnt++;
        }
};

int sosimple::simobjcnt=0;

int main(void)
{
    cout<<sosimple::simobjcnt<<"번째 sosimple 객체"<<endl;
    sosimple sim1;
    sosimple sim2;

    cout<<sosimple::simobjcnt<<"번째 sosimple 객체"<<endl;
    cout<<sim1.simobjcnt<<"번째 sosimple 객체"<<endl;
    cout<<sim2.simobjcnt<<"번째 sosimple 객체"<<endl;//sim2.simobjcnt -> sosimple::simobjcnt와 같은말
    return 0;
}
/*
public: 에 static을 만들게 되면
    cout<<sosimple::simobjcnt<<"번째 sosimple 객체"<<endl;
    cout<<sim1.simobjcnt<<"번째 sosimple 객체"<<endl;
    이 가능하지만
private:에 만들게 되면 불가능하다.
*/