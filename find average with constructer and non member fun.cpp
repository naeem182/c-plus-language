/*create a student class and takes marks type varriable
 and a constractor that will set vale of marks.
 creat a non member fun average that will take two obj and
  calculate average marks of two studrnt*/
  #include<iostream>
  using namespace std;
  class student
  {
  public:
    double marks;
      student(double x)
      {
          marks=x;
      }
  };
  void average(student ob1,student ob2)
  {
      cout<<"average:"<<float(ob1.marks+ob2.marks)/2;
  }
  int main()
  {
      student naeem(81),plabon(82);
      average(naeem,plabon);
  }
