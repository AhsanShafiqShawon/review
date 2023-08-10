Problem Link: https://leetcode.com/problems/climbing-stairs/

class Solution {
public:
    int distinct_ways(int n, vector<int> &dp) {
        if(n == 1) return dp[n] = 1;
        if(n == 2) return dp[n] = 2;
        if(dp[n] != -1) return dp[n];
        return dp[n] = distinct_ways(n - 1, dp) + distinct_ways(n - 2, dp);
    }
    int climbStairs(int n) {
        vector<int> dp(50, -1);
        return distinct_ways(n, dp);
    }
};

//I just write down this code, please tell me how to analysis time and memory complexity of this code. Next time this would be helpful for me. And please review this code.