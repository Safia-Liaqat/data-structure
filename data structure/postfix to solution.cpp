#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int top=-1;

void push(int arr[],int num);
int pop(int arr[]);
int evaluate(int arr[],char symbol);

int main()
{
    char arr[100];
    cout<<"Enter an expression : ";
    cin>>arr;
    int sol[100];
    char symbol;
    int i=0;
    while(arr[i]!='\0')
    {

        symbol=arr[i];
        if(isdigit(symbol))
        {
            int num=0;
            num=num*10+(int)(symbol-'0');
            push(sol,num);
        }
        else
        {
            int result=evaluate(sol,symbol);
            push(sol,result);
        }
        i++;
    }
    cout<<"Answer is "<<sol[0];
    _getch();
}
int evaluate(int arr[],char symbol)
{
    float oprnd2=pop(arr);
    float oprnd1=pop(arr);

    switch(symbol)
    {
    case'+':
        return oprnd1+oprnd2;
    case'-':
        return oprnd1-oprnd2;
    case'/':
        return oprnd1/oprnd2;
    case'*':
        return oprnd1*oprnd2;
    case'$':
        return pow(oprnd1,oprnd2);
    }
}
int pop(int arr[])
{
    return arr[top--];
}
void push(int arr[],int num)
{
    arr[++top]=num;
}

