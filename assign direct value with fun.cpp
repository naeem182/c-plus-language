#include<iostream>
using namespace std;
class ABC
{
    public:
    int a,b,c;
    void setvalue()
    {
        a=1;
        b=2;
        c=3;
    }
    void show()
    {
        cout<<"a="<<a<<" "<<"b="<<b<<" "<<"b="<<c<<endl;
    }
};
int main()
{
    ABC ob1,ob2;
    ob1.setvalue();
    cout<<"for ob1:";
    ob1.show();
    ob2=ob1;
    cout<<"for ob2:";
    ob2.show();
}
