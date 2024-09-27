
class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
          int n = coins.size();
        vector<vector<int>> dp(n, vector<int>(amount + 1, INT_MAX)); // DP table initialization

        // Fill the first column with 0, as 0 coins are needed to make amount 0
        for (int i = 0; i < n; i++) {
            dp[i][0] = 0;
        }

        // Fill the first row
        for (int j = 1; j <= amount; j++) {
            if (coins[0] <= j && dp[0][j - coins[0]] != INT_MAX) {
                dp[0][j] = 1 + dp[0][j - coins[0]];
            }
        }

        // Fill the rest of the DP table
        for (int i = 1; i < n; i++) {
            for (int j = 1; j <= amount; j++) {
                if (coins[i] > j) {
                    dp[i][j] = dp[i - 1][j];
                } else {
                    dp[i][j] = min(dp[i - 1][j], (dp[i][j - coins[i]] != INT_MAX ? 1 + dp[i][j - coins[i]] : INT_MAX));
                }
            }
        }

        // If the amount cannot be formed, return -1
        return dp[n - 1][amount] == INT_MAX ? -1 : dp[n - 1][amount];
    }

};
