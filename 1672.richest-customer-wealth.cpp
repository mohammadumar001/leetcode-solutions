/*
 * @lc app=leetcode id=1672 lang=cpp
 *
 * [1672] Richest Customer Wealth
 */

// @lc code=start
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxwealth;
        int n=accounts.size(),i,j;
        for(i=0;i<n;i++){
            int wealth=0;
            for(j=0;j<accounts[i].size();j++){
                wealth+=accounts[i][j];
                
            }
        
        maxwealth=max(maxwealth,wealth);
        }

        return maxwealth;
    }
};
// @lc code=end

