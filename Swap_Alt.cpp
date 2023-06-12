#include<iostream>
using namespace std;
void print(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
void alternate(int arr[],int n){
	for(int i=0;i<n;i=i+2){
		swap(arr[i],arr[i+1]);
	}
}

int main(){
	int arr[6]={1,2,4,5,7,8};
	alternate(arr,6);
	print(arr,6);
	return 0;
}
