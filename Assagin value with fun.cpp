#include<iostream>
using namespace std;
class ABC
{
    public:
    int a,b;
    void setvalue(int i,int j)
    {
        a=i;
        b=j;
    }
    void show()
    {
        cout<<"a="<<a<<" "<<"b="<<b<<endl;
    }
};
int main()
{
    ABC ob1,ob2;
    ob1.setvalue(1,2);
    cout<<"for ob1:";
    ob1.show();
    ob2=ob1;
    cout<<"for ob2:";
    ob2.show();
}
