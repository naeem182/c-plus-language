#include<iostream>
using namespace std;
class sum
{
    public:
    int s(int i,int j)
       {
          return i+j;
        }
};
/*inline int sum::s(int i,int j)// inter class don't return work & (;) with
int s(int i,int j)
    {
          return i+j;
    }*/
int main()
{
    int a,b,c;
    sum ob;
    cout<<"Enter two any num"<<endl;
    cin>>a>>b;
    c=ob.s(a,b);
    cout<<"two num sum is:"<<c;
}
