

#include<iostream>
using namespace std;
class a
{
public:
    void sum(int a,int b)
    {
    }
};
class b: public a
{
};
class c: public a
{
};
class d: public b,public c
{
};
int main()
{
}
