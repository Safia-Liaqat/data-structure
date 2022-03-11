#include<iostream>
#include<conio.h>
#define SZ 100
using namespace std;
class Stack
{
private:
    int item[SZ];
    int top;
public:
    Stack()
    {
        top=-1;
    }
    void push(int val)
    {
        if(top>=SZ-1)
            cout<<"Stack is full..";
        else
            item[++top]=val;
    }
    int pop()
    {
        if(top==-1)
            cout<<"Stack is Empty..";
        return item[top--];
    }
    void show()
    {
        if(top==-1)
            cout<<"Stack is empty ..";
        for(int i=top;i>-1;i--)
        {
            cout<<item[i]<<endl;
        }
    }
     bool Empty()
    {
        if(top==-1)
            return true;
        else
            return false;
    }


};
int main()
{
    Stack s;
    char arr[100];
    cout<<"enter mathimatical expretion :  ";
    cin>>arr;
    bool valid=true;
    char symbol;

    for(int i=0;arr[i]!='\0';i++)
    {
        symbol=arr[i];
        if(symbol=='['||symbol=='{'||symbol=='(')
            {
                s.push(symbol);
            }
        if(symbol==']'||symbol=='}'||symbol==')')
        {
            if(s.Empty())
            {
                valid=false;
            }
            else
            {
                char i=s.pop();
                if(i=='['&&(symbol=='}'||symbol==')'),i=='{'&&(symbol==']'||symbol==')'),i=='('&&(symbol=='}'||symbol==']'))
                {
                    valid=false;
                }
            }
        }
    }
    if(!s.Empty())
    {
        valid=false;
    }
    if (valid)
    {
        cout<<"String is valid...";

    }
    else
    {
        cout<<"string is not valid...";
    }

}

