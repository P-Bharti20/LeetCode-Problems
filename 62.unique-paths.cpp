/*
 * @lc app=leetcode id=62 lang=cpp
 *
 * [62] Unique Paths
 */

//O(m+n) solution
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int uniquePaths(int m, int n) {
        double res=1;
        for(int i=1;i<m;i++){
           res=res*(n-1+i)/i;
        }
        return (int)res;
    }
};

