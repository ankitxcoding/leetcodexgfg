#include<bits/stdc++.h>
using namespace std;

// Function to find square root
// x: element to find square root
class Solution{
  public:
    long long int floorSqrt(long long int x) {
        if (x <= 1)
            return x;
        long long int left=1, right=x, squareRoot=0;
        while (left<=right) {
            long long int mid=left+(right-left)/2;
            if (mid<=x/mid) {
                squareRoot=mid;
                left=mid+1;
            }
            else
                right=mid-1;
        }
        return squareRoot;
    }
};