/*
 * @lc app=leetcode id=704 lang=cpp
 *
 * [704] Binary Search
 */

// @lc code=start
#include <vector>
using namespace std;
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int i=0,j=nums.size()-1;int mid=(i+j)/2;
        while(i<=j){
            if(nums[mid]>target){
               j=mid-1;
                mid=(i+j)/2;
            }
            else if(nums[mid]<target){
               
              i= mid+1;
               mid=(i+j)/2;
            }
            else if(nums[mid]==target){
                return mid;
            }
            
        }
        return -1;
        
    }
};
// @lc code=end

