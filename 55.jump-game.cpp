/*
 * @lc app=leetcode id=55 lang=cpp
 *
 * [55] Jump Game
 */
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxVal=nums[0];
        int sz=nums.size()-1;
        for(int i=1;i<=sz;i++){
            if(maxVal>=sz) return true;
            if(maxVal<i) return false;
            if((maxVal-i)<nums[i]) maxVal=i+nums[i];
        }
        return true;
    }
};


