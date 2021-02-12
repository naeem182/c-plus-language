
/*#include <iostream>
using namespace std;
class Complex
{
  int x,y;
  public:
    Complex()
    {}
  Complex(int a, int b)
  {
      x=a;
      y=b;
  }
  Complex operator +(Complex ob)
  {
      Complex temp;
        temp.x=x+ob.x;
        temp.y=y+ob.y;
        return temp;
  }
  Complex operator -(Complex ob)
  {
       Complex temp;
        temp.x=x-ob.x;
        temp.y=y-ob.y;
        return temp;
  }
  void show()
  {
      cout<<x<<" "<<y<<"\n";
  }
};
int main()
{
    Complex o1(10, 10), o2(5, 3);
    Complex ob,ob1;
    ob = o1 +o2;
    ob1 = o1-o2;
    ob.show();
    ob1.show();
}
*/
#include <iostream>
using namespace std;
class Coord
{
  int x,y;
  public:
    Coord()
    {
        x=0;
        y=0;
    }
 Coord(int i, int j)
  {
      x=i;
      y=j;
  }
  void get(int &i,int &j)
  {
      i=x;
      j=y;

  }
  Coord operator +(int i);
};
 coord Coord:operator+(int i)
{
    coord temp;
    temp.x=x+i;
    temp.y=y+i;
    return temp;
}
int main()
{
    coord o1(10, 10),o2;
     int x,y;
    o1 = o1+10;
    o1.get(x,y);
    cout<<x<<"  "<<y<<endl;
    //ob1=99+o1;

}

