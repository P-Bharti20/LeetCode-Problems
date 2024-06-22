/*
 * @lc app=leetcode id=34 lang=cpp
 *
 * [34] Find First and Last Position of Element in Sorted Array
 */
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
     int lower_bound(vector<int>& nums, int target){
        int low=0, high=nums.size()-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]<target){
                low=mid+1;
            }else{
                high=mid-1;
            }
        }
        return low;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        int l=lower_bound(nums,target);
        int r=lower_bound(nums,target+1);
        
        if(l<nums.size() && nums[l]==target)
            return {l,r-1};
        else return {-1,-1};
    }
};

