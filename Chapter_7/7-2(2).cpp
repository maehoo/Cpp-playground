#include <iostream>
#include <cstring>
using namespace std;

class book
{
    private:
        char * title;
        char * isbn;
        int price;
    public:
        book(const char * mytitle,const char * myisbn,int myprice) : price(myprice)
        {
            title = new char[strlen(mytitle)+1];
            strcpy(title,mytitle);

            isbn = new char[strlen(myisbn)+1];
            strcpy(isbn,myisbn);
        }
        void showbookinfo()
        {
            cout<<"제목: "<<title<<endl;
            cout<<"ISBN: "<<isbn<<endl;
            cout<<"가격: "<<price<<endl;
        }
        ~book()
        {
            delete title;
            delete isbn;
        }
};

class ebook : public book
{
    private:
        char *drmkey;
    public:
        ebook(const char * mytitle,const char * myibsn, int myprice, const char*mydrmkey) : book(mytitle,myibsn,myprice)
        {
            drmkey = new char[strlen(mydrmkey) +1];
            strcpy(drmkey,mydrmkey);
        }
        void showebookinfo()
        {
            showbookinfo();
            cout<<"인증키: "<<drmkey<<endl;
        }
        ~ebook()
        {
            delete drmkey;
        }
};

int main(void)
{
    book book1("좋은 C++","555-12345-890-0",20000);
    book1.showbookinfo();
    cout<<endl;
    ebook ebook1("좋은 C++ ebook","555-12345-890-1",10000,"fdx9wefhweaflew");
    ebook1.showebookinfo();
    return 0;
}