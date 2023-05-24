#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void printDiamond(int n) {
        // code here
        for(int row=0; row<n; row++) {
            for(int col=0; col<n-row-1; col++)
                cout<<" ";
            for(int col=0; col<=row; col++)
                cout<<"* ";
            cout<<endl;
        }

        for(int row=0; row<n; row++) {
            for(int col=0; col<row; col++)
                cout<<" ";
            for(int col=0; col<n-row; col++)
                cout<<"* ";
            cout<<endl;
        }
    }
};