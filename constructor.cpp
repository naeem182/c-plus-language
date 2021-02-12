#include<iostream>
#include<conio.h>
using namespace std;
class student
{
    public:
    int id;
    float gpa;


    student(int x,float y)
    {
        id=x;
        gpa=y;
    }
    void display()
        {
            cout<<"ID:"<<id<<endl<<"GPA:"<<gpa<<endl;
        }
    };
int main()
    {
        student naeem(182,3.61);
        naeem.display();
        student aman(189,3.82);
        aman.display();
        getch();

    }
