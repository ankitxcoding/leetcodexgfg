#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int pivotInteger(int n) {
        int sum=n*(n+1)/2;
        int sqroot=sqrt(sum);
        return sqroot*sqroot==sum? sqroot: -1;
    }
};