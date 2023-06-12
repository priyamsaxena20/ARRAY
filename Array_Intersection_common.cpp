#include <bits/stdc++.h> 
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	// Write your code here.
	vector<int> ans;
	for(int i=0;i<n;i++){
		int element=arr1[i];
		for(int j=0;j<m;j++){
			if(arr2[j]==element){
				ans.push_back(element);
				arr2[j]=-111111111;
				break;
			}                             // this was brute force approach
		}
	}
	return ans;
}
/***********************************************************************************************************/
#include <bits/stdc++.h> 
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	// Write your code herebnhfy.

	// int 
	int i=0;
	int j=0;
	vector<int> ans;
	while(i<n&&j<m){
	if(arr1[i]==arr2[j])
	{
		ans.push_back(arr1[i]);
		i++;
		j++;
	}
	else if (arr1[i]<arr2[j])
	    {
		i++;
        } else {
          j++;
        }
        
        }
		return ans;
}
