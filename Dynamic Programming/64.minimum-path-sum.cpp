/*
 * @lc app=leetcode id=64 lang=cpp
 *
 * [64] Minimum Path Sum
 */
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:

    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size();
        int n=grid[0].size();
    
        vector<int> prev(n,0);
        for(int i=0;i<m;i++){
            vector<int> curr(n,INT16_MAX);

            for(int j=0;j<n;j++){
                if(i==0 && j==0) curr[j]=grid[i][j];
                else{
                    if(i>0) curr[j]=grid[i][j]+prev[j];
                    if(j>0) curr[j]=min(curr[j],grid[i][j]+curr[j-1]);
               }
            }
            prev=curr;
        }
        return prev[n-1];
    }
};

