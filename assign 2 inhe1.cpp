#include<iostream>
using namespace std;
class store
{
    public:
        virtual void showItem()
        {
            cout<<"Sells All"<<"\n";
        }
};
class bookstore: public store
{
    public:
    void showItem()
    {
        cout<<"Sells book"<<"\n";
    }
};
class ricestore: public store
{
public:
    void showItem()
    {
        cout<<"Sells rice"<<"\n";
    }
};
int main()
{
    store ob3,*p;
    ob3.showItem();
    bookstore ob;
    ricestore ob1;
    p = &ob;
    p-> showItem();
    p = &ob1;
    p -> showItem();
}
