#include<iostream>
#include<stack>
using namespace std;
class Stack{
	public:
		int *arr;
		int top1;
		int top2;
		int size;
		
    //behaviour
    TwoStacks(int s){
    	this->size=s;
    	arr=new int[size];
    	top1=-1;
    	top2=s;
	}
	void push1(int num){
		if(top2-top1>1){
			top1++;
			arr[top1]=num;
		}
		else{
			cout<<"Stack overflow";
		}
	}
	void push2(int num){
		if(top2-top1>1){
			top2--;
			arr[top1]=num;
		}
		else{
			cout<<"Stack overflow";
		}
	}
	
};
int main(){

}
