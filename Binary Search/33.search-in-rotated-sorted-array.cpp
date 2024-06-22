/*
 * @lc app=leetcode id=33 lang=cpp
 *
 * [33] Search in Rotated Sorted Array
 */
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int search(vector<int>& arr, int target) {
        int low=0,high=arr.size()-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(arr[mid]==target){
                return mid;
            }
            //left half sorted
            if(arr[low]<=arr[mid]){
                if(arr[low]<= target && target<arr[mid]){
                    high=mid-1;
                }else{
                    low=mid+1;
                }
            }//right half sorted
            else{
                 if(arr[mid]< target && target<=arr[high]){
                    low=mid+1;
                }else{
                    high=mid-1;
                }
            }
        }
        return -1;
    }
};

