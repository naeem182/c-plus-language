#include<iostream>
using namespace std;
class num
{
    int value;
public:
    num()
    {
      value=10;
    }
    void display()
    {
        cout<<value<<endl;
    }
    void operator++(int)
    {
        value=value+5;
    }
};
int main()
{
    num obj;
    obj++;
    obj.display();
}

