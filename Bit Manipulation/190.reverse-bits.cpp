/*
 * @lc app=leetcode id=190 lang=cpp
 *
 * [190] Reverse Bits
 */

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t val=0;
        for(int i=0;i<32;i++){
            val<<=1;
            val|=(n%2);
            n>>=1;
        }
        return val;
    }
};

