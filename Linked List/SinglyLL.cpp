#include<iostream>
using namespace std;
class Node{
	public:
		int data;
		Node *next;
		
		Node(int data){
			this->data=data;
			this->next=NULL;
		}
};
Node *takeinput(){
	int data;
	cin>>data;
	Node* head=NULL;
	Node* tail=NULL;
	while(data!=-1){
		Node* newnode=new Node(data);
		if(head==NULL){
			head=newnode;
			tail=newnode;
		}
		else{
			tail->next=newnode;
			tail=tail->next;
		}
		cin>>data;
	}
	return head;
}
void print(Node* head){
	while(head!=NULL){
		cout<<head->data<<" ";
		head=head->next;
	}
	cout<<endl;
}
Node* insertAtHead(Node* head,int data){
	Node* newNode=new Node(data);
	newNode->next=head;
	head=newNode;
	return head;
}
Node* insertAtTail(Node* head,int data){
	Node* newNode=new Node(data);
	Node* temp=head;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	temp->next=newNode;
	temp=newNode;
	temp->next=NULL;
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
	temp=newNode;
	newNode->next=temp1;
	return head;
}
Node* insertAtMid(Node* head,int data,int size){
	Node* newNode=new Node(data);
	Node* temp=head;
	int count=0;
	while(count<size){
		temp=temp->next;
		count++;
	}
	Node* temp1=temp->next;
	temp->next=newNode;
	temp=newNode;
	newNode->next=temp1;
	return head;
}
int length(Node* head){
	int count=0;
	while(head!=NULL){
		head=head->next;
		count++;
	}
	return count;
}
Node* deleteHead(Node* head){
	head=head->next;
	return head;
}
int main()
{
//statically
//Node n1(1);
//Node *head=&n1;
//Node n2(2);
//n1.next=&n2;
//cout<<n1.data<<" "<<n2.data<<endl;
//
//
// dynamically
//	Node* n3=new Node(10);
//    head=n3;
//    Node *n4=new Node(20);
//    n3->next=n4;
  Node* head=takeinput();
  head=insertAtHead(head,10);
  head=insertAtTail(head,11);
  head=insertAtIthPos(head,23,3);
  head=insertAtMid(head,56,length(head)/2);
  print(head);
  head=deleteHead(head);
  print(head);
  cout<<length(head)<<endl;
}
