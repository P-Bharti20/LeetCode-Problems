/*
 * @lc app=leetcode id=191 lang=cpp
 *
 * [191] Number of 1 Bits
 */

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count=0;
        for(count;n;count++)
            n=n&(n-1);
        return count;
    }
};


