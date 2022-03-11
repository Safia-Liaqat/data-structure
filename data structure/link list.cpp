
#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;
class node
{
    public:
        node* next;
        int item;
};
class singlelist
{
private:
    node* first;
public:
    singlelist(): first(NULL) {}

    void InsertAtHead(int val)
    {
        node* newer=new node();
        newer->item=val;
        newer->next=first;
        first=newer;
    }

    void ShowList()
    {
        node* temp=first;
        cout<<"Data in Linked List is..."<<endl;
        while(temp!=NULL)
        {
            cout<<"Node value is    "<<temp->item<<endl;
            temp=temp->next;
        }
        cout<<endl<<endl;
    }

    void InsertAtEnd(int val)
    {
        if(first==NULL)
            InsertAtHead(val);
        else
        {
            node* temp=first;
            while(temp->next!=NULL)
            {
                temp=temp->next;
            }
            node* newer=new node();
            newer->item=val;
            newer->next=NULL;
            temp->next=newer;
        }
    }

    bool isempty()
    {
        if(first==NULL)
            return true;
        else
            return false;
    }


    node* SearchNode()
    {
        int val;
        cout<<"\n\nInsert value to search : ";
        cin>>val;

        if(isempty())
            exit(1);

        node* temp=first;
        while(temp->item!=val && temp->next!=NULL)
        {
            temp=temp->next;
        }
        if(temp->next==NULL && temp->item!=val)
        {
            cout<<val<<" is not found"<<endl;
            exit(1);
        }
        return temp;
    }

    void DeleteHead()
    {
        if(isempty())
        {
            cout<<"List is empty"<<endl;
            exit(1);
        }
        node* temp=first;
        first=first->next;
        delete temp;
    }

    void DeleteEnd()
    {
        if(isempty())
        {
            cout<<"List is empty"<<endl;
            exit(1);
        }
        node* temp=first, *temp1=NULL;
        while(temp->next!=NULL)
        {
            temp1=temp;
            temp=temp->next;
        }
        temp1->next=temp->next;
        delete temp;
    }

    void InsertAfter()
    {
        node* temp=SearchNode();
        node* newer=new node();
        int val;
        cout<<"Enter value to insert : ";
        cin>>val;
        newer->item=val;
        newer->next=temp->next;
        temp->next=newer;
    }

    void InsertBefore()
    {
        node* temp1=SearchNode();
        node* newer=new node();
        int val;
        cout<<"Enter value to insert : ";
        cin>>val;
        if(temp1==first)
        {
            newer->item=val;
            newer->next=first;
            first=newer;
        }
        else
        {
            node* temp=first;
            while(temp->next!=temp1)
            {
                temp=temp->next;
            }
            newer->item=val;
            newer->next=temp1;
            temp->next=newer;
        }
    }

    void DeleteAfter()
    {
        node *temp1=SearchNode(),*temp2;
        if(temp1->next==NULL)
        {
            cout<<"Not possible";
            exit(1);
        }
        temp2=temp1->next;
        temp1->next=temp2->next;
        delete temp2;
    }

    void DeleteParticular()
    {

        node* temp=SearchNode();

        if(temp==first)
        {
            first=temp->next;
            delete temp;
        }
        else
        {
            node *temp1=first;
            while(temp1->next!=temp)
            {
                temp1=temp1->next;
            }
            temp1->next=temp->next;
            delete temp;

        }

    }

    void Concatinate(singlelist L2)
    {
        node *temp=first;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=L2.first;
    }
};
int main()
{
    singlelist L1;
    L1.InsertAtHead(71);
    L1.InsertAtHead(12);
    L1.InsertAtHead(9);
    L1.InsertAtHead(5);
    L1.InsertAtHead(-8);

  /*  L1.ShowList();
    node* temp=L1.SearchNode();
    cout<<temp->item<<" is found on address "<<temp<<endl;
  */

   /* L1.ShowList();
    L1.DeleteHead();
    L1.ShowList();
   */

    /*L1.ShowList();
    L1.DeleteEnd();
    L1.ShowList();
    */

    /*L1.ShowList();
    L1.InsertAfter();
    L1.ShowList();
    */

    /// Assignment
    
    /*L1.ShowList();
    L1.InsertBefore();
    L1.ShowList();
    */

    /*L1.ShowList();
    L1.DeleteAfter();
    L1.ShowList();
    */

    /*L1.ShowList();
    L1.DeleteParticular();
    L1.ShowList();
    */

    /// Concatination
    

    singlelist L2;
    L2.InsertAtHead(87);
    L2.InsertAtHead(10);
    L2.InsertAtHead(22);
    L2.InsertAtHead(-7);
    L2.InsertAtHead(66);

    L1.ShowList();
    L2.ShowList();
    L1.Concatinate(L2);
    L1.ShowList();



    _getch();
    return 0;
}


