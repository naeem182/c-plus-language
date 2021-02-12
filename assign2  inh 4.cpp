#include<iostream>
using namespace std;
class vehicle
{
    int num_wheels;
    int range;
public:
    vehicle(int w,int r)
    {
        num_wheels=w;
        range=r;
    }
    void showv()
    {
        cout<<"num_wheels="<<num_wheels<<"  "<<"range="<<range<<"\n";
    }
};
class car:public vehicle
{
    int passengers,loadlimit;
public:
    car(int p,int i):vehicle(4,10)
    {
        passengers=p;
        loadlimit=i;
    }
    void show()
    {
        showv();
        cout<<"passengers="<<passengers<<"  "<<"loadlimit="<<loadlimit<<"\n";
    }
};
class truck:public vehicle
{
    int loadlimit,passengers;
public:
    truck(int p,int l):vehicle(8,6)
    {
        passengers=p;
        loadlimit=l;
    }
    void show()
    {
        showv();
        cout<<"passengers="<<passengers<<"  "<<"loadlimit="<<loadlimit<<"\n";
    }
};
int main()
{
    car c(20,1);
    c.show();
    truck t(30,2);
}
