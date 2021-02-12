//2 i
/*#include<iostream>
using namespace std;
int main()
{
    try{
    int n1,n2;
      cout<<"Enter 1st num:";
      cin>>n1;
      cout<<"Enter 2nd num:";
       cin>>n2;
       if(n2==0)
       {
           throw -1;
       }
       double result=(double)n1/n2;
        cout<<"result:"<<result<<endl;
    }
    catch(int x)
    {
        cout<<"Divide by Zero Exception"<<endl;

    }
}
//3 b

#include<iostream>
using namespace std;
template <class g>
g greatest(g a,g b,g c)
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
    cout<<"int greatest value:"<<greatest(10,15,20)<<endl;
    cout<<"float greatest value:"<<greatest(10.56,20.57,11.58)<<endl;
    cout<<"charecter greatest value:"<<greatest('x','y','z')<<endl;

}

//3 a

#include<iostream>
#include<conio.h>
using namespace std;
class calculator
{

    public:
     int x,y;
    calculator(int x,int y)
    {
       this->x=x;
       this->y=y;
    }
     virtual double calculation()
        {
            return 0;
        }
    };
class summation:public calculator
{
    public:
    summation(int x,int y):calculator(x,y)
    {

    }
     double calculation()
        {
            return x+y;
        }
};
class subtraction:public calculator
{
   public:
    subtraction(int x,int y):calculator(x,y)
    {

    }
     double calculation()
        {
            return x-y;
        }

};
class multiplication:public calculator
{
   public:
    multiplication(int x,int y):calculator(x,y)
    {

    }
     double calculation()
        {
            return x*y;
        }

};
int main()
{
     calculator *p;
     summation ob1(10,10);
     subtraction ob2(10,10);
     multiplication ob3(10,10);
     p=&ob1;
    cout<<"summation:"<<p->calculation()<<endl;
     p=&ob2;
    cout<<"subtraction:"<<p->calculation()<<endl;
     p=&ob3;
    cout<<"multiplication:"<<p->calculation()<<endl;
    getch();
}

/


//4 a

#include<iostream>
#include<conio.h>
using namespace std;
class base
{
    public:
   virtual void show()
   {
        cout<<"in base class"<<endl;
      }

};
class derived1:virtual public base
{
    public:
    void show()
    {
      cout<<"d1"<<endl;

    }
};
class derived2:virtual public base
{
    public:
      void show()
      {
        cout<<"d2"<<endl;
      }

};
class derived3:public derived1,public derived2
{
    public:
      void show()
      {
        cout<<"d3"<<endl;
      }

};
int main()
{
     base ob1,*b;
    ob1.show();
    derived1 ob2;
    b=&ob2;
    b->show();
    derived2 ob3;
    b=&ob3;
   b->show();
   derived3 ob4;
    b=&ob4;
   b->show();
    getch();
}
//4 b

#include<iostream>
#include<conio.h>
using namespace std;
class shape
{
     public:
     int x,y;
    void setdata(int x,int y)
    {
       this->x=x;
       this->y=y;
    }
     virtual double display_area()
        {
            return 0;
        }
    };
class triangle:public shape
{
    public:
    void setdata(int x,int y)
    {

       this->x=x;
       this->y=y;

    }
     double display_area()
        {
            return .5*x*y;
        }
};

class rectangle:public shape
{
    public:
    void setdata(int x,int y)
    {

       this->x=x;
       this->y=y;

    }
     double display_area()
        {
            return x*y;
        }
};
int main()
{
     shape *p;
     triangle ob1;
     ob1.setdata(10,10);
     rectangle ob2;
     ob2.setdata(10,10);

     p=&ob1;
    cout<<"triangle area:"<<p->display_area()<<endl;
     p=&ob2;
    cout<<"rectangle area:"<<p->display_area()<<endl;

    getch();
}



//2 b
#include <iostream>
using namespace std;
class coord
{
int x, y;
public:
coord()
{
x=0;
y=0;
}
coord(int a, int b)
{
x = a;
y = b;
}
friend coord operator + ( coord c1,int c2);
friend coord operator + (int c1,coord oc2);
void show()
{cout << x << " "<< y << "\n";
}
} ;
coord operator + ( coord c1,int c2)
{
coord temp;
temp.x = c1.x + c2;
temp.y = c1.y + c2;
return temp;
}
coord operator + (int c1,coord c2)
{
coord temp;
temp.x = c2.x + c1;
temp.y = c2.y + c1;
return temp;
}
int main()
{
coord o1(10, 10);
o1 = o1 + 10;
o1.show();
o1= 99 + o1;
o1 .show();
return 0;
}
//1 a
#include<iostream>
using namespace std;
class A
{

    public:
      double x;
    A(int n)
    {
        x=n;
    }

};
class B:public A
{

    public:
         double y;
    B(int n):A(10)
    {
        y=n;
    }
};
class C:public B
{
public:
    C():B(2)
    {

    }
   void divided()
    {
        double result=double(x/y);
         cout<<result;
    }
};
int main()
{
    B ob(2);
    C o;
    o.divided();

}*/
//1 b

#include<iostream>
#include<string.h>
using namespace std;
class name
{
   public:
    char firstname[20],middlename[20],thirdname[20];

    name(char firstname[], char middlename[],char thirdname[])
    {
        strcpy(this->firstname,firstname);
        strcpy(this->middlename,middlename);
        strcpy(this->thirdname,thirdname);
    }
    void operator+()
    {
            strcat(firstname,middlename);
        cout<< strcat(firstname,thirdname);
    }
};

int main()
{
    char firstname[] = "naeem ";
    char middlename[] = "islam ";
    char thirdname[] ="jr ";
    name ob(firstname,middlename,thirdname);
    +ob;
    return 0;
}
