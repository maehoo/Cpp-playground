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
        book(const char * title, const char * isbn, int value) : price(value)
        {
            this->title = new char[strlen(title) + 1];
            this->isbn = new char[strlen(isbn) + 1];
            strcpy(this->title, title);
            strcpy(this->isbn, isbn);
        }
        book(const book& ref) : price(ref.price) //복사 생성자
        {
            title = new char[strlen(ref.title) + 1];
            isbn = new char[strlen(ref.isbn) +1 ];
            strcpy(title, ref.title);
            strcpy(isbn, ref.isbn);
        }
        book& operator=(const book& ref)
        {
            if(title != NULL)
                delete [] title;
            if(isbn != NULL)
                delete []isbn;

            title = new char[strlen(ref.title) + 1];
            isbn = new char[strlen(ref.isbn) + 1];
            strcpy(title , ref.title);
            strcpy(isbn , ref.isbn);
            price = ref.price;
            return *this;
        }

        void showbookinfo()
        {
            cout<<"제목: "<<title<< endl;
            cout<<"isbn : "<<isbn<<endl;
            cout<<"가격: "<<price<<endl;
        }
        ~book()
        {
            delete[]title;
            delete[] isbn;
        }
};

class ebook : public book
{
    private:
        char *drmkey;
    public:
        ebook(const char * title, const char *isbn, int value, const char * key) : book(title, isbn,value)
        {
            drmkey = new char[strlen(key) +1];
            strcpy(drmkey,key);
        }

        ebook(const ebook& ref) : book(ref)
        {
            cout<<"복사"<<endl;
            drmkey = new char[strlen(ref.drmkey) + 1];
            strcpy(drmkey, ref.drmkey);
        }

        ebook& operator=(const ebook& ref)
        {
            cout<<"대입"<<endl;
            book::operator=(ref);
            delete [] drmkey;
            drmkey = new char[strlen(ref.drmkey) + 1];
            strcpy(drmkey, ref.drmkey);
            return *this;
        }
        void showebookinfo()
        {
            showbookinfo();
            cout<<"인증키: "<<drmkey<<endl;
        }
        ~ebook()
        {
            delete []drmkey;
        }
};

int main(void)
{
    ebook ebook1("좋은 C++ ebook", "555-12345-890-1",10000,"fdx9w0i9kiw");
    ebook ebook2 = ebook1;
    ebook2.showebookinfo();
    cout<<endl;
    ebook ebook3("dumy","dumy", 0, "dumy");
    ebook3 = ebook2;
    ebook3.showebookinfo();
    return 0;
}