#include<iostream>
#include<conio.h>
using namespace std;
class cse44
{
    public://acces specifire
    int id;
    double gpa;
    void setvalue(int x,double y)
    {
        id=x;
        gpa=y;
    }

void display()  //add display
    {
       cout<<"ID:"<<id<<endl<<"GPA:"<<gpa<<endl;//output show
    }
};
int main()
{
    cse44 ob,ob1;    //creating object
    ob.setvalue(182,3.61) ;    //get input
    ob.display();    //funtion call
    ob1.setvalue(189,3.82);
    ob1.display();
}

