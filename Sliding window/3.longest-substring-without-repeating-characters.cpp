/*
 * @lc app=leetcode id=3 lang=cpp
 *
 * [3] Longest Substring Without Repeating Characters
 */

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int len=0;
        /*int mp[256];
        for(int i=0;i<256;i++) mp[i]=-1;*/
        unordered_map<char,int> mp;
        int l=0,r=0;
        while(r<s.length()){
            if(mp.find(s[r])!=mp.end() && mp[s[r]]>=l){
                l=mp[s[r]]+1;
            }
            mp[s[r]]=r;
            len=max(len,r-l+1);
            r++;
        }
        return len;
    }
};

//TC: O(N)
//SC: O(N)

