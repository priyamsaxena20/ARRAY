#include<iostream>
using namespace std;
int pivot(int arr[],int n){// arr[i]>arr[i+1]
	int s=0;
	int e=n-1;
	while(s<e){
		int mid=s+(e-s)/2;
		if(arr[mid]>=arr[0]){
			s=mid+1;
			
		}
		else{
			e=mid;
		}
		
	}
	return s;
}


int main(){
	int arr[6]={111,82,12,17,10,11};
   cout<<"the pivot elemet index is"<<pivot(arr,6);
	return 0;
	
}
