#include<iostream>
#include<conio.h>
using namespace std;
int Multiply(int a,int b)
{
    if(b==1)
        return a;
    else
    {
        int c=a+Multiply(a,b-1);
        return c;
    }
}
int main()
{
    int x,y;
    cout<<"enter two numbers to be multiplied   :  ";
    cin>>x>>y;
    int z=Multiply(x,y);
    cout<<"The result is   :  "<<z;
}

