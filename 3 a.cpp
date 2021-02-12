
#include<iostream>
  using namespace std;
  class student2;
  class student1
  {
      int mark1,mark2,mark3;

      public:
          float avg1;
   student1(int m1,int m2,int m3)
      {
          mark1=m1;
          mark2=m2;
          mark3=m3;
          avg1=float(mark1+mark2+mark3)/3;
          cout<<"student1 average marks:"<<avg1<<endl;
     }
  void compare(student1 ob1,student2 ob2);
};
  class student2
  {
      int mark1,mark2,mark3;
      public:
          float avg2;
    student2(int a,int b,int c)
      {
          mark1=a;
          mark2=b;
          mark3=c;
      }
   public: void avg()
      {
          avg2=float(mark1+mark2+mark3)/3;
           cout<<"student2 average marks:"<<avg2<<endl;}
   void compare(student1 ob1,student2 ob2);
};
  void compare(student1 ob1,student2 ob2)
  {

      if(ob1.avg1>ob2.avg2)
      cout<<"student1 marks is greater than student2";
     else if(ob2.avg2>ob1.avg1)
      cout<<"student2 marks is greater than student1";
      else
      cout<<"student1 and student2 marks are equall";
  }
  int main(){student1 naeem(80,81,82);
      student2 plabon(81,80,82);
      plabon.avg();
      compare(s1,s2);
  }
