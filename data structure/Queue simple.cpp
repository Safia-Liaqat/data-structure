#include<iostream>
#include<conio.h>
#define SZ 10
using namespace std;
class Queue
{
private:
    int a[SZ];
protected:
    int Rear;
    int Front;
public:
    Queue()
    {
        Front=0;
        Rear=-1;
    }
    bool IsEmpty()
    {
        if(Front>Rear)
            return true;
        else
            return false;
    }
    bool IsFull()
    {
        if(Rear==SZ-1)
            return true;
        else
            return false;
    }
    void Insert(int val)
    {
        if(IsFull())
            cout<<"Queue overflow...";
        else
            a[++Rear]=val;
    }
    int Delete()
    {
        if(IsEmpty())
            cout<<"Queue is Empty...";
        else
            {
                int x;
                x=a[0];

                for(int i=0;i<Rear;i++)
                {
                    a[i]=a[i+1];
                }
                Rear--;

                return x;

            }
    }
    void show()
    {
        if(IsEmpty())
            cout<<"Queue is Empty...";
        else
            {

                for(int i=Front;i<=Rear;i++)
                {
                    cout<<a[i]<<endl;
                }
            }
    }
};
int main()
{
    Queue q;
    q.Insert(12);
    q.Insert(4);
    q.Insert(16);
    q.Insert(49);
    q.Insert(2);
    q.Insert(3);
    q.Insert(1);
    q.Insert(41);
    q.Insert(11);
    q.Insert(8);
    q.Delete();
    q.Delete();
    q.Delete();
    q.Delete();
    q.Delete();
    q.Insert(0);
    q.show();

}

