
#include<iostream>
using namespace std;
class example
{
    public:
    int a;
void add(example value)
  {

      cout<<"get one inpu:";
   cin>>value.a;
   a=5;
   cout<<"another one int value:"<<a<<endl;
   cout<<"two num is:"<<value.a+a;

  }


};
int main()
{
    example ob;
    ob.add(ob);
}
