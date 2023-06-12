#include<iostream>
using namespace std;
void print(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
void reverse(int arr[],int n){
	
		int s=0;
		int e=n-1;
		while(s<e){
			swap(arr[s++],arr[e--]);
		}
	}

int main(){
	int arr[6]={1,5,22,34,0,7};
	int arr1[5]={-0,9,76,12};
	reverse(arr,6);
	reverse(arr1,5);
	print(arr,6);
	print(arr1,5);
	 return 0;
	
}
