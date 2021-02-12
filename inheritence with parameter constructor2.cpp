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
    int j,k;
    public:
    a(int m,int n):base(9)
    {
        j=m;
        k=n;
        cout<<"child class constructor"<<endl;
    }
    ~a()
    {
       cout<<"child class destructor"<<endl;
    }
    void showj()
    {
        cout<<j<<"  "<<k<<endl;
    }
};
int main()
{
    a ob(7,8);
    ob.showi();
    ob.showj();S
}
