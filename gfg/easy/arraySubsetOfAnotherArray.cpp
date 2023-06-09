#include<bits/stdc++.h>
using namespace std;

string isSubset(int a1[], int a2[], int n, int m) {
    unordered_map<int, int> mp;
    for(int i=0; i<n; i++)
        mp[a1[i]]++;
    for(int j=0; j<m; j++)
        if(mp.find(a2[j])!=mp.end() && mp[a2[j]]>0)
            mp[a2[j]]--;
        else
            return "No";
    return "Yes";
}