#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    // This function wants you to modify the given input
    // array and no need to return anything
    // arr: input array
    // n: size of array
    //Function to rearrange  the array elements alternately.
    void rearrange(long long *arr, int n) 
    { 
    	vector<int> v;
    	int i=0, j=n-1;
    	while(i<=n/2) {
    	    v.push_back(arr[j]);
    	    v.push_back(arr[i]);
    	    i++;
    	    j--;
    	}
    	for(int k=0; k<n; k++)
    	    arr[k]=v[k];
    }
};