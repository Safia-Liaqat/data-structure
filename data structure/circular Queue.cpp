#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;
#define SIZE 5
class Queue
{
    int arr[SIZE];
    int rear,frnt;
public:
    Queue()
    {
        rear=SIZE-1;
        frnt=SIZE-1;
    }
    void insertelement(int x)
    {
        if(rear==SIZE-1)
            rear=0;
        else
            rear++;
        if(rear==frnt)
        {
            cout<<"Queue if full..."<<endl;
            exit(1);
        }
           arr[rear]=x;
    }
    int removeelement()
    {
        if(isempty())
        {
            cout<<"Queue is empty..."<<endl;
            exit(1);
        }
        if(frnt==SIZE-1)
            frnt=0;
        else
            frnt++;
        return arr[frnt];
    }
    bool isempty()
    {
        if(rear==frnt)
            return true;
        else
            return false;
    }
    void show()
    {
        cout<<"Data in Queue is..."<<endl;
        int i=frnt;
        while(i!=rear)
        {
             if(i==SIZE-1)
                i=0;
            else
                i++;

            cout<<arr[i]<<endl;
        }
    }
    void deleteAllElements()
    {

        while(frnt!=rear)
        {
            removeelement();
        }
    }
};
int main()
{
    Queue q1;

    q1.insertelement(3);
    q1.insertelement(7);
    q1.insertelement(12);
    /* cout<<q1.removeelement()<<endl;
    cout<<q1.removeelement()<<endl;*/
    q1.show();
    q1.deleteAllElements();
    q1.show();

    _getch();
}

