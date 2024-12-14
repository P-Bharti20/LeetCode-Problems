/*
 * @lc app=leetcode id=930 lang=cpp
 *
 * [930] Binary Subarrays With Sum
 */

// @lc code=start

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int helper(vector<int>& nums, int k){
        if(k<0) return 0;
        int count=0;
        long long sum=0;
        int l=0,r=0;
        while(r<nums.size()) {
            sum += nums[r];
            while(sum>k){
                sum -= nums[l];
                l++;
            }
            count+=(r-l+1);
            r++;
        }
        return count;
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return helper(nums,goal)-helper(nums,goal-1);
    }
};

/*Optimized approach: 
class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int total=0;
        int sum=0;
        unordered_map<int,int> freq; 
        for(auto it:nums){
            sum+=it;
            if(sum==goal) total++;
            if(freq.find(sum-goal)!=freq.end()) total+=freq[sum-goal];
            freq[sum]++;
        }
        return total;
    }
};
*/

// @lc code=end

