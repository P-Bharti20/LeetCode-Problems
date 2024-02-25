/*
 * @lc app=leetcode id=560 lang=cpp
 *
 * [560] Subarray Sum Equals K
 */
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        int sum=0,count=0;
        mp[sum]++;
        for(auto it:nums){
            sum+=it;
            int diff=sum-k;
            if(mp.find(diff)!=mp.end())
                count+=mp[diff];
            mp[sum]++;
        }
        return count;
    }
};

