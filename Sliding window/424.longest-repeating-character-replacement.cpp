/*
 * @lc app=leetcode id=424 lang=cpp
 *
 * [424] Longest Repeating Character Replacement
 */

// @lc code=start'

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int> mp;
        int l=0,r=0,maxl=0, maxf=0;
        while(r<s.size()){
            mp[s[r]]++;
            maxf=max(maxf,mp[s[r]]);
            int diff= r-l+1-maxf;
            if(diff>k){
                mp[s[l]]--;
                if(mp[s[l]]==0) mp.erase(s[l]); //maxf=0 will also work instead
                l++;
            }
            maxl=max(maxl,r-l+1);
            r++;
        }
        return maxl;
    }
};


//Optimization: O(n) TC & O(26) SC
class Solution {
public:
    int characterReplacement(string s, int k) {
        int mp[26]={0};
        int l=0,r=0,maxl=0, maxf=0;
        while(r<s.size()){
            mp[s[r]-'A']++;
            maxf=max(maxf,mp[s[r]-'A']);
            if((r-l+1-maxf)>k){
                mp[s[l]-'A']--;
                maxf=0;
                l++;
            }
            maxl=max(maxl,r-l+1);
            r++;
        }
        return maxl;
    }
};
// @lc code=end

