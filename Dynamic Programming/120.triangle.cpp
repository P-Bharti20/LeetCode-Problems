/*
 * @lc app=leetcode id=120 lang=cpp
 *
 * [120] Triangle
 */
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int n = triangle.size();
    
        vector<int> front=triangle[n-1];
        
        for(int i=n-2;i>=0;i--){
            vector<int> curr(n,INT16_MAX);

            for(int j=i;j>=0;j--){
               curr[j]=triangle[i][j]+min(front[j],front[j+1]);
            }
            front=curr;
        }
        return front[0];
    }
};

