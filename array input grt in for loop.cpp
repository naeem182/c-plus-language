//get  array input in for loop
#include<iostream>
using namespace std;
class c
{
    int a;
     public:
    c()//get value wuth constructor
    {
        int n;
        cin>>n;
        a=n;
    }
    /*void set(int n)//get value with funtion
    {
        a=n;
    }*/
    int get()
    {
        cout<<a<<endl;

    }
};
int main()
{
    c ob[3];
    int i,x;
    /*for(i=0;i<3;i++)//if use fun then it is open
    {
        cin>>x;
        ob[i].set(x);
    }*/


    cout<<"output:"<<endl;
    for(i=0;i<3;i++)
    {
        ob[i].get();
    }

}
