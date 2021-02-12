#include<iostream>
using namespace std;
class student
{
    public:
    int intake,sec;
student setval(student ob)
  {
   ob.intake=36;
   ob.sec=5;
   return ob;
  }
 void display()
    {
        cout<<"intake:"<<intake<<endl;
        cout<<"sec:"<<sec;
    }
};
int main()
{
    student naeem,std;
    std=naeem.setval(naeem);
    std.display();
}
