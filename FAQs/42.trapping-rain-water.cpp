/*
The key to solving the “Trapping Rain Water” problem is recognizing that the amount of water 
trapped at any position depends on the minimum height of the tallest bars on its left and right.
*/

// @lc code=start

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    //APPROACH 1:
    int trap(vector<int>& height) {
        int n=height.size();
        vector<int> left(n), right(n);
        int maxAmount=0;
        left[0]=height[0];
        for(int i=1;i<n;i++){
            left[i]=max(left[i-1],height[i]);
        }

        right[n-1]=height[n-1];
        for(int i=n-2;i>=0;i--){
            right[i]=max(right[i+1],height[i]);
        }

        for(int i=0;i<n;i++){
            maxAmount +=min(left[i],right[i])-height[i];
        }
        return maxAmount;
    }

    //APPROACH 2:
    /*
    Instead of calculating these heights separately for every position, which would be inefficient, 
    we can use the two-pointer technique to efficiently determine trapped water by iterating through the array once.
    By moving pointers inward from both ends of the array, we can dynamically track the maximum heights on both sides 
    and calculate the water trapped in a single pass. This approach eliminates the need for extra space and reduces the complexity to O(n).
    */
    int trap(vector<int>& height) {
        int l=0, r=height.size()-1;
        int res=0;
        int left=height[l], right=height[r];
        while(l<r){
            if(left<right){
                res+=left-height[l++];
                left=max(left,height[l]);
            }else{
                res+=right-height[r--];
                right=max(right,height[r]);
            }
        }
        return res;
    }
};
// @lc code=end

