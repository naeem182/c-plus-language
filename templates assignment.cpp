//1
/*#include<iostream>
using namespace std;
template <class t>
t swaping(t a,t b)
{
    t c;
     cout<<"before swappinng:"<<a<<"  "<<b<<endl;
     c=a;
     a=b;
     b=c;
     cout<<"after swappinng:"<<a<<"  "<<b<<endl<<endl;
}
int main()
{
   swaping(10,20);
    swaping(10.5,20.5);
    swaping('a','z');
}
//2
*/

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

