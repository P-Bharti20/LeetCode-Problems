/*
 * @lc app=leetcode id=62 lang=cpp
 *
 * [62] Unique Paths
 */

//O(n) space optimized solution
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    /* Optimized Solution
    int uniquePaths(int m, int n) {
        double res=1;
        for(int i=1;i<m;i++){
           res=res*(n-1+i)/i;
        }
        return (int)res;
    }*/

    int uniquePaths(int m, int n) {
        vector<int> prev(n,1);
        
        for(int i=1;i<m;i++){
            vector<int> curr(n,1);

            for(int j=1;j<n;j++){
               curr[j]=prev[j]+curr[j-1];
            }
            prev=curr;
        }
        return prev[n-1];
    }
};

