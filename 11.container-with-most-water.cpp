/*
 * @lc app=leetcode id=11 lang=cpp
 *
 * [11] Container With Most Water
 */

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int max_amt=0;
    int maxArea(vector<int>& height) {
        int l=0,r=height.size()-1;
        while(l<r){
            int amt=min(height[r],height[l])*(r-l);
            max_amt=max(max_amt,amt);
            if(height[l]<height[r]) l++;
            else r--;
        }
        return max_amt;
    }
};
// @lc code=end

