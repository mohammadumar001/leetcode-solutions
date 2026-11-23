/*
 * @lc app=leetcode id=34 lang=cpp
 *
 * [34] Find First and Last Position of Element in Sorted Array
 */

// @lc code=start
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int i=0,j=nums.size()-1,mid;
        while(i<=j){
            mid=i+(j-i)/2;
            if(nums[mid]==target){
                while(i<=j){
                    if(nums[i]!=target)
                    i++;
                    else if(nums[j]!=target)
                    j--;
                }
                return {i,j};
            }
            else if(nums[mid]<target)
            i=mid+1;
            else if(nums[mid]>target)
            j=mid-1;
        }        
        return {-1,-1};
    }
};
// @lc code=end

