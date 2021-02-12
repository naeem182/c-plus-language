//get 2D simple array input
#include<iostream>
using namespace std;
class c
{
    int a;
     public:
    c(int n)//get value wuth constructor
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
    c ob[3][2]={1,2,3,4,5,6};
    int i;
    cout<<"output:"<<endl;
    for(i=0;i<3;i++)
    {
       /*cout<<ob[i][0].get()<<"\t";//when don't use inner loop it is open
       cout<<ob[i][1].get()<<endl;*/
       int j;
     for(j=0;j<2;j++)
     {
         cout<<"\t";
        cout<<ob[i][j].get();
     }
      cout<<"\n";
    }

}
