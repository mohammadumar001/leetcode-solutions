/*
 * @lc app=leetcode id=217 lang=cpp
 *
 * [217] Contains Duplicate
 */

// @lc code=start
#include <vector>
#include <set>
using namespace std;
class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        int i;
        set<int> ans;
        for (i = 0; i < nums.size(); i++)
            ans.insert(nums[i]);

        if (nums.size() > ans.size())
            return true;
        else
            return false;
    }
};
// @lc code=end
