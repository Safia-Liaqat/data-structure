#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

class node
{
public:
    int item;
    node *next;
};



class singlelist
{
private:
    node* frnt;
    node* rear;
public:
    singlelist(): frnt(NULL), rear(NULL) {}


    void insertvalue(int val)
    {
        node* newer=new node;
        newer->item=val;
        newer->next=NULL;
        if(rear==NULL)
            frnt=newer;
        else
            rear->next=newer;
        rear=newer;
    }

    void deletevalue()
    {
        if(isempty())
        {
            cout<<"Queue is empty...";
            exit(1);
        }
        node* temp=frnt;
        if(frnt==rear)
            frnt==rear==NULL;
        else
            frnt=frnt->next;
        cout<<"Deleted value is "<<temp->item<<endl;
        delete temp;
    }

    bool isempty()
    {
        if(frnt==NULL)
            return true;
        else
            return false;
    }
    void showlist()
    {
        node *temp=frnt;
        while(temp!=NULL)
        {
            cout<<"Value is "<<temp->item<<endl;
            temp=temp->next;
        }
    }

};


int main()
{
    singlelist L1;
    L1.insertvalue(49);
    L1.insertvalue(83);
    L1.insertvalue(29);
    L1.insertvalue(6);
    L1.insertvalue(70);
    L1.showlist();

    L1.deletevalue();
    L1.deletevalue();
    L1.deletevalue();
    L1.deletevalue();
    L1.deletevalue();
    L1.deletevalue();
    L1.showlist();

    _getch();
}

