#include <iostream>
#include <conio.h>
using namespace std;

int prime(int num,int i);

int main()
{
    int n;
    cout<<"Enter number : ";
    cin>>n;
    if(prime(n,n/2)==1)
        cout<<"Yess..this is a prime number.."<<endl;
    else
        cout<<"NO..this is not a prime number.."<<endl;

    

}

int prime(int num,int i)
{

    if(i==1 || num==1)
        return 1;
    else if(num%i==0)
        return 0;
    else
    {
        int x=prime(num,i-1);
        return x;
    }
}

