#include<iostream>
#include<conio.h>
using namespace std;
int Fabonacci(int num)
{
    if(num==0||num==1)
        return num;
    else
        return Fabonacci(num-1)+Fabonacci(num-2);
}
int main()
{
    int no;
    cout<<"enter number from Fabonacci Series  : ";
    cin>>no;
    int fabo=Fabonacci(no);
    cout<<"Result is : "<<fabo;
}

