/*
 * @lc app=leetcode id=992 lang=cpp
 *
 * [992] Subarrays with K Different Integers
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        int l=0,r=0;
        int cnt=0, curr=0;
        while(r<nums.size()){
            mp[nums[r]]++;
            if(mp[nums[r]]==1){
                k--;
            }
            if(k<0){
                mp[nums[l]]--;
                l++;
                k++;
                curr=0;
            }
            if(k==0){
                while(mp[nums[l]]>1){
                    mp[nums[l]]--;
                    l++;
                    curr++;
                }
                cnt+=(curr+1);
            }
            r++;
        }
        return cnt;
    }
};
// @lc code=end

