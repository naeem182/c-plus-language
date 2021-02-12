/*creat a class rechtangle.it has two int member length and width.
constructor set value& while no parameter set value zero.creat amem fun  display()
that will t\ke obj is parameter and calculate the rechtangle area*/

 #include<iostream>
  using namespace std;
  class rechtangle
  {
      public:
      int length,width;
      rechtangle(int x,int y)
      {
         length=x;
         width=y;
      }
      rechtangle()
      {
          length=0;
          width=0;
      }

      void display(rechtangle object)//passing object to funtion
      {
         cout<<"rechtangle area:"<<(object.length*object.width)<<endl;
      }
};
  int main()
  {
      rechtangle ob(2,4),ob1;
      ob.display(ob);     //display is a member fun.so it declare is ob.fun(ob)
      ob1.display(ob1);    //passing obj value to fun

  }
