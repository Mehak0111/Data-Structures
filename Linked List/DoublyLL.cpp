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
Node* insertAtTail(Node* head,int data){
	Node* newNode=new Node(data);
	Node *temp=head;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	temp->next=newNode;
	newNode->prev=temp;
	newNode->next=NULL;
	return head;
}
Node* insertAtIthPos(Node* head,int data,int index){
	Node* newNode=new Node(data);
	Node* temp=head;
	int count=0;
	while(count<index-1){
		temp=temp->next;
		count++;
	}
	Node* temp1=temp->next;
	temp->next=newNode;
	newNode->prev=temp;
	newNode->next=temp1;
	temp1->prev=newNode;
	return head;
}
int main(){
	Node *n=new Node(1);
	Node *head=n;
	head=insertAtHead(head,13);
	head=insertAtTail(head,24);
	head=insertAtIthPos(head,56,2);
	print(head);
}
