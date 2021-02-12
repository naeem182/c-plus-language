//class student;marks>non member fun add and return obj to member fun display
#include<iostream>
using namespace std;
class student
{
    public:
    int marks1,marks2;
    void display()
    {
        cout<<"Tottal  marks:"<<marks1+marks2;
    }
};
student add()       //class_name fun_name()
{
   student ob;
   cout<<"input your two num:";
   cin>>ob.marks1;//=80;
   cin>>ob.marks2;//=81;
                          /*  when no need extra display function&return
                            cout<<"Tottal  marks:"<<ob.marks1+ob.marks2;*/
   return ob;
}
int main()
{
    student naeem;
    naeem=add();    //ob-naeem=fun name-add()-  //add();
    naeem.display(); //because of member fun
}
