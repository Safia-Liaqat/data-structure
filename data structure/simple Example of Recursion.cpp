#include<iostream>
#include<conio.h>
using namespace std;
void Count(int a)
{
    cout<<endl<<a;
    if(a<2)
        Count(a+1);
}
int main()
{
    Count(0);
}

