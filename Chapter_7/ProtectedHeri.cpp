#include <iostream>
using namespace std;

class base
{
    private:
        int num1;
    protected:
        int num2;
    public:
        int num3;

        base() : num1(1),num2(2),num3(3){}
        void show()
        {
            cout<<num1<<num2<<num3<<endl;
        }
};

class derived : protected base
{
    public:
    void udoclassshow()
    {
        cout<<"num3 = "<<num3<<endl;
    }

};
//protected로 상속하면, 상위 클래스의 public 멤버가 외부에서는 접근 불가능해지지만,
// 하위 클래스 내부에서는 여전히 사용 가능하다.
int main(void)
{
    derived drv;
    //cout<<drv.num3<<endl;
    //drv.show();
    drv.udoclassshow();
    //
    return 0;
}
/*
class derived : protected base
상위 클래스의 public 멤버 → protected로 바뀜

상위 클래스의 protected 멤버 → 그대로 protected 유지

상위 클래스의 private 멤버 → 여전히 접근 불가

유도 클래스 내부   가능 (protected라 내부 접근 가능)	
main 등 외부	불가능 (public이 protected로 바뀌었으므로)


class derived : public base
상위 클래스의 public 멤버 → 그대로 public

상위 클래스의 protected 멤버 → 그대로 protected

상위 클래스의 private 멤버 → 여전히 접근 불가

유도 클래스 내부	protected, public 접근 가능	
main 등 외부	 public 멤버만 접근 가능 (protected, private은 X)
*/