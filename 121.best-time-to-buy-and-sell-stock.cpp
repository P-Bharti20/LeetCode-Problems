/*
 * @lc app=leetcode id=121 lang=cpp
 *
 * [121] Best Time to Buy and Sell Stock
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxP = 0;
    int minPrice = 10000;
    int maxProfit(vector<int>& prices) {
        for(auto it : prices){
            int p=it-minPrice;
            if(p>maxP) maxP=p;
            if(it<minPrice) minPrice=it;
        }
        return maxP;
    }
};
// @lc code=end

