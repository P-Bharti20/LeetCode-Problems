/*
 * @lc app=leetcode id=416 lang=cpp
 *
 * [416] Partition Equal Subset Sum
 */
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool check(int target,vector<int> &arr){
        vector<bool> prev(target+1,0),curr(target+1,0);
        prev[0]=curr[0]=true;
        if(arr[0]<=target) prev[arr[0]]=true;
        for(int i=1;i<arr.size();i++){
            for(int k=1;k<=target;k++){
                bool notTake=prev[k];
                bool take=0;
                if(arr[i]<k) take=prev[k-arr[i]];
                curr[k]=take|notTake;
            }
            prev=curr;
        }
        return prev[target];
    }

    bool canPartition(vector<int>& nums) {
        int total=0;
        for(int i=0;i<nums.size();i++){
            total+=nums[i];
        }
        if(total%2!=0) return false;

        return check(total/2,nums);
    }
};

