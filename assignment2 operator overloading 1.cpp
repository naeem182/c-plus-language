#include<iostream>
#include<string.h>
using namespace std;
class name
{
   public:
    char x[20], y[20],z[20];

    name(char x[], char y[],char z[])
    {
        strcpy(this->x, x);
        strcpy(this->y, y);
        strcpy(this->z, z);
    }
    void operator+()
    {
            strcat(x,y);
        cout<< strcat(x,z);
    }
};

int main()
{
    char x[] = "Ummey ";
    char y[] = "Tasnia ";
    char z[] ="Ayshi ";
    name ob(x,y,z);
    +ob;
    return 0;
}
