#include<iostream>
using namespace std;
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
double moreP(int n,int precision,int tempsol){
	double fact=1;
	double ans=tempsol;
	for(int i=0;i<precision;i++){
		fact=fact/10;
		for(double j=ans;j*j<n;j=j+fact){
			ans=j;
		}
	}
	return ans;
}
int main(){
	int n;
	cout<<"enter the no."<<endl;
	cin>>n;
	int tempsol=binary(n);
	cout<<"ans is"<<moreP(n,3,tempsol);
	return 0;
	
}
