/*
 * @lc app=leetcode id=63 lang=cpp
 *
 * [63] Unique Paths II
 */
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m = obstacleGrid.size();
        int n=obstacleGrid[0].size();
        
        vector<int> prev(n,0);
        for(int i=0;i<m;i++){
            vector<int> curr(n,0);

            for(int j=0;j<n;j++){
                if(obstacleGrid[i][j]==1) curr[j]=0;
                else if(i==0 && j==0) curr[j]=1;
                else{
                    if(i>0) curr[j]=prev[j];
                    if(j>0) curr[j]+=curr[j-1];
               }
            }
            prev=curr;
        }
        return prev[n-1];
    }
};

