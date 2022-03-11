#include <iostream>
#include <conio.h>

using namespace std;
int addodd(int n,int limit);
int main()
{
    int n;

    cout<<"Enter Odd number : ";
    cin>>n;


    cout<<"Sum of next 10 odd number is = "<<addodd(n,n+20);
    _getch();
}

int addodd(int n,int limit)
{
    if(n%2==0)
    {
        cout<<"This is not an odd number..so program will consider "<<++n<<endl;
        limit++;
    }
    if(n==limit)
        return 0;
    else
        return n+addodd(n+2,limit);
}

