#include<iostream>
using namespace std;
class num
{
    int x,y;
public:
    num(int a,int b)
    {
       x=a;
       y=b;
    }
void operator-(num ob)
    {
        x=x-ob.x;
       y=y-ob.y;
        cout<<"X"<<x<<endl<<"Y"<<y;
    }
};
int main()
{
    num ob1(1,2),ob2(3,4);
   ob1-ob2;

}

