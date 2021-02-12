#include<iostream>
using namespace std;
class base
{
    int i;
    public:
    base(int n)
    {
        i=n;
        cout<<"base class constructor"<<endl;
    }
    ~base()
    {
       cout<<"base class destructor"<<endl;
    }
    void showi()
    {
        cout<<i<<endl;
    }
};
class a:public base
{
    int j;
    public:
    a(int n):base(9)
    {
        j=n;
        cout<<"child class constructor"<<endl;
    }
    ~a()
    {
        cout<<"child class destructor"<<endl;
    }
    void showj()
    {
        cout<<j<<endl;
    }
};
int main()
{
    a ob(8);
    ob.showi();
    ob.showj();
}
