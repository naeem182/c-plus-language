#include<iostream>
using namespace std;
class point
{
    int x,y;
public:
   point ()
    {
       x=0;
       y=0;
    }
  point(int a,int b)
    {
       x=a;
       y=b;
    }
point operator+(point ob)
    {
        point t;
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
    point c1(10,5),c2(2,4),c3;
   c3=c1+c2;
   c3.display();

}

