int binarysearch(vector<int>& arr,int s,int e,int key){
	
	int start=s;
	int end=e;
	
	while(s<=e){
        int mid=start +(end-start)/2;
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
int getpivot(vector<int>& arr,int n){
int	lo=0;
int hi=n-1;
while(lo<hi){
int mid=lo+(hi-lo)/2;
if(arr[mid]<arr[hi]){
	hi=mid;
}
else{
	lo=mid+1;
}	
}
return lo;//lo
}
int search(vector<int>& arr, int n, int k)
{
    // Write your code here.
    // Return the position of K in ARR else return -1.
    int pivot=getpivot(arr, n);
	if(k>=arr[pivot]&& k<=arr[n-1]){
		return binarysearch(arr, pivot, n-1, k);
	}
	else{
		return binarysearch(arr, 0,pivot-1, k);
	}
    
}
