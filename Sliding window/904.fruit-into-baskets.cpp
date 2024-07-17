/*
 * @lc app=leetcode id=904 lang=cpp
 *
 * [904] Fruit Into Baskets
 */
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int maxc=0;
        int l=0,r=0;
        unordered_map<int,int> mp;
        while(r<fruits.size()){
            mp[fruits[r]]++;
            if(mp.size()>2){
                mp[fruits[l]]--;
                if(mp[fruits[l]]==0) mp.erase(fruits[l]);
                l++;
            }
            maxc=max(maxc,r-l+1);
            r++;
        }
        return maxc;
    }
};

//TC: O(N)
//SC: O(1)
