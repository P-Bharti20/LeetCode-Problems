/*
 * @lc app=leetcode id=3 lang=cpp
 *
 * [3] Longest Substring Without Repeating Characters
 */

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int len=0;
    unordered_map<char,int> mp;
    int lengthOfLongestSubstring(string s) {
        int l=0,r=0;
        while(l<r&&r<s.length()){
            
            if(mp.find(s[r])!=mp.end()){
                while(l<=r){
                    mp.erase(s[l]);
                    l++;
                }
            }
            mp[s[r]]=r;
            len=max(len,r-l+1);
            r++;
        }
        len=max(len,r-l+1);
        return len;
    }
};
// @lc code=end

