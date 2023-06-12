// max min in array 
#include<iostream>
#include<math.h>
using namespace std;
int getmax(int arr[],int n){
	int max=INT_MIN;
	for(int i=0;i<n;i++){
		if(arr[i]>max)max=arr[i];
	 //maxi=max(maxi,arr[i]);
	}
	return max;
	
}
int getmin(int arr[],int n){
	int min=INT_MAX;
	for(int i=0;i<n;i++){
		if(arr[i]<min)min=arr[i];
	}
	return min;
}
int main(){
	int n;
	cin>>n;
	int arr[100];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"max elemnt is"<<getmax(arr,n);
	cout<<" minn elemnet is "<<getmin(arr,n);
	return 0;
	
}
