/*
 * @lc app=leetcode id=347 lang=cpp
 *
 * [347] Top K Frequent Elements
 */

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
    unordered_map<int,int> mp;
    vector<int> topKFrequent(vector<int>& nums, int k) {
        for(auto it:nums) mp[it]++;
        
        for(auto it:mp){
            pq.push({it.second,it.first});
            if(pq.size()>k) pq.pop();
        }
        vector<int> ans;
        while(pq.size()>0){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};
// @lc code=end

