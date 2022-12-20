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
    Stack(int s){
    	this->size=s;
    	arr=new int[s];
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
	int pop1(){
		if(top1>=0){
			int ans=arr[top1];
			top1--;
			return ans;
		}
		else{
			return -1;
		}
	}
	int pop2(){
		if(top2>=0){
			int ans=arr[top2];
			top2++;
			return ans;
		}
		else{
			return -1;
		}
	}
};

int main(){
   Stack st(5);
   st.push1(1);
   st.push1(2);
   st.push1(3);
   st.push2(4);
   st.push2(5);
   
}
