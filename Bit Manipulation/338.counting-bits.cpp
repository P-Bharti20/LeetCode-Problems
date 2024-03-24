/*
 * @lc app=leetcode id=338 lang=cpp
 *
 * [338] Counting Bits
 */

//Approach 1 
//TC: O(nlogn)

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans(n+1,0);
        for(int i=0;i<=n;i++){
            int num=i;
            while(num){
                ans[i]+=num%2;
                num=num>>1;
            }
        }
        return ans;
    }
};

//Approach 2 
//TC: O(n)
vector<int> countBits(int n) {
    vector<int> ans(n+1,0);
    ans[0]=0;
    for(int i=1;i<=n;i++){
        ans[i]=ans[i/2]+i%2;
    }
    return ans;
}

