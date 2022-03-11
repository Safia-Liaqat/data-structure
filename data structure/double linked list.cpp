#include <iostream>
#include <conio.h>
using namespace std;
class node {
	public:
		int data;
		node* left,*right;
};

class DoubleLinkList {
	private:
		node *head;
	public:
		DoubleLinkList() {
			head = NULL;
		}

		void InsertAtHead(int x) {
			node* newer = new node();
			newer->data = x;
			newer->left = NULL;
			if(head==NULL) {
				newer->right=NULL;
			} else {
				newer->right = head;
				head->left= newer;
			}
			head = newer;


		}
		void ShowList() {
			node* temp = head;
			while(temp != NULL) {
				cout<<"Node value is "<<temp->data<<endl;
				temp = temp->right;
			}
		}

		bool IsEmpty() {
			if(head == NULL)
				return true;
			else
				return false;
		}


		node* SearchNode(int val) {
			node* temp = head;
			while(temp != NULL) {
				if(temp->data == val)
					break;
				temp = temp->right;
			}
			return temp;
		}

		void InsertAtEnd(int val) {
			if(head == NULL)
				InsertAtHead(val);
			else {
				node* temp = head;
				while(temp->right != NULL) {
					temp = temp->right;
				}
				node* newer = new node();
				newer->data = val;
				newer->right = NULL;
				newer->left = temp;
				temp->right = newer;
			}
		}

		void InsertAfter(int key) {
			node* temp = SearchNode(key);
			if(temp==NULL) {
				cout<<"Not Possible"<<endl;
				exit(1);
			} else {
				int x;
				cout<<"Enter value: ";
				cin>>x;
				if(head==temp) {
					InsertAtEnd(x);
				}
				node* newer = new node();
				newer->data = x;
				newer->left = temp;
				newer->right= temp->right;
				temp->right->left= newer;
				temp->right=newer;

			}

		}

		void DelBefore(int key) {
			if(head==NULL) {
				cout<<"Empty list"<<endl;
				exit(1);
			}
			node* temp = SearchNode(key);
			if(temp != NULL) {
				if(temp == head) {
					cout<<"Deletion not possible"<<endl;
				} else {
					//node* temp1 = temp->left;
					//node* temp2 = temp1->left;
					//temp->left = temp2;
					//if(temp2 == NULL) {
					//	head = temp;
					//} else {
					//	temp2->right = temp;
					//}
					
					node* temp1 = temp->left;
					temp->left=temp1->left;
					if(temp1->left == NULL) {
						head = temp;
					} else {
						temp->left->right = temp;
					}

					cout<<"Delete value is "<<temp1->data<<endl;
					delete temp1;
				}
			} else
				cout<<"Value not fount"<<endl;
				}

		//	}
		//}
};

int main() {
	DoubleLinkList l1;
	l1.InsertAtHead(12);
	l1.InsertAtHead(78);
	l1.InsertAtHead(45);
	l1.InsertAtHead(-99);
	//l1.InsertAfter(78);
	l1.ShowList();
	l1.DelBefore(45);
	l1.ShowList();
}

