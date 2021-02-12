#include<iostream>
#include<conio.h>
using namespace std;
class vehicle
{
    int c,t;
    public:
    vehicle(int m,int n)
    {
        c=m;
        t=n;
    }

    void show()
    {
        cout<<"no of car:"<<c<<endl<<"no of truck:"<<t<<endl;
    }

};

class car:public vehicle
{
    int passenger;
    public:
    car(int i):vehicle(8,9)
    {
        passenger=i;
    }
    void showc()
    {
        show();
        cout<<"CAR:"<<endl;
        cout<<"passenger:"<<passenger<<endl;
    }

};

class truck:public vehicle
{
    int pa;
    public:
    truck(int i):vehicle(8,9)
    {
        pa=i;
    }
    void showt()
    {
        cout<<"TRUCK:"<<endl;
        cout<<"passenger:"<<pa<<endl;
    }


};
int main()
{
    car c(15);
    c.showc();
    truck t(20);
    t.showt();
    //getch ();
}
