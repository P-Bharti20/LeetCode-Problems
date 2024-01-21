/*
 * @lc app=leetcode id=238 lang=cpp
 *
 * [238] Product of Array Except Self
 */

// @lc code=start
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> ans;
    vector<int> productExceptSelf(vector<int>& nums) {
        ans.resize(nums.size(),1);

        for(int i=1;i<nums.size();i++)
            ans[i]=nums[i-1]*ans[i-1];
        
        int right=1;
        for(int i=nums.size()-1;i>=0;i--){
            ans[i]=ans[i]*right;
            right*=nums[i];
        }

        return ans;
    }
};
// @lc code=end

