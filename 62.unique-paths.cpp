/*
 * @lc app=leetcode id=62 lang=cpp
 *
 * [62] Unique Paths
 */

//Using memoization
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int f(int r,int c,vector<vector<int>> &dp){
        if(r==0&&c==0) return 1;
        if(r<0||c<0) return 0;
    
        if(dp[r][c]!=-1)
            return dp[r][c];
        int up=f(r-1,c,dp);
        int left=f(r,c-1,dp);
        return dp[r][c]=up+left;
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m,vector<int>(n,-1));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(i==0&&j==0){
                    dp[i][j]=1;
                }else{
                    int up=0,left=0;
                    if(i>0) up=dp[i-1][j];
                    if(j>0) left=dp[i][j-1];
                    dp[i][j]=up+left;
                }
            }
        }
        return dp[m-1][n-1];
    }
};

