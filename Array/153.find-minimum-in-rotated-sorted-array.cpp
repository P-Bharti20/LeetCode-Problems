/*
 * @lc app=leetcode id=153 lang=cpp
 *
 * [153] Find Minimum in Rotated Sorted Array
 */

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findMin(vector<int>& nums) {
        int l=0,r=nums.size()-1;
        int res=nums[0];
        while(l<=r){
            int mid=l+(r-l)/2;
            if(nums[l]<=nums[r]) return nums[l];
            if(nums[mid]<res){ 
                res=nums[mid];
            }
            if(nums[mid] < nums[r]){
                r=mid;
            }
            else{
                l=mid+1;
            }
        }
        return res;
    }
};

