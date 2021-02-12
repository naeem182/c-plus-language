/*#include<iostream>
#include<conio.h>
using namespace std;
class cricket
{
    int n;
    char a;
    public:
    cricket(int x,char y)
    {
        cout<<"in cricket class"<<endl;
        n=x;
        a=y;
        cout<<n<<"\n"<<a<<endl;
    }

};
class football
{
    int n;
    char a;
    public:
    football(int x,char y)
    {
        cout<<"in football class"<<endl;
        n=x;
        a=y;
        cout<<n<<"\n"<<a<<endl;

    }
};

class badminton:virtual public cricket,virtual public football
{
    int b;
    char e;
    public:
    badminton(int i,char j):cricket(8,'a'),football(9,'b')
    {
        cout<<"in badminton class"<<endl;
        b=i;
        e=j;
        cout<<b<<"\n"<<e<<endl;
    }

};

int main()
{
    badminton b(10,'c');

    getch ();
}
/*
#include<iostream>
#include<conio.h>
using namespace std;
class cricket
{
    int n;
    char a;
    public:
    cricket(int x,char y)
    {
        cout<<"in cricket class"<<endl;
        n=x;
        a=y;
        cout<<n<<"\n"<<a<<endl;
    }

};
class football:public cricket
{   int n;
    char a;
    public:
    football(int x,char y):cricket(1,'d')
    {
        cout<<"in football class"<<endl;
        n=x;
        a=y;
        cout<<n<<"\n"<<a<<endl;

    }

};
class badminton:public football
{

    int b;
    char e;
    public:
    badminton(int i,char j):football(2,'e' )
    {
        cout<<"in badminton class"<<endl;
        b=i;
        e=j;
        cout<<b<<"\n"<<e<<endl;
    }
};
int main()
{

    badminton b(3,'f');
}
*/

#include<iostream>
#include<conio.h>
using namespace std;
class A
{
    public:
   void showA()
    {
        cout<<"37 intake! best of luck!!"<<endl;
     }

};
class C:public A
{
    public:
};
class D: public A
{
    public:

};
class E:virtual public C , virtual public D
{
    public:
     void showA()
     {
        cout<<"37 intake! best of luck!!"<<endl;
     }

};

int main()
{
     E ob;
     ob.showA();
  //  p=&ob;
   //  p->showA();
    getch();
}
