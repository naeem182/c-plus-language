#include<iostream>
using namespace std;
template <class p>
p greatest(p a,p b,p c)
{
    if((a>b)&&(a>c))
        return a;
     else if((b>a)&&(b>c))
        return b;
    else
        return c;
}
int main()
{
    cout<<"int greatest value:"<<greatest(10,11,12)<<endl;
    cout<<"float greatest value:"<<greatest(10.56,10.57,10.58)<<endl;
    cout<<"charecter greatest value:"<<greatest('a','b','c')<<endl;

}

