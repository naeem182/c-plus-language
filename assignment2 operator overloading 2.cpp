#include<iostream>
using namespace std;
class point
{
    int x,y;
public:
   point(int a,int b)
    {
       x=a;
       y=b;
    }
    void show()
    {
        cout<<x<<" "<<y<<endl;
    }
void operator>(point ob)
    {
        if(x>ob.x)
            return 1;
        else if(x<ob.x)
            return 0;
          else if(y>ob.y)
            return 1;
         else if(y<ob.y)
            return 0;
    }

void operator<(point ob)
    {
        if(x<ob.x)
            return 1;
        else if(x>ob.x)
            return 0;
          else if(y<ob.y)
            return 1;
         else if(y>ob.y)
            return 0;
    }
};
int main()
{
    point firstnumber(10,15),secoundnumber(20,10),thirdnumber(11,12);
    firstnumber>secoundnumber&thirdnumber;
    firstnumber<secoundnumber&thirdnumber;
}

