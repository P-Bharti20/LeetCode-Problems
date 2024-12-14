/*
 * @lc app=leetcode id=1358 lang=cpp
 *
 * [1358] Number of Substrings Containing All Three Characters
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numberOfSubstrings(string s) {
        int len=s.size();
        int hash[3]={0,0,0};
        int substrs=0;
        int l=0,r=0;
        while(r<len){
            hash[s[r]-'a']++;
            while(hash[0] && hash[1] && hash[2]){
                substrs+=(len-r);
                hash[s[l]-'a']--;
                l++;
            }
            r++;
        }
        return substrs;
    }
};
// @lc code=end

