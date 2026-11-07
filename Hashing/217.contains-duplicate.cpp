/*
 * @lc app=leetcode id=217 lang=cpp
 *
 * [217] Contains Duplicate
 */

// @lc code=start
#include <vector>
#include <unordered_set>
using namespace std;
class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        int n = nums.size();
        int temp;
        unordered_set<int> ans;
        for (int i = 0; i < n; i++)
        {
            ans.insert(nums[i]);
        }
        temp = ans.size();
        if (n != temp)
            return true;
        else
            return false;
    }
};
// @lc code=end
