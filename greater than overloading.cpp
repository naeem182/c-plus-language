#include<iostream>
using namespace std;
class height
{
    int feet,inches;
public:
   height(int a,int b)
    {
       feet=a;
       inches=b;
    }
void operator>(height ob)
    {
        if(feet==ob.feet&&inches==ob.inches)
         {
            cout<<"here two person height are equall"<<endl;
         }
          if(feet>ob.feet&&inches>ob.inches||
             feet==ob.feet&&inches>ob.inches)
         {
            cout<<"here naeem is taller than person2"<<endl;
         }
         else
            cout<<"here person2 is taller than naeem  "<<endl;
    }
};
int main()
{
    height naeem(5,11),person2(5,8);
   naeem>person2;

}

