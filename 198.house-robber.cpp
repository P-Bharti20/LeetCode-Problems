/*
 * @lc app=leetcode id=198 lang=cpp
 *
 * [198] House Robber
 */

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int prev1,prev2;
    int rob(vector<int>& nums) {
        prev1=0;
        prev2=nums[0];
        for(int i=1;i<nums.size();i++){
            int take= nums[i];
            if(i>1) take+=prev1;
            int nottake=prev2;
            int curr=max(take,nottake);
            prev1=prev2;
            prev2=curr;
        }
        return prev2;
    }
};


