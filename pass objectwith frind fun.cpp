//class name:my classvalue set with with constructor and a friend fun name add thats pass obj
#include<iostream>
using namespace std;
class myclass
{
    int a,b;    //us friend fun
    public:
        myclass(int i,int j)
        {
            a=i;
            b=j;
        }                           //declae friend class

    friend void add(myclass ob);   //friend prototype fun_name(class_name obj_name);
};
void add(myclass ob1)
{
    cout<<"sum:"<<ob1.a+ob1.b;
}
int main()
{
    myclass naeem(80,81);
    add(naeem);
}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 //;;;
