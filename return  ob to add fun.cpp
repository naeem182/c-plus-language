


#include<iostream>
using namespace std;
class example
{
    public:
    int a;

example add(example Example)
  {
     // a=Example;

   cout<<"get one inpu:";
   cin>>Example.a;

  return Example;
  }
  add()
  {
      cout<<"auto call with add fun"<<endl;
      a=5;
      cout<<"add() called output:"<<a;

  }

};

int main()
{
    example ob,ob1,o;
    ob=o.add(o);
  cout<<"return output:"Example.a<<a<<endl;
    ob1.add();

}
