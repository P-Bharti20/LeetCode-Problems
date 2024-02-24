/*
 * @lc app=leetcode id=931 lang=cpp
 *
 * [931] Minimum Falling Path Sum
 */
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n=matrix[0].size();

        vector<int> prev = matrix[0];
        for(int i=1;i<m;i++){
            vector<int> curr(n,1e9);
            for(int j=0;j<n;j++){
                curr[j]=min(curr[j],matrix[i][j]+prev[j]);
                if(j>0) curr[j]=min(curr[j],matrix[i][j]+prev[j-1]);
                if(j<n-1) curr[j]=min(curr[j],matrix[i][j]+prev[j+1]);
            }
            prev=curr;
        }

        int ans=prev[0];
        for(int i=0;i<n;i++) 
            ans=min(ans,prev[i]);
        return ans;
    }
};

