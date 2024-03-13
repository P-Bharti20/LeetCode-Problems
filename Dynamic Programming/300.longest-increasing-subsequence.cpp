#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    //Memoization
    int f(int idx, int prev, vector<int>& nums,vector<vector<int>> &dp ){
        if(idx >= nums.size()) return 0;
        if(dp[idx][prev+1]!=-1) return dp[idx][prev+1];
        dp[idx][prev+1]=f(idx+1,prev,nums,dp);
        if(prev==-1 || nums[idx]>nums[prev]){
            dp[idx][prev+1]= max(dp[idx][prev+1],1+f(idx+1,idx,nums,dp));
        }
        return dp[idx][prev+1];
    }

    //Tabulation
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<int> curr(n+1,0), next(n+1,0);
        for(int i=n-1;i>=0;i--){
            for(int prev=i-1;prev>=-1;prev--){
                curr[prev+1]=next[prev+1];
                if(prev==-1 || nums[i]>nums[prev]){
                    curr[prev+1]=max(curr[prev+1],1+next[i+1]);
                }
            }
            next=curr;
        }
        return next[0];
    }
};