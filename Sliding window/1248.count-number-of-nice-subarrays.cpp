/*
 * @lc app=leetcode id=1248 lang=cpp
 *
 * [1248] Count Number of Nice Subarrays
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int helper(vector<int>& nums, int k){
        if(k<0) return 0;
        int l=0,r=0;
        int cnt=0,odds=0;
        while(r<nums.size()){
            odds+=nums[r]&1;
            while(odds>k) odds-=nums[l++]&1;
            cnt+=(r-l+1);
            r++;
        }
        return cnt;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        return helper(nums,k)-helper(nums,k-1);
    }
};

/*Optimized approach:
class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int cnt=0, odd=0;
        unordered_map<int,int> freq;
        freq[odd]++;
        for (int i = 0; i < nums.size(); i++) {
            odd+=nums[i]%2;
            if(freq.find(odd-k)!=freq.end()) cnt+=freq[odd-k];
            freq[odd]++;
        }
        return cnt;
    }
};
*/
// @lc code=end

