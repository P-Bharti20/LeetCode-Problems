/*
 * @lc app=leetcode id=49 lang=cpp
 *
 * [49] Group Anagrams
 */

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    unordered_map<string,vector<string>> mp;
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        for(auto s:strs){
            string t = s;
            sort(s.begin(),s.end());
            mp[s].push_back(t);
        }
        vector<vector<string>> ans;
        for(auto it:mp){
            ans.push_back(it.second);
        }
        return ans;
    }
};
// @lc code=end

