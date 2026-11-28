/*
 * @lc app=leetcode id=977 lang=cpp
 *
 * [977] Squares of a Sorted Array
 */

// @lc code=start
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int i;
        for(i=0;i<nums.size();i++){
            nums[i]*=nums[i];
        }
        for(i=0;i<=nums.size();i++){
            int j=i+1;
        if(nums[i]>nums[j]){
            int temp = nums[i];
            nums[i]=nums[j];
            nums[j]=temp;
        }
        }
        return nums;
        
    }
};
// @lc code=end

