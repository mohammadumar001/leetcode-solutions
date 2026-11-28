/*
 * @lc app=leetcode id=167 lang=cpp
 *
 * [167] Two Sum II - Input Array Is Sorted
 */

// @lc code=start
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i=0,j=numbers.size()-1;
        while(i<j){
            if(numbers[i]+numbers[j]==target)
            return {i+1,j+1};
            else if(numbers[i]+numbers[j]<target)
            i++;
            else
            j--;
        }
        return {0,0};
    }
};
// @lc code=end

