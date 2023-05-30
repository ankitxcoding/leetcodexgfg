#include<bits/stdc++.h>
using namespace std;

class Solution{
	public:
	vector<long long> findMissing(long long A[], long long B[],  
                 int N, int M) 
	{ 
	    unordered_map<long long, int> mp;
        vector<long long> v;
    
        for(int i=0; i<M; i++) {
            mp[B[i]]++;
        }
        for(int i=0; i<N; i++) {
            if(mp.find(A[i])==mp.end() || mp[A[i]]==0) {
                v.push_back(A[i]);
            }
        }
        return v;
	}
};