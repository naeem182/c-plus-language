#include<iostream>
using namespace std;
inline int sum(int i,int j) // inline+return type+fun name(parameter)
{
    return i+j;
}
int main()
{
    int a,b,c;
    cout<<"Enter two any num"<<endl;
    cin>>a>>b;
    c=sum(a,b);
    cout<<"two num sum is:"<<c;
}
