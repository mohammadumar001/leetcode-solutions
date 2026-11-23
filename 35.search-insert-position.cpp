/*
 * @lc app=leetcode id=35 lang=cpp
 *
 * [35] Search Insert Position
 */

// @lc code=start
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int searchInsert(vector<int> &nums, int target)
    {
        int i = 0, j = nums.size() - 1, mid;
        while (i <= j)
        {
            mid = i + (j - i) / 2;
            if (nums[mid] == target)
                return mid;
            else if (nums[mid] > target)
            {
                j = mid - 1;
            }
            else if (nums[mid] < target)
                i = mid + 1;
        }
        return i;
    }
};
// @lc code=end
