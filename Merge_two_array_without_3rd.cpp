//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends
class Solution{
    public:
        //Function to merge the arrays.
        void merge(long long arr1[], long long arr2[], int n, int m) 
        { 
            // code here 
            int start=n-1;
            int end=0;
            while(start>=0&&end<m){
                if(arr1[start]>arr2[end]){
                    swap(arr1[start],arr2[end]);
                    start--;
                    end++;
                }
                else{
                break;
                }
            }
             sort(arr1,arr1+n);
        sort(arr2,arr2+m);
            
            
        } 
       
};

