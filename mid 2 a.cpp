#include<iostream>
using namespace std;
class counter
{public:
    int i,turnon,turnoff;
   counter()
   { i=0;}
   void start()
   { turnon=5; }
    void stop()
   { turnoff=10; }
   void display()
   { i=turnoff-turnon;
       cout<<i<<endl; }
    ~counter()
   { if(turnoff>turnon)
     {cout<<"the counter is stopped"<<endl;}
    else
     {cout<<"the counter is opened"<<endl;}
    }
};
int main()
{counter obj;
    obj.start();
    obj.stop();
    obj.display();
}
