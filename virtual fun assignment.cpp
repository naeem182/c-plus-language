/*#include<iostream>
#include<conio.h>
using namespace std;
class flower
{
    public:
   virtual void showitem()=0;
};
class rose:public flower
{
    public:
    void showitem()
    {
      cout<<"sells rose"<<endl;
    }
};
class marrygold:public flower
{
    public:
      void showitem()
      {
        cout<<"sells marrygold"<<endl;
      }

};
int main()
{
     flower *f;
    rose ob1;
    f = &ob1;
    f->showitem();
    marrygold ob2;
    f=&ob2;
   f->showitem();
    getch();
}

//2
#include<iostream>
#include<conio.h>
using namespace std;
class base
{
    public:
   virtual void print()
   {
        cout<<"in base class"<<endl;
      }

};
class derived1:public base
{
    public:
    void print()
    {
      cout<<"d1"<<endl;

    }
};
class derived2:public base
{
    public:
      void print()
      {
        cout<<"d2"<<endl;
      }

};
int main()
{
     base ob1,*b;
    ob1.print();
    derived1 ob2;
    b=&ob2;
    b->print();
    derived2 ob3;
    b=&ob3;
   b->print();
    getch();
}
*/
//3.

#include<iostream>
using namespace std;
class base
{

    public:
     int i;
    base(int i)
    {
      this->i=i;

    }

   virtual void func()
    {
        cout<<"using base version of func():"<<endl;
         cout<<i<<endl;
    }
};
class derived1:public base
{int x;
    public:
    derived1(int i):base(i)
    {
    }
   void func()
    {
        cout<<"using derived1 version of func():"<<endl;
         cout<<i*i<<endl;
    }

};
class derived2:public base
{
    public:
    derived2(int i):base(i)
    {
    }
   void func()
    {
        cout<<"using derived1 version of func():"<<endl;
         cout<<i+i<<endl;
    }

};
int main()
{
    base ob1(7),*p;
    ob1.func();
    derived1 ob2(8);
    p=&ob2;
    p->func();
    derived2 ob3(9);
     p=&ob3;
    p->func();

}
