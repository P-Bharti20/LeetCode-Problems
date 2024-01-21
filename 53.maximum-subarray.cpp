/*
 * @lc app=leetcode id=53 lang=cpp
 *
 * [53] Maximum Subarray
 */

// @lc code=start

/**KADANE'S ALGORITHM**/

#include<vector>
using namespace std;
class Solution {
public:
    int local_max=0;
    int global_max=-__INT16_MAX__;
    int maxSubArray(vector<int>& nums) {
        int sz=nums.size();
        for(int i=0;i<sz;i++){
            local_max=max(nums[i],nums[i]+local_max);
            global_max=max(local_max,global_max);
        }
        return global_max;
    }
};
// @lc code=end

