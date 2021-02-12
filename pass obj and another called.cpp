
#include<iostream>
using namespace std;
class example
{
    public:
    int a;
void add(example Example)
  {
     cout<<"get one inpu:";
     cin>>Example.a;
     cout<<"return output:"<<Example.a<<endl;
     a=5;
     cout<<"another one int value is:"<<a<<endl;
     cout<<"add() called output added num is:"<<Example.a+a;

  }
};
int main()
{
    example ob,ob1;
    ob1.add(ob1);

}
