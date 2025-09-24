#include <iostream>
using namespace std;

class fruitseller
{
    private:
    int apple_price;
    int numofapples;
    int mymoney;
    public:
    fruitseller(int price, int num, int money)
    {
        apple_price = price;
        numofapples = num;
        mymoney = money;
    }
    int saleapples(int money)
    {
        int num=money/ apple_price;
        numofapples -=num;
        mymoney+=money;
        return num;
    }
    void showsalesresult() const
    {
        cout<<"남은 사과: "<<numofapples <<endl;
        cout<<"판매 수익: "<<mymoney<<endl<<endl; 
    }
};

class fruitbuyer
{
    private:
    int mymoney;
    int numofapples;
    public:
        fruitbuyer(int money)
        {
            mymoney =money;
            numofapples = 0;
        }
        void buyapples(fruitseller &seller, int money)
        {
            numofapples += seller.saleapples(money);
            mymoney -=money;
        }
        void showbuyresult() const
        {
            cout<<"현재 잔액: "<<mymoney<<endl;
            cout<< "사과 개수: "<<numofapples<<endl<<endl;
        }
};

int main(void)
{
    fruitseller seller(1000,20,0);
    fruitbuyer buyer(5000);
    buyer.buyapples(seller,2000);

    cout<<"과일 판매자의 현황" <<endl;
    seller.showsalesresult();
    cout<<"과일 구매자의 현황"<<endl;
    buyer.showbuyresult();
    return 0;
}