#include<iostream>
using namespace std;
bool lsearch(int arr[],int key,int n){
	for(int i=0;i<n;i++){
		if(arr[i]==key){
			return 1;
		}
	}
	return 0;
}

int main(){
	int arr[10]={1,4,6,7,34,5,55,-9,8,6};
	int key;
	cin>>key;
	bool found=lsearch(arr,key,10);
	if(found){
		cout<<"key is present";
	}
	else{
		cout<<"key is not present";
	}
	return 0;
	
}
