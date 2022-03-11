#include<iostream>
#include<conio.h>
using namespace std;
int GCD(int a , int b)
{
    if(b==0)
        return a;
    else
        return GCD(b,a%b);
}
int main()
{
    int x,y;
    cout<<"enter two numbers  :  ";
    cin>>x>>y;
    int gratest_common_factor=GCD(x,y);
    cout<<"The gratest common division factor is  : "<<gratest_common_factor;
}

