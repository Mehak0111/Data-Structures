#include<iostream>
using namespace std;
class Node{
	public:
		int data;
		Node *next;
		Node *prev;
	Node(int data){
		this->data=data;
		this->next=NULL;
		this->prev=NULL;
	}
};
void print(Node *head){
	Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
Node* insertAtHead(Node* head,int data){
	Node* newNode=new Node(data);
	Node *temp=head;
	newNode->prev=NULL;
	newNode->next=head;
	head->prev=newNode;
	head=newNode;
	return head;
}
int main(){
	Node *n=new Node(1);
	Node *head=n;
	head=insertAtHead(head,13);
	print(head);
}
