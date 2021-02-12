#include<iostream>
using namespace std;
class ABC
{
    public:
    int a,b;
   /* ABC(int i,int j)
    {
        a=i;
        b=j;
    }*/

};
int fun(ABC ob)//return type fun_name(class name any object name)
{
    ob.a;
    ob.b;

     cout<<"for ob1:";
    cout<<ob.a<<" "<<ob.b<<endl;
    cout<<"for ob2:";
    cout<<ob.a<<" "<<ob.b<<endl;

}
int main()
{

ABC naeem,mizan;
naeem.a=3;
naeem.b=4;
mizan=naeem;
//fun(naeem);
fun(mizan);
   /* ABC ob1(1,2);
    ABC ob2=ob1;
    fun(ob1);
    //fun(ob2);*/


}
