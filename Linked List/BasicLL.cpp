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
int main()
{
	//statically
Node n1(1);
Node *head=&n1;
Node n2(2);
n1.next=&n2;
cout<<n1.data<<" "<<n2.data<<endl;


 //dynamically
	Node* n3=new Node(10);
    head=n3;
    Node *n4=new Node(20);
    n3->next=n4;
}