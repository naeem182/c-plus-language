#include<iostream>
using namespace std;
class num
{
    int x,y;
public:
    num()
    {
       x=0;
       y=0;
    }
    num(int a,int b)
    {
       x=a;
       y=b;
    }
num operator+(num ob)
    {
        num t;
        t.x=x+ob.x;
        t.y=y+ob.y;
       return t;

    }
    void display()
    {
        cout<<"X:"<<x<<endl<<"Y:"<<y<<endl;
    }
};
int main()
{
    num ob1(1,2);
    num ob2(3,4);
    num ob3(1,2),ob4;
   ob4=ob1+ob2+ob3;
   ob4.display();

}

