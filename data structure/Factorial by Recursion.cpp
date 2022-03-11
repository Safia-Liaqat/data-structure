//  Factorial by recursoin
#include<iostream>
#include<conio.h>
using namespace std;
int factorial(int n)
{
    if(n==0)
        return 1;
    else
    {
        int y=n*factorial(n-1);
        return y;
    }
}
int main()
{
    int no;
    cout<<"enter a number whose factorial is to be find...:";
    cin>>no;
    int fact=factorial(no);
    cout<<"\n Factorial of number is  :  "<<fact;
}

