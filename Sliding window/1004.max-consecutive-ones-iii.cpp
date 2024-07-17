/*
 * @lc app=leetcode id=1004 lang=cpp
 *
 * [1004] Max Consecutive Ones III
 */

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int maxl=0;
        int l=0,r=0,zero=0;
        while(r<nums.size()){
            if(nums[r]==0){
                zero++;
            }
            if(zero>k){
                if(nums[l]==0) zero--;
                l++;
            }
            maxl=max(maxl,r-l+1);
            r++;
        }
        return maxl;
    }
};

//TC: O(N)
//SC: O(1)
