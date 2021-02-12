#include <iostream>
using namespace std;
class ARMY
  { public:
      int age;;
    float height;
ARMY(int x,float y)
    {age=x;
        height=y;
    }
};
    void average(ARMY ob1,ARMY ob2,ARMY ob3,ARMY ob4)
    {cout<<"candidate lowest age is"<<endl;

{if((ob1.age<ob2.age)&&(ob1.age<ob3.age)&&(ob1.age<ob4.age))
    cout<<"a candidate age lowestdt";
else if((ob2.age<ob1.age)&&(ob2.age<ob3.age)&&(ob2.age<ob4.age))
    cout<<"b candidate :"<<endl;
else if((ob3.age<ob1.age)&&(ob3.age<ob2.age)&&(ob3.age<ob4.age))
    cout<<"c candidate  height is lowest:"<<endl;
else
    cout<<"d candidate age is lowest:"<<endl;
   }
   cout<<"candidate heighest height is:"<<endl;
{if((ob1.height>ob2.height)&&(ob1.height>ob3.height)&&(ob1.height>ob4.height))
    cout<<"a candidate  height is heighest:"<<endl;
else if((ob2.height>ob1.height)&&(ob2.height>ob3.height)&&(ob2.height>ob4.height))
    cout<<"b candidate  height is heighest:"<<endl;
else if((ob3.height>ob1.height)&&(ob3.height>ob2.height)&&(ob3.height>ob4.height))
    cout<<"c candidate  height is heighest:"<<endl;
else
    cout<<"d candidate  height is heighest:"<<endl;
           }
}
int main()
{
ARMY A(2O,5.5),B(21,5.6),C(19,5.7),D(23,5.4);
average(A,B,C,D);
}
