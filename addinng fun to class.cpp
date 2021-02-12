#include<iostream>
#include<conio.h>
using namespace std;
class cse44
{
    public://acces specifire
    int id;
    double gpa;
    void display()  //add display
    {
       cout<<"ID:"<<id<<endl<<"GPA:"<<gpa<<endl;//output show
    }
};
int main()
{
    cse44 ob,ob1;    //creating object
    ob.id=182;       //get input
    ob.gpa=3.82;
    ob.display();    //funtion call
    ob1.id=187;
    ob1.gpa=3.87;
    ob1.display();
    return 0;
}
