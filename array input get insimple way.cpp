//get three sample simple input in array
/*#include<iostream>
using namespace std;
class c
{
    int a;
     public:
    void set(int n)
    {
        a=n;
    }
    int get()
    {
        return a;
    }
};
int main()
{
    c ob[3];
    ob[0].set(10);
    ob[1].set(11);
    ob[2].set(12);
    cout<<"output:"<<endl;
     cout<<ob[0].get()<<endl;
     cout<<ob[1].get()<<endl;
     cout<<ob[2].get()<<endl;

}
*/
#include<iostream>
using namespace std;
int main()
{
    int marks[5]={1,2,3,4,5};
    int* p=marks;
    marks[6]=44;
     cout<<*p<<endl;
    cout<<*(p+1)<<endl;
    cout<<*(p+2)<<endl;
    cout<<*(p+3)<<endl;
    cout<<*(p+4)<<endl;
    cout<<*(p+5)<<endl;

}

