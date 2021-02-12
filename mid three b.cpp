#include<iostream>
using namespace std;
class cse44
{   public:
    int id,section,intake;
    string name;
  cse44(string n,int in,int sec,int i)
    {   name=n;
        intake=in;
        section=sec;
        id=i;
        }
  int get()
    {  cout<<"name:"<<name<<endl;
        cout<<"intake:"<<intake<<endl;
        cout<<"sec:"<<section<<endl;
        cout<<"id:"<<id<<endl;
    }
};
int main()
{  cse44 ob[5]={cse44("naeem",44,5,182),
    cse44("a",44,6,183),cse44("b",44,7,184),
    cse44("c",44,8,185),
    cse44("d",44,9,186)};
    int j;
    for(j=0;j<5;j++)
    {ob[j].get();}
}
