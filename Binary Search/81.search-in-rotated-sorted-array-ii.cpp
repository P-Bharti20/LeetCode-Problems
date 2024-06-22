/*
 * @lc app=leetcode id=81 lang=cpp
 *
 * [81] Search in Rotated Sorted Array II
 */
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool search(vector<int>& arr, int target) {
        int low=0,high=arr.size()-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(arr[mid]==target){
                return true;
            }
            if(arr[low]==arr[mid] && arr[mid]==arr[high]){
                low++,high--;
                continue;
            }
            if(arr[low]<=arr[mid]){
                if(arr[low]<= target && target<=arr[mid]){
                    high=mid-1;
                }else{
                    low=mid+1;
                }
            }//right half sorted
            else{
                 if(arr[mid]<= target && target<=arr[high]){
                    low=mid+1;
                }else{
                    high=mid-1;
                }
            }
        }
        return false;
    }
};

