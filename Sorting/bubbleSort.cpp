#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[100];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	/*
	no of rounds:n-1
	n-1 iterations
	every iteration has n-i iterations
	*/
	
	int counter=1;
	while(counter<n){
		for(int i=0;i<n-counter;i++){
			if(arr[i]>arr[i+1]){
				swap(arr[i],arr[i+1]);
			}
		}
		counter++;
	}
	
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}
