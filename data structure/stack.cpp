#include<iostream>
#include<conio.h>
#define SZ 5
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
    void Stacktop()
    {
        if(top==-1)
            cout<<"Stack is empty ..";
        else
            cout<<item[top];
    }
};
int main()
{
    Stack s;
    //s.pop();
    //s.show();
    //s.Stacktop();
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    //s.push(6);
    //cout<<s.pop()<<endl;
    //cout<<s.pop()<<endl;
    //s.show();
    s.Stacktop();
}

