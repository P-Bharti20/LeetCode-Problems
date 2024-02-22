/*
 * @lc app=leetcode id=213 lang=cpp
 *
 * [213] House Robber II
 */
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int helper(vector<int>& nums,int l,int r) {
        int prev1=0;
        int prev2=nums[l];
        for(int i=l+1;i<r;i++){
            int take= nums[i];
            if(i>1) take+=prev1;
            int nottake=prev2;
            int curr=max(take,nottake);
            prev1=prev2;
            prev2=curr;
        }
        return prev2;
    }

    int rob(vector<int>& nums) {
        int sz=nums.size();
        if(sz==0) return 0;
        if(sz==1) return nums[0];
        return max(helper(nums,0,sz-1),helper(nums,1,sz));
    }
};

