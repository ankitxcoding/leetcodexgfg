#include<bits/stdc++.h>
using namespace std;

// User function Template for C++

class Solution{
    public:
    vector<int> removeDuplicate(int A[], int N) {
        unordered_set<int> s;
        vector<int> v;
        for(int i=0; i<N; i++)
            if(s.find(A[i])==s.end()) {
                s.insert(A[i]);
                v.push_back(A[i]);
            }
        return v;
    }
};