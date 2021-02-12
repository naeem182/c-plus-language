#include<iostream>
 using namespace std;
  class base1
  {
      int i,j;
      public:
   base1(int a,int b)
      { i=a;
         j=b;
         cout<<"base1:" <<i<<"  "<<j<<endl;
      }
};
  class base2
  {
      int i,j;
      public:
    base2(int a,int b)
      {
         i=a;
         j=b;
         cout<<"base2:"<<i<<"  "<<j;
      }
  };
int main()
{
    base1 x(10,20);//must use int value
    base2 y(0,0);
}

