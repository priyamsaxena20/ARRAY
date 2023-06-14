//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
int lastOcc(int arr[], int n, int key) {

    int s = 0, e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e) {

        if(arr[mid] == key){
            ans = mid;
            s = mid + 1;
        }
        else if(key > arr[mid]) {//Right me jao
            s = mid + 1;
        }
        else if(key < arr[mid]) {//left me jao
            e = mid - 1;
        }

        mid = s + (e-s)/2;
    }
    return ans;
}
int firstOcc(int arr[], int n, int key) {

    int s = 0, e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e) {

        if(arr[mid] == key){
            ans = mid;
            e = mid - 1;  // o
        }
        else if(key > arr[mid]) {//Right me jao
            s = mid + 1;
        }
        else if(key < arr[mid]) {//left me jao
            e = mid - 1;
        }

        mid = s + (e-s)/2;
    }
    return ans;
}
class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int count(int arr[], int n, int x) {
	    // code here
	   // int cnt=0;
	    int fir=firstOcc(arr,n,x);
	    if(fir==-1)return 0;// yani array m nhi hai
	    int last=lastOcc(arr,n,x);
	   
	    return (last-fir)+1;
	}
};

// //{ Driver Code Starts.

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n, x;
//         cin >> n >> x;
//         int arr[n];
//         for (int i = 0; i < n; i++) {
//             cin >> arr[i];
//         }
//         Solution ob;
//         auto ans = ob.count(arr, n, x);
//         cout << ans << "\n";
//     }
//     return 0;
// }

// } Driver Code Ends
