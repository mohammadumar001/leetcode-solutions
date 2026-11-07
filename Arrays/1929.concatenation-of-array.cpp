/*
 * @lc app=leetcode id=1929 lang=cpp
 *
 * [1929] Concatenation of Array
 */

// @lc code=start
#include <vector>
using namespace std;
class Solution
{
public:
    vector<int> getConcatenation(vector<int> &nums)
    {
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++)
            ans.push_back(nums[i]);

        for (int i = 0; i < nums.size(); i++)
            ans.push_back(nums[i]);

        return ans; 
    }
};
// @lc code=end
