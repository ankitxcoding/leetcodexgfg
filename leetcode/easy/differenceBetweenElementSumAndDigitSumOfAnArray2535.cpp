#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        int digitSum=0;
        for(int i=0; i<n; i++) {
            sum+=nums[i];
        }
        for(int i=0; i<n; i++) {
            while(nums[i]) {
                digitSum+=nums[i]%10;
                nums[i]/=10;
            }
        }
        return abs(sum-digitSum);
    }
};