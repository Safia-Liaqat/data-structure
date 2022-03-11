#include<iostream>
using namespace std;
struct node{
	int data;
	node *next;
};
class linkedqeue{
	private:
		int data;
		node *front, *rear;
		public:
		linkedqeue()
		{
			front=NULL;
			rear=NULL;
		}
		void add_a_node(int data)
		{
			node *temp=new node;
			temp->data=data;
			temp->next=NULL;
		if(front==NULL)
			{
				front=temp;
				rear=temp;
				rear->next=NULL;	
			}
		else 
		{
			rear->next=temp;
			rear=temp;
			rear->next=NULL;
			
			}	
		}
		void display()
		{
			node *temp=new node;
			temp=front;
			while(temp=NULL)
			{
				cout<<temp->data<<endl;
				temp=temp->next;
			}
		}
};
int main()
{
	linkedqeue lq;
	lq.add_a_node(10);
	lq.add_a_node(20);
	lq.add_a_node(30);
	lq.display();
}

