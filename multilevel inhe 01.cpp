#include<iostream>
#include<conio.h>
using namespace std;
class EEE
{
public:
    string name1;
    int x;
};
class CSE:public EEE
{
public:
    string name2;
    int y;
};
class MATH:public CSE
{
public:
    string name3;
    int z;
};
class INTAKE44:public MATH
{
public:
    int intake,sec;
    void display()
    {

        cout<<"intake:"<<intake<<"   "<<"sec:"<<sec<<endl;
        cout<<"EEE:"<<endl<<"teacher name:"<<name1<<"\n"<<"class no:"<<x<<endl;
        cout<<"CSE:"<<endl<<"teacher name:"<<name2<<"\n"<<"class no:"<<y<<endl;
        cout<<"MATH:"<<endl<<"teacher name:"<<name3<<"\nSs"<<"class no:"<<z<<endl;
    }
};
int main()
{
    INTAKE44 ob;
    ob.intake=44;
    ob.sec=5;
    ob.name1="shaon rakib";
    ob.name2="farhana";
    ob.name3="foysal";
    ob.x=5;
    ob.y=6;
    ob.z=7;
    ob.display();
    getch ();
}
