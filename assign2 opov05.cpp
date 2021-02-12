
#include<iostream>
using namespace std;
class coord
{
    int x,y;
public:
    coord(int a,int b)
    {
        x=a;
        y=b;
    }
    void display()
    {
        cout<<"x:"<<x<<" "<<"y:"<<y;
    }
    void operator ++()
    {
        x=x+1;
        y=y+1;
    }
};
int main()
{
    coord o1(10,10);
    ++o1;
    o1.display();
}

