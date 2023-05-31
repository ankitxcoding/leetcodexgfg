#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countDigits(int num) {
        int digit=0;
        int div=num;
        while(div) {
            if(num%(div%10)==0)
                digit++;
            div/=10;
        }
        return digit;
    }
};