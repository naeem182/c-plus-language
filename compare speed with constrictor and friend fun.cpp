#include<iostream>
using namespace std;
class truck;
class car
{public:
    int weight,speed;
    car(int a,int b)
    {
       weight =a;
        speed=b;
    }
    friend void compare(car ob,truck ob1);
};
class truck
{
public:
    int weight,speed;
    truck(int a,int b)
    {
        weight=a;
        speed=b;}
    friend void compare(car ob,truck ob1);
};
void compare(car ob,truck ob1)
{
    cout<<"car speed:"<<ob.speed<<"  "<<"truck speed:"<<ob1.speed<<endl;
    cout<<"car weight:"<<ob.weight<<"  "<<"truck weight:"<<ob1.weight<<endl;
    if(ob.speed>ob1.speed)
    {
        cout<<"car is faster than truck";
    }
    else
    {
        cout<<"truck is faster than car";
    }
}
int main()
{
    car c(80,100);
    truck t(81,120);
    compare(c,t);
}
