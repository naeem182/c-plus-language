#include<iostream>
using namespace std;
class isosceles
{
   int lengths; //privet properties
   public:
 void setvalue(int a)
 {lengths=a;
 cout<<"isosceles lengths is:"<<lengths<<endl;
    }
    int area(int i);
};
inline int isosceles::area(int i)
{  lengths=i;
     return .5*(i*i);
}
int main()
{  int a;
    cout<<"get a length of isosceles:";
    cin>>a;
    isosceles ob,ob1;
    ob.setvalue(a);
   cout<<"area of isosceles is:"<<ob1.area(a);
}
