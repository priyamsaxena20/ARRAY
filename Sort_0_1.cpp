#include<iostream>
using namespace std;
void swap(int arr[],int n){
	 int i=0;
	 int j=n-1;
	 while(i<j){
	 	while(arr[i]==0&&  i<j){
	 		i++;
		 }
		 while(arr[j]==1 && i<j){
		 	j--;
		 }
	 	if(i<j){
	 		swap(arr[i++],arr[j--]);
		 }
	 	
	 	
	 	
	 }
	 
	
}
void print(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}


int main(){
	int arr[8]={1,0,1,1,0,0,0,0};
	swap(arr,8);
	print(arr,8);
	return 0;

}
