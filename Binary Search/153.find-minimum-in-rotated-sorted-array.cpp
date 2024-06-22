/*
 * @lc app=leetcode id=153 lang=cpp
 *
 * [153] Find Minimum in Rotated Sorted Array
 */
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findMin(vector<int>& arr) {
        int low=0,high=arr.size()-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(arr[low]<=arr[high]){
                return arr[low];
            }
            if(arr[low]<=arr[mid]){
                low=mid+1;
            }
            else{
                high=mid;
            }
        }
        return -1;
    }
};

