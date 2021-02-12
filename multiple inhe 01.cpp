#include<iostream>
#include<conio.h>
using namespace std;
class EEE
{
public:
    string name1;
    int x;
};
class CSE
{
public:
    string name2;
    int y;
};
class MATH
{
public:
    string name3;
    int z;
};
class INTAKE44:public CSE,public EEE,public MATH
{
public:
    int intake,sec;
    void display()
    {

        cout<<"intake:"<<intake<<"   "<<"sec:"<<sec<<endl;
       cout<<"EEE:"<<endl<<"teacher name:"<<name1<<"\n"<<"class no:"<<x<<endl;
        cout<<"CSE:"<<endl<<"teacher name:"<<name2<<"\n"<<"class no:"<<y<<endl;
        cout<<"MATH:"<<endl<<"teacher name:"<<name3<<"\n"<<"class no:"<<z<<endl;
    }
};
int main()
{
    INTAKE44 ob;
    cout<<"INTAKE:";
    cin>>ob.intake;
     //ob.intake=44;

    cout<<"SEC:";
    cin>>ob.sec;
     //ob.sec=5;
    ob.name1="shaon rakib";
    ob.name2="ummay habiba";
    ob.name3="foysal badsha";
    ob.x=5;
    ob.y=6;
    ob.z=7;
    ob.display();
    getch ();
}
