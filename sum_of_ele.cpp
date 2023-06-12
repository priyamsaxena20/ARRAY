#include<iostream>
using namespace std;
int summ(int arr[],int n){
	int sum=0;
	for(int i=0;i<n;i++){
		sum=sum+i;
	}
	return sum;
}
int main(){
	int n;
	cin>>n;
	int arr[100];
	for(int i=0;i<n;i++){
		cin>>arr[i];
		
	}
	cout<<"the su is"<<summ(arr,n);
	return 0;
}
