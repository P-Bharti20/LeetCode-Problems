/*
 * @lc app=leetcode id=518 lang=cpp
 *
 * [518] Coin Change II
 */
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int change(int amount, vector<int>& coins) {
        vector<int> prev(amount+1,0),curr(amount+1,0);
        for(int t=0;t<=amount;t++){
            if(t%coins[0]==0) prev[t]=1;
        }
        for(int i=1;i<coins.size();i++){
            for(int t=0;t<=amount;t++){
                int notTake = prev[t];
                int take=0;
                if(coins[i]<=t) take=curr[t-coins[i]];
                curr[t]=take+notTake;
            }
            prev=curr;
        }
        return prev[amount];
    }
};


