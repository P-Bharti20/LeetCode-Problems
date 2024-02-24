/*
 * @lc app=leetcode id=70 lang=cpp
 *
 * [70] Climbing Stairs
 */

class Solution {
public:
    int val1=1, val2=2;
    
    int climbStairs(int n) {
        if(n<=2) return n;
        
        for(int i=3;i<=n;i++){
            int res=val1+val2;
            val1=val2;
            val2=res;
        }
        return val2;
    }
};

