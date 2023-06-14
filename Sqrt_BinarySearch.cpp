long long int binary(int n){

  int s=0;
  int e=n;
  long long int ans=-1;
  while(s<=e){
     long long int mid=s+(e-s)/2;
     
     long long int compare=mid*mid;
      if(compare==n){
          return mid;
      }
      if(compare<n){
          ans=mid;
          s=mid+1;
      }
      else{
          e=mid-1;
      }
      
  }

return ans;


}
int floorSqrt(int n)
{
    // Write your code here.
    return binary(n);
}
