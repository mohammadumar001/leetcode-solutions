/*
 * @lc app=leetcode id=27 lang=cpp
 *
 * [27] Remove Element
 */

// @lc code=start
#include<vector>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
         vector<int>ans;
        int n=nums.size();
        for(int i=0;i<n;){
            if(nums[i]==val){
            nums.erase(nums.begin()+i);
            n--;
            }
            else
            i++;
        }
        return n;
    }
};
// @lc code=end

