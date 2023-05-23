#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(), nums.end());
        int count=1;
        for(int i=0; i<n; i++) {
            if(nums[i]==count)
                count++;
        }
        return count;
    }
};