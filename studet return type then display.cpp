
#include<iostream>
using namespace std;
class student
{
    public:
    int id,age;
    string name;
    void display()
    {
        cout<<"name:"<<name<<endl;
        cout<<"id:"<<id<<endl;
        cout<<"age:"<<age<<endl;
    }

student input(student ob1)
{
    ob1.id=82;
    ob1.age=19;
    ob1.name="naeem";
    return ob1;
}
};
int main()
{
    student naeem,ob;
   ob=naeem.input(naeem);
    ob.display();
}
