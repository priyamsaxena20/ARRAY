int findDuplicate(vector<int> &arr) 
{
    // Write your code here
    int  slow=arr[0];//slow=arr[0];
    int fast=arr[0];
    do{
        slow=arr[slow];
        fast=arr[arr[fast]];
    }
    while(slow!=fast);
    fast=arr[0];
    while(slow!=fast){
      slow=arr[slow];  //slow=slow+1;
        fast=arr[fast];//fast=fast+1;
    }
    return slow;
	
}
