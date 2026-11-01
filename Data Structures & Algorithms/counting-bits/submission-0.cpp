class Solution {
public:
    int rec(vector<int>& dp, int n) {
        if(n == 0) return 0;

        if(dp[n] != -1) return dp[n];

        return dp[n] = rec(dp, n >> 1) + (n & 1);
    }

    vector<int> countBits(int n) {
        vector<int> dp(n + 1, -1);

        for(int i = 0; i <= n; i++) {
            rec(dp, i);
        }
        
        for(int i = 0; i <= n; i++) {
            if(dp[i]==-1) dp[i]=0;
        }

        return dp;
    }
};