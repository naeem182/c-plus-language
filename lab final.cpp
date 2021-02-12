//2

#include<iostream>
using namespace std;
class array
{
    int i;
    char v;
     public:
    void insert(int index,char value)
    {
        i=index;
        v=value;
    }
    void get()
    {
        return (i,v);

};
int main()
{
    array ob;
    ob.insert([3],[1][1])={{1,2,3,4},{{6,6},{5,5}}};
     intj,k,l;
     for(j=0;j<3;j++)
       cout<<ob[j].get()<<" "<<endl;
    for(k=0;k<1;k++)
        { for(l=0;l<1;l++)
         cout<<ob[k][l].get()<<" "<<endl;
        }
}



//3
/*

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





/*4/*#include<iostream>
#include<conio.h>
using namespace std;
class A
{
    public:
   virtual void showA()
    {
        cout<<"for class A"<<endl;
        cout<<"37 intake! best of luck!!"<<endl;
     }

};
class C:virtual public A
{
    public:
};
class D:virtual public A
{
    public:

};
class E:virtual public C , virtual public D
{
    public:
     void showA()
     {
         cout<<"for class C"<<endl;
        cout<<"37 intake! best of luck!!"<<endl;
     }

};

int main()
{
     A ob1,*p;
     ob1.showA();
     E ob2;
    p=&ob2;
    p->showA();
    getch();
}

//5I
#include<iostream>
using namespace std;
class father
{
    int age;
    string name;
    public:
    father(int a,string b)
    {
         age=a;
        name=b;
    }

    void showf()
    {
        cout<<"father;"<<endl;
        cout<<"father age:"<<age<<endl;
        cout<<"father name:"<<name<<endl;
    }
};

class mother
{
    int age;
    string name;
    public:
    mother(int a,string b)
    {
        age=a;
       name=b;
    }

    void showm()
    {
         cout<<"mother;"<<endl;
        cout<<"mother age:"<<age<<endl;
        cout<<"mother name:"<<name<<endl;
    }
};
class son:virtual public father,virtual public mother
{int age;
    string name;
    public:
    son(int a,string b): father(50,"a"),mother(45,"b")
    {
        age=a;
       name=b;
    }

    void shows()
    {
        showf();
        showm();
         cout<<"son;"<<endl;
        cout<<"son age:"<<age<<endl;
        cout<<"son name:"<<name<<endl;
    }
};
int main()
{
    son ob(18,"c");
    ob.shows();
}
//5-ii

#include<iostream>
using namespace std;
class grandfather
{
    int age;
    string name;
    public:
    grandfather(int a,string b)
    {
         age=a;
        name=b;
    }

    void showg()
    {
        cout<<"grandfather;"<<endl;
        cout<<"grandfather age:"<<age<<endl;
        cout<<"grandfather name:"<<name<<endl;
    }
};

class father:public grandfather
{
    int age;
    string name;
    public:
    father(int a,string b):grandfather(80,"z")
    {
        age=a;
       name=b;
    }

    void showf()
    {
        showg();
         cout<<"father;"<<endl;
        cout<<"father age:"<<age<<endl;
        cout<<"father name:"<<name<<endl;
    }
};
class son:virtual public father
{int age;
    string name;
    public:
    son(int a,string b):father(40,"a")
    {
        age=a;
       name=b;
    }

    void shows()
    {
        showg();
        showf();
         cout<<"son;"<<endl;
        cout<<"son age:"<<age<<endl;
        cout<<"son name:"<<name<<endl;
    }
};
int main()
{
    son ob(18,"c");
    ob.shows();
}

//6

#include<iostream>
#include<conio.h>
using namespace std;
class phone
{
    public:
   virtual void callrecieve()
    {
    }

};
class landline: public phone
{
    public:
    void callrecieve()
    {
      cout<<"pick receiver"<<endl;
    }
};
class mobile: public phone
{
    public:
      void callrecieve()
      {
        cout<<"press receive button"<<endl;
      }

};
int main()
{
     phone ob1,*pointer;
     ob1.callrecieve();
      landline ob2;
    pointer=&ob2;
    pointer->callrecieve();
    mobile ob3;
    pointer=&ob3;
    pointer->callrecieve();
    getch();
}
*/
