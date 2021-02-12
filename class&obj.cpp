#include<iostream>
#include<conio.h>
using namespace std;
class student
    {
        public:

        int id;
        double gpa;
   };
int main()
{
    student ob1;
    cin>>ob1.id>>ob1.gpa;
    cout<<"ID:"<<ob1.id<<endl<<"GPA:"<<ob1.gpa<<endl;
    getch();

}
