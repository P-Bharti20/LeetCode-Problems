/*
 * @lc app=leetcode id=1423 lang=cpp
 *
 * [1423] Maximum Points You Can Obtain from Cards
 */
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int maxs=0, sum=0;
        for(int i=0;i<k;i++) sum+=cardPoints[i];
        int l=k-1,r=cardPoints.size()-1;
        maxs=sum;
        for(int j=0;j<k;j++){
            sum-=cardPoints[l--];
            sum+=cardPoints[r--];
            maxs=max(sum,maxs);
        }
        return maxs;
    }
};

//TC: O(k)
//SC: O(1)