#include<iostream>
using namespace std;
int binarysearch(int arr[],int n,int key){
	
	int s=0;
	int e=n-1;
	int mid=s+e/2;
	while(s<=e){
		if(key==arr[mid]){
			return mid;
		}
		else if(key<arr[mid]){
			e=mid-1;
		}
		else{
			s=mid+1;
		}
		mid=(s+e)/2;
		
	}
	return -1;
	
	
	
	
}
int main(){
	int arr[6]={2,3,4,11,41,5};
	
	
	int eindex=binarysearch(arr,6,2);
	cout<<"index of 2 is"<<" "<<eindex<<endl;
	
	
	
}
