#include<iostream>
using namespace std;
class ABC
{
    public:
    int a,b;
    ABC(int i,int j)
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
    ABC ob1(1,2);
    cout<<"for ob1:";
    ob1.show();
    ABC ob2=ob1;
    cout<<"for ob2:";
    ob2.show();
}
