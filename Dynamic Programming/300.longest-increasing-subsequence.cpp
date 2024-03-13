#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    //using tabulation & space optimization
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<int> dp(n,1);
        int maxi=1;
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                if(nums[j]<nums[i]){
                    dp[i]=max(dp[i],1+dp[j]);
                }
            }
            maxi=max(maxi,dp[i]);
        }
        return maxi;
    }

    //Using binary search
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<int> dp;
        dp.push_back(nums[0]);
        for(int i=1;i<n;i++){
            if(nums[i]>dp.back()){
                dp.push_back(nums[i]);
            }
            else{
                int idx = lower_bound(dp.begin(),dp.end(),nums[i]) - dp.begin();
                dp[idx]=nums[i];
            }
        }
        return dp.size();
    }
};