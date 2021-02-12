#include<iostream>
#include<conio.h>
using namespace std;
class parent
{
public:
    int tk=2000;
    int age;

    void display()
    {
    cout<<" parent taka:"<<tk<<endl;
    cout<<" parent age:"<<age<<endl;

    }
};
class child1:public parent
{
    public:
    int tk1,age1,id1;
    void display1()
    {
        cout<<"\n"<<"\n";
        display();
        cout<<" child1 tk:"<<tk1<<endl;
        cout<<" child1 age:"<<age1<<endl;
        cout<<" child1 id no:"<<id1<<endl;

    }
};

class child2:public parent
{
    public:
    int tk2,age2,id2;
    void display2()
    {
        cout<<"\n"<<"\n"<<"\n";
        display();
        cout<<" child2 tk:"<<tk2<<endl;
        cout<<" child2 age:"<<age2<<endl;
        cout<<" child2 id no:"<<id2<<endl;

    }
};
int main()
{
    child1 ob1;
    ob1.age=50;

   // ob1.tk=2000;
     ob1.id1=182;
 // ob.display();

   ob1.tk1=1000;
   ob1.age1=20;
   ob1.display1();
   child2 ob2;
  // ob2.tk=2000;
  ob2.age=50;
   ob2.tk2=1000;
   ob2.age2=21;
   ob2.id2=183;

   ob2.display2();


   getch ();

}
