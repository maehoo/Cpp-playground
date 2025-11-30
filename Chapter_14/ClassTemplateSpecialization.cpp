#include <iostream>
#include <cstring>
using namespace std;

template <typename T>
class Point
{
    private:    
        T xpos, ypos;
    public:
        Point(T x=0, T y=0) : xpos(x) , ypos(y) {}
        void showposition() const
        {
            cout<<"["<<xpos<<", "<<ypos<<"]"<<endl;
        }
};

template <typename T>
class SimpleDataWrapper
{
    private:
        T mdata;
    public:
        SimpleDataWrapper(T data) : mdata(data)
        {}
        void showdatainfo()
        {
            cout<<"data: "<<mdata<<endl;
        }
};

template <>
class SimpleDataWrapper<const char*>
{
    private:
        char* mdata;
    public:
        SimpleDataWrapper(const char * data)
        {
            mdata = new char[strlen(data) + 1];
            strcpy(mdata, data);
        }
        void showdatainfo()
        {
            cout<<"String: "<<mdata<<endl;
            cout<<"Length: "<<strlen(mdata)<<endl;
        }
        ~SimpleDataWrapper(){delete []mdata;}
};

template<>
class SimpleDataWrapper <Point<int> >
{
    private:
        Point<int> mdata;
    public:
        SimpleDataWrapper(int x, int y) : mdata(x,y){}
        void showdatainfo()
        {
            mdata.showposition();
        }
};

int main(void)
{
    SimpleDataWrapper<int> iwrap(170);
    iwrap.showdatainfo();
    SimpleDataWrapper<const char*> swrap("class template specialization");
    swrap.showdatainfo();
    SimpleDataWrapper<Point<int> > poswrap(3,7);
    poswrap.showdatainfo();
    return 0;
}