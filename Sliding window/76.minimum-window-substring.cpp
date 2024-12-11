/*
 * @lc app=leetcode id=76 lang=cpp
 *
 * [76] Minimum Window Substring
 */

// @lc code=start

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string minWindow(string s, string t) {
        int minl=INT_MAX,sIndx=-1;
        int hash[256]={0}, cnt=0;
        for(int i=0;i<t.size();i++) hash[t[i]]++;
        int l=0,r=0;
        while(r<s.size()){
            if(hash[s[r]]>0) cnt++;
            hash[s[r]]--;
            while(cnt==t.size()){
                if(r-l+1<minl){
                    minl=r-l+1;
                    sIndx=l;
                }
                hash[s[l]]++;
                if(hash[s[l]]>0) cnt--; 
                l++;
            }
            r++;
        }
        if(minl==INT_MAX) return "";
        return s.substr(sIndx,minl);
    }
};
// @lc code=end

